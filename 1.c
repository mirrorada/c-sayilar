#include <stdio.h>

int main ()
{
    int a;
    printf("bir sayi giriniz ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        int b = a * a;
        printf("sayinin karesi %d", b);
    }
    else
    {
        int c = a * a * a;
        printf("%d", c);
    }
    return 0;
}