/*
  @pintia psid=2101615993064542208 pid=2101615993299423260 compiler=GCC
  ProblemSet: 2026计算导论课后习题 - 234题
  Title: 实验2_1_判断两数的大小
  https://pintia.cn/problem-sets/2101615993064542208/exam/problems/type/7?problemSetProblemId=2101615993299423260
*/
// @pintia code=start
#include <stdio.h>

int main()
{
    int a = 0, b = 0;
    scanf("%d %d",&a,&b);

    if (a ==b)
    {
        printf("The two numbers are equal.");
    }
    else if (a < b)
    {
        printf("The larger number is %d, the smaller number is %d.",b,a);
    }
    else
    {
        printf("The larger number is %d, the smaller number is %d.",a,b);
    }

}
// @pintia code=end