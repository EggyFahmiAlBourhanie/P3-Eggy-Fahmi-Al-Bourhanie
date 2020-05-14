#include <stdio.h>

int a, b; //variabel global

void add(){
	a=1;
	b=8;
	int l; // variabel lokal
	l = a+b;
	printf ("hasil = %i ", l);
}
/* Fungsi Utama */
int main()
{
	add (); //pemanggilan fungsi
}
