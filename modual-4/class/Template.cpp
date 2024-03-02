/*1. Template.*/

#include<iostream>
using namespace std;
template <typename T>
class myClass{
	public:
		T x,y;
		void get_data(T a,T b){
			x = a;
			y = b;
		}
		void print_data(){
			cout<<"\n X:"<<x;
			cout<<"\n Y:"<<y;
		}
};
template <typename T>
T compare(T a,T b){
	if(a>b){
		return a;
	}else{
		return b;
	}
}
int main(){
	cout<<"\n integer:"<<compare(10,20);
	cout<<"\n float:"<<compare(10.25,20.55);
	cout<<"\n charater:"<<compare('a','b');
	
	myClass<int> m1,m2;
	m1.get_data(10.50,20);
	m1.print_data()
}

