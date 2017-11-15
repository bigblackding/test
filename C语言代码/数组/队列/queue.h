/*************************************************************************
	> File Name: queue.h
	> Author: 
	> Mail: 
	> Created Time: 2017年11月06日 星期一 14时41分51秒
 ************************************************************************/

#ifndef _QUEUE_H
#define _QUEUE_H
#define MAX_SIZE 30

void rmove(unsigned int index);

int is_full();//对列是否空

int is_empty();//队列是否满

void enqueue(int element);//入列

int dequeue();//出列
#endif
