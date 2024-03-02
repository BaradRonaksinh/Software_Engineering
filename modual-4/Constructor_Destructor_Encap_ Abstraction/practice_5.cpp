/*5. Write a C++ program to create a class called Triangle that has private
member variables for the lengths of its three sides. Implement member
functions to determine if the triangle is equilateral, isosceles, or scalene.*/

#include<iostream>
using namespace std;
class Triangle{
	private:
		int s1,s2,s3;
	public:
		void get_data(){
			cout<<"Enter First side length:";
			cin>>s1;
			
			cout<<"Enter Second side length:";
			cin>>s2;
			
			cout<<"Enter Third side length:";
			cin>>s3;
		}
		void checkTri(){
			if(s1==s2 && s2==s3 && s1==s3){
				cout<<"This is a Equilateral Triangle";
			}else if(s1==s2 || s2==s3 || s1==s3){
				cout<<"This is a Isosceles Triangle";
			}else{
				cout<<"This is a Scalene Triangle";
			}
		}
};

int main(){
	Triangle result;
	result.get_data();
	result.checkTri();
}
