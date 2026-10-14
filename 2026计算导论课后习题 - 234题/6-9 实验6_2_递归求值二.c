/*
  @pintia psid=2101615993064542208 pid=2101615993295228990 compiler=GCC
  ProblemSet: 2026计算导论课后习题 - 234题
  Title: 实验6_2_递归求值二
  https://pintia.cn/problem-sets/2101615993064542208/exam/problems/type/6?problemSetProblemId=2101615993295228990
*/
// @pintia code=start
#include <stdio.h>

int getSum(int n, int a)
{
    if (n==0)
    {
        return a;
    }
    else
    {
        int sum = 0;
        for (int i=0; i<=n; i++)
        {
            sum += (a + 3*i);
        }

        return sum;
    }
}
// @pintia code=end