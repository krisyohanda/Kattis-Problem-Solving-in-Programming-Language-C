#include<stdio.h>

int main()
{
    int N;
    float q, y, total = 0.0f;
    scanf("%d", &N);
    if (N>=1 && N<=100)
    {
        while (N--)
        {
            scanf("%f %f", &q, &y);
            total += q*y;
        }
    }
    printf("%.3f \n", total);
}