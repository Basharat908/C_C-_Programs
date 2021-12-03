#include<stdio.h>
void main()
{
    int a[10],n,i,s,p;
    printf("Enter the size of the array :\n");
    scanf("%d",&n);
    printf("Enter the %d elements in the array :\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",& a[i]);
    }
    printf("Array before deletion :\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
    printf("Enter the New element that you want to insert in array :\n");
    scanf("%d",&s);
    printf("Enter the position at which you want to insert an element :\n");
    scanf("%d",&p);
    for(i=n;i>=p;i--)
    {

        a[i]=a[i-1];
    }
    a[i]=s;
    printf("Array after insertion is :\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
}
    
