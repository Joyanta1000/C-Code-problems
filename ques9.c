#include<stdio.h>

main()
{
	int result_number;
	
	scanf("%d",&result_number);
	
	switch(result_number/10)
	{
		    case 10:
				printf("Honours");
			break;
			case 9:
				printf("Honours");
			break;
			case 8:
				printf("Honours");
			break;
			case 7:
				printf("First Division");
			break;
			case 6:
				printf("First Division");
			break;
			case 5:
				printf("Second Division");
			break;
			case 4:
				printf("Third Division");
			break;
			default:
				printf("Fail");
			break;
	}
}
