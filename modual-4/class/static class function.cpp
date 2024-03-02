/*static class function*/

#include<iostream>
using namespace std;
class A{
	public:
		static int count;
		int a, b;
		static void fun(int x){
			count = x;
		}
		int printCount(){
			return count;
		}
};
int A::count = 0;
int main(){
	A ob1, ob2;
	A::fun(10);
	cout<<ob1.printCount();
	cout<<"\n";
	A::fun(20);
	cout<<ob2.printCount();
}
