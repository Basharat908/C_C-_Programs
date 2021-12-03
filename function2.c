#include<stdio.h>
/* no return type but arguments*/
int greatnum(int, int);
void main()
{
    int a,b,c;
    printf("Enter the two number that you want to compare : \n");
    scanf("%d %d", &a,&b);
    c=greatnum(a,b);
    printf("The largest of %d and %d is %d\n",a,b,c);
}
 int greatnum(int x, int y)
{
    if(x>y)
    {
        
        return x;
    }
    else
    {
       
        return y;
    }
}