#include<stdio.h>
void main()
{
    int a[10],i, j, n, t;
    printf("Enter the no. of elements :\n");
    scanf("%d",&n);
    printf("Enter %d elements now :\n",n);
    for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("Array before sorting :\n");
{
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
}
printf("array after sorting :\n");
for(i=0;i<n;i++)
{
    printf("a[%d]=%d\n",i,a[i]);
}
}