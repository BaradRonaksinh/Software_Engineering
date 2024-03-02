/*1. Write a program of to swap the two values using template.*/

#include<iostream>
using namespace std;
template <typename T>
T swapValues(T &a, T &b){
	T temp = a;
	a = b;
	b = temp;
}
int main(){
	int n1, n2;
	double s1, s2;
	char ch1, ch2;
	
	cout<<"\nInteger value n1:";
	cin>>n1;
	cout<<"\nInteger value n2:";
	cin>>n2;
	cout<<"\nDouble value s1:";
	cin>>s1;
	cout<<"\nDouble value s2:";
	cin>>s2;
	cout<<"\nCharater value ch1:";
	cin>>ch1;
	cout<<"\nCharater value ch2:";
	cin>>ch2;
	
	cout<<"\original Integers: "<<n1<<" and "<<n2;
	swapValues(n1, n2);
	cout<<"\Swapped Integers: "<<n1<<" and "<<n2;
	
	cout<<"\original Double: "<<s1<<" and "<<s2;
	swapValues(s1, s2);
	cout<<"\Swapped Double: "<<s1<<" and "<<s2;
	
	cout<<"\original Charaters: "<<ch1<<" and "<<ch2;
	swapValues(n1, n2);
	cout<<"\Swapped Charaters: "<<ch1<<" and "<<ch2;
}
