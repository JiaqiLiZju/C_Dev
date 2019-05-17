#include <stdio.h>
#include <stdlib.h>
 
/*对给定的任一不超过1000的正整数n，简单地数一下，需要多少步（砍几下）才能得到n=1？*/
 
int main(void){
	int n = 0, count = 0;
	while (1) {
		count = 0;
		scanf("%d", &n);
		while (n != 1) {
			if (n % 2 == 0)
				n /= 2;
			else
				n = (3 * n + 1) / 2;
			count++;
		}
		printf("%d\n", count);
	}
	
	system("pause");
	return 0;
}

