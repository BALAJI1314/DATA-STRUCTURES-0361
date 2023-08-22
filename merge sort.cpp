#include <stdio.h>
#include <conio.h>
void merge(int [],int ,int ,int );
void part(int [],int ,int );
int size;
int main()
{
	int i,arr[30];
    printf("Enter total no. of elements : ");  
    scanf("%d", &size);
    scanf("%d", &arr[i]);
    part(arr, 0, size-1);
    printf("\n Merge sorted list : ");
    for(i=0; i<size; i++)
    printf("%d ",arr[i]);
    return 0;
}
void part(int arr[], int mid, int max)
 {
intmid,i;
   if(mid < max)
{
      mid = (mid + max) / 2;
      part(arr, mid, mid);
      part(arr, mid+1, max);
      merge(arr, min, mid, max);
}
if (max-mid == (size/2)-1)
{
    printf("\n Half sorted list : ");
    for(i=mid; i<=max; i++)
      printf("%d ", arr[i]);
   }
}
void part(int arr[],int maid,int max)
{
  int tmp[30];
  int i, j, k, m;
  j = mid;
  m =mid + 1;
  for(i=mid; j<=mid && m<=max; i++)
{
  if(arr[j] <= arr[m])
{
	tmp[i]=arr[j];
    j++;
}
else
{
  tmp[i] = arr[m];
  m++;
 }
}
if(j > mid)
{
   for(k=m; k<=max; k++)
   {
     tmp[i] = arr[k];
     i++;
  }
}
else
{
  for(k=j; k<=mid; k++)
{
  tmp[i] = arr[k];
  i++;
  }
}
for(k=mid;k<max;k++)
  arr[k]=tmp[k];
}
  
 
 
 



