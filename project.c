#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomNumber( void );

#define ARRAY_SIZE 20
#define FREQUENCY_SIZE 11


int main(int argc, char const *argv[])
{
	
	size_t answer;
	size_t point;
	size_t i;

	srand( time( NULL ) );

	int frequency[ FREQUENCY_SIZE ] = { 0 };
	int array[ ARRAY_SIZE ];

	for( i = 0; i < ARRAY_SIZE; i++ ){

		array[ i ] = randomNumber();
	}

	for( answer = 0; answer < ARRAY_SIZE; answer++ ){

		++frequency[ array[ answer ] ];
	}

	printf("%s%13s\n", "Rating", "Frequency");

	for( point = 1; point < FREQUENCY_SIZE; point++ ){

		printf("%7lu%13d\n", point, frequency[ point ] );
	}	
}



int randomNumber( void ){

	int n;
	n = 1 + ( rand() % 10 );

	return n;
}