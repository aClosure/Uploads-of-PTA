/*
  @pintia psid=2101615993064542208 pid=2101615993299423257 compiler=GCC
  ProblemSet: 2026计算导论课后习题 - 234题
  Title: 实验1_3_四则运算
  https://pintia.cn/problem-sets/2101615993064542208/exam/problems/type/7?problemSetProblemId=2101615993299423257
*/
// @pintia code=start
# include <stdio.h>

int main()
{
    double a = 0, b = 0, c = 0, d = 0;
    double ret = 0;

    scanf("%lf%lf%lf%lf", &a,&b,&c,&d);
    printf("%f",(a+b)*(a-b)+c/d);

    return 0;
}
// @pintia code=end