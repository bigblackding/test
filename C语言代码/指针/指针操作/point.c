/*************************************************************************
	> File Name: point.c
	> Author: 
	> Mail: 
	> Created Time: 2017年11月15日 星期三 18时10分39秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int a = 10;
    int *p1 = &a;
    int *p2 ;
    p2 = p1 ; 
    printf("*p1 = %d,*p2 = %d\n",*p1,*p2);
    printf("p1 = %p,p2 = %p\n",p1,p2);
    printf("&p1 = %p,&p2 = %p\n",&p1,&p2);

    int *p  = &a;
    *p = *p+1;
    printf("*p = %d\n",*p);
    printf("p = %p\n",p);
    printf("&p = %p\n",&p);
    printf("&p1 = %p\n",&p1);

    return 0 ;
}
