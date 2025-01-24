#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[]={2,4,6,8};
	int sizea= 4;
    int brr[]={1,3,7};
    int sizeb= 3;
    vector<int>ans;
    for(int i=0;i<sizea;i++){
    	ans.push_back(arr[i]);
	}
	for(int i=0;i<sizeb;i++){
		ans.push_back(brr[i]);
	}
	cout<<"printing the ans:"<<endl;
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<" ";
		
	}
	return 0;
}
