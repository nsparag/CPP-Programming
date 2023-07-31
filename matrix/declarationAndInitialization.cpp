# include <iostream>
using namespace std;

int main() {

  int matrix[4][2] = {{2, 3}, {4, 5}, {1, 6}, {7, 8}}; //2D array with 4 rows and 2 columns

  cout<<"Printing a 2D Array:" << endl;
	for(int row=0;row<4;row++)
	{
		for(int column=0;column<2;column++)
		{
			cout<<"\t"<<matrix[row][column];
		}
		cout<<endl;
	}
  
  return 0;
}
