#include<stdio.h>
#include<stdlib.h>

int main() {
    int a[32];
    int n;
    int i;
    int j;

    for (i = 0; i < 32; i++) {
        a[i] = 0;
    }

    printf("Enter the decimal number: ");
    scanf("%d", &n);

    for (i = 31; n > 0; i--) {
        a[i] = n % 2;
        n = n / 2;
    }

    printf("\nConverted to binary your number is: ");  
    for (i = 0; i < 32; i++) {
        printf("%d", a[i]);        
    }

    return 0;
}