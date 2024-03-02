/*static class me veriable*/

#include<iostream>
using namespace std;
class A{
	public:
		static int count;
};
int A::count = 0;
int main(){
	A ob1, ob2, ob3;
	
	cout<<"\n object 1:"<<A::count;
	A::count++;
	cout<<"\n object 2:"<<ob2.count;
	ob2.count++;
	cout<<"\n object 3:"<<ob3.count;
}

