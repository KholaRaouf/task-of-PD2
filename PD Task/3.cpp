#include <iostream>
using namespace std;

double taxCalculator(char type, double price, double FinalPrice);
main()
{
	char type;
	double price, result,FinalPrice;
	cout<<"Enter the vehicle type code (M, E, S, V, T): ";
	cin>>type;
	cout<<"Enter the price of vehicle: $";
	cin>>price;
	
	result = taxCalculator(type,price,FinalPrice);
	
	cout<<"The final price of a vehicle of type "<<type<<" after adding tax is $"<<result;
}
double taxCalculator(char type, double price, double FinalPrice)
{
	float tax;
	if(type == 'M')
	{
		tax=(0.06)*price;
	}
	else if (type=='E')
	{
	   tax=price*(0.08); 	
	}
	else if (type=='S')
	{
	    tax=(0.1)*price;	
	}
	else if (type=='V')
	{
	    tax=(1.2)*price;	
	}
	else if (type=='T')
	{
	   tax=(1.5)*price;
    }
        FinalPrice=price+tax;
        return FinalPrice; 
}
