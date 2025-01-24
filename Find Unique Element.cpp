#include<bits/stdc++.h>
using namespace std;
int FindUnique(vector<int>arr){
	int ans=0;
	for(int i=0;i<arr.size();i++){
		ans=ans^arr[i];
	}
	return ans;
}
int main(){
	int n;
	cin>>n;
	vector<int>arr(n);
	cout<<"enter the elements:"<<endl;
	
	for(int i=0;i<arr.size();i++){
		cin>>arr[i];
		
		
	}
	int UniqueElement=FindUnique(arr);
	cout<<"Unique element is:"<<UniqueElement<<endl;
     
	
	return 0;
	
}
