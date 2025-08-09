
#include <iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;

int randomNumber(int from, int To)
{
	int randNum = rand() % (To - from) + from;
	return randNum;

}


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


int CountGivenNumber(int arrMatrix[3][3],int number,short Rows, short Cols)
{
    short count = 0;
    
    
	
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			 if(arrMatrix[i][j] == number)
			 {
			     count++;
			 }
		}
		
	}
		return count;
}

int main() {
    
	srand((unsigned)time(NULL));
	 int number = 0;
	int arrMatrix1[3][3]={{5,0,0},{0,5,0},{0,0,5}};
	cout <<" matrix 1\n";
	PrintMatrix(arrMatrix1, 3, 3);
	cout << "enter a number to count\n";
    cin >> number ;
    
	cout << "number "<<number<<" count in matrix is :";
    cout << CountGivenNumber(arrMatrix1,number,3,3);
    


	return 0;
}  


