#include<stdio.h>
#include<conio.h>
void add(int ,int);
void sub(int, int);
void mult(int, int);
void div(int, int);
void main()
{
 int a,b;
 printf("Enter any two number :\n");
 scanf("%d%d",&a,&b);
 add(a,b);
 sub(a,b);
 mult(a,b);
 div(a,b);

}
 void add(int x, int y)
 {
     int z;
     z=x+y;
     printf("sum of %d and %d =%d\n",x,y,z);
    
 }
 void sub(int x, int y)
 {
      int z;
      z=x-y;
      printf("subtract of %d & %d =%d\n",x,y,z);

 }
 void mult(int x, int y)
 {
     int z;
     z=x*y;
     printf("Product of %d and %d =%d\n",x,y,z);
     
 }
 void div(int x, int y)
 {
      int z;
      z=x/y;
      printf("Division of %d and %d =%d\n",x,y,z);
      
 }


