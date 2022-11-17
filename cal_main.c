#include <stdio.h>
#include <stdlib.h>
#include <arithmetic.h>

int main(int argc, char *argv[])
{
    //20183363 ko
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    printf("<===============>\n");
    printf("<===============>\n");
    printf("<===============>\n");
    printf("<===============>\n");
    printf("%d + %d => %d\n", a, b, add(a, b));
    printf("%d - %d => %d\n", a, b, sub(a, b));
    printf("%d * %d => %d\n", a, b, mul(a, b));
    printf("%d / %d => %d\n", a, b, dur(a, b));
    printf("===============\n");

    return 0;
}
