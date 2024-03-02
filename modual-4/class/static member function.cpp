/*static member function*/
#include<iostream>
using namespace std;
class student{
	public:
		float per;
		static int pass, fail;
		student(float p){
			per = p;
			if(per>36){
				pass++;
			}else{
				fail++;
			}
		}
};
int student::pass = 0;
int student::fail = 0;
int main(){
	student a(45),b(89),c(56),d(34);
	cout<<"\n total pass :"<<student::pass;
	cout<<"\n total fail :"<<student::fail;
}
