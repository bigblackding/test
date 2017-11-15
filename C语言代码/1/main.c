#include<stdio.h>
#include "func.h"
#define num 5
int main()
{
    int i;
    struct stu a[num];
    struct stu *p;
    p = a;
    do
    {
        liebiao();
        scanl(&i);
        switch(i)
        {
            case 1:printf("请录入成员信息\n");
                member(a);break;
            case 2:printf("请输出要删除成员到编号\n");
                delete(p);break;
            case 3:printf("请输入要修改的成员编号\n");
                alter(p);break;
            case 4:printf("请输入要查找的成员编号\n");
                find(p);break;
            case 5:printf("进行列表排序并打印所有成员\n");
                sort(p);break;
            case 6:save(p);
                printf("保存列表数据\n");
                break;
            case 7:reader(p);
                printf("读取列表数据\n");
                break;
        }
        /*	for(i=0;i<num;i++)
            {
                if(p[i].flag ==1)
                    printf("%d    %s      %d     %d\n",a[i].id,a[i].name,a[i].age,a[i].score);
                else
                    printf("-----------------------\n");
            }*/

//		printf("请输入选项:\n");
    }
    while(i>=1&&i<=8);
    return 0 ;
}
