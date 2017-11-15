//
// Created by zhang on 17-10-19.
//

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"func.h"
//=================================
//排序功能//

void id(struct stu *k)
{
    struct stu tmp;
    int j = 0;
    int i = 0;
    for(j=0;j<num-1;j++)
    {
        for(i=0;i<num-1;i++)
        {
            if(k[i].id>k[i+1].id)
            {
                tmp=k[i];
                k[i]=k[i+1];
                k[i+1]= tmp;
            }
        }
    }
}
//======================================================
void age(struct stu *k)
{   struct stu tmp;
    int j = 0;
    int i = 0;
    for(j=0;j<num-1;j++)
    {
        for(i=0;i<num-1;i++)
        {
            if(k[i].age>k[i+1].age)
            {
                tmp=k[i];
                k[i]=k[i+1];
                k[i+1]= tmp;
            }
        }
    }
}

int score(struct stu *k)
{
    struct stu tmp;
    int j = 0;
    int i = 0;
    for(j=0;j<num-1;j++)
    {
        for(i=0;i<num-1;i++)
        {
            if(k[i].score>k[i+1].score)
            {
                tmp=k[i];
                k[i]=k[i+1];
                k[i+1]= tmp;
            }
        }
    }
}
