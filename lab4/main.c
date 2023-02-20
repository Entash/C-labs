#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char words[999];
    int c;
    int numWhite, result;
    int numDigits = 0;
    int lowerCase = 0;
    int upperCase = 0;
    int k, i = 0;
    printf("Enter any input from the keyboard. To end input z\n");
    do
    {

        c = getchar();
        result = isspace(c);
        if(c != 'z')
        {
            if(result == 0){
                numWhite++;
            }
            //------------------------------------------------------ */
            else{ //if not whitespace put char in array, i think use putchar
                words[i] = c;
            }
            if(isalpha(c)){
                if(isupper(c)){//count uppercase
                    words[i] = tolower(c);
                    upperCase++;
                }
                else{
                    words[i] = toupper(c);
                    lowerCase++;//count lowercase
                }
            }
            if(isdigit(c)){//count digits
                numDigits++;
                words[i] = c;
            }
            i++;
        }
    }
    while(c != 'z');
    while(k < i){//print array here
        putchar(words[k]);
        k++;
    }
    printf("The number of whitespace characters is: %d\n",numWhite);
    printf("The number of digits is: %d\n", numDigits);
    printf("The number of lowercase characters is: %d\n", lowerCase);
    printf("The number of uppercase characters is: %d\n", upperCase);
    printf("Goodbye");
    return 0;
}
