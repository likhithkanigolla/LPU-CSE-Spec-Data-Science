#include<stdio.h>
main()
{
	char c;
	printf("Enter your choice");
	scanf("%c",&c);
	switch ( c )
	{
		case'@':
			printf("@@@");
			break;
			case'2':
				printf("222");
				break;
				case'*':
					printf("***");
					break;
					default:
						printf("INVALID CHOICE");
						
	}
}
