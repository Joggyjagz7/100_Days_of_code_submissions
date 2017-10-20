#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
static char pass []= "ABCDEFGHIJKLMNOPQRSTUVWXYZ" "abcdefghijklmnopqrstuvwxyz" "!@#$%^&*()";
int stringLength = sizeof(pass) -1;
//Random function
char RandomPass(){
	return pass[rand() % stringLength - 1];
}
int main(){
	srand(time(0));
	cout<<"Password Generator Program"<<endl;
	cout<<"This is your new password: "<<endl;
	system("PAUSE");
	cout<<"Loading.....\t....Loading......"<<endl;
	system("PAUSE");
	std::string Str;
	for (unsigned int i = 0;i<10;++i){
		Str += RandomPass();
	}
	cout<< Str <<endl;
}
