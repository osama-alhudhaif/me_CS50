#include <stdio.h>
#include <cs50.h>
int main(void)
{
    int a = 9;
    int b = 4;
    int c = a / b;
    printf("%i\n", c);
    int d = 9;
    int e = 4;
    int f = d % e;
    printf("%i\n", f);
    float g = 9;
    float h = 4;
    float i = g / h;
    printf("%f\n", i);
    float j = 0.5;
    float k = 10;
    float l = j * k;
    printf("%f\n", l);
    printf("%f\n", (float) a / b);
    printf("%i\n", 1 / 2 * 10);
}