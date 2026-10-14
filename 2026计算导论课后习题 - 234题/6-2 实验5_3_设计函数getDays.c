/*
  @pintia psid=2101615993064542208 pid=2101615993295228983 compiler=GCC
  ProblemSet: 2026计算导论课后习题 - 234题
  Title: 实验5_3_设计函数getDays
  https://pintia.cn/problem-sets/2101615993064542208/exam/problems/type/6?problemSetProblemId=2101615993295228983
*/
// @pintia code=start
#include <stdio.h>

int getDays(int year,int month)
{
    const int days[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

    if (month == 2)
    {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            return 29;
        }
    }
    
    return days[month];

}
// @pintia code=end