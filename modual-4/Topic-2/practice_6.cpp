/*6. Write a C++ program to create a class called Person that has private
member variables for name, age and country. Implement member
functions to set and get the values of these variables.*/

#include<iostream>
using namespace std;
class Person{
	private:
		//member veriable
		char name[20], country[30];
		int age;
	
	public:
		//member function
		void set_data(){
			cout<<"\n Enter Name: ";
			cin>>name;
			
			cout<<"\n Enter Your Age: ";
			cin>>age;
			
			cout<<"\n Enter Country name: ";
			cin>>country;
		}
		
		void get_data(){
			cout<<"Name"<<"		"<<"Age"<<"		"<<"Country\n";
			cout<<name<<"		"<<age<<"		"<<country;
		}
};

int main(){
	Person me;
	
	me.set_data();
	me.get_data();
		
}
