#include<iostream>
using namespace std;

bool find(int arr[],int size,int key){
	for(int i=0;i<size;i++){
		if (arr[i]==key)
		return true;
	}
	//Not present
	return false;
}


int main(){
	int arr[]={ 2,3,4,5,6};
	int size=5;
	int key;
	cin>>key;
	
	if(find(arr,size,key)){
		cout<<"found"<<endl;
	}
	else{
		cout<<"not found"<<endl;
	}
	return 0;
	
	
	
} 
