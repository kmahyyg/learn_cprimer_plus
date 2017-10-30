#include <stdio.h>

int date2days(int year,int month,int day);
int days2date(int years,int days);

int main(void){
	int decision;
	printf("Choose one option to continue:\n");
	printf("1. You give date , I give you days. \n");
	printf("2. You give days , I give you date. \n");
	scanf("%d",&decision);
	if (decision !=1 && decision !=2)
	    printf("Illegal Input!");
	else if (decision == 1 ){
		int year,month,day;
		printf("Input year now!");
		scanf("%d",&year);
		printf("Input month now!");
		scanf("%d",&month);
		printf("Input day now!");
		scanf("%d",&day);
		date2days(year,month,day);
	}
	else if (decision == 2 ){
		int years,days;
		scanf("%d %d",&years,&days);
		days2date(years,days);
	}
}

int date2days(int year,int month,int day){
	// do a judgement to try can be devided by 4
	int transdays=0;
	printf("%d YY",year);
	printf("%d MM",month);
	printf("%d DD",day);
    return 0;
}

int days2date(int years,int days){
	// judgement of month
	printf("%d DAYS",days);
	printf("%d YEARS",years);
	return 0;
}
