/*1. Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance).*/

//Single Inheritance..
#include<iostream>
using namespace std;
class Cricketer{
	protected:
		int i, runs[5];
		char name[25];
	
	public:
		
		void get_data(){
			cout<<"\n Enter name:";
			cin>>name;
			
			cout<<"Enter Runs:";
			for(i=1;i<=5;i++){
				cin>>runs[i];
			}
		}
};

class batsman:public Cricketer{
	private:
		int t_runs, a_runs, b_per;
		
	public:
		void in_data(){
			t_runs=0;
			for(i=1;i<=5;i++){
				t_runs += runs[i];
			}
			cout<<"\nTotal 5 match runs is:"<<t_runs;
			
			a_runs = t_runs/5;
			cout<<"\n average run in 5 match is:"<<a_runs;
			
			for(i=1;i<=5;i++){
				b_per = runs[0];
				runs[i] > b_per;
				b_per = runs[i];
			}
			cout<<"\nBest performance in overall is :"<<b_per;
		}
};

int main(){
	batsman vk;
	vk.get_data();
	vk.in_data();
}

