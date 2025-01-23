
#include <iostream>
using namespace std;
int main(){
	int size;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	int mini=INT_MAX;
	for(int i=0;i<size;i++){
		if(arr[i]<mini){
			mini=arr[i];
			
		}
	}
	cout<<"minimum no is:"<<mini<<endl;
	
	return 0;
}
