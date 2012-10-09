#include<stdio.h>  

void bubblesort(int a[],int number)  
{  
    int i,j,temp;  
    for(i=number-2;i>=0;i--)  
    {  
        for(j=0;j<=i;j++)  

        {  
            if(a[j]>a[j+1])  
            {  
                temp=a[j];  
                a[j]=a[j+1];  
                a[j+1]=temp;  
            }  
        }  


    }

}


void main()  
{  

    int a[100],number,i;  
    printf("Enter total numbers of elements to be sorted: ");  
    scanf("%d",&number);  
    printf("Enter the elements\n");
    for( i=0;i<=number-1;i++)  
    { 
        scanf("%d",&a[i]);  
    }  

    bubblesort(a,number);  

    printf("sorted array is: \n");  
    for( i=0;i<=number-1;i++)  
        printf("%3d",a[i]);  
} 
