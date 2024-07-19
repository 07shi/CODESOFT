#include<iostream>
using namespace std;


int main(){
	int a,b;
	char op;
	std::cout << "Simple Calculator: SHIVAM SINGH" << std::endl;
	cout<<"Enter the value of First Operand:";
	cin>>a;
	
	cout<<"Enter the value of Second Operand:";
	cin>>b;
	
	cout<<"Enter the Operation you want to perform(+/-/*/%/(/)):";
	cin>>op;
	
	switch(op){
		case '+': cout<<"Addition of two Operand is:"<<(a+b)<<endl;
		break;
		
		case '-': cout<<"Substraction of two Operand is:"<<(a-b)<<endl;
		break;
		
		case '*': cout<<"Multiplication of two Operand is: "<<(a*b)<<endl;
		break;
		
		case '/': cout<<"Division of two Operand is: "<<(a/b)<<endl;
		break;
		
		case '%': cout<<"Modulus of two Operand is:"<<(a%b)<<endl;
		break;
		
	}
	return 0;
}
