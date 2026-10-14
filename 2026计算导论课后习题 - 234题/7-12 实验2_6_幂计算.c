/*
  @pintia psid=2101615993064542208 pid=2101615993299423266 compiler=GCC
  ProblemSet: 2026计算导论课后习题 - 234题
  Title: 实验2_6_幂计算
  https://pintia.cn/problem-sets/2101615993064542208/exam/problems/type/7?problemSetProblemId=2101615993299423266
*/
// @pintia code=start
#include <stdio.h>

int main()
{
    int x, y = 0;
    scanf("%d %d",&x,&y);
    long int ret = x;

    if (y!=0)
    {
        for (int i = 1; i<y ;i++)
        {
            ret = ret*x;
        }
        printf("%ld",ret);
    }
    else
    {
        printf("1");
    }
    

    return 0;
}
// @pintia code=end