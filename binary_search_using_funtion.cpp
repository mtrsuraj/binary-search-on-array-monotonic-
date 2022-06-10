#include <iostream>
using namespace std;
  int Binarysearch(int a[], int size, int key){
       int st=0, end=size-1, mid;
       mid= (st+end)/2;
       while(end>=st){
           if(key==a[mid]){
               return mid;
           }
           if(key>a[mid]){
               st=mid+1;
           }else{
               end=mid-1;
           }
           mid=(st+end)/2;
       }
       return -1;
   }

int main() {
    // Write C++ code here
   int a1[6]={1, 4, 6, 8, 9, 11};
   int a[5]={3, 4, 6, 8, 9};
  int index = Binarysearch(a1, 6, 12);
  int index1= Binarysearch(a, 5, 4);
   cout<<"key index is__ "<<index1<<endl;
    return 0;
}