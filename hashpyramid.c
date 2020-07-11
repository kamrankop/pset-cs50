#include <cs50.h>
#include <stdio.h>

int main(void)

{
    int height;
    do
    {
       height = get_int("height: "); 
    }
    while (height < 1 || height > 8);
    
    for (int i = 1; i <= height ; i++)
    {
        for (int s = 1; s <= height - i; s++)
        {
            printf(" ");
        }
        
        for (int h = 1; h <= i; h++)
        {
            printf("#");
        }
    
        printf("  ");
        
        for (int h = 1; h <= i ; h++)
        {
            printf("#");
        }    
        
        printf("\n");
    
    }
}
