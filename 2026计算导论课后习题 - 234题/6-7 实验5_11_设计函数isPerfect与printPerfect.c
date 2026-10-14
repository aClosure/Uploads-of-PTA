/*
  @pintia psid=2101615993064542208 pid=2101615993295228988 compiler=GCC
  ProblemSet: 2026计算导论课后习题 - 234题
  Title: 实验5_11_设计函数isPerfect与printPerfect
  https://pintia.cn/problem-sets/2101615993064542208/exam/problems/type/6?problemSetProblemId=2101615993295228988
*/
// @pintia code=start
#include <stdio.h>

int isPerfect(int i)
{
    int sum = 0;
    for (int p=1; p<=i/2; p++)
    {
        if (i%p == 0)
        {
            sum+=p;
        }        
    }

    if (sum == i)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void printPerfect(int i)
{

    printf("%d=",i);
    for (int p=1; p<i; p++)
    {
        if (p == 1)
        {
            printf("1");
        }
        else if(i%p == 0)
        {
            printf("+%d",p);
        }
    }
    printf("\n");

}
// @pintia code=end