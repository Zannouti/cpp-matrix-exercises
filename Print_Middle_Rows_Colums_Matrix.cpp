
#include <iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;


int randomNumber(int from, int To)
{
	int randNum = rand() % (To - from) + from;
	return randNum;

}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			 arr[i][j] = randomNumber(1,10);
		}
	}
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			printf("%0*d  ",2,arr[i][j]);
		}
		cout << endl;
	}
}


void PrintMatrixOneRows(int arr[3][3], short Rows, short Cols)
{
    short middleRows =  Rows/2;
	for (short i = 0; i < Cols; i++)
	{
		
		printf("%0*d  ",2,arr[middleRows][i]) ;
		
	}
	cout <<endl;
}

void PrintMatrixOneColums(int arr[3][3], short Rows, short Cols)
{
        short middleCols = Cols/2;
	
		for (short j = 0; j < Rows; j++) 
		{
			printf("%0*d  ",2,arr[j][middleCols] );
		}
		cout <<"\n";

}

int main() {
    
	srand((unsigned)time(NULL));
	int arrMatrix1[3][3];
	FillMatrixWithRandomNumbers(arrMatrix1, 3, 3);
	cout <<"full matrix \n";
	PrintMatrix(arrMatrix1, 3, 3);
	cout <<" matrix middle Rows \n";
	PrintMatrixOneRows(arrMatrix1, 3, 3);
	cout <<" matrix middle colums \n";
	PrintMatrixOneColums(arrMatrix1, 3, 3);


	return 0;
}  


