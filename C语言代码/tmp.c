/*************************************************************************
	> File Name: tmp.c
	> Author: 
	> Mail: 
	> Created Time: 2017年09月17日 星期日 14时27分48秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void temp(char,char,char,char,char);
int main()
{
    int i=0;
char *bbq[5];
    for(int i = 0;i<5;i++)
    bbq[i]= (char *)malloc(sizeof(char));
    
    for(i=0;i<5;i++)
    {
    scanf("%s",bbq[i]);
    }

printf("=====================\n");
    
    for(i=0;i<5;i++)
    printf("%s\n",bbq[i]);
}
/*
A
void temp(char a,char b,char c,char d,char e)
{
    int i,j,k;
    for(i=1;i<+5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(strcmp(a,e)>0)
            i=0;
        }
    }
}
*/
