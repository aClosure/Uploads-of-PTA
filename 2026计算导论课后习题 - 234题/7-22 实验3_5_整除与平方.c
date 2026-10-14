/*
  @pintia psid=2101615993064542208 pid=2101615993299423276 compiler=GCC
  ProblemSet: 2026计算导论课后习题 - 234题
  Title: 实验3_5_整除与平方
  https://pintia.cn/problem-sets/2101615993064542208/exam/problems/type/7?problemSetProblemId=2101615993299423276
*/
// @pintia code=start
#include <stdio.h>

int main()
{
    int n = 0, sum = 0;
    scanf("%d",&n);

    for (int i=1; i<n; i++)
    {
        if (i%3==0&&i%7==0)
        {
            sum = sum + i;
        }
    }
    printf("%d",sum*sum);
    
    return 0;
}
// @pintia code=end