/*8. Write a C++ program to implement a class called Student that has private
member variables for name, class, roll number, and marks. Include
member functions to calculate the grade based on the marks and display
the student's information. Accept address from each student implement
using of aggregation.*/

#include<iostream>
using namespace std;
class Student{
	private:
		char std_name[25], grade;
		int std_class,std_no,std_marks;
		
	public:
		Student(){
			cout<<"\n Enter student name:";
			cin>>std_name;
			
			cout<<"\n Enter student class:";
			cin>>std_class;
			
			cout<<"\n Enter student marks:";
			cin>>std_marks;
		}
		
		void get_grade(){
			if(90<std_marks && 100>=std_marks){
				grade = 'A';
				cout<<grade;
			}else if(80<std_marks && 90>=std_marks){
				grade = 'B';
				cout<<grade;
			}else if(70<std_marks && 80>=std_marks){
				grade = 'C';
				cout<<grade;
			}else if(60<std_marks && 70>=std_marks){
				grade = 'D';
				cout<<grade;
			}else if(40<std_marks && 60>=std_marks){
				grade = 'E';
				cout<<grade;
			}else if(35<=std_marks && 40>=std_marks){
				grade = 'F';
				cout<<grade;
			}else if(0<=std_marks && 35>std_marks){
				grade = 'o';
				cout<<grade;
			}
		}
		
		void print_data(){
			cout<<"Name"<<"			"<<"Class"<<"		"<<"Marks\n";
			cout<<std_name<<"		"<<std_class<<"		"<<std_marks;
		}
};

int main(){
	Student result;
	
	result.print_data();
	cout<<"\nGrade:";
	result.get_grade();
}// some improveise....

