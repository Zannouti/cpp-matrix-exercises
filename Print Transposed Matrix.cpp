
#include <iostream>
#include<iomanip>
using namespace std;



void FillMatrixWithOrderedNumbers(int arr[3][3], short Rows, short Cols)
{
        int counter = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
		    counter++;
			 arr[i][j] = counter ;
		}
	}
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			cout <<setw(3)<< arr[i][j] << "   ";
		}
		cout << endl;
	}
}

void transposeMatrix(int arr[3][3], int arrTranspose[3][3],short Rows,short Cols)
{
    for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			arrTranspose[i][j] = arr[j][i] ;
		}
		cout << endl;
	}
    
}

void PrintMatrixTransose(int arrTranspose[3][3], short Rows,short Cols)
{
    for(short i = 0; i < Rows; i++)
    {
        for(short j = 0; j < Cols;j++)
        {
            cout << setw(3) << arrTranspose[i][j] << "   ";
    }
    cout << endl;
    }
}

int main() {
	srand((unsigned)time(NULL));
	int arr[3][3];
	int arrTranspose[3][3];
	FillMatrixWithOrderedNumbers(arr, 3, 3);
	PrintMatrix(arr, 3, 3);
	cout << "transpose matrix \n";
	transposeMatrix(arr,arrTranspose,3,3);
	PrintMatrixTransose(arrTranspose,3,3);
	
	
	return 0;
}  


