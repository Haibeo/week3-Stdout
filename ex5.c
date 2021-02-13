#include<stdio.h>
int main(){
	char day[10];
	int overnight;
	int three_day;
	int weekly;
	printf("Enter the day :\n");
	gets(day);
	printf("Enter the number of overnight three-day and weekly DVDs :");
	scanf("%d %d %d",&overnight,&three_day,&weekly);
	puts(day);
	printf("\nTotal cost is  : %d $",7*overnight + 5*three_day + 3*weekly);
	
	
	


return 0 ;
}

