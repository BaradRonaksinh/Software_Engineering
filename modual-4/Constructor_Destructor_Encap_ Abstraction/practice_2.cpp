/*2. Write a program of Addition, Subtraction, Division, Multiplication using
constructor.*/

#include<iostream>
using namespace std;
class Calculator{
	public:
		int a, b, result;
		
		Calculator(){
			cout<<"\n Enter first value:";
			cin>>a;
			
			cout<<"\n Enter second value:";
			cin>>b;
		}
		
		void add(){
			result = a+b;
			cout<<result;
		}
		
		void sub(){
			result = a-b;
			cout<<result;
		}
		
		void mul(){
			result = a*b;
			cout<<result;
		}
		
		void div(){
			result = a/b;
			cout<<result;
		}
};

int main(){
	int choice;
	Calculator msg;
	
	cout<<"\n 1) Addition \n 2) Subtraction \n 3) Multiplication \n 4) Division \n Your Choice: ";
	cin>>choice;
	
	switch(choice){
		case 1:
			msg.add();
			break;
		
		case 2:
			msg.sub();
			break;
		
		case 3:
			msg.mul();
			break;
		
		case 4:
			msg.div();
			break;
			
		default:
			cout<<"\n Enter A Right Choice..";	
	}
}
