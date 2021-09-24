/*
Restaurant Bill Outline :
1) create a pseudo-random to display the menu listed for the user. using the time and srand from the lecture. 
2) create lines that ask the user to input the tip and tax percentage using scanf
3) create a switch statement to display the different menus
4) create lines that let the user know how much tip, tax, and total they need to pay using printf
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    float tipPercentage, taxPercentage, price;

    time_t t;
    srand((unsigned) time(&t));
    int MenuListed = rand() %4;

    printf("Enter the tip percentage: ");
    scanf("%f", &taxPercentage);
    printf("Enter the tax percentage: ");
    scanf("%f", &tipPercentage);

    switch(MenuListed)
    {
        case 0:
            printf("Salad cost : $9.95\n");
            price = 9.95;
            break;
        case 1:
            printf("Soup cost : $4.55\n");
            price = 4.55;
            break;
        case 2:
            printf("Sandwich cost : $13.25\n");
            price = 13.25;
            break;
        case 3:
            printf("Pizza cost : $22.35\n");
            price = 22.35;
            break;       
    }

    float tax, tip, total; 

    tax = price * taxPercentage / 100;
    printf("The tax is : $%.2f\n", tax);
    tip = price * tipPercentage / 100;
    printf("The tip is : $%.2f\n", tip);
    total = price + tax + tip;
    printf("The total bill is : $%.2f\n", total); 
}