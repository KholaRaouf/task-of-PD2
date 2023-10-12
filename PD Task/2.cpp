#include<iostream>
using namespace std;
double pyramidVolume(double l, double h, double w, string unit,double volume);
int main()
{
	double l,w,h,result,volume;
	string unit;
	cout<<"Enter the length of pyramids (in meters): ";
	cin>>l;
	cout<<"Enter the width of pyramids (in meters): ";
	cin>>w;
	cout<<"Enter the heigth of pyramids (in meters): ";
	cin>>h;
    cout<<"Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
    cin>>unit;
    
	result = pyramidVolume(l,w,h,unit,volume);
	cout <<"The volume of the pyramids is: "<<result<<" cubic "<<unit;
}

double pyramidVolume(double l, double h, double w, string unit,double volume)
{
    if (unit=="millimeters")
    {
       volume = ((l*w*h)/3)/1000;
       	return volume;
    }
    else if (unit=="centimeters")
    {
        volume = ((l*w*h)/3)/100;	
        	return volume;
	}
	else if (unit=="meters")
	{
        volume = ((l*w*h)/3);	
        	return volume;
	}
	else if (unit=="kilometers")
	{ 
        volume = ((l*w*h)/3)*1000;
        	return volume;
	}
}

