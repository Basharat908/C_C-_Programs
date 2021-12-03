/*WAP to delete an element in the array*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i,j,n,x,f=0;
    printf("Enter the size of the input element :\n");
    scanf("%d",&n);
    printf("Now! Enter the %d elements in the array:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array before deletion\n");
    for(i=0;i<n;i++)
    {
     printf("a[%d]=%d\n",i,a[i]);
    }
    printf("Enter the element that you want to delete in the array :\n");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(x==a[i])
        {
          for(j=i;j<n-1;j++)
           {
            a[j] = a[j+1];
           }
           f=1;
           break;
        }
 
    }
    if(f==0)
    {
        printf("Element is not present int the array :\n");
    }    
   else
    {
       printf("Here is the new array after deletion\n");
       for(i=0;i<n-1;i++)
       {
         printf("a[%d]=%d\n",i,a[i]);
       }
   }
}