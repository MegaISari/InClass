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
            printf("Salad cost : $9.95");
            price = 9.95;
            break;
        case 1:
            printf("Soup cost : $4.55");
            price = 4.55;
            break;
        case 2:
            printf("Sandwich cost : $13.25");
            price = 13.25;
            break;
        case 3:
            printf("Pizza cost : $22.35");
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