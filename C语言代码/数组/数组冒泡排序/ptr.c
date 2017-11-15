/*************************************************************************
	> File Name: ptr.c
	> Author: 
	> Mail: 
	> Created Time: 2017年10月26日 星期四 16时18分00秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int i,j,k;
    int a[5];
    for(k =0 ;k<5;k++ )
        scanf("%d",&a[k]);

    int n = sizeof(a)/4;
    int tmp;
    for(i = 0;i<n-1;i++)
    {
        for(j = n-1;j>i;j--)
        {
            if(a[j]<a[j-1])
            {
            tmp = a[j];
            a[j]= a[j-1];
            a[j-1] = tmp;
            }
        }
    }
    

    for(i=0; i<5;i++)
        printf("%d\n",a[i]);
    return 0 ;
}
