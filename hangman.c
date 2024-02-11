// used for standard input and output
#include <stdio.h>
// usied for dynamic array allocation
#include <stdlib.h>
// used for strings
#include <string.h>
// used for random number generation
#include <time.h>

//included function to generate the ascii images
void ascii_art(int number);

int main()
{
    //creating an array of pointers pointing to a string
    char *word_list[] = {"apple", "avocado", "orange", "igloo", "mandarin"};
    //setting a counter to keep track of how many guesses
    int guess = 0;
    //setting a counter to keep track of how many letters found
    int found = 0;

    //seeding the random number generator so that it's different everytime
    srand(time(NULL));
    //assigning an int to a random number 0 to 4
    int rand_num = rand() % 5;
    //setting a character variable
    char letter;
    //choosing a word from the dynamic array
    char *str = word_list[rand_num];

    //finding the length of the str
    int len = strlen(str);
    //creating a dynamically allocated array
    char *underscore = malloc(sizeof(char) * len + 1);

    printf("Here is how many letters are in the word: ");
    
    //use a for loop to fill the dyanmically allocated array with _
    for (int i = 0; i < len; i++)
    {
        underscore[i] = '_';
        printf("_ ");
    }

    //place a null terminator at the end of the string to indicate the end
    underscore[len] = '\0';

    printf("\n");

    //creating a forever while loop
    while (1)
    {
        //reset found flag everytime
        found = 0;
        printf("\n");
        printf("Please enter a letter: ");
        //allowing user input for a character
        scanf(" %c", &letter);
        //clearing the input puffer when newline is reached
        while (getchar() != '\n');
        //creatng to check if the guess is the same as the actual word, if so replace _ with the character
        for (int i = 0; i < len; i++)
        {
            if (letter == str[i])
            {
                underscore[i] = letter;
            }
        }

        
        //checking if the guess is within the word, if so change found and break out of for loop
        for (int i = 0; i < len; i++)
        {
            if (underscore[i] == letter)
            {
                found = 1;
                break;
            }
        }


        //if word is not found increment guess
        if (found == 0)
        {
            guess++;
        }

        ascii_art(guess);

        printf("\n");
        printf("Here are the letters you got right: ");

        //prints out the letters the user got right
        for (int i = 0; i < len; i++)
        {
            printf("%c", underscore[i]);
            printf(" ");
        }

        //check if max guesses were made, if so break out of while loop
        if (guess == 7)
        {
            break;
        }

        //checks if any underscores are left, if there are no more then break out of while loop
        if (strchr(underscore, '_') == NULL)
        {
            break;
        }
    }

    //check if max guess was reached, if so game is lost
    if (guess == 7)
    {
        printf("\n");
        printf("You have lost the game");
        printf("\n");
    }

    //check if there are no more _, if so game is won
    if (strchr(underscore, '_') == NULL)
    {
        printf("\n");
        printf("You have won the game");
        printf("\n");
    }

    //free the dynamic memory
    free(underscore);

    return 0;
}

void ascii_art(int number)
{
    switch (number)
    {
    case 1:
        printf("+-----+");
        printf("\n");
        printf("|    |");
        printf("\n");
        printf("     |");
        printf("\n");
        printf("     |");
        printf("\n");
        printf("     |");
        printf("\n");
        printf("     |");
        printf("\n");
        printf("==========");
        break;

    case 2:
        printf("+-----+");
        printf("\n");
        printf("|    |");
        printf("\n");
        printf("O    |");
        printf("\n");
        printf("     |");
        printf("\n");
        printf("     |");
        printf("\n");
        printf("     |");
        printf("\n");
        printf("==========");
        break;

    case 3:
        printf("+-----+");
        printf("\n");
        printf("|    |");
        printf("\n");
        printf("O    |");
        printf("\n");
        printf("|    |");
        printf("\n");
        printf("     |");
        printf("\n");
        printf("     |");
        printf("\n");
        printf("     |");
        printf("\n");
        printf("==========");
        break;

    case 4:
        printf("+-----+");
        printf("\n");
        printf(" |   |");
        printf("\n");
        printf(" O   |");
        printf("\n");
        printf("/|   |");
        printf("\n");
        printf("     |");
        printf("\n");
        printf("     |");
        printf("\n");
        printf("     |");
        printf("\n");
        printf("==========");
        break;

    case 5:
        printf("+-----+");
        printf("\n");
        printf(" |   |");
        printf("\n");
        printf(" O   |");
        printf("\n");
        printf("/|\\  |");
        printf("\n");
        printf("     |");
        printf("\n");
        printf("     |");
        printf("\n");
        printf("     |");
        printf("\n");
        printf("==========");
        break;

    case 6:
        printf("+-----+");
        printf("\n");
        printf(" |   |");
        printf("\n");
        printf(" O   |");
        printf("\n");
        printf("/|\\  |");
        printf("\n");
        printf("/    |");
        printf("\n");
        printf("     |");
        printf("\n");
        printf("     |");
        printf("\n");
        printf("==========");
        break;

    case 7:
        printf("+-----+");
        printf("\n");
        printf(" |   |");
        printf("\n");
        printf(" O   |");
        printf("\n");
        printf("/|\\  |");
        printf("\n");
        printf("/ \\  |");
        printf("\n");
        printf("     |");
        printf("\n");
        printf("     |");
        printf("\n");
        printf("==========");
        break;

    default:
    break;
    }
}