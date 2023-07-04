#include<iostream>
using std::cin;
using std::cout;
class Matrix
{
	int a[10][10],m,n;
	public:
		void inputmatrices();
		void outputmatrices();
		Matrix operator*(Matrix x);
};
void Matrix::inputmatrices()
{
	int i,j;
	cout<<"Enter order of matrix:";
	cin>>m>>n;
	cout<<"Enter matrix elements:";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
}
void Matrix::outputmatrices()
{ 
	int i,j;
	for(i=0;i<m;i++)
	{ 
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<"\t";
			
		}
		cout<<"\n";
	}
}

Matrix Matrix::operator*(Matrix x)
{ 
	Matrix c;
	int i,j,k;
	if(n==x.m)
	{ 
		c.m=m;
		c.n=x.n;
		for(i=0;i<m;i++)                     //MATRIX INITIALIZATION OF RESULTING MATRIX
		 {
			for(j=0;j<x.n;j++)
			{ 
				c.a[i][j]=0;
			}
		 }


		  for(i=0;i<m;i++)
		   {
			 for(j=0;j<x.n;j++)
			{ 
				for(k=0;k<m;k++)
		         {
			         c.a[i][j]+=a[i][k]*x.a[k][j];          //MULTIPLICATION OF MATRIX
		         }
		
			}
		}
		return c; 
		
	}
	else{
		cout<<"Multiplication is not possible.";
		exit(-1);
	}
}
int main()
{ 
Matrix A,B,C;
cout<<"Enter matrix A order and elements:"<<"\n";
A.inputmatrices();
cout<<"Enter matrix B order and elements:"<<"\n";
B.inputmatrices();
C=A*B;
cout<<"Resulting matrix is:"<<"\n";
C.outputmatrices();
return 0;
}