/*4. Write a C++ program to implement a class called Circle that has private
member variables for radius. Include member functions to calculate the
circle's area and circumference.*/

#include<iostream>
using namespace std;

class Circle{
	private:
		//member variables
		float raduis, pai;
		
	public:
		//member functions
		void get_data(){
			cout<<"\nEnter Radius value:";
			cin>>raduis;
		}
		
		void areaOFcircle(){
			pai = 3.14;
			float area = pai * raduis * raduis;
			cout<< "\nThe area of Circle is:"<<area;
		}
		
		void circumferenceOFCircle(){
			pai = 3.14;
			float circumference = 2 * pai *raduis;
			cout<< "\nThe circumference of Circe is:"<<circumference;
		}
};

int main(){
	Circle sum;
	
	sum.get_data();
	
	sum.areaOFcircle();
	sum.circumferenceOFCircle();
	
}
