/*
  @pintia psid=2101615993064542208 pid=2101615993295228982 compiler=GCC
  ProblemSet: 2026计算导论课后习题 - 234题
  Title: 实验5_1_设计函数fun
  https://pintia.cn/problem-sets/2101615993064542208/exam/problems/type/6?problemSetProblemId=2101615993295228982
*/
// @pintia code=start
#include <stdio.h>

int fun(int x)
{
    if (x < 1)
    {
        int y = x;
        return y;
    }
    if (1 <= x && x <= 10)
    {
        int y = 2*x - 1;
        return y;
    }
    if (10 < x && x<= 100)
    {
        int y = 3*x -11;
        return y;
    }
    else
    {
        int y = x*x - 24;
        return y;
    }

}
// @pintia code=end