/*
  @pintia psid=2101615993064542208 pid=2101615993299423255 compiler=GCC
  ProblemSet: 2026计算导论课后习题 - 234题
  Title: 实验1_1_求两数的和与差
  https://pintia.cn/problem-sets/2101615993064542208/exam/problems/type/7?problemSetProblemId=2101615993299423255
*/
// @pintia code=start
# include <stdio.h>

int a = 0, b = 0;

int main()
{
    scanf("%d",&a);
    scanf("%d",&b);
    int sum = a + b, minus = a - b;

    printf("The sum is %d and the difference is %d.",sum,minus);

    return 0;
}
// @pintia code=end