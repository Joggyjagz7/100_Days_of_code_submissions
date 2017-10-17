#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int main(){
	int userchoice;
	double Cel, Fah;
	cout<<"WELCOME TO THE TEMPERATURE CONVERTER"<<endl;
	cout<<"MENU:  "<<endl;
	cout<<"1. Conversion from Celsius to Fahrenheit"<<endl;
	cout<<"2. Conversion from Fahrenheit to Celsius"<<endl;
	cin>>userchoice;
	/*Switch case for temperature conversion
	Farenheit = Celsius * 1.8 + 3.2
	Celsius = Fahrenheit - 3.2 / 1.8*/
	switch(userchoice)
	{
		case 1:
			system("cls");
			cout<<"Celsius to Fahrenheit Converter"<<endl;
			cout<<"Enter the Celsius Temperature"<<endl;
			cin>>Cel;
			Fah = (Cel * 1.8) + 32;
			cout<<"The Fahrenheit Temperature is "<< Fah <<endl;
			break;
		
		case 2:
			system("cls");
			cout<<"Fahrenheit to Celsius Converter"<<endl;
			cout<<"Enter the Fahrenheit Temperature"<<endl;
			cin>>Fah;
			Cel = (Fah - 32 )/ 1.8 ;
			cout<<"The Celsius  Temprature is "<< Cel <<endl;
			break;
	}
}
