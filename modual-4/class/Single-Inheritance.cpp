/*Single-Inheritance*/

#include<iostream>
using namespace std;
class student{
	protected:
		int rollno;
		char name[50];
		
		void get_detail(){
			cout<<"\n Enter rollno:";
			cin>>rollno;
			cout<<"\n enter name:";
			cin>>name;
		}
};
class result:public student{
	private:
		double per;
	public:
		void get_percentage(){
			get_detail();
			cout<<"\n Enter percentage : ";
			cin>>per;
		}
		
		void display_result(){
			cout<<"\n rollno : "<<rollno<<" name : "<<name<<" per : "<<per;
		}
};

int main(){
	result p1;
	p1.get_percentage();
	p1.display_result();
}
