#include <stdio.h>
#include <cs50.h>
void Functions(int n);
int main(void)
{
    for (int i = 0; i < 5; i++)
    {
        Functions(4);
    }
}

void Functions(int n)
{
    printf("Hello, World!\n");
}