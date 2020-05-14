#include<iostream>
#include<conio.h>
using namespace std;
int kubus(){
	float s,volume_kubus;
	cout <<"\n---Menghitung Volume Kubus---\n";
	cout <<"\nMasukan panjang rusuk kubus: ";
	cin >> s;
	volume_kubus=s*s*s;
	cout <<"\nVolume kubus adalah: "<<volume_kubus;
}
int balok(){
	float panjang,lebar,tinggi,volume_balok;
	cout <<"\n---Menghitung Volume Balok---\n";
	cout <<"\nMasukan Panjang Balok: ";
	cin >> panjang;
	cout <<"\nMasukan lebar Balok: ";
	cin >> lebar;
	cout <<"\nMasukan tinggi Balok: ";
	cin >> tinggi;
	volume_balok=panjang*lebar*tinggi;
	cout <<"\nVolume balok adalah: "<<volume_balok;
}
int bola(){
	float r,phi=3.14,volume_bola;
	cout <<"\n---Menghitung Volume Bola---\n";
	cout <<"\nMasukan jari-jari bola: ";
	cin >> r;
	volume_bola=4/3*phi*r*r*r;
	cout <<"\nVolume bola adalah: "<<volume_bola;
}
int main(){
kembali:
int a;
cout << "\n---Menghitung Volume Bangun Ruang---\n";
cout << "\n1. kubus";
cout << "\n2. balok";
cout << "\n3. bola";
cout << "\nMasukan nomor jenis bangun ruang yang ingin dicari volumenya: ";
cin >> a;
if (a==1){
	kubus();
	goto kembali;
	cout<< "\n";
}
else if (a==2){
	balok();
	goto kembali;
	cout<< "\n";
}
else if (a==3){
	bola();
	goto kembali;
	cout<< "\n";
}
getch();
}
