/*4. Write a C++ program to implement a class called Bank Account that has
private member variables for account number and balance. Include
member functions to deposit and withdraw money from the account.*/

#include<iostream>
using namespace std;
class Bank{
	private:
		int acc_no, balance, password,amount;
	
	public:
		Bank(){
			balance=2000;
			cout<<"\n Enter Account number:";
			cin>>acc_no;
			
			cout<<"\n Enter the Amount:";
			cin>>amount;
		}
		
		void deposite(){
			balance += amount;
			cout<<balance;
		}
		
		void withdraw(){
			
			if(balance>amount){
				balance -= amount;
				cout<<"\n total bank balance is:"<<balance;
			}else{
				cout<<"\n you enter a higher amount as compare to your bank balance..";
			}	
		}
};

int main(){
	int choice;
	Bank msg;
	
	cout<<"\n1) Deposite \n2)Withdraw \nEnter Your Choice:";
	cin>>choice;
	
	switch(choice){
		case 1:
			msg.deposite();
			break;
		
		case 2:
			msg.withdraw();
			break;
		
		default:
			cout<<"\n Enter valid entry!!";
			
	}
	
}//add tyr to inheritance...
