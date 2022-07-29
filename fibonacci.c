#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter Number:");
    scanf("%d", &n);
    long long fibonacci[n];
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    for (i = 2; i < n; i++)
    {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }
    for (i = 0; i < n; i++)
    {
        printf("%d -> %lld\n", i + 1, fibonacci[i]);
    }
    return 0;
}