#include<stdio.h>
void main()
{
   int var;
   int*p;
   var=20;
   p= &var;
   printf("Value of a varible var is : %d\n",var);
   printf("value of a variable var is : %d\n",*p);
   printf("Address of a variable var is :%x\n", & var);
   printf("Address of a variable var is : %x\n",p);
   printf("Address of a pointer var is : %x\n",p);
   printf("Address of a pointer p = %x\n",&p);
   *p=90;
   printf("value of a variable var is : %d\n",var);
   printf("Value of a variable var is : %d\n",*p);
   
    
}