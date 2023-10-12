#include <iostream>
using namespace std;
float calculateHours(int hours, int days, int workers);
int main(){
	
	int hours, days, workers, totalworkingHours;
	
	cout << "Enter the needed hours: ";
	cin >> hours;
	
	cout << "Enter the days that firm has: ";
	cin >> days;
	
	cout << "Enter the number of all workers: ";
	cin >> workers;
	
	totalworkingHours = calculateHours(hours,days,workers);
	
	if (totalworkingHours < hours ){
		cout << "Not enough time! " << hours - totalworkingHours << " hours needed.";
	}
	else{
		cout << "Yes!" << totalworkingHours - hours << " hours left.";
	}
}

float calculateHours(int hours, int days, int workers){
	
	float workingDays, workingHours;
	
	workingDays = days * 0.9;
	workingHours = workingDays * (workers * 10);	
	return workingHours;
}
