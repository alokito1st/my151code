 #include<iostream>
 using namespace std;
 int main(){
 	
 	int size;
 	cin>>size;
 	int arr[size];
 	for(int i=0;i<size;i++){
 		cin>>arr[i];
	 }
 	int maxi=INT_MIN;	
 	for(int i=0;i<size;i++){
 		
 		if(arr[i]>maxi){
 			maxi=arr[i];
 			
		 }
 		
	 }
	 cout<<"Max no is"<<maxi<<endl;
	 
	 return 0;
 }  
