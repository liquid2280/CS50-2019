#include <cs50.h>
#include <stdio.h>

int get_positive_int(string prompt);

int main(void)
{
    int i = get_positive_int("Height: ");
    {
       printf("Height: %i\n", i);
        
        }
    for (int line = 0; line < i; line++)  
    {
        for (int space = i - line; space > 1; space--)
        {
            printf(" ");
        }
        for (int blocks = 0; blocks < line + 1; blocks++)
        {
            printf("#");
        }
        printf("\n");
    
    }
}

int get_positive_int(string prompt)
{
    int i;
    do {
        i = get_int("%s\n", prompt);
    }   while (i < 1||i>8);
        return i;
    
}

