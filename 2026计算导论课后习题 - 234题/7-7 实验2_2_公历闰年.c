/*
  @pintia psid=2101615993064542208 pid=2101615993299423261 compiler=GCC
  ProblemSet: 2026计算导论课后习题 - 234题
  Title: 实验2_2_公历闰年
  https://pintia.cn/problem-sets/2101615993064542208/exam/problems/type/7?problemSetProblemId=2101615993299423261
*/
// @pintia code=start
#include <stdio.h>

int main()
{
    int y = 0;
    scanf("%d",&y);

    if ((y%400 == 0) || (y%4==0 &&y%100 != 0) )
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}
// @pintia code=end