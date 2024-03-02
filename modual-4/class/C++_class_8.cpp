/**/

#include<iostream>
using namespace std;

class employee{
	public:
		int emp_no;
		char emp_name[50], emp_email[50];
	
	employee(){
		cout<<"\nEnter Your Number:";
		cin>>emp_no;
		
		cout<<"\nEnter Your Name:";
		cin>>emp_name;
		
		cout<<"\nEnter Email:";
		cin>>emp_email;
	}	
	
	void print_data(){
		cout<<"\n"<<emp_no<<"\t"<<emp_name<<"\t"<<emp_email;
	}
		
};

int main(){
	employee ob1,ob2;
	ob1.print_data();
	ob2.print_data();
}
