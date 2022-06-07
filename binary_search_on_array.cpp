#include <iostream>
using namespace std;
int main() {
    int n;
    int arr[n];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
   int lo=0; 
   int hi= n-1;
   int mid;
   while(hi-lo>1){
       mid= (hi+lo)/2;
       if(arr[mid]<key){
           lo=mid+1;
       }else{
           hi=mid;
       }
       
   }
   if(arr[lo]==key){
       cout<<lo<<endl;
   }else if(arr[hi]==key){
       cout<<hi<<endl;
   }
   else{
       cout<<"element not find"<<endl;
   }
    

    return 0;
}