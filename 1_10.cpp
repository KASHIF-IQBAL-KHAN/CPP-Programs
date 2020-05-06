#include<iostream>
 using namespace std;
class Vector;
class Matrix
 {
int mat[3][3],i,j;
public:  void getmatrix()
   {
for(i=0;i<3;i++)
 {
cout<<"Enter "<<i+1<<" row of the Matrix :\n";    for(j=0;j<3;j++)
   {
cin>>mat[i][j];
}
 }
 }
 void dismatrix()
  {
cout<<"\nMatrix :\n";
for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
{
     cout<<mat[i][j]<<" ";
 }
 cout<<"\n";
}
 }
  friend Matrix multiply(Matrix,Vector);
};
 class Vector
{
int vec[3],i;
public:
void getvector()
 {
cout<<"Enter Vector :\n";
for(i=0;i<3;i++)
  cin>>vec[i];
 }
void disvector()
 {
cout<<"Vector :";
 for(i=0;i<3;i++)
 cout<<vec[i]<<" ";
 }
 friend Matrix multiply(Matrix,Vector);
 };

Matrix multiply(Matrix m,Vector v)
{
 Matrix res;
 int i,j,k;
 for(i=0;i<3;i++)
{
  for(j=0;j<1;j++)
   {
res.mat[i][j]=0;
for(k=0;k<3;k++)
 {
   res.mat[i][j]=res.mat[i][j]+m.mat[i][k]*v.vec[k];
  }
}
 }
cout<<"\nResult Matrix :\n";
  for(i=0;i<3;i++)
 {
  for(j=0;j<1;j++)
   {
  cout<<res.mat[i][j]<<" ";
 }
  cout<<"\n";  }
 return res;
}

int main()
  {
 Matrix mat,res;
  Vector vec;
mat.getmatrix();
  vec.getvector();
  mat.dismatrix();
vec.disvector();
 res=multiply(mat,vec);
 }
