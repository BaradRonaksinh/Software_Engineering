/*1. WAP to create simple calculator using class.*/

#include<iostream>
using namespace std;
class calculator{
	private:
		int result;
	
	public:
		
		void add(int a,int b){
			result = a + b;
			cout<<"The Addition of A + B is :"<<result;
		}
		void sub(int a,int b){
			result = a - b;
			cout<<"The Subtraction of A - B is :"<<result;
		}
		void mul(int a,int b){
			result = a * b;
			cout<<"The Multiplication of A * B is :"<<result;
		}
		void div(int a,int b){
			result = a / b;
			cout<<"The Division of A / B is :"<<result;
		}		
};

int main(){
	int x, y, choice;
	
	class calculator sumOfNum;
	
	cout<<"\n Enter values of A:";
	cin>>x;
	
	cout<<"\n Enter values of B:";
	cin>>y;
	
	cout<<"\n Addition:1 \n Subtraction:2 \n Multiplications:3 \n Division:4 \n Enter your Choice:";
	cin>>choice;
	
	switch(choice){
		case 1:
			sumOfNum.add(x,y);
			break;
		
		case 2:
			sumOfNum.sub(x,y);
			break;
		
		case 3:
			sumOfNum.mul(x,y);
			break;
			
		case 4:
			sumOfNum.div(x,y);
			break;
			
		default:
			cout<<"\n try to proper value added!!";
	}
}

