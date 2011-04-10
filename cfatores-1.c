#include <stdio.h>

int ehprimo( int n) {
	int i;
	if( n <= 2 ) return 1;
	for( i = 2; i < n; i++ )
		if( n % i == 0 ) return 0;
	return 1;
}

int main() {
	int n, c, i;
	while( scanf( "%d", &n) == 1 && n > 0 ) {
		c = 0;
		for( i = 2; i <= n; i++ )
			if( n % i == 0 && ehprimo(i) )
				c++;
		printf( "%d : %d\n", n , c);
	}	
	return 0;
}
