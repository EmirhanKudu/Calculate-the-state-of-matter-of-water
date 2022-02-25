#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	printf("Calculate the state of matter of water\n\n");
	
	int water;
	
	printf("Enter the temperature of the water: ");
	scanf("%d",&water);
	
	if(water<=0)
	{
		printf("water in ice");
	}
	if(water>0 && water<100)
	{
		printf("water in liquid state");
	}
	if(water>=100)
	{
		printf("water in steam");
	}
	
	
	return 0;
}
