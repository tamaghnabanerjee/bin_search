#include<iostream>

using namespace std;

int main(){
	
	int n,i=0;
	cout << "Enter number of elements for search: ";
	cin >> n;
	int A[n];
	cout << "Enter the elements now: ";
	while (i<=n){
		cin >> A[i];
		i++;
	}	
	int high=9,low=0,mid,key;

	cout << "Enter key: ";
	cin >> key;

	while (high>=low){
		mid = (high+low)/2;

		if (key == A[mid]){
			cout  << key << " found at " << mid << endl;
			return 0;
		}
		else if (key < A[mid]){
			high = mid - 1;

		}
		else{
			low = mid + 1;
		}

	}
	cout << key << " not found" << endl;
	
	return 0;
}
