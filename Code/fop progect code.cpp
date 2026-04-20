#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
  const int NUMBER_OF_ROWS = 7;
  const int NUMBER_OF_COLUMNS = 6;

  int matrix[NUMBER_OF_ROWS][NUMBER_OF_COLUMNS];
  int row, col, sum, largest, temp;

  for (row = 0; row < NUMBER_OF_ROWS; row++)
    {
      for (col = 0; col < NUMBER_OF_COLUMNS; col++)
	{
	  cout << matrix[row][col];
	}
    }

  for (row = 0; row < NUMBER_OF_ROWS; row++)
    {
      for (col = 0; col < NUMBER_OF_COLUMNS; col++)
	{
	  cin >> matrix[row][col];
	}
    }
    
    for(row = 0 ; row<NUMBER_OF_ROWS ; row++){
        sum=0;
        for(col = 0 ; col<NUMBER_OF_COLUMNS ; col++){
            sum = sum + matrix[row][col];
            
            cout<<"Sum of row "<<row+1 <<" = "<<sum <<endl;
        }
    }
    
    for(col = 0 ; row<NUMBER_OF_COLUMNS ; col++){
        sum=0;
        for(row = 0 ; row<NUMBER_OF_ROWS ; row++){
            sum = sum + matrix[row][col];
            
            cout<<"Sum of col "<<col+1 <<" = "<<sum <<endl;
        }
    }
    
        for(row = 0 ; row<NUMBER_OF_ROWS ; row++){
        largest = matrix[row][0];
        for(col = 1 ;col<NUMBER_OF_COLUMNS ; col++){
            if(largest < matrix[row][col])
            largest=matrix[row][col];
            
            cout<<"The largest element in row "<<row+1<<" = "<<largest<<endl;
            
            
        }
    }
    for(col = 0 ; row<NUMBER_OF_COLUMNS ; col++){
        largest = matrix[row][0];
        for(row = 1 ;row< NUMBER_OF_ROWS ; row++){
            if(largest < matrix[row][col])
            largest=matrix[row][col];
            
            cout<<"The largest element in column "<<col+1<<" = "<<largest<<endl;
            
        }
    }
    return 0 ; 

}
