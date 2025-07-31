#include<stdio.h>

int main() 
{
	char ch = "";
	printf("Enter char: ");
	scanf_s("%c", &ch);

	if (ch >= 48 && ch <= 57)
	{
		printf("Your character is a number: %c", ch);
	}
	else if (ch >= 65 && ch <= 90)
	{
		printf("Your character is a capital english letter: %c", ch);
	}
	else if (ch >= 97 && ch <= 122)
	{
		printf("Your character is a small english letter: %c", ch);
	}
	else
		printf("Your char is : %c", ch);

	return 0;
}