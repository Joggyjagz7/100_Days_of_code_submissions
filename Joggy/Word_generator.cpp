#include <iostream>
#include <cstdlib>
#include <string>

void Motivation();

void Poetry();

void DryJokes();

int main(){
	
	char choice[10];
	cout<<"Welcome to Words Generator!"<<endl;
	cout<<"Enter:"<<endl;
	cout<<" M - Motivational quotes"<<endl;
    cout<<" P - Poetry"<<endl;
    cout<<" D - Dry Jokes"<<endl;
    cout<<" Q - Exit"<<endl;
	cin>>choice;
	
    switch(choice){
    	case "M":
    		Motivation();
    		break;
    	case "P":
    		Poetry();
    		break;
    	case "D":
    		DryJokes();
    		break;
    	default:
    		cout<<"Invalid command"<<endl;
    		break;
    }
	
}

void Motivation(){
	string n;
	srand(time(0));
	cout<<"Get Motivated man"<<endl;
	std::string mot[] = {"You can make it","Believe in yourself","Dont give up"};
	mot.length();
	n = (rand()% n);
	cout<< n;
}

string Poetry(){
	std::string pot [100] = {"Roses are red","Blah blah....","Ummble ble bleh","and the thing go Skirr pa..pa pa pa"};
	int rnd = srand(time(0));
	cout<< pot<<endl;
}

void DryJokes(){
	std::string dj [100] = {"If Messi dissed Benzema, is it called Mercedes Benz","If my watch falls on hard surface, does it make it hard times"
	"If I giude a samsung store, does that make me Guardian of the Galaxy","Whats the only tea that bring u down?..Gravity",
	"If U dash cars does it make u a Kardashian","If a girl I dont like wants a Relationship, AMAZON her"
	"Java guys wear glass because they cant C#",""};
	srand(time(0));
	cout<< dj <<endl;
