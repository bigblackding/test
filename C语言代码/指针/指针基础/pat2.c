/*************************************************************************
	> File Name: pat2.c
	> Author: 
	> Mail: 
	> Created Time: 2017年11月14日 星期二 15时16分50秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    char  ch = 'A';
    int a = 10;
    int b = 100;
    char *p = &ch;
    int *p2 = &a;
    int *p3;
    p3 = &b;
    printf("ch  = %c\n",ch);
    printf("a   = %d\n",a);
    printf("*p  = %c\n",*p);
    printf("*p2 = %d\n",*p2);
    printf("*p3 = %d\n",*p3);

    printf("=====================\n");
    *p = 'B';
    *p2 = 20;
    
    printf("ch  = %c\n",ch);
    printf("a   = %d\n",a);
    printf("*p  = %c\n",*p);
    printf("*p2 = %d\n",*p2);

}
