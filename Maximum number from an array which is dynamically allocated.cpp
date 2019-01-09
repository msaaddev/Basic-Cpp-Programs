#include <iostream>
using namespace std;


int main()
{
	
	int *arr = new int [100];	 
	int defined_size;
		cout << "Enter the size of the array: ";
		cin >> defined_size;  
			
			for(int a=0; a < defined_size; a++){
				cout << "Enter the elements in the array: ";
				cin >> arr[a];
			}
			
	int *max = new int;
	*max = 0;
	
		for(int i=0; i < defined_size; i++){
			if(arr[i] > *max){
				*max = arr[i];
			}		
		}
		
	cout << "Maximum element of array: " << *max;
	delete max; 
	delete []arr;
	return 0;
}
