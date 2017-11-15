/*************************************************************************
	> File Name: queuemaster.c
	> Author: 
	> Mail: 
	> Created Time: 2017年11月06日 星期一 16时07分45秒
 ************************************************************************/

#include<stdio.h>
#include"queue.h"
int main(void)
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
printf("dequeue = %d\n",dequeue());
printf("dequeue = %d\n",dequeue());
printf("dequeue = %d\n",dequeue());
return 0 ;
}
