#include<iostream>
using namespace std;

int x=10;
void myFunction()
{
	cout<<"The value of my function: "<<x;
	int x=20;
}
main()
{
	myFunction();
	int x=30;
	cout<<"The vlue of x is: "<<x;
	myFunction();
}
