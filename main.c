#include <iostream>
#include "uMatrix.h"
using namespace std;

int main(int argc, char **argv)
{
    cout << "hello world\n";
    
    //You should probably read in two matrices and a scalar value
    
    uMatrix A(???);
    uMatrix B(???);
    
    int S = ???;
    
    //How about multiplying those two and creating a new uMatrix C?
    
    uMatrix C = A.MM(B);
    //Add C to B?
    
    uMatrix D = B.MA(C);
    
    //Scalar Add to A?
    
    uMatrix E = A.SA(S);
    
    // so on...
    
	return 0;
}
