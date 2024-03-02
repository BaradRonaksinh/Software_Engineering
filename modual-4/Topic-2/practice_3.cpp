/*4. Write a C++ program to implement a class called Circle that has private
member variables for radius. Include member functions to calculate the
circle's area and circumference.*/

#include<iostream>
using namespace std;

class Circle{
	private:
		int raduis ,pai;
		
	public:
		void get_data(){
			cout<<"Enter Radius value:";
			cin>>raduis;
		}
		
		void areaOFcircle(){
			pai = 3.14;
			int area = pai * raduis * raduis;
			cout<< "The area of Circle is:"<<area;
		}
		
		void circumferenceOFCircle(){
			pai = 3.14;
			int circumference = 2 * pai *raduis;
			cout<< "The circumference of Circe is:"<<circumference;
		}
};

int main(){
	Circle sum;
	
	
	sum.get_data();
	
	sum.areaOFcircle();
	sum.circumferenceOFCircle();
	
}
