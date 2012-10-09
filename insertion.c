/*Program to the given set of elements using insertion sort
  Input:Enter the range and elements
  Output:print the sorted array
*/

#include<stdio.h>

void insertionSort(int *array , int numberofelements)
{
    int i,j;
    for(i=1;i<numberofelements;i++)
    {
        int current_element = array[i];
        j = i-1;
        while(j>=0 && array[j] > current_element)
        {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = current_element;
    }
}
int main()
{
    int numberofelements;
    printf("Enter the number of elements to be sorted\n");
    scanf("%d",&numberofelements);
    int array[numberofelements]; 
    int i;
    printf("\nEnter the Elements\n");
    for(i = 0;i < numberofelements;i++)
    {
        scanf("%d",&array[i]);
    }

    insertionSort(array,numberofelements); 
    printf("The sorted Array is : \n");
    for(i = 0;i < numberofelements;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    return 0;
}
