/*8. Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading.*/

#include<iostream>
using namespace std;
class calculator{
	public:
		float sum(float a,float b){
			return a + b;
		}
		int sumofmin(float c,float d){
			return c - d;
		}
		double sumofmul(float e,float f){
			return e * f;
		}
		float sumofdiv(float x,float y){
			return x / y;
		}
};

int main(){
	calculator re;
	cout<<"\n"<<re.sum(50,23);
	cout<<"\n"<<re.sumofmin(50,46);
	cout<<"\n"<<re.sumofmul(23,4);
	cout<<"\n"<<re.sumofdiv(100,5);
}
