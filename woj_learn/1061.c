#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define NUM 10
struct student
{
    int id;
    int score;
};

void findmax(struct student *stu, int *score, int *index)
{
    int i;
    struct student *s ;
    s= stu;
    (*score) = s->score;
    (*index) = s->id;
    s++;
    for(i = 1;i<NUM;i++)
    {
        if(s->score > (*score))
        {
            (*score) = s->score;
            (*index) = s->id;
        }
        s++;
    }
}

void findmin(struct student *stu, int *score, int *index)
{
    int i;
    struct student *s ;
    s= stu;
    (*score) = s->score;
    (*index) = s->id;
    s++;
    for(i = 1;i<NUM;i++)
    {
        if(s->score < (*score))
        {
            (*score) = s->score;
            (*index) = s->id;
        }
        s++;
    }
}

void findaver(struct student *stu, int *score, int *index)
{
    int i,sum=0;
    float avg,dif;
    struct student *s ;
    s= stu;
    for(i = 0;i<NUM;i++)
    {
        sum+=s->score;
        s++;
    }
    avg = (float)sum/10;
    s= stu;
    (*score) = s->score;
    dif =((*score)-avg>0)?((*score)-avg):(avg-(*score));
    (*index) = s->id;
    s++;
    for(i = 1;i<NUM;i++)
    {
        float diff = (s->score-avg>0)?(s->score-avg):(avg-s->score);
        if(diff < dif)
        {
            (*score) = s->score;
            (*index) = s->id;
            dif = diff;
        }
        s++;
    }
}

void main()
{
    struct student *s,*p;
    int i;
    int score,index;
    s = (struct student *)malloc(sizeof(struct student)*NUM);
    p=s;
    for(i = 0;i<NUM;i++)
    {
        scanf("%d %d",&p->id,&p->score);
        p++;
    }
    findmax(s,&score,&index);
    printf("%d %d\n",index,score);

    findmin(s,&score,&index);
    printf("%d %d\n",index,score);

    findaver(s,&score,&index);
    printf("%d %d\n",index,score);
    free(s);
}
