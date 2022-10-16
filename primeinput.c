#include<stdio.h>
int main()
{
    int num=12, temp=0;
;
    for(int i=2;i<=num-1;i++)
    {
        if(num%i==0)
        {
            temp=temp+1;

        }
    }
    if(temp==0)
    {
        printf("num is prime");

    }
    else
    {
    ("num is not prime");
}
}