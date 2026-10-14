/*
  @pintia psid=2101615993064542208 pid=2101615993299423262 compiler=GCC
  ProblemSet: 2026计算导论课后习题 - 234题
  Title: 实验2_3_表达式求值一
  https://pintia.cn/problem-sets/2101615993064542208/exam/problems/type/7?problemSetProblemId=2101615993299423262
*/
// @pintia code=start
#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c,d =0;
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    double n = b * c - d;

    if ((fabs(n) - 0) < 1e-12)  // attention of the float judge!
    {
        printf("error");
    }
    else
    {
        double ret = a / ( b * c - d );
        printf("%.1lf",ret);
    }

    return 0;
}
// @pintia code=end