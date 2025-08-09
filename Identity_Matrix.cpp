
#include <iostream>
#include<iomanip>
using namespace std;



void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			cout << arr[i][j] <<"  ";
		}
		cout << endl;
	}
}

bool checkIdentityMatrices(int arrMatrix[3][3],short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
		    if( i == j && arrMatrix[i][j] != 1 )
		    {
		        return false ;
		    }
		    
		    if(i != j && arrMatrix[i][j] != 0)
		    {
		        return false;
		    }
		}
	}
	return true;
    
}


int main() {
    
	int arrMatrix1[3][3]={{1,0,0},{0,1,0},{0,0,1}};
	cout <<" matrix 1\n";
	PrintMatrix(arrMatrix1, 3, 3);
	
	if(checkIdentityMatrices(arrMatrix1,3,3))
	{
	cout << "the matrixs are identity\n";
    } else {
       cout << "the matrixs are not identity\n";

    }


	return 0;
}  


