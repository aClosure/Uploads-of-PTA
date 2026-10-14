/*
  @pintia psid=2101615993064542208 pid=2101615993299423274 compiler=GCC
  ProblemSet: 2026计算导论课后习题 - 234题
  Title: 实验3_3_确定成绩等级
  https://pintia.cn/problem-sets/2101615993064542208/exam/problems/type/7?problemSetProblemId=2101615993299423274
*/
// @pintia code=start
#include <stdio.h>

int main()
{
    int score = 0;
    scanf("%d",&score);

    if (score>100||score<0)
    {
        printf("The score is out of range!");
    }
    else if(score>=90&&score<=100)
    {
        printf("A");
    }
    else if(score>=80&&score<90)
    {
        printf("B");
    }
    else if(score>=70&&score<80)
    {
        printf("C");
    }
    else if(score>=60&&score<70)
    {
        printf("D");
    }
    else
    {
        printf("E");
    }

    return 0;
}
// @pintia code=end