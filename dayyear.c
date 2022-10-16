#include<stdio.h>
int main()
{
int days,weeks,months,years;
printf("enter the days=");
scanf("%d",&days);
weeks=days/7;
months=days/12;
years=days/365;
printf("days:%d\n",days);
printf("weeks:%d\n",weeks);
printf("months:%d\n",months);
printf("years:%d\n",years);
}