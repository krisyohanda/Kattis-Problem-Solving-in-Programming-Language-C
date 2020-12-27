#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    if (N>=1 && N<=100)
    {
        for (int i = 1; i <= N; i++)
        {
            printf("%d Abracadabra \n", i);
        }
    }
    return 0;
}