/**/

#include<iostream>
using namespace std;
class simple{
	private:
		float p, n, r, si;
	
	public:
		
		simple(float a,float b, float c){
			p=a;
			r=b;
			n=c;
		}
		void cal_si(){
			si = (p*n*r)/100;
		}
		void print_si(){
			cout<<"\n Simple Intrest :"<<si;
		}
		
};

int main(){
	
	float x,y,z;
	cout<<"\n Principle Amount:";
	cin>>x;
	cout<<"\n Rate Of Intrest:";
	cin>>y;
	cout<<"\n Number Of Year:";
	cin>>z;
	
	simple si_1(x,y,z);
	si_1.cal_si();
	si_1.print_si();
	
}
