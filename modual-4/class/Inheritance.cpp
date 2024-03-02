/*Inheritance*/

#include<iostream>
using namespace std;
class A{
	public://member veriable
		int a;
		//member function
		void funA(){
			cout<<"\n Function of class A";
		}
};
class B:public A{//syntex =  (:public PARENTS-CLASS)
	public:
		int b;
		void funB(){
			cout<<"\n function of class B";
		}
};
int main(){
	B objB;// call child class..
	objB.a=1;
	objB.b =2;
	objB.funA();
	objB.funB();
	A objA;
}
