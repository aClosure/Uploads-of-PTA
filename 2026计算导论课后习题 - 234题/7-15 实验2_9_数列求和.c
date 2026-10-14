/*
  @pintia psid=2101615993064542208 pid=2101615993299423269 compiler=GCC
  ProblemSet: 2026计算导论课后习题 - 234题
  Title: 实验2_9_数列求和
  https://pintia.cn/problem-sets/2101615993064542208/exam/problems/type/7?problemSetProblemId=2101615993299423269
*/
// @pintia code=start

// "而我们要求的是计算该数列的前n项和。"（😡）
#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d",&n);
    int m = n;

    long long int sum = 0;
    long long int ret = 0;

    if(n>=3)
    {
        for (n = 3;n<=m;n++)
        {
            sum += (long long int)(n-2)*(n-1)*n;
            ret += sum;
        }
    }
    else if(1<=n&&n<3)
    {
        sum = 0;
    }
    printf("%lld",ret);
    
}
// @pintia code=end