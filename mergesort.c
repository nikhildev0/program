/*Program to the given set of elements using insertion sort
  Input:Enter the range and elements
  Output:print the sorted array
*/


#include<stdio.h>
int array[20];
int main()
{
  int number,i;
  printf("Enter the size of array\n");
  scanf("%d",&number);
  printf("Enter the elements:\n");
  for(i=0; i<number; i++)
    scanf("%d",&array[i]);

  merge_sort(array,0,number-1);

  printf("Sorted array:\n");
  for(i=0; i<number; i++)
    printf("%d\n",array[i]);

  return 0;
}

int merge_sort(int array[],int low,int high)
{
  int mid;
  if(low<high) {
    mid=(low+high)/2;

    merge_sort(array,low,mid);
    merge_sort(array,mid+1,high);

    merge(array,low,mid,high);
  }

  return 0;
}

int merge(int array[],int l,int m,int h)
{
  int array1[10],array2[10];
  int number1,number2,i,j,k;
  number1=m-l+1;
  number2=h-m;

  for(i=0; i<number1; i++)
    array1[i]=array[l+i];
  for(j=0; j<number2; j++)
    array2[j]=array[m+j+1];

  array1[i]=9999;
  array2[j]=9999;

  i=0;
  j=0;
  for(k=l; k<=h; k++) {
    if(array1[i]<=array2[j])
      array[k]=array1[i++];
    else
      array[k]=array2[j++];
  }

  return 0;
}
