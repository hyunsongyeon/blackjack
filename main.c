#include <stdio.h>
#include <stdlib.h>

#define N_CARDSET			1
#define N_CARD				52
#define N_DOLLAR			50


#define N_MAX_CARDNUM		13
#define N_MAX_USER			5
#define N_MAX_CARDHOLD		10
#define N_MAX_GO			17
#define N_MAX_BET			5

#define N_MIN_ENDCARD		30

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int N;
	do
	{
		printf("Input the number of players (MAX : 5) : ");
		scanf("%d", &N);
		if(N>5)
			printf("Too many players!\n");
	}
	while(N>5);
	
	return 0;
}
