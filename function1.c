#include<stdio.h>
/* no return type but arguments*/
void greatnum(int, int);
void main()
{
    int a,b;
    printf("Enter the two number that you want to compare : \n");
    scanf("%d %d", &a,&b);
    greatnum(a,b);
}
void greatnum(int x, int y)
{
    if(x>y)
    {
        printf("The largest of %d and %d is %d\n",x,y,x);
    }
    else
    {
        printf("The largest of %d and %d is %d\n",x,y,y);

    }
}