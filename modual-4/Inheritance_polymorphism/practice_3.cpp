/*3. Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance).*/

#include<iostream>
using namespace std;
class person{
	protected:
		string name;
		int age;
	public:
		void get_data(){
			cout<<"\nEnter name:";
			cin>>name;
			
			cout<<"\nEnter age:";
			cin>>age;
		}
};
class student{
	private:
		int per;
	public:
		
		void std_per(){
			cout<<"\n Enter student percentage:";
			cin>>per;
		}
};
class teacher:public person, public student{
	private:
		int salary;
	public:
		
		void tech_sal(){
			cout<<"\n Enter Teacher Name:"<<name;
			cout<<"\n Enter teacher salary:";
			cin>>salary;
		}
};

int main(){
	teacher t;
	t.get_data();
	t.std_per();
	t.tech_sal();
}

