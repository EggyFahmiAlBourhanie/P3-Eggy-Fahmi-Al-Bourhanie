#include<iostream>
#include<stdio.h>
using namespace std;
//fungsi contoh
void contoh(int a, int b){
a+=5;
b+=7;
cout<<" \nNilai a dalam fungsi ="<<a;
cout<<" \nNilai b dalam fungsi ="<<b;
}
int main()
{
int c=5;//digit terakhir NIM (F1B019045)
int d=8;//bulan lahir
cout<<"\nNilai c sebelum digunakan = "<<c;
cout<<"\nNilai d sebelum digunakan = "<<d;
contoh(c,d);
//pemannggilan fungsi dengan nilai
cout<<"\nNilai c setelah digunakan = "<<c;
cout<<"\nNilai d setelah digunakan = "<<d;
}
