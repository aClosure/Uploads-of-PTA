/*
  @pintia psid=2101615993064542208 pid=2101615993299423267 compiler=GCC
  ProblemSet: 2026计算导论课后习题 - 234题
  Title: 实验2_7_统计字符
  https://pintia.cn/problem-sets/2101615993064542208/exam/problems/type/7?problemSetProblemId=2101615993299423267
*/
// @pintia code=start
#include <stdio.h>

int main()
{
    int line;
    int letter = 0;
    int blank = 0;
    int num = 0;
    int other = 0;

    line = getchar();
    while(line != '\n' && line != EOF)
    {
        if((line>='a'&&line<='z')||(line>='A'&&line<='Z'))
        {
            letter++;
        }
        else if(line>='0'&&line<='9')  //the nums' ascii are not themselves
        {
            num++;
        }
        else if(line == ' ')
        {
            blank++;
        }
        else
        {
            other++;
        }

        line = getchar();
    }
    printf("%d %d %d %d",letter, blank, num, other);

    return 0;
}
// @pintia code=end