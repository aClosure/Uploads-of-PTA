/*
  @pintia psid=2101615993064542208 pid=2101615993299423271 compiler=GCC
  ProblemSet: 2026计算导论课后习题 - 234题
  Title: 实验2_11__双11优惠
  https://pintia.cn/problem-sets/2101615993064542208/exam/problems/type/7?problemSetProblemId=2101615993299423271
*/
// @pintia code=start
#include <stdio.h>

int main()
{
    int t = 0;
    int price = 0;

    scanf("%d",&t);
    getchar();
    
    for(int i1=0; i1<t; i1++)
    {
        int n = 0, sum = 0;
        scanf("%d",&n);
        
        for(int i2=0; i2<n; i2++)
        {
            int price =0;
            scanf("%d",&price);
            sum += price;
        }
        
        if (sum>=100&&sum<200)
        {
            sum -= 30;
        }
        else if (sum>=200&&sum<300)
        {
            sum -=70;
        }
        else if (sum>=300&&sum<400)
        {
            sum -= 110;
        }
        else if(sum>=400)
        {
            sum -= 160;
        }

        printf("%d\n",sum);
    }

    return 0;
}
// @pintia code=end