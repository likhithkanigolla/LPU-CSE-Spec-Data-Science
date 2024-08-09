#include<stdio.h>
main()
{
	char c;
	printf("Enter the colour");
	scanf("%c",&c);
	switch (c)
	{
		case 'g':
			printf("Green apples");
			break;
			case 'r':
				printf("Red roses");
				break;
				case 'b':
					printf("Black rules");
					break;
					default:
						printf("All colors are nice");
					}
			
	}

