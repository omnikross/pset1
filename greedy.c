#include <stdio.h>
#include <cs50.h>
#include <math.h>

#define QUARTER 25;
#define DIME 10;
#define NICKEL 5;
#define PENN 1;
int main(void) 
{
    float d = 0;
    int cent = 0;
    int quat = 0;
    int dime = 0;
    int nick = 0;
    int penn = 0;
    int left = 0;//остаток после деления на одну из переменных
    int coin_count = 0;//количество монет
    
    do //бработка введенияd
    {
        printf("O hai! How much change is owed?");
        d = GetFloat();
        //Iпроверка на нуль
        if(d == 0|| d<= 0)
        printf("Number Should be greater then Zero!\n:");
    }
    while(d <= 0);
    
    //перевод в центы
    cent = (int)round(d*100);

    //Сколько четвертаков
    quat = cent / QUARTER;
    left = cent % QUARTER;
    
    //сколько монет по 10 центов
    dime = left / DIME;
    left = left % DIME;
    
    //сколько монет по 5 центов
    nick = left / NICKEL;
    left = left % NICKEL;
    
    //сколько монет по 1 центу
    penn = left / PENN;
    left = left % PENN;
    
    //остаток
    coin_count = quat + dime + nick + left + penn;
    
   
    printf("%d\n", coin_count);
    
    return 0;
}