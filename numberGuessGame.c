/*
Number Guessing Game Outline:
1) stating all the variable included inside the project using char and include the integer for maximum number
2) create a menu which print out the options for the user to pick
3) using the pseudo random to randomnly pick a number using rand and time_t
4) create a while and if statement to display the options the user pick, too low and high
5) create an if else statement include while statement to input the new maximum number from the user
6) create quit which shows done playing
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//int get_saved_user_max_number();
//void edit_saved_user_max_number(int max_number);

int main() {
    time_t t;
    char userOption[] = "4";
    char userGuessNumber[] = "";
    int maxNumber = 10;  

    menu:
    printf("\nPress 1 to play a game\n");
    printf("Press 2 to change max number\n");
    printf("Press 3 to quit\n");
    scanf("%s", &userOption);
    while (strcmp(userOption, "3") != 0) {
        srand((unsigned) time(&t));
        int rightNum= rand() % maxNumber;
        //int rightNum= rand() % get_saved_user_max_number();
        rightNum++;
        char random[100];
        sprintf(random, "%d", rightNum);  
        if (strcmp(userOption, "1") == 0) {
                while (strcmp(userGuessNumber, random) != 0) {
                    printf("Enter a number to guess: ");
                    scanf("%s", &userGuessNumber);
                    if (strcmp(userGuessNumber, "q") == 0) {
                        goto menu;
                    }
                    int guess = atoi(userGuessNumber);  
                    if (guess > rightNum) {
                        printf("Your guessed is too high\n");
                    } 
                    if (guess < rightNum) {
                        printf("Your guessed is too low\n");
                    } 
                
                } 
                printf("You guessed the right number!");
                goto menu;
        }
        if (strcmp(userOption, "2") == 0) {
            printf("Enter new max number no greater than 10 and no less than 1: ");
            scanf("%d", &maxNumber);
            while (maxNumber > 10 || maxNumber < 1) {
                printf("Enter new max number no greater than 10: ");
                scanf("%d", &maxNumber);
            }
            //edit_saved_user_max_number(maxNumber);
            goto menu;
        }
        else {
            goto menu;
        }

    }
    printf("\nThank you for playing!");

}

/*
int get_saved_user_max_number() {
    FILE *fp;
    char buff[255];
    int num;
    
    fp = fopen("saved_user_max_number.txt", "r");
    fgets(buff, 255, (FILE*)fp);
    fgets(buff, 255, (FILE*)fp);
    //printf("%s\n", buff );
    int max_num = atoi(buff);
    
    fclose(fp);
    return max_num;
}
void edit_saved_user_max_number(int max_number) {
    FILE *fp;
    char buff[255];
    sprintf(buff, "%d", max_number);
    fp = fopen("saved_user_max_number.txt", "w");
    fprintf(fp, "The saved max number is:\n");
    fprintf(fp, "%s\n", buff);
     
    fclose(fp);
}
*/