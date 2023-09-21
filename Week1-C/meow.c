#include <stdio.h>

int main(void)
{
    int counter = 3;
    /*
    for (int i = 0; i < 3; i++)
    {
        printf("Meow\n");
        counter ++;
    }
    */
    while(counter > 0) 
    {
        printf("Meow\n");
        counter--;
    }
}