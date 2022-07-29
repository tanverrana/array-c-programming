#include <stdio.h>
int main()
{
    int numbers_of_user, i;
    printf("Enter number of users:");
    scanf("%d", &numbers_of_user);
    int ratings[numbers_of_user];
    for (i = 0; i < numbers_of_user; i++)
    {
        scanf("%d", &ratings[i]);
    }
    int sum = 0;
    for (i = 0; i < numbers_of_user; i++)
    {
        sum = sum + ratings[i];
    }
    double average = (double)sum / numbers_of_user;
    printf("%.2lf\n", average);

    int count[6] = {0};
    for (int i = 0; i < numbers_of_user; i++)
    {
        int x = ratings[i];
        count[x]++;
    }
    for (int i = 1; i <= 5; i++)
    {
        printf("%d => %d\n", i, count[i]);
    }

    return 0;
}