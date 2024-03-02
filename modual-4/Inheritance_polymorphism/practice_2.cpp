/*2. Write a C++ Program to find Area of Rectangle using inheritance.*/

#include<iostream>
using namespace std;
class Rectangle{
	protected:
		int width, heigth;
	
	public:
		void get_data(){
			cout<<"\n Enter width:";
			cin>>width;
			
			cout<<"\n Enter height:";
			cin>>heigth;
		}
};

class areOfRec:public Rectangle{
	private:
		int area;
		
	public:
		void areaOfR(){
			area = width * heigth;
			cout<<"\n the area of reactangle is:"<<area;
		}	
};

int main(){
	areOfRec ans;
	ans.get_data();
	ans.areaOfR();
}
