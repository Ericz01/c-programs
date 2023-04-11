//#include <stdio.h>
//#include <unistd.h>
//#include <time.h>
//#include <stdlib.h>

int main()
{
	int hour, minute, second;
	
	printf("Enter current time in hh mm ss format: ");
	("scanf %d%d%d", &hour, &minute, &second);

	while(1)
	{
		//clear output screen
		system("clear");
		
		//print time in HH: MM: SS format
		printf("%02d: %02d: %02d", hour, minute, second);

		//clear output buffer in gcc
		fflush(stdout);

		//increase seconds
		second++;

		//update hour, minute and second
		if(second==60){
			minute++;
			second=0;
		}
		if(minute==60){
			hour++;
			minute=0;
		}
		if(hour==24){
			hour=0;
			minute=0;
			second=0;
		}
		sleep(1);//wait till 1 second
	}
	return 0;
}


