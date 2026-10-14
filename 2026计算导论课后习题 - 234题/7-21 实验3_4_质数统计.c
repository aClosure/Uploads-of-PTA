/*
  @pintia psid=2101615993064542208 pid=2101615993299423275 compiler=GCC
  ProblemSet: 2026计算导论课后习题 - 234题
  Title: 实验3_4_质数统计
  https://pintia.cn/problem-sets/2101615993064542208/exam/problems/type/7?problemSetProblemId=2101615993299423275
*/
// @pintia code=start
#include <stdio.h>

int isPrime(int num);

int main()
{
    int n = 0, num = 0;
    int turn = 0;
    scanf("%d",&n);

    for (int i=0; i<n; i++)
    {
        turn = 0;
        while (scanf("%d",&num)&&num!=-1)
        {
            int a = isPrime(num);
            if (a==1)
            {
                turn++;
            }
        }
        
        printf("%d\n",turn);
    }

    return 0;
}

int isPrime(int num)
{
    if (num<=1)
    {
        return 0;
    }
    else if (num == 2)
    {
        return 1;
    }
    else
    {
        for(int i=2; i<num; i++)
        {
            if (num%i==0)
            {
                return 0;
            }
        }
    }
    return 1;
}
// @pintia code=end