#include <stdio.h>
#include <cs50.h>
int main(void)
{
    int n = get_int("Enter a Time in Minutes: ");
    printf("That is %i hours.\n", n / 60);
    printf("That is %i minutes.\n", n % 60);
    printf("%.2f\n", (float) n / 60);
}
