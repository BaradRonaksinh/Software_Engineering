/*Constructor*/

#include<iostream>
using namespace std;
class A{
	public:
		A(){
			cout<<"Constructor\n";
		}
		void print_data(){
			cout<<"class A in print by method-je create fun 6 a call karyo che.";
		}
};

int main(){
	A msg1,msg2,msg3;
	
	msg1;
	msg1.print_data();
}
