#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    printf("the value  of a=%d and b=%d  before swapping\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("the value of a=%d and b=%d after  swapping",a,b);
    return 0;
}