#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int>& arr, int target){
	int left=0, right=arr.size()-1;
	while(left<right){
		int mid=left+(right-left)/2;
		if(arr[mid]==target) return mid;
		if(arr[mid]>target) mid=right-1;
		else mid=left+1;
	}
	return -1;
}

int main(){
	return 0;
}