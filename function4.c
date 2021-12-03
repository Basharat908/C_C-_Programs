#include<stdio.h>
/* with return type but no arguments*/
int greatnum(void);
void main()
{
    int c;
    c=greatnum();
    printf("The largest is :%d\n",c);
}
 int greatnum()
{
     int a, b;
     printf("Enter 2 numbers that you want to compare :\n");
     scanf("%d%d",&a,&b);
    if(a>b)
    {
        
        return a;
    }
    else
    {
       
        return b;
    }
}