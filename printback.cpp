#include<iostream>
#include<cmath>
#include<sstream>

using namespace std;

int printBackwards(int arr[], int length){
	if(length<=1){
		return arr[0];
	}
	else{
		int temp;
		int i=0;
		temp=arr[i];
		arr[i] = arr[length-1];
		arr[length-1] = temp;
		return arr[&arr[1],length-2]; 
	}
	return arr[0];
}
int main() {
	int arr[3]={2,3,4};
	cout<< "for an array of size 3, with numbers" << &arr <<endl;
	cout << "the reverse is"<< printBackwards(arr, 3);
	return 0;
}

