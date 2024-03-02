/*hybrid inheritance*/
#include<iostream>
using namespace std;
class A{
public:
    void funA(){
        cout<<"\nclass A";
    }
};
class B:virtual public A{
    public:
    void funB(){
        cout<<"\nclass B";
    }
};
class C:virtual public A{
    public:
    void funC(){
        cout<<"\nclass C";
    }
};
class D:public B,public C{
    public:
    void funD(){
        cout<<"\nclass D";
    }
};
int main(){
    D obj;
    obj.funA();
}
