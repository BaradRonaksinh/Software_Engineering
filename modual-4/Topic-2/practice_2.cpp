/*2. Define a class to represent a bank account. Include the following members:
	Data Member:
	-Name of the depositor
	-Account Number
	-Type of Account
	-Balance amount in the account
	
		Member Functions
		
	-To assign values
	-To deposited an amount
	-To withdraw an amount after checking balance
	-To display name and balance
*/

#include<iostream>
using namespace std;

class bank{
	public:
		char name[20], type_of_acc[1];
		int acc_no,balance,amount;
	
		void get_data(){
			cout<<"\n Enter Name: ";
			cin>>name;
			cout<<"\n Enter Account Number: ";
			cin>>acc_no;
			cout<<"\n Type of Bank Account: \n(saving='S', current='C'):";
			cin>>type_of_acc;
			cout<<"\n Enter The Amount: ";
			cin>>amount;
		}
		
		void deposit(){
			balance =2000;
			balance += amount;
			cout<<"\n Your Amount "<<amount<<"/- Rupees has been Sucessfully Deposit in Bank-account.";
			cout<<"\n Total Bank Balance is :"<<balance;
		}
		
		void withdraw(){
			balance =2000;
			if(balance> amount){
				balance -= amount;
				cout<<"\n Your Amount "<<amount<<"/- Rupees has been Sucessfully Withdraw in Bank-account.";
				cout<<"\n Total Bank Balance is :"<<balance;	
			}else{
				cout<<"\n You Enter the higher amount to your bank account deposited...";
			}
		}
};

int main(){
	int choice;
	
	bank msg;
	msg.get_data();
	
	cout<<"\n (1) Deposite. \n (2) Withdraw. \n Select Option:";
	cin>>choice;
	
	switch(choice){
		case 1:
			msg.deposit();
			break;
		
		case 2:
			msg.withdraw();
			break;
		
		default:
			cout<<"\n Please chack again your entry!!";
	}
}
