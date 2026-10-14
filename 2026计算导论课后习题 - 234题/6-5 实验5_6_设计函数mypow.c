/*
  @pintia psid=2101615993064542208 pid=2101615993295228986 compiler=GCC
  ProblemSet: 2026计算导论课后习题 - 234题
  Title: 实验5_6_设计函数mypow
  https://pintia.cn/problem-sets/2101615993064542208/exam/problems/type/6?problemSetProblemId=2101615993295228986
*/
// @pintia code=start
#include <stdio.h>

int mypow(int x,int n)
{
    int ret = 1;

    for (; n!=0; n--)
    {
        ret = ret*x;
    }

    return ret;
}
// @pintia code=end