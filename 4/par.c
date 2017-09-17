/*************************************************************************
	> File Name: par.c
	> Author: t 
	> Mail: 
	> Created Time: 2017年09月17日 星期日 13in时11分34秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int arr[2]={1,2};
    int arr2[2]={3,4};
    int arr3[2]={5,6};
    int arr4[2]={7,8};
    int arr5[2]={9,20};
    
    int *p[5]= {arr,arr2,arr3,arr4,arr5}; 
    int a;
    for(a=0;a<5;a++)
    {
        printf("%d %d\n",*p[a],*(p[a]+1));
    }
}
