#include<stdio.h>
int insert(int*,int);
int delete(int*,int);
void main()
{
    int a[10],n,i,s,p;
    printf("Enter the size of the array :\n");
    scanf("%d",&n);
    printf("Enter the elements now :\n");
    for(i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
    }
    printf("Array before insertion and deletion :\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
    insert(a,n);
    printf("Array after the insertion is :\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
    deletion(a,n);
    printf("Array after deletion of the element is :\n");
    for(i-0;i<n;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
}
int insert(int b[],int m)
{
    int i,s,p;
    printf("Enter the element that want you to insert in the array :\n");
    scanf("%d",&s);
    printf("Enter the location of element :\n");
    scanf("%d",&p);
    for(i=m ;i>=p; i--)
    {
        b[i]=b[i-1];
    }
    b[i]=s;
}