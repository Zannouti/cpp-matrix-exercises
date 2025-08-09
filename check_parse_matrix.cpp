
#include <iostream>
#include <string>
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


int CountGivenNumber(int arrMatrix[3][3],short Rows, short Cols)
{
    short count = 0;
    
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			 if(arrMatrix[i][j] == 0)
			 {
			     count++;
			 }
		}
		
	}
		return count;
}


bool  IsParseMatrix(int arrMatrix1[3][3],short Rows, short Cols)
{
    short MatrixSize  = Rows*Cols;
    return CountGivenNumber(arrMatrix1,Rows, Cols) > MatrixSize / 2;
    
}

int main() {
    
	srand((unsigned)time(NULL));
	int arrMatrix1[3][3]={{1,8,0},{0,1,0},{7,0,1}};
	cout <<" matrix 1\n";
	PrintMatrix(arrMatrix1,3,3);
    if(IsParseMatrix(arrMatrix1,3,3))
        {
        cout << "parse Matrix\n";
    }else{
        cout << "not parse Matrix\n";
    }
    
    
    

	return 0;
}  


