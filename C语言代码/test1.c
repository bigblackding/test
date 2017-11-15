/*************************************************************************
	> File Name: test1.c
	> Author: 
	> Mail: 
	> Created Time: 2017年10月24日 星期二 11时27分25秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int *p =NULL;
    int i =0;
    int a[5];
    p = a;
    for(i=0;i<5;i++)
        a[i]=i+10;
    for(i=0;i<5;i++)
    printf("%d\n",a[i]);
    printf("%d\n",*p);

    
}
