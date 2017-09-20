/* 	
	"Timer" 
	Created by Demchenko Mucola 
	email demchenkomucola@gmail.com	 
	--------------------------------
	version 0.1
	Get time of user in seconds
	Print time in console

*/

#include <stdio.h>
#include <unistd.h>

int main()
{

	int time;
	int count;

	printf("Timer version 0.1\n");
	printf("Time seconds: ");
	scanf("%d", &time);
	
	for(count = time; count >= 0; count--)
	{


		printf("\033[2J");
		printf("\033[0;0f");
		
		if(count > 0)
		{

			printf("---------\n|   %d   |\n---------\n", count);
	
		}
		else
		{
		
			printf("---------\n|   OK   |\n---------\n");
		
		}
		sleep(1);	

	}

	return 0;

}
