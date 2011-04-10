#include <stdio.h>

char primo[1000001] = {0};

int ehprimo( int n) {
	int i;
	if( primo[n] == 0 ) {
		for( i = 2; i * i <= n; i++ )
			if( n % i == 0 ) { 
				primo[n] = -1;	
				return 0;
			}
		primo[n] = 1;
	}
	return primo[n] == 1;
}

int main() {
	int n, c, i;
	primo[2] = 1;
	while( scanf( "%d", &n) == 1 && n > 0 ) {
		if( ehprimo(n) ) c = 1;
		else {
			c = 0;
			for( i = 2; i * i <= n; i++ ) {
				if( n % i == 0 ) {
					if( ehprimo(i) ) c++;
					if( ehprimo(n/i)) c++;
				}		
			}
			if( i * i == n && ehprimo(i)) c++;
		}
		printf( "%d : %d\n", n , c);
	}
	return 0;
}
