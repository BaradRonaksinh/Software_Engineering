/***/
#include<iostream>
using namespace std;
class shape{
	protected:
		virtual void area() = 0;
};
class react:public shape{
	int a, b,areaOf;
	public:
		
		void area(){
			cout<<"\n enter value of width and height:";
			cin>>a;
			cin>>b;
			areaOf = a * b;
			cout<<areaOf;
		}
};

class circle:public shape{
	int r, area;
	public:
		
		void area(){
			cout<<"\n enter radius:";
			cin>>r;
			area = 3.14 * r* r;
			cout<<area;
		}
		
};//baki he

class square:public shape{
	int a, area;
	public:
		
		void area(){
			cout<<"\n Enter length";
			cin>>a;
			area = a*a;
			cout<<area;
		}
};

int main(){
	circle c;
	c.area();
	react r;
	r.area();
	square s;
	s.area();
	
//	return 0;
}
