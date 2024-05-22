#include <stdio.h>

int somadig(int a);

int main()
{
    int num1;
    scanf("%d", &num1);
    printf("%d\n", somadig(num1));
}

int somadig(int a)
{
    if (a == 0)
    {
        return 0;
    }
    return (a%10) + somadig(a/10);

}
