#include<stdio.h>
// largest int the array//
void main()
{
    int a[10],n, i, l;
    printf("Enter the size of the input array\n");
    scanf("%d",&n);
    printf("Enter the %d elements now\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    l=a[0];
    for(i=1;i<n;i++)
    {
        if(l<a[i])
        {
            l=a[i];
        }
    }
    printf("largest of the array =%d\n",l);

}
