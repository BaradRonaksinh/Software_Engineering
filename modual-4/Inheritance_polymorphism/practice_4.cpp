/*4. Write a C++ Program display Student Mark sheet using Multiple inheritance.*/

#include<iostream>
using namespace std;
class stud{
	protected:
		string name;
		int std_cl, rollno;
	
	public:
		void get_data(){
			cout<<"\n Enter student name:";
			cin>>name;
			
			cout<<"\n Enter student Class:";
			cin>>std_cl;
			
			cout<<"\n Enter student roll no:";
			cin>>rollno;
		}
};
class marks{
	protected:
		int eng, maths, com;
	public:
		void get_marks(){
			cout<<"\n Enter maths marks:";
			cin>>maths;
			
			cout<<"\n Enter english marks:";
			cin>>eng;
			
			cout<<"\n Enetr computer marks:";
			cin>>com;
		}
};

class put_data:public stud, public marks{
	private:
		int mark;
	public:
		void print_data(){
			mark  = maths + eng + com;
			
			cout<<"\nstudent name		class		roll no		maths		English		computer	total marks \n";
			cout<<name<<"			"<<std_cl<<"		"<<rollno<<"		"<<maths<<"		"<<eng<<"		"<<com<<"		"<<mark;
		}
};

int main(){
	put_data a;
	a.get_data();
	a.get_marks();
	a.print_data();
}
