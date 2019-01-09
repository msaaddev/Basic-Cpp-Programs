#include <iostream>
using namespace std;
const int size_of_column = 4;
void sum_row(int arr[][size_of_column]){
	for(int i=0; i < 3; i++){
		for(int j=0; j<4; j++){
			cout << "Enter Elements in array: ";
			cin >> arr[i][j];
		}
	}

	int sum = 0;
	cout << endl;
	for(int i=0; i < 3; i++){
			for(int j=0; j < 4; j++){
				sum = sum + arr[i][j];
			}
		cout << "Sum of elements of row " << i+1 << " :" << sum << endl;
		sum=0;
	}
}
int main()
{
	int arr[3][size_of_column];
	sum_row(arr);

}
