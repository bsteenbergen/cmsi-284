#include<stdio.h>
#include<stdlib.h>

int main() {
    int i, j, n;

    printf("Enter how large you want your table: ");
    scanf("%d", &n);

    printf("%3c|", ' ');
    for (int i = 2; i <= n; i++) {
        printf("%4d", i);
    }
    printf("\n");

    for (int i = 2; i <= n; i++) {
        printf("%4d", i);
        for (int j = 2; j <= n; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }
    return 0;
}