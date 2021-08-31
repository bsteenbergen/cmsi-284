#include<stdio.h>
int main() {
	int decimalNumber,remainder,quotient, bitSize;
	int i=1,j,temp;
	char hexadecimalNumber[100];
	printf("Enter any decimal number: ");
	scanf("%d" "%d",&decimalNumber,&bitSize);
    if (bitSize == 32)
    {
        printf("Hexadecimal value is (Alphabet in capital letters): 0x%08X\n",decimalNumber);
    } 
    if (bitSize == 64)
    {
        printf("Hexadecimal value is (Alphabet in capital letters): 0x%016X\n",decimalNumber);
    } 
	return 0;
}