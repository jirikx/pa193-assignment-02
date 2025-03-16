#include <iostream>

void fun() {
	int x = 42;
	return fun();
}

int main(int c, char **a)
{
	char* x = nullptr;
	char *y = new char[8];
	char z[24];
	bool check = false;
	if (c >= 2) {
		if (strcmp(a[1], "fuzz") == 0) exit(EXIT_FAILURE);
		printf(a[1]);
		if (strcmp(a[1], "stack") == 0) fun();
	}
	for (int i = 0; i < 42; i++) y[i] = 'a';
	scanf_s("%23s", z, 24); //scanf("%s", z);
	system(z);
	printf("%c", *x);
	delete[] y; 
	printf("%c", y[1]); 
	delete[] y;
	x=(char *)malloc(24);
	char m[8]; for (int i = 0; i < 99; i++) m[i] = 'b';
	int max = INT_MAX; max += 42;
	free(&max);
}
