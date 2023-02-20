#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,k,i = 0;
    printf("please enter an integer \n");
    scanf("%d",&num);

    for(i=10; i<num; i=i*10);
        while(num!=0){
            i = i/10;   //the process
            k = num/i;  //of seperating
            num = num%i;//the nums to print
            printf("%d",k);
            printf("   ");//the spacing of 3
        }
    return 0;
}
