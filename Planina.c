#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    if (N >= 1 && N <= 15)
    {
        printf("%d", (N = ((1<<N)+1))*N); // (2^n + 1)^2
    }
    return 0;
}