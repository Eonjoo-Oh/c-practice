#include <stdio.h>

int main()
{
	printf("Let me switch the date in number to English form\n");
	printf("Enter date (mm/dd/yyyy): ");

	int month, date, year;

	scanf("%d %d %d", &month, &date, &year);

	switch(month)
	{
		case 1:
		printf("January");
		break;

		case 2:
		printf("February");
		break;

		case 3:
		printf("March");
		break;

		case 4:
		printf("April");
		break;

		case 5:
		printf("May");
		break;

		case 6:
		printf("June");
		break;

		case 7:
		printf("July");
		break;

		case 8:
		printf("August");
		break;

		case 9:
		printf("November");
		break;

		case 10:
		printf("October");
		break;

		case 11:
		printf("November");
		break;

		default:
		printf("December");
		break;
	}

	printf(" %d", date);

	switch(date)
	{
		case 1: case 21: case 31:
		printf("st");
		break;

		case 2: case 22:
		printf("nd");
		break;

		case 3:
		printf("rd");
		break;
		
		default:
		printf("st");
		break;		
	}

	printf(", %d", year);

	return 0;
}
