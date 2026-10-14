/*
  @pintia psid=2101615993064542208 pid=2101615993299423259 compiler=GCC
  ProblemSet: 2026计算导论课后习题 - 234题
  Title: 实验1_5_数据类型
  https://pintia.cn/problem-sets/2101615993064542208/exam/problems/type/7?problemSetProblemId=2101615993299423259
*/
// @pintia code=start
#include <stdio.h>

int main()
{
    char a = 'a';
    short b = 0;
    int c = 0;
    long d = 0;
    long long e = 0;
    float f = 0.0;
    double g = 0.00;

    scanf("%c %hd %d %ld %lld %f %lf",&a,&b,&c,&d,&e,&f,&g);

    printf("The 'char' variable is %c, it takes %zu byte.\n",a,sizeof(a));
    printf("The 'short' variable is %hd, it takes %zu bytes.\n",b,sizeof(b));
    printf("The 'int' variable is %d, it takes %zu bytes.\n",c,sizeof(c));
    printf("The 'long' variable is %ld, it takes %zu bytes.\n",d,sizeof(d));
    printf("The 'long long' variable is %lld, it takes %zu bytes.\n",e,sizeof(e));
    printf("The 'float' variable is %f, it takes %zu bytes.\n",f,sizeof(f));
    printf("The 'double' variable is %lf, it takes %zu bytes.\n",g,sizeof(g));

    return 0;
}
// @pintia code=end