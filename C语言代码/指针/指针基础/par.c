/*************************************************************************
	> File Name: par.c
	> Author: 
	> Mail: 
	> Created Time: 2017年11月07日 星期二 16时42分51秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int a =10;
     int *p;
    p = &a;
int **b ;
*b  =  p; 

    printf("a = %d\n",a);
    printf("*p = %d\n",*p);
   printf("**b = %d\n",**b);

   printf("*b = %p\n",*b);
   printf("p = %p\n",p);
   printf("a = %p\n",&a);
    printf("b = %p\n",b);
       printf("b = %p\n",&(**b));




}
