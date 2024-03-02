/* making a calculater...*/

#include<iostream>
using namespace std;
class calsi{//create a class...
	private:
		int result;
		
	public:
		void add(int x, int y){ //call a methods
			result = x+y;
			cout<<"The Addition of A + B is :"<<result;
		}
		
		void sub(int x, int y){ //call a methods
			result = x-y;
			cout<<"The Subtraction of A - B is :"<<result;
		}
		
		void mul(int x, int y){ //call a methods
			result = x*y;
			cout<<"The Multiplication of A * B is :"<<result;
		}
		
		void div(int x, int y){ //call a methods
			result = x/y;
			cout<<"The Division of A / B is :"<<result;
		}			
};

int main(){
	
	int u,v,choice;
	calsi sum; //create Object...
	
	cout<<"\n Enter values of A:";
	cin>>u;
	
	cout<<"\n Enter values of B:";
	cin>>v;
	
	cout<<"\n Addition:1 \n Subtraction:2 \n Multiplications:3 \n Division:4 \n Enter your Choice:";
	cin>>choice;
	
	switch(choice){
		
		case 1:
			sum.add(u,v);
			break;
		case 2:
			sum.sub(u,v);
			break;
		case 3:
			sum.mul(u,v);
			break;
		case 4:
			sum.div(u,v);
			break;
		default:
			cout<<"Enter valid values:";
			break;
	}

}//try all function method.....
