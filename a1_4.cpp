#include<bits/stdc++.h>
using namespace std;

class account{
		string name;
		long int account_no;
		string type;
		double balance;
	public:
		account(string name, int type, long int account_no)	//parameterized constructor
		{
			balance = 0;
			this->name = name;
			this->type = type;
			this->account_no = account_no;
		}
	void deposit(long int);
	void withdraw(long int);
  double request();
};

void account::deposit(long int amount)		//using scope resolution operator to call deposit function from outside of the class
{
	balance += amount,  cout << endl << "Rs: " << amount << " is credited to your account.";
}
void account::withdraw(long int amount)
{
	if(balance < amount)
		cout << "Not sufficient balance.";
  else
	  balance -= amount, cout << endl << "Rs: " << amount << " is debited from your account.";
}
double account::request()
{
	return balance;
}
int main()
{
	string username,password;
  username = "kashifiqbal";
	password = "123786";

  string uname, pwd;
	int choice;

  while(1)
	{
	   do{
		    do{
				   cout << endl << endl << "1 -> Login.";
					 cout << endl << "0 -> Exit.";
					 cout << endl << "Enter choice : ";
					 cin >> choice;

					 if(choice != 0 && choice != 1) cout << "Invalid choice...! Try Again.";
				  }while(choice != 0 && choice != 1);

			  if(choice == 0)
			 	 exit(EXIT_SUCCESS);

			  cout << endl << "Enter Username : ";
				char buffer[255];
				fgets(buffer, sizeof(buffer), stdin);
			  getline(cin, uname);
			  cout << "Enter Password : ";
			   getline(cin, pwd);

		    if(username != uname && password != pwd)
				  cout << "Invalid Username or Password.";
       }while(username != uname && password != pwd);

		 cout << "Login Successfull";

		 int type;
		 long int amount;
		 long int acno;
		 string name;

			cout << endl << endl << "Enter your name : ";
			getline(cin, name);

			do{
		 		 cout << endl << "1 -> SB Account." << endl << "2 -> for Current Account";
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

			account a(name, type, acno); // creating object

			while(1)
		  {
		    cout << endl << "  1 -> Deposit Amount.";
		    cout << endl << "  2 -> Withdraw.";
				cout << endl << "  3 -> Request Balance.";
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

		      case 3: cout << endl << "Balance = RS " << a.request();
		              break;
					case 0: exit(EXIT_SUCCESS);
					default:cout << endl << "Invalid choice...! please choose valid choice .";
				}
		  }
   }
 return 0;
}
