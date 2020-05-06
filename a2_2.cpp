#include<iostream>
#include<ctime>

#define SAVING_INTREST_RATE 6
#define A_SAVING_INTREST_RATE 3 // Additional interest rate if duration >= 5
#define CURRENT_INTREST_RATE 4
#define MIN_YEAR 1900

using namespace std;

int get_current_year()
{
  time_t t = time(0);   // get time now
  tm* now = localtime(&t);
  int year = (now->tm_year + 1900);

  return(year);
}

class bank{
 int *account_no, *amount, *duration, *type, *year_of_deposit, *total,n ;
 float *interest;
public:
  bank(){}
  bank(int n)
  {
   account_no = new int[n];
   amount = new int[n];
   duration = new int[n];
   type = new int[n];
   year_of_deposit = new int[n];
   total = new int [n];
   interest = new float[n];

   this->n = n;
  }
  void getdata();
  void calculate();
  void putdata();
};
void bank::getdata()
{

  for( int i = 0 ; i < n ; i++ )
  {
   do{
      cout << endl << "Select Account Type : " << i + 1 << " : ";
      cout << endl << "1 - for SB A/C";
      cout << endl << "2 - for CC A/C";
      cout << endl << "Enter your choice : ";
      cin >> type[i];

      if( type[i] != 1 && type[i] != 2 ) cout << endl << "Invalid Input...! Try Again.";
    }while( type[i] != 1 && type[i] != 2 );

   do{
      cout << endl << "Enter Account no : ";
      cin >> account_no[i];
      if( account_no[i] < 1 ) cout << endl << "Invalid Input...! Try Again.";
     }while( account_no[i] < 1 );

   do{
      cout << "Enter Amount : ";
      cin >> amount[i];
      if(amount[i] < 1) cout << endl << "Invalid Input...! Try Again.";
     }while(amount[i] < 1);

   do{
      cout << "Enter Year of Deposit [HINT " << MIN_YEAR << "<= YEAR >= " << get_current_year() << "] : ";
      cin >> year_of_deposit[i];
      if( year_of_deposit[i] < MIN_YEAR || year_of_deposit[i] > get_current_year() || year_of_deposit[i] < 1 )
       cout << endl << "Invalid Input...! Try Again.";
     }while( year_of_deposit[i] < MIN_YEAR || year_of_deposit[i] > get_current_year() || year_of_deposit[i] < 1 );
 }
}
void bank::calculate()
{
  for(int i = 0 ; i < n ; i++)
  {
    duration[i] = get_current_year() - year_of_deposit[i];

      if(type[i] == 1)  // 1 for saving bank account
      {
       interest[i] = ( amount[i] * SAVING_INTREST_RATE * duration[i] ) / 100;

       if( duration[i] >=  5)
         interest[i] += ( amount[i] * A_SAVING_INTREST_RATE * duration[i] ) / 100;
      }
      else   // 2 for current account
      {
         interest[i] = ( amount[i] * CURRENT_INTREST_RATE * duration[i] ) / 100;
      }
    total[i] = amount[i] + interest[i];
  }
}

void bank::putdata()
{
  for( int i = 0 ; i < n ; i++ )
  {
     cout << endl << "SB" <<  account_no[i] <<"\t" << year_of_deposit[i] << "\t\t" << duration[i] << " Yr.\t" << amount[i] << "\t" << interest[i] << "\t" << total[i];
  }
}

int main()
{
  int n;

  do{
     cout << endl << "Enter no of customers : ";
     cin >> n;
     if( n < 1) cout << endl << "Invalid input...! Try Again.";
    }while( n < 1 );

  bank customers(n);
  customers.getdata();
  customers.calculate();

  cout << endl << endl << "Customers data are as follow : " << endl << endl;
  cout << endl << "A/C No.\tYr. of Deposit\tTime\tAmount\tInterest\tTotal" << endl;
  for( int i = 0 ; i < 56 ;i++, cout << "-");

  customers.putdata();

 return 0;
}
