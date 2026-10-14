/*
  @pintia psid=2101615993064542208 pid=2101615993295228989 compiler=GCC
  ProblemSet: 2026计算导论课后习题 - 234题
  Title: 实验6_1_递归求值一
  https://pintia.cn/problem-sets/2101615993064542208/exam/problems/type/6?problemSetProblemId=2101615993295228989
*/
// @pintia code=start
#include <stdio.h>

int fuc(int n)
{
    if (n==0)
    {
        return n;
    }
    else if(n>0)
    {
        int ret = 0;
        for (int i=0; i<=n; i++)
        {
            ret += i*i*i;
        }
        
        return ret;
    }
}
// @pintia code=end