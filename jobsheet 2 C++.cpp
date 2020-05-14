#include<iostream>
using namespace std;
int genap();
int main(){
genap();
}
int genap(){
cout<<"Bilangan Genap : "<<endl;
for(int i=1;i<=45;i++){
if(i%2 == 0){
cout<<" "<<i;
}
}
}
