/*5. Write a C++ program to create a class called Rectangle that has private
member variables for length and width. Implement member functions to
calculate the rectangle's area and perimeter.*/

#include<iostream>
using namespace std;
class Rectangle{
	private:
		//member variables
		float length, width,a,b;
		
	public:
		
		//member functions
		void get_data(){
			cout<<"\n Enter the length of Rectangle:";
			cin>>length;
			
			cout<<"\n Enter the width of Rectangle:";
			cin>>width;
		}
		
		void area(){
//			float a;
			a = length * width;
			
		}
		
		void perimeter(){
//			float b;
			b = 2*(length + width); 
			
		}
		
		void print_data(){
			cout<<"\n The area of Rectangle:"<<a;
			cout<<"\n The perimeter of Rectangle:"<<b;
		}
};

int main(){
	int areOfR, periOfR;
	
	Rectangle ans;
	
	ans.get_data();
	ans.area();
	ans.perimeter();
	ans.print_data();
	
}
