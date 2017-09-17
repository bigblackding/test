/*************************************************************************
	> File Name: break.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月17日 星期日 11时40分39秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=100;i++)
    {
        for(j=2;j<i;j++)
            if(i%j==0)
            break;
        if(j==i)
        printf("%d\n",i);
    }
    return 0;
}
