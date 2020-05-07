#include<bits/stdc++.h>

using namespace std;

class VECTOR;

class MATRIX{
 int **matrix, rows, cols;

 public:
 MATRIX(){}
 MATRIX(int rows, int cols)
 {
  matrix = new int*[rows];

  for(int i = 0 ; i < rows ; i++)
      matrix[i] = new int[cols];
  this->rows = rows;
  this->cols = cols;
 }
 void getmatrix();
 void dismatrix();
 friend void multiply(MATRIX&, VECTOR&);
};

class VECTOR{
  int *vector, rows;

  public:
  VECTOR(){}
  VECTOR(int rows)
  {
    vector = new int[rows];
    this->rows = rows;

  }
  void getvector();
  void disvector();
  friend void multiply(MATRIX&, VECTOR&);
};

void MATRIX::getmatrix()
{
  for( int i = 0 ; i < rows ; i++ )
  {
    cout << endl;
    for( int j = 0 ; j < cols ;j++ )
    {
     cout << "M[" << i + 1 << "][" << j + 1 << "] : ";
     cin >> matrix[i][j];
    }
  }
}
void MATRIX::dismatrix()
{
   for( int i = 0 ; i < rows ; i++ )
   {
      for( int j = 0 ; j < cols ;j++ )
        cout << matrix[i][j] << "\t";
     cout << endl;
   }
}

void VECTOR::getvector()
{
  for( int i = 0 ; i < rows ; i++ )
  {
     cout << "V[" << i + 1 << "] : ";
     cin >> vector[i];
  }
}

void VECTOR::disvector()
{
  for( int i = 0 ; i < rows ; i++ )
     cout << vector[i] << endl;
}

void multiply( MATRIX& m, VECTOR& v )
{
  int temp[m.rows][m.cols], result[m.rows] = {0};
  int i,j;

//VECTOR-MATRIX MULTIPLICATION CALCULATIONS
   for( i = 0 ; i < m.cols ; i++ )
   {
      for( j = 0 ;  j < m.rows ; j++ )
        temp[j][i] = m.matrix[j][i] * v.vector[i];
   }
   for( i = 0 ; i < m.rows ; i++ )
   {
       for ( j = 0 ; j < m.cols; j++ )
           result[i] +=  temp[i][j];
   }
// VECTOR-MATRIX MULTIPLICATION CALCULATIONS
// printing resultant vector
    for( i = 0 ; i < m.rows ; i++ )
        cout << result[i] << endl;
}

int main()
{

 MATRIX m;
 VECTOR v;
 int rows, cols, rows2;

 do{
 cout << endl << "Enter no. rows for Matrix :\t";
 cin >> rows;
 cout << endl << "Enter no. of columns for Matrix :\t";
 cin >> cols;

 do{
    cout << endl << "Enter no of rows for Vector : \t";
    cin >> rows2;
    if( cols != rows2 )
        cout << endl << "Vector-Matrix Multiplication not possible......! Try again.";
    }while( cols != rows2 );

 if( rows < 1 || cols < 1 || rows2 < 1)
     cout << endl << "Invalid Input.....! Try Again";
 }while( rows < 1 || cols < 1 || rows2 < 1);

 m = MATRIX(rows, cols);
 v = VECTOR(rows2);

 cout << endl << "Enter Matrix Elements" << endl;
 m.getmatrix();
 cout << endl << "Enter Vector Matrix Elements :" << endl;
 v.getvector();

 system("clear");
 cout << "Matrix : " << endl ;
 m.dismatrix();
 cout << endl << endl << "Vector : " << endl;
 v.disvector();
 cout << endl << endl << "Vector-Matrix Multiplication : " << endl;
 multiply(m, v);
return 0;
}
