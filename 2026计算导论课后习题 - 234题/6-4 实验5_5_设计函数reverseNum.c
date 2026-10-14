/*
  @pintia psid=2101615993064542208 pid=2101615993295228985 compiler=GCC
  ProblemSet: 2026计算导论课后习题 - 234题
  Title: 实验5_5_设计函数reverseNum
  https://pintia.cn/problem-sets/2101615993064542208/exam/problems/type/6?problemSetProblemId=2101615993295228985
*/
// @pintia code=start
#include <stdio.h>

int reverseNum(int n)
{
    int ret = 0;

    for (; n!=0; n/=10)
    {
        ret = ret*10 + n %10;
    }

    return ret;
}
// @pintia code=end