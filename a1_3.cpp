#include<iostream>
using namespace std;
class account{
		string name;
		long int ac_no;
		string type;
		double balance;
	public:
		account(string name, int type, long int ac_no)
		{
			balance = 0;
			this->name = name;
			this->type = type;
			this->ac_no = ac_no;
		}
	void deposit(long int);
	void withdraw(long int);
  void display();
};

void account::deposit(long int amount)
{
	balance += amount,  cout << endl << "Rs: " << amount << "is depositted in your account.";
}
void account::withdraw(long int amount)
{
	if(balance < amount)
		cout << endl << "Not sufficient balance.";
  else
	  balance -= amount, cout << endl << "Rs: " << amount << "is debited from your account.";
}
void account::display()
{
	cout << endl << "Name = " << name << endl << "Balance = " << balance;
}
int main()
{
	string name;
	int choice, type;
	long int amount;
	long int acno;

	cout << endl << "Enter your name : ";
	getline(cin, name);

	do{
 		 cout << endl << "1 -> Savings Account." << endl << "2 -> for Current Account";
		 cout << endl << "Select Account type : ";
		 cin >> type;

		 if(type != 1 && type != 2)
		  cout << endl << "Invalid Account no...! Try Again.";

		}while(type != 1 && type != 2);

  do{
	   cout << endl << "Enter your 6 digit bank account no : ";
	   cin >> acno;

		 if(acno < 100000 || acno > 999999)
		  cout << endl << "Invalid Account no...! Try Again.";

	  }while(acno < 100000 || acno > 999999);

	account a(name, type, acno);

	while(1)
  {
    cout << endl << "  1 -> Enter amount to deposit .";
    cout << endl << "  2 -> Withdraw.";
		cout << endl << "  3 -> Display.";
    cout << endl << "  0 -> Exit.";

    cout << endl << "  Enter your choice : \t";
    cin >> choice;

    switch(choice)
    {
      case 1: cout << endl << "Enter Amount you want to deposit : ";
              cin >> amount;
							if( amount < 1 )
							 {
								 cout << endl << "Invalid input...! Try Again.";
								 break;
							 }
							 else
                 a.deposit(amount);
              break;

			case 2: cout << endl << "Enter Amount you want to Withdraw : ";
	            cin >> amount;
							if( amount < 1 )
							 {
								 cout << endl << "Invalid input...! Try Again.";
								 break;
							 }
							 else
	               a.withdraw(amount);
	            break;

      case 3: a.display();
              break;
			case 0: exit(EXIT_SUCCESS);
			default:cout << endl << "Invalid choice...! please choose valid choice .";
		}
}
return 0;
}
