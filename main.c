//DravenYorgensen.cpp
//uMatrix Project
//Draven Yorgensen
//CoSc 2030, Dr.Borowczak
#include <iostream>
#include "MatrixClass.h"
using namespace std;
using std::string;

//Citatation commented at the bottom of this file.
int main(int argc, char **argv)
{

	////You should probably read in two matrices and a scalar value

	int i, j, a[100][100], b[100][100], mult[100][100], sum[100][100], scalar[100][100], r1 , c1, r2, c2, k = 0, sc;

	cout << "Enter rows and columns for first matrix: ";
	cin >> r1 >> c1;
	cout << "Enter rows and columns for second matrix: ";
	cin >> r2 >> c2;
	cout << "Enter the scalar value: ";
	cin >> sc;

	// If column of first matrix in not equal to row of second matrix,
	// ask the user to enter the size of matrix again.
	while (c1 != r2)
	{
		cout << "Error! column of first matrix not equal to row of second.";

		cout << "Enter rows and columns for first matrix: ";
		cin >> r1 >> c1;

		cout << "Enter rows and columns for second matrix: ";
		cin >> r2 >> c2;
	}

	// Storing elements of first matrix.
	cout << endl << "Enter elements of matrix A:" << endl;
	for (i = 0; i < r1; ++i)
		for (j = 0; j < c1; ++j)
		{
			cout << "Enter element a" << i + 1 << j + 1 << " : ";
			cin >> a[i][j];
			
			
		}

	// Storing elements of second matrix.
	cout << endl << "Enter elements of matrix B:" << endl;
	for (i = 0; i < r2; ++i)
		for (j = 0; j < c2; ++j)
		{
			cout << "Enter element b" << i + 1 << j + 1 << " : ";
			cin >> b[i][j];
		}
	//Displaying Matrix A
	uMatrix A(a, r1, c1);
	cout << "Matrix A: " << endl;
	A.print();

	//Displaying Matrix B
	uMatrix B(b, r2, c2);
		cout << "Matrix B: " << endl;
	B.print();

	//How about multiplying those two and creating a new uMatrix C?
	//Accesses the multiplication function to multiply the two matricies together 
	uMatrix multTemp = A.MM(B, r1, c1, r2, c2, i, j, k);
	//Displays the subsequent multiplication
	cout << "The Matrix Multiplication of Matrix A and Matrix B is: " << endl;
	multTemp.print();

	//Add C to B?
	//Accesses the matrix addition function to add the two matricies together
	uMatrix sumTemp = A.MA(B, r1, c1, r2, c2, i, j, k);
	cout << "The Matrix Addition of Matrix A and Matrix B is: " << endl;
	//Displays the subsequent addition
	sumTemp.print();

	//Scalar multiply to A and B
	//Accesses the scalar multiplication function to multiply matrix A by the scalar value
	uMatrix scalarMultA = A.SM(B, sc, r1, c1, r2, c2, i, j, k);
	//Displays the subsequent multiplication
	cout << "The Scalar Multiplication of the scalar value (" << sc << ") and Matrix A is: " << endl;
	scalarMultA.print();

	//Accesses the scalar multiplication function to multiply matrix B by the scalar value
	uMatrix scalarMultB = B.SM(B, sc, r1, c1, r2, c2, i, j, k);
	//Displays the subsequent multiplication
	cout << "The Scalar Multiplication of the scalar value (" << sc << ") and Matrix B is: " << endl;
	scalarMultB.print();

	//Scalar Add to A and B
	//Accesses the scalar addition function to multiply matrix A by the scalar value
	uMatrix scalarSumA = A.SA(B, sc, r1, c1, r2, c2, i, j, k);
	//Displays the subsequent addition
	cout << "The Scalar Addition of the scalar value (" << sc << ") and Matrix A is: " << endl;
	scalarSumA.print();

	//Accesses the scalar addition function to multiply matrix B by the scalar value
	uMatrix scalarSumB = B.SA(B, sc, r1, c1, r2, c2, i, j, k);
	//Displays the subsequent addition
	cout << "The Scalar Addition of the scalar value (" << sc << ") and Matrix B is: " << endl;
	scalarSumB.print();

	/*char stringa[] = { 0 };
	cin.getline(stringa, '\n');
	cin.ignore(',');
	cout << stringa;

	char stringb[] = { 0 };
	cin.getline(stringb, '\n');
	cin.ignore(',');
	cout << stringb;
	uMatrix A();
	uMatrix B();

	int S;
	cin >> S;*/


	//uMatrix C = A.MM(B);
	

	//uMatrix D = B.MA(C);

	//

	//uMatrix E = A.SA(S);

	//// so on...
	system("pause");
	return 0;
}
//People as well as MLA Cited websites for help
//C Program to Multiply Two Matrix Using Multi-Dimensional Arrays, www.programiz.com/cpp-programming/examples/matrix-multiplication.
//C Program to Add Two Matrix Using Multi-Dimensional Arrays, www.programiz.com/cpp-programming/examples/add-matrix.
//Mike Borowczak, March 2018
//Auston Larson, March 2018
