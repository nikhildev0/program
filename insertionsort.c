#include<stdio.h>
void insert(int member,int array[],int size)
{
    int i,j;
    for(i=0;i<size;i++)
    {
        if(member<array[i])
        {

            for( j=0;j<size-i;j++)
            {
                array[size]=array[size-1];
            }
            array[i]=member;
            break;
        }
    }    
}
void insertionsort(int array[],int size)
{
    int newsize=1,member;
    for(newsize=1;newsize<size;newsize++)
    {
        member=array[newsize];
        insert(member,array,newsize);
    }
}
void main()
{
    int array[100];
    int size,i;
    printf("enter the size:\n");
    scanf("%d",&size);
    printf("enter numbers:\n");
    for( i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    insertionsort(array,size);
    printf("sorted array is:\n");
    for(i=0;i<size;i++)
        printf("\n%d \n",array[i]);
        printf("\n");
}
