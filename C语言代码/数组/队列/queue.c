/*************************************************************************
	> File Name: queue.c
	> Author: 
	> Mail: 
	> Created Time: 2017年11月06日 星期一 14时44分56秒
 ************************************************************************/

#include"queue.h"

int a[MAX_SIZE];
int position = 0;

void rmove(unsigned int index)//删除队列首位的元素,将后面的元素向前移动
{
    int i;
    for(i = index;i<position-1;i++)
       {
           a[i] = a[i+1];
       }
    a[i] = 0;
}
int is_full()//队列是否满
{
    return position >= MAX_SIZE;
}
int is_empty()//队列是否空
{
    return position == 0;
}
void enqueue(int element)//入列
{
    if(is_full())
    return;
    a[position++] = element;
}
int dequeue()//出列
{
    if(is_empty())
    return 0 ;
    int element = a[0];
    rmove(0);
    position--;
    return element;
}
