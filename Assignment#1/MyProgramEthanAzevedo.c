/*
Author: Ethan Azevedo
Date: March 5th, 2026
Program: MyProgramEthanAzevedo.c
Purpose: 
    A program that allows the user to select from a menu of three different games: Craps, Caesar Cipher, and Average Word Length. 
    The program also includes input validation to ensure that the user enters valid options for the menu and for the games themselves.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h> 
    
//function prototypes for craps game.
int roll_dice(void);
bool play_game(void);
void craps_game(void);

//function prototype for caesar cipher.
void caesar_cipher(void);
void encrypt(char *message, int shift);

//function prototype for average word length.
void average_word_length(void);
double get_avg_word_len(const char* sentence);


int main(void){ // main function.

    int selection = 0;
    int choice = 0;

    srand(time(NULL)); // seed the random number generator with the current time to ensure different random numbers each time the program is run.

    do { // print menu options and ask user to select an option.
        printf("\n1) Craps Game \n2) Caesar Cipher \n3) Average Word Length \n4) Quit \nSelect your option: ");
        
        if (scanf("%d",&selection) != 1) {
            printf("\nError: Please enter a valid option: \n");

            while(getchar() != '\n'); // clear the input buffer to prevent infinite loop if user enters non-integer input.
            selection = 0;
            continue; 
        }

        if (selection >= 1 && selection <= 4) { // if user selects a valid option, ask for confirmation before proceeding.
            printf("\nAre you sure you want to select this option? \n\nYes: 1 \nNo: 0 \nSelect your option: ");

            if(scanf("%d",&choice) != 1){ // if user enters non-integer input, print error message and ask for input again.
                printf("Error: Please enter a valid option \n");

                while(getchar() != '\n'); // clear the input buffer to prevent infinite loop if user enters non-integer input.
                selection = 0;
                continue;
            }
            if (choice == 0 || choice == 1) { // if user selects 1, proceed with the selected option. If user selects 0, return to the main menu.
                if (choice == 0) {
                    selection = 0;
                }
            }
            else {  // if user enters an invalid option, print error message and ask for input again.
                printf("Error: Please enter a valid option \n");
                selection = 0;
            }
        }
        else { // if user enters an invalid option, print error message and ask for input again.
            printf("\nError: Please enter a valid option\n\n");
        }


    //switch statement to call the appropriate function based on user selection.
    switch (selection) {

        case 1: // if user selects 1, call craps game function.
        printf("You have Selected: Craps Game \n");
        craps_game();
        selection = 0;
        break;

        case 2: // if user selects 2, call caesar cipher function.
        printf("You have Selected: Caesar Cipher");
        caesar_cipher();
        selection = 0;
        break;

        case 3: // if user selects 3, call average word length function.
        printf("You have Selected: Average Word Length");
        average_word_length();
        selection = 0;
        break;

        case 4: // if user selects 4, print goodbye message and exit program.
        printf("You have Selected: Quit\n \n Bye Bye!!\n");
        break;

    }

    } while (selection < 1 || selection > 4); // loop will continue until user selects a valid option.

    return 0; // end of main function.
}

//roll dice function for craps game.
int roll_dice(void){

    int die1, die2; // initialize variables for the two dice.

    die1 = rand() % 6 + 1; // rand() % N + 1, N being the max number like a 6 sided die.
    die2 = rand() % 6 + 1; // numbers 1-6.

    int total = die1 + die2; // calculate total of the two dice.
    return total; // return the total to the play_game function.
}

//play game function for craps game.
bool play_game(void) {

    int sum; 
    int point;

    sum = roll_dice(); // call roll_dice function to get the initial roll of the dice and store it in sum variable.
    printf("You rolled a: %d\n", sum); 

    if (sum == 7 || sum == 11){ // if the initial roll is 7 or 11, the player wins.
        return true; //win the game.
    }
    else if (sum == 2 || sum == 3 || sum == 12){ // if the initial roll is 2, 3, or 12, the player loses.
        return false; // lose the game.
    }

    point = sum; // if the initial roll is not 7, 11, 2, 3, or 12, the player establishes a point and continues to roll until they either roll the point again (win) or roll a 7 (lose).
    printf("Your point is %d\n", point);

    sum = 0; // reset sum variable to 0 for the next rolls of the dice.

    while (point != sum) { // continue to roll the dice until the player rolls the point again (win) or rolls a 7 (lose).
        sum = roll_dice();
        printf("You rolled a: %d\n", sum);
        if (sum == 7){ // if the player rolls a 7, they lose.
            return false; // lose the game.
        }
    }
      
    return true; // if the player rolls the point again, they win.
    
}

//craps game function.
void craps_game(void){ 

    int wins = 0;
    int losses = 0;
    char choice2;

    do{ // call play_game function to play the game and determine if the player wins or loses.
    

        if(play_game() != 1){
            printf("You lose!\n");
            losses += 1;
        }
        else {
            printf("You win!\n");
            wins += 1;
        }


        do { // ask the user if they want to play again and validate their input.
            printf("\nWould you like to play again?: \n\nYes: Y \nNo: n \n");
            scanf(" %c", &choice2);
            
            while(getchar() != '\n'); // clear the input buffer to prevent infinite loop if user enters non-integer input.

            if (choice2 != 'y' && choice2 != 'Y' && choice2 != 'n' && choice2 != 'N'){ // if user enters an invalid option, print error message and ask for input again.
                printf("Error: Please enter a valid option: \n");
            }

        } while (choice2 != 'y' && choice2 != 'Y' && choice2 != 'n' && choice2 != 'N'); // loop will continue until user enters a valid option.
    


    } while (choice2 == 'y' || choice2 == 'Y'); // loop will continue to play the game until the user decides to stop playing by entering 'n' or 'N'.

    printf("\nWins: %d Losses: %d\n", wins, losses); // after the user decides to stop playing, print the total number of wins and losses.
    
}

//caesar cipher function.
void caesar_cipher(void){ 
    char choice2;
    char str1[80];
    int shift;
    
    do { // ask the user to enter a message to be encrypted and a shift amount, and validate their input.
        printf("\nEnter message to be encrypted: ");
        scanf("%s", str1);
        printf("\nEnter shift amount (1-25): ");
        scanf("%d", &shift);

        printf("your entered message is: %s\n", str1);
        printf("your entered shift is: %d\n\n", shift);

        char *ptr = str1; // create a pointer to the string to be encrypted and pass it to the encrypt function along with the shift amount.

        encrypt(ptr, shift); // call the encrypt function to encrypt the message using the Caesar cipher method.

        do{ 
            printf("\nWould you like to play again?: \n\nYes: Y \nNo: n \n");
            scanf(" %c", &choice2);

            while(getchar() != '\n');

            if (choice2 != 'y' && choice2 != 'Y' && choice2 != 'n' && choice2 != 'N'){
                printf("Error: Please enter a valid option: \n");
            }

            } while (choice2 != 'y' && choice2 != 'Y' && choice2 != 'n' && choice2 != 'N');

        } while (choice2 == 'y' || choice2 == 'Y');

}

//encrypt function.
void encrypt(char *message, int shift){

    for (int i = 0; *(message + i) != '\0'; i++) { // loop through each character in the message until the null terminator is reached.
        char c = *(message + i);

        if (c >= 'a' && c <= 'z') { // if the character is a lowercase letter, shift it by the specified amount and wrap around if necessary.
            *(message + i) = (c - 'a' + shift) % 26 + 'a';
        }
        else if (c >= 'A' && c <= 'Z') { // if the character is an uppercase letter, shift it by the specified amount and wrap around if necessary.
            *(message + i) = (c - 'A' + shift) % 26 + 'A';
        }
    }

    printf("Encrypted message: %s\n", message); // after the message has been encrypted, print the encrypted message to the user.

}


//average word length function.
void average_word_length(void){
    char choice2;
    char str1[80]; // initialize string.

    do{ // ask the user to enter a sentence and validate their input.
        printf("\n\nEnter a sentence: ");
        scanf(" %[^\n]", str1); // use %[^\n] to read a line of input including spaces until the user presses enter, stores it in str1 variable.

        double total = get_avg_word_len(str1); // call the get_avg_word_len function to calculate the average word length of the entered sentence and store the result in total variable.
        printf("\nAverage word length: %.1f\n", total); // print the average word length to the user with one decimal place.

        do{
            printf("\nWould you like to play again?: \n\nYes: Y \nNo: n \n");
            scanf(" %c", &choice2);

            while(getchar() != '\n');

            if (choice2 != 'y' && choice2 != 'Y' && choice2 != 'n' && choice2 != 'N'){
                printf("Error: Please enter a valid option: \n");
            }

        } while (choice2 != 'y' && choice2 != 'Y' && choice2 != 'n' && choice2 != 'N');
    
    } while (choice2 == 'y' || choice2 == 'Y');
}


//GET average word length function.
double get_avg_word_len(const char* sentence){

    double word_count = 1; // initialize word count to 1 to account for the last word in the sentence that is not followed by a space.
    double char_count = 0; // initialize character count to 0 to count the number of characters in the sentence.
    char choice2;

    printf("\nYour entered sentence is: %s\n", sentence);
        

    for (int i = 0; *(sentence + i) != '\0'; i++) { // loop through each character in the sentence until the null terminator is reached, counting the number of words and characters in the sentence.
        char c = *(sentence + i); // get the current character from the sentence, stores in c variable.
        if (c == ' ') { // if the current character is a space, increment the word count by 1.
            word_count += 1;
        } 
        else if ( c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') { // if the current character is a letter (either uppercase or lowercase), increment the character count by 1.
            char_count += 1;
        }
    }

    if (word_count == 1) { // If there is only one word, return 0.0 to avoid division by zero.
        return 0.0;
    }

    return char_count / word_count; // divides the total number of characters by the total number of words to calculate the average word length and returns the result as a double.
}

/*Hello omar, 
You've reached the end of the code.
*/