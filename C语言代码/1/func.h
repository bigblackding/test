//
// Created by zhang on 17-10-19.
//

#ifndef _FUNC_H
#ifndef _SORT_H
#define _FUNC_H
#define _SORT_H
#define num  5
struct stu
{
    int id;
    char name[128];
    int age;
    int score;
    int flag;
};
void func();

void liebiao();
void sort(struct stu *p);
int scanl(int *i);
void member(struct stu *p );
int alter(struct stu *p);
int delete(struct stu *p);
int find(struct stu *p);
void sort(struct stu *p);
int save (struct stu *p);
int reader(struct stu *p);
void id(struct stu *k);
void age(struct stu *k);
int score(struct stu *k);
#endif
#endif
