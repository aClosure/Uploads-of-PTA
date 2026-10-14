/*
  @pintia psid=2101615993064542208 pid=2101615993299423263 compiler=GCC
  ProblemSet: 2026计算导论课后习题 - 234题
  Title: 实验2_4_网购一
  https://pintia.cn/problem-sets/2101615993064542208/exam/problems/type/7?problemSetProblemId=2101615993299423263
*/
// @pintia code=start
#include <stdio.h>

int main()
{
    int g1, g2, g3, g4 = 0;
    scanf("%d %d %d %d",&g1,&g2,&g3,&g4);
    int gsum = g1 + g2 + g3 + g4;

    if (gsum < 20)
    {
        int sum = gsum + 10;
        printf("%d",sum);
    }
    else if(gsum >= 20 && gsum <30)  // Attention: a range needs && not ||
    {
        int sum = gsum + 8;
        printf("%d",sum);
    }
    else if(gsum >= 30 && gsum <40)
    {
        int sum = gsum + 5;
        printf("%d",sum);
    }
    else
    {
        printf("%d",gsum);
    }

    return 0;
}
// @pintia code=end