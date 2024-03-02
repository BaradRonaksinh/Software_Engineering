/*3. Write a C++ program to create a class called Car that has private
member variables for company, model, and year. Implement member
functions to get and set these variables.*/

#include<iostream>
using namespace std;
class Car{
	private:
		char company[30], model[30];
		int year;
	
	public:
		Car(){
			cout<<"\n Enter Company Name:";
			cin>>company;
			
			cout<<"\n Enter Model Name:";
			cin>>model;
			
			cout<<"\n Enter Year:";
			cin>>year;
		}
		
		void get_data(){
			cout<<"Company"<<"		"<<"Model"<<"		"<<"Year\n";
			cout<<company<<"		"<<model<<"		"<<year;
		}		
};

int main(){
	Car msg;
	
	msg.get_data();
		
}
