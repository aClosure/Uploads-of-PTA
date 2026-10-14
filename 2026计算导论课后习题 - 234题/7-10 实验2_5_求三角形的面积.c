/*
  @pintia psid=2101615993064542208 pid=2101615993299423264 compiler=GCC
  ProblemSet: 2026计算导论课后习题 - 234题
  Title: 实验2_5_求三角形的面积
  https://pintia.cn/problem-sets/2101615993064542208/exam/problems/type/7?problemSetProblemId=2101615993299423264
*/
// @pintia code=start
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c = 0;
    scanf("%d %d %d",&a,&b,&c);

    // Attention: a normal traingle should fulfill all the following ones
    if ((a+b>c && a+c>b && b+c>a) && (fabs(a-b)<c && fabs(a-c)<b && fabs(b-c)<a))
    {
        double s = (a+b+c)/2.0; // check if the s is a double float
        double area = sqrt(s*(s-a)*(s-b)*(s-c));
        printf("%.3lf",area);
    }
    else
    {
        printf("The edges cannot make up of a triangle.");
    }

    return 0;
}
// @pintia code=end