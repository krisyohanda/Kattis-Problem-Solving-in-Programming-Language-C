#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    if (N>=1 && N<=10000000)
    {
        if (N % 2 != 0)
        {
            printf("Alice");
        }
        else
        {
            printf("Bob");
        }
        
    }
    return 0;
}