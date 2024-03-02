/**/

#include<iostream>
using namespace std;
class factorial{
	private:
		int i,num,fac;
	
	public:
		factorial(int x){
			num =x;
		}
		
		void cal_fac(){
			for(i=1;i<=num;i++){
				fac *= i;
			}
		}
		
		void print_fac(){
			cout<<"\n factorial number is:"<<fac;
		}
};

int main(){
	int number;
	cout<<"\n Enter Number:";
	cin>>number;
	
	factorial sum(number);
	sum.cal_fac();
	sum.print_fac();
}
