#include<stdio.h>
#include<math.h>

int main()
{
    int N, P[999], X;
    scanf("%d", &N);
    if (N >= 1 && N <= 10)
    {
        for (int i = 1; i <= N; i++)
        {
            scanf("%d", &P[i]);
        }
        for (int i = 1; i <= N; i++)
        {
            X += pow(P[i]/10, P[i]%10);
        }
        printf("%d", X);
        return 0;
    }
    return 0;
}