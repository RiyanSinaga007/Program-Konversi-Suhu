#include<iostream>
using namespace std;

int main(){
	float celcius,reamur,fahrenheit;
	
	cout<<"masukan suhu dalam celcius:";
	cin>>celcius;
	cout<<"\nkonversi dalam fahrenheit:"<<(celcius*9/5)+32;
	cout<<"\nkonversi dalam reamur :"<<celcius*4/5;
	
	return 0;
	
}
