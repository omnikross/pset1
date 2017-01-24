#include <stdio.h>
#include <cs50.h>   

int main(void)
{   
    //Write, how long you take a shower in minutes
    printf("Minutes: ");
    
    int i;
    i = GetInt();
    
    
    int b; 
    //Minutes in bottles
    b = i * 12;
   
    if (i > 0)
   
   {
    printf("Bottles: %i 'bottles'\n", b);
    
   }
    else 
   {
    printf("It is a negative number!\n"); 
   }

   
}       