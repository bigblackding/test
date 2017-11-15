/*************************************************************************
	> File Name: point_art.c
	> Author: 
	> Mail: 
	> Created Time: 2017年11月15日 星期三 19时13分45秒
 ************************************************************************/

#include<stdio.h>
int main()
{
int a[]={1,2,3,4,5,6};
int *p = a;
++p;
printf("%d\n",*p);
p++;
printf("%d\n",*p);
p--;
printf("%d\n",*p);
--p;
printf("%d\n",*p);
p=p+4;
printf("%d\n",*p);
p=p-2;
printf("%d\n",*p);
}
