#include<stdio.h>
// Frequency of each element using functions
int freq(int*,int);
void main()
{
    int a[10],n,i;
    printf("Enter the size of input elements for checking the frequency of each element :\n");
    scanf("%d",&n);
    printf("Enter the elements in the array now\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    } 
    freq(a,n);
}
int freq(int b[],int m)
{
    int count=1,f=0,i ,j, k;
     printf("Frequency of each element of an array\n");
    for(i=0;i<m;i++)
    {
        count=1;f=0;
        for(j=0;j<i;j++)
        {
            if(b[i]==b[j])
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            for(k=i+1;k<m;k++)
            {
                if(b[i]==b[k])
                {
                    count++;
                }
            }
            printf("%d is present at %d times in the array\n",b[i],count); 
        }
    }   
}