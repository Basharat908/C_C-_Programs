#include<stdio.h>
#include<conio.h>
void main()
{
     int a[12],mid, low, high,i, f,s,n,count=1;
     printf("Enter the no. of the elements\n");
     scanf("%d",&n);
     printf("Enter %d elements\n",n);
     for(i=0;i<n;i++)
    {
     
     scanf("%d",&a[i]);

     }
     printf("Enter the searching elements\n");
     scanf("%d",&s);
     low=0;
     high=n;
     while(low<=high)
     {
         mid=(low+high)/2;
         if(s==a[mid])
         {
             f=1;
             break;
         }
        else if(s>a[mid])
        {
            low=mid+1;
        }
        else
        {
            high=n-1;
        }
        count++;
     }   
       if(f==1)
       {  
       printf("%d succesfully found at %d location\n",s,mid+1);
       }
       else
       {
         printf("sorry %d is not found\n",s);
       }
       printf("No. of times loop executed=%d\n",count);
}