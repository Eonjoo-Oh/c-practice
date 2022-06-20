#include <stdio.h>
#include <stdbool.h>

bool is_leap_year(int year){
	//4로 나누어지거나 400으로 나누어지는 경우를 제외하고는 100으로 나누어지면 안 된다)
	return(year % 4 == 0 && (year % 100 || year % 400 == 0));
}
int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void add_days_to_date(int *mm, int *dd, int* yy, int days_left_to_add){
	int days_left_in_month;
	while(days_left_to_add > 0){
		days_left_in_month = days_in_month[*mm] - *dd;
		if(*mm == 2 && is_leap_year(*yy)){
			days_left_in_month++;
		}
		if(days_left_to_add >= days_left_in_month){
			days_left_to_add -= days_left_in_month;
			*dd = 1;
			days_left_to_add--;
			if(*mm == 12){
				*mm = 1;
				*yy = *yy + 1;
			}
			else{
				*mm = *mm + 1;
			}
		}
		else{
			*dd += days_left_to_add;
			days_left_to_add = 0;
		}
	}
}

int main(){
	int year;
	int mm, dd, yy, days_left_to_add;
	printf("Please enter a date between the years 1800 and 10000 and provide the number of days to add to this datein the format\n mm dd yy num: ");
	scanf("%d%d%d%d", &mm, &dd, &yy, &days_left_to_add);
	add_days_to_date(&mm, &dd, &yy, days_left_to_add);
	printf("\n The date is : %d %d %d\n",mm,dd,yy);
}

