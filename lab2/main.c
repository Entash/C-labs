#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letter;
    char choice;
    int number= 0;


    while(choice == 'y'){//goes until user selects y

        printf("Base of input integer: Enter d for decimal, h for hexadecimal or o for octal: ");
        scanf("%c",&letter);//takes in d, h, or o
        printf("Enter the number: ");
        scanf("%d", &number);

        if(letter == 'd'){//d for decimal
            printf(" \n ");
            printf("%d",number);
            printf(" \n ");

        }
        else if(letter == 'h'){//h for hexadecimal
            printf(" \n ");
            printf("%x",number);
            printf(" \n ");

        }
        else{//o for octal
            printf(" \n ");
            printf("%o",number);
            printf(" \n ");

        }

        //------------------------------------------------------------------

        printf("Do you wish to do another? (Y or N):  ");
        scanf("%c", choice); //y or n

    }

   return 0;
}
