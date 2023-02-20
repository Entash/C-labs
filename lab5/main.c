#include <stdio.h>
#include <stdlib.h>
int my_strlen(char s[]){//This function returns the number of characters in a string.
    int i = 0;
    while(s[i] != '\0'){
        i++;
    }
    return i;
}
int my_strcpy(char s[], char t[]){//copies the string from array t to array s overwrites the old string
    //int vars of length of each array
    int array_S = my_strlen(s);
    int array_T = my_strlen(t);
    //---------------------------
    if(array_S >= array_T){
        for(int i =0; i<array_S; i++){
            s[i] = t[i];
        }
    return 1;
    }
    else{
        return -1;
    }
}
char *my_strcat (char s [], char t[]){//this function dynamically allocates enough memory to hold a new string which will be the concatenation of string s followed by string t
    //---var list
    int i =0;
    int array_S = my_strlen(s);
    int array_T = my_strlen(t);
    int total_length = array_S + array_T;
    char *new_string = (char*)malloc(total_length*sizeof(char));
    //-------------------------------------------------------------
    for(i = 0; i < array_S; i++){
        new_string[i] = s[i];
    }
    for(i = 0; i < array_T; i++){
        new_string[array_S + i] = t[i];
    }
    new_string[total_length] = '\0';
    return new_string;
}
void my_strreverse (char s[]){//this function overwrites the contents of string s with the reverse of string s
    int i = 0;
    int array_S = my_strlen(s);
    char *temp = (char*)malloc(array_S*sizeof(char));

    for(i =0; i<array_S; i++){//putting into temp array
        temp[i] = s[i];
    }
    for(i =0; i<array_S; i++){//then taking out of the temp and putting into the original
        s[i] = temp[array_S-1-i];
    }
}
int main(){//main test class
    //tester for my_strlen
    int length = my_strlen("this is lab 5");
    printf("the length of the string 'this is lab 5' is: %d\n", length);

    //tester for my_strcpy first one that will go through and return 1
    char array_S[] = "this is the original string";
    char array_T[] = "copy me";
    my_strcpy(array_S,array_T);
    printf("results of copying the string: %s\n", array_S);
    printf("results of my_strcpy: %d\n", my_strcpy(array_S,array_T));

    //tester for my_strcpy second one that will fail and return -1
    char fail_tester1[] = "little";
    char fail_tester2[] = "this one is way bigger and is going to fail";
    my_strcpy(array_T,array_S);
    printf("results of copying the string: %s\n", fail_tester1);
    printf("results of my_strcpy: %d\n", my_strcpy(fail_tester1,fail_tester2));

    //tester for my_strcat
    char con[] = "what if we take this ";
    char cat[] = "and add it to this";
    char *cncat = my_strcat(con,cat);
    printf("results from my_strcat: %s\n", cncat);

    //tester for my_strreverse
    char last_array[] = "im running out of ideas";
    my_strreverse(last_array);
    printf("results from my_strreverse: %s\n", last_array);
    return 0;
}
