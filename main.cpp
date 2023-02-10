#include <stdio.h>

main()
{
	int day;
	printf("Day? ");
	scanf("%i",&day);
	
	switch(day)
	{
		case 1:
			{
				printf("Mondey");
			}
			break;
		case 2:
			{
				printf("Tuesday");
			}
			break;
		case 3:
			{
				printf("Wednesday");
			}
			break;
		case 4:
			{
				printf("Thursday");
			}
			break;
		case 5:
			{
				printf("Friday");
			}
			break;
		case 6:
			{
				printf("Saturday");
			}
			break;
		case 7:
			{
				printf("Sunday");
			}
			break;
		default:
			{
				printf("Error! There is no such day.");
			}
	}
	return 0;
}
