//ATM_ASHISHKUMAR_

#include <iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

class MyAtm{
	private:
		string name;
		long long accnumber;  // long long is used to store  a large value
		char type [10];
		int amount = 0;
		int total=0;
		
	public:
		void setvalue()
		{
			cout<<"Enter name:\n";
			cin.ignore();
			
			getline(cin , name);//ignore() function is used which is used to ignore or clear one or more characters from the input buffer. ... For example, after entering into the cin statement, we need to input a character array or string. So we need to clear the input buffer, otherwise it will occupy the buffer of previous variable.
			cout<<"Enter Account number:\n";
			cin>>accnumber;
			cout<<"Enter account type:\n";
			cin>>type;
			cout<<"Enter Balance: \n";
			cin>>total;
			cout<<"\n";
		}
		void showdata()
		{
			cout<<"Name: "<<name <<endl;
			cout<<"Account number: "<<accnumber<<endl;
			cout<<"Account type: "<<type<<endl;
			cout<<"Balance: "<<total<<endl;
		}
		
		void deposit()
		{
			cout<<"\nEnter amount to be deposited: ";
			cin>>amount;
	    }
	    
	    void showbalance()
	    {
	    	total = total + amount;
	    	cout<<"\nTotal Balance is "<<total;
		}
		
		void withdrawl()
		{
			int a, available_balance;
			cout<<"\nEnter amount to be withdrawn:\n ";
			cin>>a;
			available_balance = total - a;
			cout<<"Available Balance is:\n "<<available_balance;
	}
};
  
   int main()
   {
   	           MyAtm m;
   	           int choice;
   	    while(1){
   	    	cout<<"\n______WELCOME____";
   	    	cout<<"\t*Enter Your Choice* :";
   	    	cout<<"\t1.Enter Name ,  Account Number , Account type ";
   	    	cout<<"\t2.Balance Enquiry\n";
   	    	cout<<"\t3.Deposit money\n";
   	    	cout<<"\t4.Show Total Balance\n";
   	    	cout<<"\t5.Withdaw Money\n";
   	    	cout<<"\t6.cancel\n";
   	    	cin>>choice;
		   
		   switch(choice){
		   	case 1:
		   		m.setvalue();
		   	case 2:
		   		m.showdata();
		   	case 3:
			   m.deposit();
			case 4:
			   m.showbalance();
			case 5:
			   m.withdrawl();
			case 6:
			   exit(1);
			   break;
			default:
			cout<<"Invalid Option";    	
		   }
   }
}
