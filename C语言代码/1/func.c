//
// Created by zhang on 17-10-19.
//

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"func.h"

//===================================================================
//功能选项列表//
void liebiao(void)
{
    printf("==================================\n");
    printf("|          1增加成员             |\n");
    printf("|          2删除成员             |\n");
    printf("|          3修改成员             |\n");
    printf("|          4查找成员             |\n");
    printf("|        5进行列表排序           |\n");
    printf("|        6保存列表数据           |\n");
    printf("|        7读取列表信息           |\n");
    printf("|         按任意键退出           |\n");
    printf("==================================\n");
    printf("请输入选项：");
}
//==================================================================
//功能选择//
int scanl(int *i)
{
    int a  = 0;
    scanf("%d",&a);
    if(a>=1&&a<=8)
        *i = a;
    else
    {
        printf("退出列表\n");
        exit (0);
    }
}
//==================================================================
//录入成员信息//
void member(struct stu *p )
{
    int i =0;

    for(i=0;i<num;i++)
    {
        printf("请录入第%d个成员信息\n",i+1);
        printf("id:");
        scanf("%d",&p[i].id);
        printf("name:");
        scanf("%s",p[i].name);
        printf("age:");
        scanf("%d",&p[i].age);
        printf("score:");
        scanf("%d",&p[i].score);
        if((p[i].id)=='\0'&&(p[i].age)=='\0'&&(p[i].score)=='\0')
        {
            p[i].flag = 0;
        }
        else
        {
            p[i].flag = 1;
        }
    }

}
//	else
//	printf("该成员已录入信息")

//==================================================================
//修改成员信息//
int alter(struct stu *p)
{
    int j;
    int i;
    scanf("%d",&i);
    printf("请重新为成员%d录入信息\n",i);
    for(j=0;j<num;j++)
    {
        if(p[j].id==i)
        {
            printf("id:");
            scanf("%d",&p[j].id);
            printf("name:");
            scanf("%s", p[j].name);
            printf("age:");
            scanf("%d",&p[j].age);
            printf("score:");
            scanf("%d",&p[j].score);
            if((p[i].id)=='\0'&&(p[i].age)=='\0'&&(p[i].score)=='\0')
                p[i].flag =0;
            else
                p[i].flag = 1;
        }
    }

}
//=================================================================
//删除成员信息//
int delete(struct stu *p)
{
    int i;
    int j;
    scanf("%d",&i);
    /*	p[i-1].id = "\0";
        strcpy (p[i-1].name , "\0");
        p[i-1].age = "\0";
        p[i-1].score = "\0";*/
    for(j=0;j<num;j++)
    {
        if(p[j].id==i)
        {
            p[j].flag = 0;
        }
    }
}
//====================================================================
//查找成员并打印//
int find(struct stu *p)
{
    int i;
    scanf("%d",&i);
    if(p[i].flag ==1)
        printf("%d %s %d %d\n",p[i-1].id,p[i-1].name,p[i-1].age,p[i-1].score);
    else if (p[i].flag == 0)
        printf("---------------------------\n");

}
//====================================================================
//为成员排序并打印//
void sort(struct stu *p)
{
    int i ;
    int j = 0;
    printf("请选择排序方式\n");
    printf("按ID号排序请按1  ，按年龄排序请按2，按分数排序请按3\n");
    printf("选项：");
    scanf("%d",&i);
    switch(i)
    {
        case 1 : id(p);break;
        case 2 : age(p);break;
        case 3 : score(p);break;
            /*printf("%d %s %d",p[i-1].id,p[i-1].name,p[i-1].age,p[i-1].score);
            break;
            case 4 : score(p);
            printf("%d %s %d",p[i-1].id,p[i-1].name,p[i-1].age,p[i-1].score);
            break;*/
    }
    for(j=0;j<num;j++)
    {
        if(p[j].flag ==1)
            printf("%d %s %d %d\n",p[j].id,p[j].name,p[j].age,p[j].score);
        else if(p[j].flag==0)
            printf("-----------------------------\n");
    }
}
//===============================================================
//写入数据
int save (struct stu *p)
{
    FILE *fp = NULL;
    fp = fopen("data.bin","w");
    if(fp == NULL)
    {
        perror("fopen()");
        return -1;
    }
    fwrite(p,sizeof(struct stu),1,fp);
    fclose(fp);
    return 0;
}
//==================================================================
//读取数据
int reader(struct stu *p)
{
    FILE *fp = NULL;
    int i = 0;
    fp = fopen("data.bin","r");
    if(fp==NULL)
    {
        perror("fopen");
        return -1;
    }
    fread(p,sizeof(struct stu),1,fp);
    for(i=0;i<num;i++)
        printf("id:%d  name:%s age:%d score:%d\n",p[i].id,p[i].name,p[i].age,p[i].score);
    fclose(fp);
    return  0;
}







































