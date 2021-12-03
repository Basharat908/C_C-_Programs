#include<stdio.h>
void main()
{
    int a[10],i,n,t;
    printf("Enter the no. of elements:\n");
    scanf("%d",&n);
    printf("Enter %d elements now\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array before reverse is given below :\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
    for(i=0;i<n/2;i++)
    {
        t=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=t;
    }
    printf("array after reversing is given below\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
}
