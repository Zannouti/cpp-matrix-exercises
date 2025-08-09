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

bool IsPalindromeMatrix(int arr[3][3], short Rows, short Cols)
{
    	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols/2; j++)
		{
		    if(arr[i][j] != arr[i][Cols-1-j])
		    return false;
		}
	}
	return true;
}




int main() {
	int arrMatrix1[3][3]= {{5,7,5},{6,1,6},{3,2,3}};
	cout <<" matrix 1 : \n";
	PrintMatrix(arrMatrix1, 3, 3);
	
	if(IsPalindromeMatrix(arrMatrix1,3,3))
	{
	    	cout <<" is a palindrome matrix : \n";
	}else{
	    	cout <<" is not a palindrome matrix : \n";
	}
	
	
	
	return 0;
}


