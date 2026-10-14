/*
  @pintia psid=2101615993064542208 pid=2101615993299423273 compiler=GCC
  ProblemSet: 2026计算导论课后习题 - 234题
  Title: 实验3_2_密码文
  https://pintia.cn/problem-sets/2101615993064542208/exam/problems/type/7?problemSetProblemId=2101615993299423273
*/
// @pintia code=start
#include <stdio.h>

int main()
{
    char a ;

    while((a = getchar())!='\n')
    {
        if ((a>='a'&&a<'x')||(a>='A'&&a<'X'))
        {
            a+=3;
        }
        else if(a=='x')
        {
            a = 'a';
        }
        else if(a=='y')
        {
            a = 'b';
        }
        else if(a=='z')
        {
            a = 'c';
        }
        else if(a=='X')
        {
            a = 'A';
        }
        else if(a=='Y')
        {
            a = 'B';
        }
        else if(a=='Z')
        {
            a = 'C';
        }
        
        putchar(a);
    }

    return 0;
}
// @pintia code=end