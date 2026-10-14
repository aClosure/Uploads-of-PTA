/*
  @pintia psid=2101615993064542208 pid=2101615993299423256 compiler=GCC
  ProblemSet: 2026计算导论课后习题 - 234题
  Title: 实验1_2_基本类型数据的输入和输出
  https://pintia.cn/problem-sets/2101615993064542208/exam/problems/type/7?problemSetProblemId=2101615993299423256
*/
// @pintia code=start
# include <stdio.h>

int main()
{
    char sex = 'M';
    int age = 0;
    float height = 0.00;

    scanf("%c%d%f",&sex,&age,&height);

    printf("The sex is %c, the age is %d, and the height is %f.",sex,age,height);

    return 0;
}
// @pintia code=end