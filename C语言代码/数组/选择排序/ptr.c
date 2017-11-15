/*************************************************************************
	> File Name: ptr.c
	> Author: 
	> Mail: 
	> Created Time: 2017年10月26日 星期四 17时44分30秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int i,j;
    int a[5];
    int n = sizeof(a)/4;
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);

    for(i = 0;i<n-1;i++)
    {    int pos = i;
        for(j= i+1;j<n;j++)
        {
        if(a[j]<a[pos])
        pos = j;
        }
    
        if(pos != i)
        {
        int temp ;
        temp = a[pos];    
        a[pos] = a[i];
        a[i] = temp;
        }
    }
    for(i = 0 ;i<n; i++)
    printf("%d\n", a[i]);
return 0 ;
}
