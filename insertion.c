// WAP to insert a particular number in the given array
#include<stdio.h>
#include<conio.h>
int main()
{
  int a[100], n,i, s, p;
  printf("Enter the input elements\n");
  scanf("%d", &n);
  printf("enter the %d elements now\n",n);
  for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
  printf("Array before insertion\n");
  for(i=0;i<n;i++)
  {
    printf("a[%d]=%d\n",i,a[i]);
  }   
  printf("Enter the new element that you want to insert\n");
  scanf("%d",&s);
  printf("enter the position where you want to insert the new element%d\n",s);
  scanf("%d",&p);
  for(i=n;i>=p;i--)
  {
    a[i]=a[i-1];
  }
      
     printf("Array after insertion operation\n");
     for(i=0;i<n;i++)
     printf("a[%d]=%d\n",i,a[i]);       
     return 0;
}