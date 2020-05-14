#include<stdio.h>

void panggil (int *a, int *b) {
	*a+=2;
	*b+=3;
	printf("\nNilai a dalam fungsi = %i", *a);
	printf("\nNilai b dalam fungsi = %i", *b);
}
int main() {
	int c=1;
	int d=8;
	printf("\nNilai c sebelum digunakan = %i", c);
	printf("\nNilai d sebelum digunakan = %i", d);
	 panggil(&c , &d);
	printf("\nNilai c sebelum digunakan = %i", c);
	printf("\nNilai d sebelum digunakan = %i", d);
}
