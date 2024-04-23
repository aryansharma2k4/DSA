#include<bits/stdc++.h>
using namespace std;
int getSingleElement(vector<int> &arr){
	int i = 0;
	while(i<arr.size()){
		if(arr[i] == arr[i+1] && i+1<=arr.size()){
			i = i+2;
		}
		else if(arr[i]!=arr[i+1]){
			return arr[i];
		}
		else if((i+1)==arr.size()){
			return arr[i];
		}
	}	
}
int main(){
      vector <int> arr = {1,1,2,3,3,4,4};
      cout<<getSingleElement(arr);
      return 0;
}