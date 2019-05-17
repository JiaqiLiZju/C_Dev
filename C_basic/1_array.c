#include <stdio.h> 
int main()
{
	int array[] = {1,2,3,4,5};
	int n = sizeof(array) / sizeof(int);
	int *p = array;
	int i;
	for (i = 0; i < n; i++)
		printf("p[%d]...%d\n", i, p[i]);
	system("pause");
	return 0;
}
