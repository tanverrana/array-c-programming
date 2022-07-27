#include <stdio.h>
int main()
{
    int values[10];
    int a = 100;
    printf("%d\n", sizeof(values) / sizeof(values[0]));
    return 0;
}