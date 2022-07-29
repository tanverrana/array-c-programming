#include <stdio.h>
int main()
{
    int students;
    printf("Enter Number of Students:");
    scanf("%d", &students);
    int mark[students];
    for (int i = 0; i < students; i++)
    {
        printf("Enter Student %d mark:", i + 1);
        scanf("%d", &mark[i]);
    }

    for (int i = 0; i < students; i++)
    {
        printf("Student %d got %d marks\n", i + 1, mark[i]);
    }
    return 0;
}