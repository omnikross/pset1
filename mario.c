#include <stdio.h>
#include <cs50.h>   


int main(void)
{
    int z = 1;  
        printf("Heigh:\n");
        z = GetInt();
        if (z == 0)
        {
            return 0 ;
        }
        a:if (z <= 23 && z > 0)
            {
            //строка
            for(int i = 0; i < z; ++i)
            {
            //#
            for(int j = 0; j < z; ++j)
            {   
                if(j < z - 1 - i)
                    
                printf(" ");
                else
                printf("#");
            }
            printf("#\n");
            }
        
            }    
        else
        {
        do
        {
                printf("Put number from 0 to 23: ");
                z = GetInt();
        }
        while(z < 0);
        goto a;
            
        }
}
        

            
      