/*find num squre and cube*/

#include<iostream>
using namespace std;
class value{
	private:
		int a;//read
		
	public:
		void get_value(int x){
			a = x;//value assing
		}
		int squre(){
			return a*a;//calling
			
		}
		int cube(){
			return a*a*a;
			
		}
};
int main(){
	int b;
	value obj1;
	cout<<"\n enter value:";
	cin>>b;
	obj1.get_value(b);
	cout<<"\n squre:"<<obj1.squre();
	cout<<"\n cube:"<<obj1.cube();
}
