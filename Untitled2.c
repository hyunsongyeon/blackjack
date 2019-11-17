#include <stdio.h>
#include <stdlib.h>

int getCardNum(int cardnum)
{
	
	int value;
	int A;
	int i;
	
	if(i>=1 || i<=9)
		value = i+1;
	else if(i>=10||i<=12)
		value = 10;
	else if(i = 0)
		value = A; 
	
	return value;
}

int main(int argc, char *argv[])
{
	int cardtray[4][13];
	int i,j;
	int cardnum = 0;
	
	
	for(i=0;i<4;i++)
		{	
			for(j=0;j<13;j++)
				cardtray[i][j] = cardnum++;
			cardnum = 0;
		}
	
	printf("%d", getCardNum(9));
	return 0;	
}

