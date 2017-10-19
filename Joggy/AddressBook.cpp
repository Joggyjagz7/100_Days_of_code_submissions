#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
using namespace std;
int main(){
	string name,homeAdd;
	int phoneNo;
	ofstream myfile;
	myfile.open ("addressbook.txt" , ios::in|ios::out);
	cout<<"ADDRESS BOOK OF LIFE"<<endl;
	cout<<"What is your name: "<<endl;
	getline (cin,name);
	cout<<"Your phone number: " <<endl;
	cin>>phoneNo;
	myfile << name<<endl;
	myfile<<phoneNo <<endl;
	cout<<"The Contant Information is :"<<endl;
	cout<<"    "<<myfile<<endl;
	string line;
	ifstream myfilee ("addressbook.txt");
	myfile == myfilee;
	if (myfilee.is_open()){
		while (getline  (myfilee, line)){
			cout<<line<<endl;
		}
		myfilee.close();
	}

}
