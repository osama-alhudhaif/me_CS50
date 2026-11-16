#include <stdio.h>
#include <cs50.h>
int add(int x, int y);
int main(void)
{
    int x = get_int("What is x: ");
    int y = get_int("What is y: ");
    int z = add(x, y);
    printf("%i\n",z);
}
int add(int x, int y)
{
    return x + y;
}