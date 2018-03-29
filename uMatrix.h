//DravenYorgensen.cpp
//uMatrix Project
//Draven Yorgensen
//CoSc 2030, Dr.Borowczak

//Create a program which will perform the matrix addition and multiplication of 
//2 matricies as well as the scalar addition and multiplication of those 
//matricies
class uMatrix
{
private:
	

public:
	int myMatrix[100][100];
	int rows, cols;
	//You probably should have some privately accessible helper things ...
	// like data structures?

	uMatrix(int matrix[100][100], int row, int col);
	~uMatrix();

	/**
	* @brief print
	* @input one object, self, of type uMatrix A,
	* @output a square representation of the matrix A
	*/
	void print();

	/**
	* @brief MM Matrix Multiplication
	* @input two objects of type uMatrix self A, and parameter B
	* @output a new object of type uMatrix = A x B what is matrix multiplication?
	* https://en.wikipedia.org/wiki/Matrix_multiplication
	*/
	uMatrix MM(uMatrix B, int r1, int c1, int r2, int c2, int i, int j, int k);

	/**
	* @brief MMf Fast Matrix Multiplication
	* @input two objects of type uMatrix self A, and parameter B
	* @output a new object of type uMatrix = A x B what is matrix multiplication?
	* https://en.wikipedia.org/wiki/Matrix_multiplication
	*/
	//uMatrix MMf(uMatrix B);

	/**
	* @brief MA Matrix Addition
	* @input two objects of type uMatrix self A, and parameter B
	* @output a new object of type uMatrix = A + B
	*/
	uMatrix MA(uMatrix B, int r1, int c1, int r2, int c2, int i, int j, int k);
	/**
	* @brief MA Fast Matrix Addition
	* @input two objects of type uMatrix, self A, and parameter B
	* @output a new object of type uMatrix = A + B
	*/
	//uMatrix MAf(uMatrix B);

	/**
	* @brief SM Scalar Multiplication
	* @input one object, self, of type uMatrix A, and a scalar value S
	* @output a new object of type uMatrix such that every element in A is multiplied by S
	*/
	uMatrix SM(uMatrix B, int sc, int r1, int c1, int r2, int c2, int i, int j, int k);

	/**
	* @brief SMf Fast Scalar Multiplication
	* @input one object, self, of type uMatrix A, and a scalar value S
	* @output a new object of type uMatrix such that every element in A is multiplied by S
	*/
	//uMatrix SMf(int S);

	/**
	* @brief SA Scalar Addition
	* @input one object, self, of type uMatrix A, and a scalar value S
	* @output a new object of type uMatrix such that every element in A is increased by S
	*/
	uMatrix SA(uMatrix B, int sc, int r1, int c1, int r2, int c2, int i, int j, int k);
	/**
	* @brief SAf Fast Scalar Addition
	* @input one object, self, of type uMatrix A, and a scalar value S
	* @output a new object of type uMatrix such that every element in A is increased by S
	*/
	//uMatrix SAf(int S);


};
