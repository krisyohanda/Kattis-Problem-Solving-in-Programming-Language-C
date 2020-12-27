#include<stdio.h>
#include<string.h>

int main()
{
    char kata[100];
    scanf("%s", &kata);
    size_t len = strlen(kata);
    for (size_t i = 0; i < len; i++)
    {
        if (kata[i]<91 && kata[i]>64)
        {
            printf("%c", kata[i]);
        }
        
    }
    printf("\n");
    return 0;
}