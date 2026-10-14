/*
  @pintia psid=2101615993064542208 pid=2101615993295228987 compiler=GCC
  ProblemSet: 2026计算导论课后习题 - 234题
  Title: 实验5_10_设计函数judgeTriangle
  https://pintia.cn/problem-sets/2101615993064542208/exam/problems/type/6?problemSetProblemId=2101615993295228987
*/
// @pintia code=start
#include <stdio.h>

int judgeTriangle(int a,int b, int c)
{
    if ((a+b>c&&a+c>b&&b+c>a))
    {
        if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
        {
            return 1;
        }
        if(a==b||a==c||b==c)
        {
            if(a==b&&b==c)
            {
                return 3;
            }
            else
            {
                return 2;
            }
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return -1;
    }
}
// @pintia code=end