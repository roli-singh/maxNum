#include<iostream>
using namespace std;

int main() {
	int num1,num2,num3;
	cout<<" Enter first number";
	cin>>num1;
	cout<<" Enter second number";
	cin>>num2;
	cout<<" Enter third number";
	cin>>num3;

	if(num1>num2 && num1>num3) {
		cout<<"Largest number is: "<<endl<<num1;
	} 
    else if(num2>num1&&num2>num3) {
		cout<<"Largest number is: "<<endl<<num2;
	} 
    else {
		cout<<"Largest number is: "<<endl<<num3;
	}

	return 0;
}