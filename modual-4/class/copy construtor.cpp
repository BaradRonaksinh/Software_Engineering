/*copy construtor*/

#include<iostream>
using namespace std;
class A{
	public:
		int x, y;
		
	A(){
		cout<<"\n Simple Construtor";
	}
	
	A(int p,int q){
		x = p;
		y = q;
	}
	
	A(const A &old){
		x = old.x;
		y = old.y;
	}
	
	void print(){
		cout<<"\n x = "<<x<<"\n y = "<<y;
	}
};

int main(){
	A obj3;
	int a =10,b=20;
	cout<<"\n Copy Constructor";
	A obj1(a,b);
	A obj2(obj1);
	obj2.print();
}
