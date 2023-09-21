#include <stdio.h>

int main(void)
{
    char c;
    printf("Do you agree? ");
    scanf("%c", &c);


    if (c == 'y' || c == 'Y') // use single qoutes for one character
    {
        printf("Agreed\n"); // double quotes for strings
    }
    else if (c == 'n' || c == 'N') 
    {
        printf("Disagreed\n");
    }
    else 
    {
        printf("Wrong choice\n");
    }
    return 0;
}