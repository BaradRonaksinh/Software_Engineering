/*count gross salary*/

#include<iostream>
using namespace std;
class employee{
	protected:
		char e_name[25];
		int e_id,e_salary;
		
	public:
		get_data(){
			cout<<"\n Enter Name : ";
			cin>>e_name;
			
			cout<<"\n Enter your salary : ";
			cin>>e_salary;
		}
};
class salary:public employee{
	private:
		double pf, pt, g_salary;
	
	public:
		
		void cal_salary(){
			get_data();
			pf = 0.1*e_salary;
			pt = 2500;
			g_salary = (e_salary -pf)-pt;
			cout<<"\n your gross salary is:"<<g_salary;
		}
};

int main(){
	salary rb;
	rb.cal_salary();
}
