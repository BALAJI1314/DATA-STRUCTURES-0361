#include<stdio.h>
int main()
{
	int i,j,n,k,temp,a[20],p=0;
	printf("enter total elements:");
	scanf("%d",&n);
	printf("enter array elements:");
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		temp=a[i];
		j=i - 1;
		while((temp<a[j])&&(j>+0))
		{
			a[j+1]=a[j];
			j=j-1;
     	}
     	a[j+1]=a[j];
     	p++;
     	printf("\n After pass %d:",p);
     	for(k=0;k<n;k++)
     	  printf("%d",a[k]);
}
printf("\n sorted list:");
for(i=0;i<n;i++)
   printf("%d",a[i]);
}
 
