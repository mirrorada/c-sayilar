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
    return 0;
}