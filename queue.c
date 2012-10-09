/*Program to implement queue
  Input:Elements,Data
  Output:Queue
 */

#include<stdio.h>
#define SIZE 20
int i,rear,front,item,a[SIZE];
void insert(int item,int a[]);
void delete(int a[]);
void display(int a[]);
void main()
{
    int choice; 
    front=0;
    rear=-1;
    do
    {
        printf("\n1.INSERTION \n2.DELETION \n3.EXIT \n");
        printf("ENTER YOUR CHOICE : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("\t\n INSERTION \n");
                if(rear>=SIZE-1)
                {
                    printf("\nQUEUE IS FULL\n");
                }
                else
                {
                    printf("ENTER AN ELEMENT : ");
                    scanf("%d",&item);
                    insert(item,a);
                }
                display(a);
                break;
            case 2:
                printf("\t\n DELETION \n");
                if(front>rear)
                {
                    printf("\nQUEUE IS EMPTY\n");
                }
                else
                {
                    delete(a);
                }
                display(a);
                break;
        }
    }while(choice!=3);
    

}
void insert(int item,int a[])
{
    if(rear<SIZE)
    {
        rear=rear+1;
        a[rear]=item;
    }
}
void delete(int a[])
{
    int i;
    item=a[front];
    for(i=0;i<=rear;i++)
        a[i]=a[i+1];
    rear--;
    printf("\n DELETED ELEMENT IS %d\n",item);
}

void display(int a[])
{
    printf("\n");
    for(i=front;i<=rear;i++)
    {
        printf(" \t %d",a[i]);
    }
}
