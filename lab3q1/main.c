#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i1;
    int i2 = 50;
    double d1;
    double d2 = 80;

    int *intptr1;
    int *intptr2;
    double *dubptr1;
    double *dubptr2;


    //--------question 1 start--------------------------------------------------
    printf("question 1 \n");

    printf("%d", &i1);
    printf("\n");

    printf("%d", &i2);
    printf("\n");

    printf("%d", &d1);
    printf("\n");

    printf("%d", &d2);
    printf("\n");
    //--------question 2 start--------------------------------------------------
    printf("\nquestion 2 \n");

    printf("%p", &intptr1);
    printf("\n");

    printf("%p", &intptr2);
    printf("\n");

    printf("%p", &dubptr1);
    printf("\n");

    printf("%p", &dubptr2);
    printf("\n");
    //--------question 3 start--------------------------------------------------
    intptr1 = &i1;
    intptr2 = &i2;
    dubptr1 = &d1;
    dubptr2 = &d2;

    printf("\nquestion 3 \n");

    printf("%d", *intptr1);
    printf("\n");

    printf("%d", *intptr2);
    printf("\n");

    printf("%d", *dubptr1);
    printf("\n");

    printf("%d", *dubptr2);
    printf("\n");

    //----------question 4 start--------------------------------------------------
    printf("\nquestion 4 \n");

    intptr1 = &intptr2;
    printf("%d\n", intptr1);
    printf("%d\n", intptr2);
    //----------question 5 start--------------------------------------------------
    printf("\nquestion 5 \n");
    dubptr1 = (double*)intptr1;
    printf("%p\n", &dubptr1);
    printf("%p\n", &intptr1);

    //----------question 6 start--------------------------------------------------
    printf("\nquestion 6 \n");
    intptr1 = NULL;
    printf("%p\n", &intptr1);

    //----------question 7 start--------------------------------------------------
    printf("\nquestion 7 \n");
    *intptr2;
    printf("%p\n", &intptr2);

    //----------question 8 start--------------------------------------------------
    printf("\nquestion 8 \n");
    *intptr2 = 100;
    printf("%p\n", &intptr2);

    //----------question 9 start--------------------------------------------------
    printf("\nquestion 9 \n");
    intptr2++;
    printf("%p\n", &intptr2);

    //----------question 10 start--------------------------------------------------
    printf("\nquestion 10 \n");
    intptr2--;
    printf("%p\n", &intptr2);

    //----------question 11 start--------------------------------------------------
    *dubptr2;
    printf("%p\n", &dubptr2);

    //----------question 12 start--------------------------------------------------
    printf("\nquestion 12 \n");
    dubptr2++;
    printf("%p\n", &dubptr2);

    //----------question 13 start--------------------------------------------------
    printf("\nquestion 13 \n");
    dubptr2--;
    printf("%p\n", &dubptr2);

    //----------question 14 start--------------------------------------------------
    printf("\nquestion 14 \n");
    intptr1 = &i1;
    if(intptr1 == intptr2){
        printf("problem 14: yes intptr1 == intptr2 \n");
    }
    if(*intptr1 == *intptr2){
        printf("problem 14: yes *intptr1 == * intptr2 \n");
    }

    intptr1 = &i2;
    if(intptr1 == intptr2){
        printf("problem 15: yes intptr1 == intptr2 \n");
    }
    if(*intptr1 == *intptr2){
        printf("problem 15: yes *intptr1 == * intptr2 \n");
    }

    //----------question 15 start--------------------------------------------------
    printf("\nquestion 15 \n");
    double *pi_ptr;
    pi_ptr = malloc(sizeof(double));
    *pi_ptr = 3.1416;
    printf("%p\n", &pi_ptr);
    printf("%p\n", *pi_ptr);

    //----------question 16 start--------------------------------------------------
    printf("\nquestion 16 \n");
    *dubptr1 = *intptr1;
    return 0;
}
