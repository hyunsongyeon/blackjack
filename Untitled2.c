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

int CardTray[N_CARDSET*N_CARD];
int cardIndex = 0;

int dollar[N_MAX_USER];						//dollars that each player has
int n_user;									//number of users

int cardhold[N_MAX_USER+1][N_MAX_CARDHOLD];	//cards that currently the players hold
int cardSum[N_MAX_USER];					//sum of the cards
int bet[N_MAX_USER];						//current betting 
int gameEnd = 0; 							//game end flag



int mixCardTray(void) 
{
	
	srand((unsigned)time(NULL));
	
	int i;
	for(i=0;i<52;i++)
		CardTray[i] = rand() % 51;
		
	printf("--> card is mixed and put into the tray\n");
	
	return CardTray[N_CARDSET*N_CARD];
}

int pullCard(void) 
{	
	srand((unsigned)time(NULL));
	return CardTray[rand()%51];
}


void offerCards(void) {
	int n_user = 3;
	
	printf("----------- CARD OFFERING ---------------\n");
	
	int i;
	//1. give two card for each players
	for (i=0;i<n_user;i++)
	{
		cardhold[i][0] = pullCard();
		cardhold[i][1] = pullCard();
	}
	//2. give two card for the operator
	cardhold[n_user][0] = pullCard();
	cardhold[n_user][1] = pullCard();
	
	int res = getCardNum(cardhold[n_user][0]);
	printf("%s", res);
	
	return;
}

int getCardNum(int cardnum) 
{
	char* shape;
	
	if(cardnum >=0)
		shape = "King";
	else
		shape = "Queen";
		
			
	return shape;
}



int main(int argc, char *argv[]) {
	
	mixCardTray();
	offerCards();
	
	
}



