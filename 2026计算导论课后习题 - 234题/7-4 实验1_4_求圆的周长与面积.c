/*
  @pintia psid=2101615993064542208 pid=2101615993299423258 compiler=GCC
  ProblemSet: 2026计算导论课后习题 - 234题
  Title: 实验1_4_求圆的周长与面积
  https://pintia.cn/problem-sets/2101615993064542208/exam/problems/type/7?problemSetProblemId=2101615993299423258
*/
// @pintia code=start
# include <stdio.h>

const double PI = 3.14159265;

int main()
{
    double r = 0.00;
    
    scanf("%lf",&r);
    double perimeter = 2*PI*r;
    double area = PI*r*r;

    printf("The perimeter is %.4lf, the area is %.4lf.",perimeter,area);

    return 0;
}
// @pintia code=end