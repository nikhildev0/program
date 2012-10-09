#include<stdio.h>
void push(int);
int pop(void);
void display(void);

int main()
{

    int choice=0,value=0;
    do
    {

        printf("\n1.Push 2.Pop 3.Display 4.Exit\nEnter your choice ");
        scanf("%d",&choice);
        switch(choice)
        {

            case 1:

                printf("Element to be Pushed : ");
                scanf("%d",&value);
                push(value);
                break;

            case 2:

                value=pop();
                if(value!=-1)
                    printf("Popped Element : %d\n",value);
                break;

            case 3:

                display();
                break;

            case 4:

                break;

            default:

                printf("Wrong Choice");
                break;

        }

    }while(choice!=4);

    return 0;

}

#define maxsize 100
int stack[maxsize];
int stacktop=0;

void push(int value)
{

    if(stacktop<maxsize)

        stack[stacktop++]=value;

    else

        printf("Stack Overflow");

}

int pop()
{

    int a;
    if(stacktop>0)
    {

        stacktop--;
        a=stack[stacktop];

        return a;

    }
    else
    {

        printf("Stack is Empty");
        return -1;

    }

}

void display()
{

    int i=0;
    if(stacktop>0)
    {

        printf("Elements are:");
        while(i<stacktop)
        {
            printf("%d",stack[i++]);
        }
        printf("\n");

    }

    else

        printf("Stack is Empty\n");

}
