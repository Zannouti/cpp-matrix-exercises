
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
			 arr[i][j] = randomNumber(1,100);
		}
	}
}

int sumcolums(int arr[3][3], short Rows, short ColsNumber)
{
    int sum = 0;
    
    for(int i = 0 ; i <= Rows -1 ; i++)
    {
        sum += arr[i][ColsNumber]; 
    }
    return sum;
}

void sumMatrixInArray(int sumArray[3],int arr[3][3],short Rows , short Cols)
{
    for(int i = 0 ; i < Cols;i++)
    {
        sumArray[i] =  sumcolums(arr,Rows,i);
    }
}

void PrintSumMatrixInArray(int sumArray[3],short length)
{
    for (int i = 0; i < length; i ++)
    {
        cout << "colum : " << i + 1 << " sum = " << sumArray[i] << endl; 
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

int main() {
	srand((unsigned)time(NULL));
	int arr[3][3];
	int sumArray[3];    
	FillMatrixWithRandomNumbers(arr, 3, 3);
	PrintMatrix(arr, 3, 3);
	cout <<"AFTER IN ARRAY\n" ;
	sumMatrixInArray(sumArray,arr,3,3);
	PrintSumMatrixInArray(sumArray, 3);
	return 0;
}  


