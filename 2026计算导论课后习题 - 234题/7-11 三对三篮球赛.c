/*
  @pintia psid=2101615993064542208 pid=2101615993299423265 compiler=GCC
  ProblemSet: 2026计算导论课后习题 - 234题
  Title: 三对三篮球赛
  https://pintia.cn/problem-sets/2101615993064542208/exam/problems/type/7?problemSetProblemId=2101615993299423265
*/
// @pintia code=start
#include <stdio.h>

int main()
{
    int a, b = 0;
    scanf("%d %d",&a,&b);

    if (a>=21 || b>=21)
    {
        if (a>=21 && b>=21)  // to be fixed
        {
            printf("error");
        }
        else if (a > b)
        {
            if (a >= 21 && a <= 22)
            {
                printf("A win");
            }
            else
            {
                printf("error");
            }
            
        }
        else if (a < b)
        {
            if (b >= 21 && b <= 22)
            {
                printf("B win");
            }
            else
            {
                printf("error");
            }
        }
    }
    else
    {
        if (a>b)
        {
            printf("A win");
        }
        else if (a < b)
        {
            printf("B win");
        }
        else
        {
            printf("no result");
        }

    }
    

    return 0;
}
// @pintia code=end