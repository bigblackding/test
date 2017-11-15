/*************************************************************************
	> File Name: stack.h
	> Author: 
	> Mail: 
	> Created Time: 2017年11月02日 星期四 16时33分30秒
 ************************************************************************/

#ifndef _STACK_H
#define _STACK_H
#define MAX_SIZE 30
int is_full();//判断栈是否满
int is_empty();//判断栈是否为空
void push(int element);//入栈
int pop();//出栈
int top();//获得栈顶元素
#endif
