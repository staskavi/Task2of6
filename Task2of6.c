#include<stdio.h>

int main() 
{
	char ch = "";
	printf("Enter char: ");
	scanf_s("%c", &ch);
//	printf("Your character is : %c", ch);
	if (ch >= 48 && ch <= 57)
	{
		printf("Your character is a number: %c", ch);
	}
	else if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
	{
		printf("Your character is an english letter: %c", ch);
	}

	return 0;
}