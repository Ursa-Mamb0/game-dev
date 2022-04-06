#include <iostream>
/*Text based adventure game made by sreedhar g.n coded in cpp*/
using namespace std;
int main(){
	cout<<"|//////////////////WELCOME TO CABIN ESCAPE v 0.00//////////////////|"<<endl;
	cout<<"ENTER YOUR NAME:";
	string  name;
	cin>>name;
	cout<<"hello"<<" "<<name<<" "<<"you find yourself locked inside a mansion.You look outside there is nothing but woods"<<endl;
	cout<<"up north there is a door and to your left there is a staircase leading to the basement"<<endl;
	cout<<"enter action:";
	string action;/*action-specify which direction to move north,soutn, east, west*/
	cin>>action;
	if (action=="north"){
		cout<<"you enter a room .The air carries the smell of rotten flesh"<<endl;
		cout<<"you find the following items in the room"<<endl;
		cout<<"1.jar"<<endl;
		cout<<"2.diary"<<endl;
		cout<<"3. grill door"<<endl;
	}
	cout<<"interact with an object:";/*interact with objects by typing their name*/
	string interact;
	cin>>interact;
	if (interact=="jar"){
		cout<<"something is clinging inside the jar"<<endl;
	}
	else if(interact=="diary"){
		cout<<"the wicked witch does her sorcery in the basement"<<endl;
	}
	else {
		cout<<"grill door is locked"<<endl;
	}
	cout<<"would you like to go back Y/N :";
	string decision;
	cin>>decision;
	if (decision=="Y"){
		cout<<"you are back in the living room";
		
	}
	else {
		cout<<"your presence triggered the witches soul which chokes you to death"<<endl;
		cout<<"GAME OVER!!!!"<<endl;
		exit(0);
	}
	
	
	
	return 0;
	
}
