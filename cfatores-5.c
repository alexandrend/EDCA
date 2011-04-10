#include <stdio.h>

int main(int argn, char *args ){

	char sieve[1000001] = {0};
	int i, j, n;

	for( i = 2; i <= 1000000; i++ )
		if( sieve[i] == 0)
			for(j = i; j <= 1000000; j+=i)
				sieve[j]++;

	while( scanf( "%d", &n) == 1 && n > 0 )
		printf( "%d : %d\n", n , sieve[n]);	

	return 0;
}
