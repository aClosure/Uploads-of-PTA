/*
  @pintia psid=2101615993064542208 pid=2101615993295228984 compiler=GCC
  ProblemSet: 2026计算导论课后习题 - 234题
  Title: 实验5_4_设计函数getDigit
  https://pintia.cn/problem-sets/2101615993064542208/exam/problems/type/6?problemSetProblemId=2101615993295228984
*/
// @pintia code=start
#include <stdio.h>

int getDigit(long long n)
{
    int i = 1;
    for (i; n/10 != 0;i++)
    {
        n = n/10;
    }

    return i;

}

// @pintia code=end