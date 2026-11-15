#include <stdio.h>
#include <cs50.h>
int main(void)
// 1
{
    string answer = get_string("Do you agree? ");
    if (answer[0] == 'y' || answer[0] == 'Y')
    {
        printf("Agreed.\n");
    }
    else if (answer[0] == 'n' || answer[0] == 'N')
    {
        printf("Not agreed.\n");
    }
    else
    {
        printf("Invalid response.\n");
    }
}

