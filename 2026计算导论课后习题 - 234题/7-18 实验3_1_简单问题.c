/*
  @pintia psid=2101615993064542208 pid=2101615993299423272 compiler=GCC
  ProblemSet: 2026计算导论课后习题 - 234题
  Title: 实验3_1_简单问题
  https://pintia.cn/problem-sets/2101615993064542208/exam/problems/type/7?problemSetProblemId=2101615993299423272
*/
// @pintia code=start
#include <stdio.h>

int main(void)
{
	int n = 0;
	int max = 0, min = 2147483467;  	//Attention! to make init max=0 with for can flnally leads to the corret max num.
	scanf("%d",&n);
	int sum = 0;

	for (int i=0; i<n; i++)
	{
		int div = 0;
		scanf("%d",&div);	
    	sum += div;

		if (div>=max)
		{
			max = div;
		}
		if (div<=min)
		{
			min = div;
		}
  	}

	printf("%d %d %d",sum,max,min);
}
// @pintia code=end