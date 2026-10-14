/*
  @pintia psid=2101615993064542208 pid=2101615993299423270 compiler=GCC
  ProblemSet: 2026计算导论课后习题 - 234题
  Title: 实验2_10_数字统计一
  https://pintia.cn/problem-sets/2101615993064542208/exam/problems/type/7?problemSetProblemId=2101615993299423270
*/
// @pintia code=start
#include <stdio.h>

int main()
{
    int n = 0;
    int s3 = 0, s5 = 0, s7 = 0;
    int sum = 0;

    while(scanf("%d",&n)&&n!=0)
    {
        if((n%3==0)&&(n%5!=0)&&(n%7!=0))
        {
            s3++;
        }
        else if((n%5==0)&&(n%3!=0)&&(n%7!=0))
        {
            s5++;
        }
        else if((n%7==0)&&(n%5!=0)&&(n%3!=0))
        {
            s7++;
        }

        sum++;

    }

    printf("%.2f%%\n",(s3*100.0)/sum);
    printf("%.2f%%\n",(s5*100.0)/sum);
    printf("%.2f%%\n",(s7*100.0)/sum);

    return 0;
}
// @pintia code=end