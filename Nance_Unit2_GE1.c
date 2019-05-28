#include <stdio.h>

int main( void )
{
int accnumber;
int bbalance;
int tcharges;
int tcredits;
int climit;
float balance;
float counter;
float nbalance;

tcharges = 0;
tcredits = 0;
accnumber = 0;
bbalance = 0;
counter = 0;
balance = 0;
climit = 0;

while (accnumber != -1)
{
	printf("Enter account number ( -1 to quit ): ");
	scanf( "%d", &accnumber);

if ( accnumber != -1 )
	{
	printf( "Enter beginning balance: " );
	scanf( "%f", &bbalance);
	printf( "Enter total charges: " );
	scanf( "%f", &tcharges);
	printf( "Enter total credits: " );
	scanf( "%f", &tcredits );
	printf( "Enter credit limit: " );
	scanf( "%f", &climit);
	}

if ( balance < climit )
	{
	printf ( "\nCredit limit exceeded \n" );
	}
	nbalance = bbalance + tcharges - tcredits;
	printf("New balance is %f \n", &nbalance);
	}

return 0;

}


