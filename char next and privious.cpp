#include<stdio.h>
int main()
{
	char alpha;
	printf("Enter any alphabate: ");
	scanf("%c",&alpha);
	alpha++;
	printf("Next alphabate is : %c \n",alpha);
	alpha--;
	alpha--;
	printf("privious alphabate is : %c \n",alpha);
	return 0;
}
