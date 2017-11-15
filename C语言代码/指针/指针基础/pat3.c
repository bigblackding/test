/*************************************************************************
	> File Name: pat3.c
	> Author: 
	> Mail: 
	> Created Time: 2017年11月14日 星期二 15时55分42秒
 ************************************************************************/

#include<stdio.h>
int main()
{
     char ch[] = "abcdefg";
    char *p = ch;
    int i ;
    printf("%s\n",p);
    for(i = 0;i<sizeof(ch);i++)
    printf("%c\n",*(p+i));
}
