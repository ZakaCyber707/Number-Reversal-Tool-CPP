#include<iostream>
using namespace std;
int main()
{
	int number;
	int a;
	int b;
	
	cout<<"\nEnter the number for reverse: ";
	cin>>number;
    a=number/100;
	number=number%100;
	b=number/10;
	number=number%10;
	cout<<"The reverse output is: "<<number<<b<<a;

	
}
