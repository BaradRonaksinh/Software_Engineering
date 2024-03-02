/*1. Write a program to find the multiplication values and the cubic values using
inline function.*/

#include<iostream>
using namespace std;
class A{
	public:
		//member function...
		int a, mul, cube;
		//constructor...
		A(){
			cout<<"\n Enter value of A:";
			cin>>a;
			
			mul = a *a;
			cube = a *a *a;
			
			cout<<"\n Multiplication is: "<<mul;
			cout<<"\n Cube is: "<<cube;
		}
};

int main(){
	A msg;
}
