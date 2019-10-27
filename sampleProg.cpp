#include <iostream>
using namespace std;

int main(){
	
	int arr[5], g10 = 0;
	
	cout << "\nEnter 5 integer values: ";
	for(int i = 0; i < 5; i++){
		cin >> arr[i];
		if(arr[i] > 10){
			g10++;
		}
	}
	
	cout << "\n\nThe values are: ";
	for(int i = 0; i < 5; i++){
		cout << arr[i] << " ";
	}
	
	cout << "\n\nThe number of values greater than 10: " << g10 << endl;
	
	
	
	
	return 0;
	
}
