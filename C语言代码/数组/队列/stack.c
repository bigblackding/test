/*************************************************************************
	> File Name: stack.c
	> Author: 
	> Mail: 
	> Created Time: 2017年11月02日 星期四 16时36分25秒
 ************************************************************************/

#include<stdio.h>
#include"stack.h"
int stack[MAX_SIZE];
int position;//栈顶位置变量


int is_full()//判断栈是否满
{
    return position >= MAX_SIZE;
}

int is_empty()//判断栈是否为空
{
    return position == 0;
}

void push(int element)//入栈,element为一个元素
{
    if(is_full())
    return ;
    stack[position++] = element;//入栈完成后将位置移动到下一个位置
}

int pop()//出栈
{
    if(is_empty())
    return 0 ;
    int element = stack[--position];//将栈顶位置移动到栈顶元素所在位置,将元素赋值给element.
    return element;
}

int top()//获得栈顶元素
{
    if(is_empty()) 
    return 0 ;
    int element = stack[position-1];
    return element;
}
