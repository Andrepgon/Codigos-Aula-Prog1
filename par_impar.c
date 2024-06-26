#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
    int n = atoi(argv[1]);
    if(!(n & 0x01))
    {
        puts("Par");
    } 
    else
    puts("impar");
    return 0;
}
