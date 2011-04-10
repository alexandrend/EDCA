#include <stdio.h>

char ehprimo[500001] = {0};

void crivo() {
	int i,j;
	ehprimo[2] = 1;
	for( i = 3; i <= 500000; i++,i++) ehprimo[i] = 1;  
	for( i = 3; i <= 500000; i++,i++)
		if( ehprimo[i] )
			for( j = i + i; j <= 500000; j+= i)
				ehprimo[j] = 0;
}

int main() {
	int n, c, i;

	crivo();
	while( scanf( "%d", &n) == 1 && n > 0 ) {
		if( n <= 500000 && ehprimo[n]) c = 1;
		else {
			c = 0;
			for( i = 2; i * i < n; i++ ) {
				if( n % i == 0 ) {
					if( ehprimo[i] ) c++;
					if( ehprimo[n/i]) c++;
				}		
			}
			if( i * i == n && ehprimo[i]) c++;
			if( c == 0 ) c = 1;
		}
		printf( "%d : %d\n", n , c);
	}
	return 0;
}
