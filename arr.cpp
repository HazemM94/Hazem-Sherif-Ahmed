#include <iostream>
using namespace std ;
int main ()
{
    
/*Question 1: 
-----------
- Create a program which has an array its length=10 */

    //1- Take the values of the array from the user.
    cout << "\n*******************************\n";
    int length=0 ;
    cout << "Pls Enter The length of Array: ";
    cin >> length ;
    int arr[length];
    int Summation=0 ;
    int Product=1 ;
    for (int i = 0; i < length ; i++)
    {
        cout << "Pls Enter Number" <<  i+1 << ": ";
        cin >> arr[i];
        Summation+=arr[i];
        Product*=arr[i];
    }
    cout << "\n*******************************\n";
    //2- Print the values of the array and put space between each element
    cout << "The values of the array are : ";
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] <<" " ;
    }
    cout << "\n*******************************\n";
    //3- Print the values of the array and put space between each element (Reversed)
    cout << "The values of the array (Reversed) are : ";
    
    for (int i =length-1; i >= 0 ; --i)
    {
        cout << arr[i] <<" " ;
    }
    //4- Print the Summation of the elements of this array.
    cout << "\n*******************************\n";
    cout << "the Summation of the elements of this array is : " << Summation ;
    //5- Print the Product of the elements of this array.
    cout << "\n*******************************\n";
    cout << "the Product of the elements of this array is : " << Product  ;
    cout << "\n================================================================\n";

//     Question 2:
// -----------

// - Create a program which has an 2D array its rows=3, columns=3
// - Note: Store the rows, columns in a variables then deal with them, matrix[rows][columns] and in the loop i < rows, j < columns and so on

// 	1- Take the values of the matrix from the user.
int rows=0,columns=0;
cout << "Pls Enter The Rows of the Matrix: ";
cin >> rows;
cout << "\n*******************************\n";
cout << "Pls Enter The Columns of the Matrix: ";
cin >> columns;
cout << "\n*******************************\n";
int matrix[rows][columns];
int Summation_Rows=0, Product_Rows=1;
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < columns; j++)
    {
        cout << "Enter Row num " << i+1 << " & ";
        cout << "Column num " << j+1 << ": ";
        cin >> matrix[i][j] ;
    }
}
cout << "\n*******************************\n";
// 	2- Print the values of the matrix and put space between each element, and go to new line after each row.
cout << "the values of the matrix are: \n";
for (int i = 0; i < rows; i++)
{ 
    for (int j = 0; j < columns; j++)
    {
        cout << matrix[i][j] <<" ";
    }
    cout << endl ;
} 
cout << "\n********************************************\n";
for (int i = 0; i < rows; i++)
{ 
    for (int j = 0; j < columns; j++)
    {
        Summation_Rows+=matrix[i][j];
        Product_Rows*=matrix[i][j];
    }
    // 3- Print the Summation of each row of this matrix.
    cout << "the Summation of row " << i+1 <<": = " <<  Summation_Rows << endl;
    Summation_Rows=0;
    // 	4- Print the Product of each row of this matrix.
    cout << "the Product of row  " << i+1 <<": = " <<  Product_Rows << endl ;
    Product_Rows=1;
     cout << "\n*******************************************\n"; ;
}




}