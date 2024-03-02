/*6. Write a C++ program to implement a class called Employee that has
private member variables for name, employee ID, and salary. Include
member functions to calculate and set salary based on employee
performance. Using of constructor.*/

#include<iostream>
using namespace std;
class Employee{
	private:
		int emp_id,salary, performance,dis;
		char emp_name[25];
	
	public:
		Employee(){
			cout<<"\n Enter Employee Name:";
			cin>>emp_name;
			
			cout<<"\n Enter Employee ID:";
			cin>>emp_id;
			
			cout<<"\n Enter A Base Salary Of Employee:";
			cin>>salary;
			
			cout<<"\n Employee Performance:\n Good(1)\n Average(2)\n Bad(3)\n - ";
			cin>>performance;
			
			
		}
		
		void performanceOfEmp(){
			if(performance='1'){
				dis = 0.25*salary;
				salary += dis ;
				cout<<"\n Our Best Employee of Month "<<emp_name<<" your this month salary are updated & total Salary is: "<<salary;
			}else if(performance = '2'){
				dis = 0.10*salary;
				salary += dis;
				cout<<"\n You are in Right Path "<<emp_name<<" and your this month salary are updated & total Salary is: "<<salary;
			}else if(performance='3'){
				salary;
				cout<<"\n Please Try to upgrade your limits "<<emp_name<<" and your this month salary are updated & total Salary is: "<<salary;
			}else{
				cout<<"\n enter a right grade..";
			}
		}
};

int main(){
	Employee goodNews;
	
	goodNews.performanceOfEmp();
}//problem in discount....
