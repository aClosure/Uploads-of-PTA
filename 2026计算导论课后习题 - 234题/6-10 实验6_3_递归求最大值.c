/*
  @pintia psid=2101615993064542208 pid=2101615993295228991 compiler=GCC
  ProblemSet: 2026计算导论课后习题 - 234题
  Title: 实验6_3_递归求最大值
  https://pintia.cn/problem-sets/2101615993064542208/exam/problems/type/6?problemSetProblemId=2101615993295228991
*/
// @pintia code=start
#include <stdio.h>

int findMax(int n)
{
    int retmax = 0;
    for (int i=0; i<=n; i++)
    {
        int temp = 0;
        scanf("%d",&temp);

        if (temp>=retmax)
        {
            retmax = temp;
        }
    }

    return retmax;
}
// @pintia code=end