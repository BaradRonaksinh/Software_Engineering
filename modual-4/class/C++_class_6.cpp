/**/

#include<iostream>
using namespace std;
class bank{
	private:
		int ac_no, balance=2000;
		char ac_type;
	
	public:
		void open_ac(){
			ac_no;
			cout<<"\n Enter Account no:";
			cin>>ac_no;
			
			cout<<"\n Enter Account Type:\n";
			cin>>ac_type;
			
		}
		
		void deposite(){
			int amount;
			cout<<"\n Enter Amount:";
			cin>>amount;
			balance += amount;
			cout<<"\n Your Amount "<<amount<<"/- Rupees has been Sucessfully Deposit in Bank-account.";
			
			cout<<"\n Total Bank Balance is :"<<balance;
		}
		
		void withdraw(){
			int amount;
			cout<<"\n Enter Amount:";
			cin>>amount;
			if(balance>amount){
				balance -=amount;
				cout<<"\n Your Amount "<<amount<<"/- Rupees has been Sucessfully Withdraw in Bank-account.";
				cout<<"\n Total Bank Balance is :"<<balance;
			}else{
				cout<<"\n Enter Valid Amount \n Because Your Bank Balance is rupees("<<balance<<"/-) less as Compare to entred "<<amount<<"/- Amount.";
			}
			
		}
};

int main(){
	int choice;
	bank msg;
	msg.open_ac();
	cout<<"\n (1) Deposite. \n (2) Withdraw. \n Select Option:";
	cin>>choice;
	switch(choice){
		case 1:
			
			msg.deposite();
			break;
			
		case 2:
			
			msg.withdraw();
			break;
		
		default:
			cout<<"\n Please chack again !";
			break;
	}
	
	
	
	
//	cout<<"\n Enter Account Number:"<<ac_no;
//	cout<<"\n Enter Account type:\n"<<ac_type;
	
}
