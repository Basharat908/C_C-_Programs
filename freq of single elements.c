#include<stdio.h>
//frequency of a single element without function //
void main()
{
    int a[10],n,i,p, count=0;
    printf("Enter the number of elements (max=10)\n");
    scanf("%d",&n);
    printf("enter %d elements now\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter any element that you want to check  the frequency :\n");
    scanf("%d",&p);
    for(i=0;i<n;i++)
    {
        if(p==a[i])
        {
            count++;
        }
    }
    printf("%d is present %d times in the array\n",p,count);

}