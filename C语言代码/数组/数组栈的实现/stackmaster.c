/*************************************************************************
	> File Name: stackmaster.c
	> Author: 
	> Mail: 
	> Created Time: 2017年11月02日 星期四 17时35分06秒
 ************************************************************************/

#include<stdio.h>
#include"stack.h"

int main(void)
{
    push(10);
    push(11);
    push(12);
    push(13);
    printf("pop is : %d \n",pop());
    printf("pop is : %d \n",pop());
    printf("top is : %d \n",top());
    push(14);
    printf("pop is : %d \n",pop());
    printf("pop is : %d \n",pop());
    printf("pop is : %d \n",pop());
    printf("pop is : %d \n",pop());
    return 0;
}
