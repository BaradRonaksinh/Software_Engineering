/*7. Write a C++ program to implement a class called Date that has private
member variables for day, month, and year. Include member functions to
set and get these variables, as well as to validate if the date is valid.*/

#include<iostream>
using namespace std;
class Date{
	private:
		int date, month, year;
		
	public:
		Date(){
			cout<<"\n Enter Date: ";
			cin>>date;
			
			cout<<"\n Enter Month: ";
			cin>>month;
			
			cout<<"\n Enter Year: ";
			cin>>year;
			
		}
		
		void print_date(){
			cout<<"\n Date :"<<date<<"-"<<month<<"-"<<year;
		}
};

int main(){
	Date pr;
	
	pr.print_date();
}
