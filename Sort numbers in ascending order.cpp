#include<iostream>
using namespace std;
int *sort(int arr[], int size ){
	int swap;
	for(int i=0; i< size; i++){
		for(int j=0; j < size; j++){
			if(arr[i] < arr[j]){
				swap = arr[i];
				arr[i] = arr[j];
				arr[j] = swap;
			}
		}
	}
		return arr;
	
}
int main()
{
	int size;
	cout << "Enter the size of Array: ";
	cin >> size;
	int arr[size];
	
		for(int i=0; i < size; i++){
			cout << "Enter the value: ";
			cin >> arr[i];
		}
			int *c=sort(arr, size);
		for(int j=0; j < size; j++){
		
			cout << *c << endl;
			c++;
		}
}
