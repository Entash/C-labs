#include <stdlib.h>
#include <stdio.h>
#define N 20
/* this program takes 2 large numbers and multiplies them digit by digit */
void add(int sum[], int a[], int b[]);
void prn_num(int a[]);

int main(void)
{
    int a[N] = {7, 5, 9, 8, 9, 7, 5, 0, 0, 9, 9, 0, 8, 8};
    int b[N] = {7, 7, 5, 3, 1, 2, 8, 8, 9, 6, 7, 7};
    int sum[N];
    //test case 1--------------------------------
    printf("Integer a: ");
    prn_num(a);
    printf("Integer b: ");
    prn_num(b);
    mul(sum, a, b);
    printf("      Total: ");
    prn_num(sum);
    printf("\n");

    //test case 2--------------------------------
    int c[N] = {1, 2, 3, 4, 5, 7};
    int d[N] = {6, 2, 1, 7, 2, 3, 1, 8, 9, 6, 7};
    printf("Integer c: ");
    prn_num(c);
    printf("Integer d: ");
    prn_num(d);
    mul(sum, c, d);
    printf("      Total: ");
    prn_num(sum);
    printf("\n");

    //test case 3--------------------------------
    int e[N] = {7, 5, 1, 8, 9, 5, 5, 0, 0, 9, 2, 3, 8, 2, 1};
    int f[N] = {7, 7, 5, 3, 1, 2};
    printf("Integer e: ");
    prn_num(e);
    printf("Integer f: ");
    prn_num(f);
    mul(sum, e, f);
    printf("      Total: ");
    prn_num(sum);
    printf("\n");
    return 0;
}

void prn_num(int a[])
{
    int i;

    for (i = N - 1; i >= 0; --i) {
        if (a[i] == 0)
            putchar(' ');
        else
            break;
    }
    for (; i >= 0; --i)
        printf("%d", a[i]);
    putchar('\n');
}

void add(int sum[], int a[], int b[]){
    int carry = 0;
    for(int i =0; i<N;i++){
        int total = a[i] + b[i] + carry;
        sum[i] = total % 10;
        carry = total / 10;
    }
}
void mul(int mul[], int a[], int b[]){
    for(int i = 0; i<N; i++){
        int temp[2*N] = {0};
        int carry = 0;
        for(int k = 0; k<N; k++){
            int mult = a[k] * b[i] + carry;
            temp[i + k] = (mult) % 10;
            carry = mult / 10;
        }
        add(mul, mul, temp);
    }
}

