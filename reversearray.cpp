#include <iostream>
using namespace std;
int main(){
   int arr[]={10,20,30,40,50};
   int n=sizeof(arr)/sizeof(arr[0]);
   cout<<"original array \n";
   for (int a=0; a<n; a++){
    cout<<arr[a]<<" ";
   }
   cout<<"\n";
   cout<<"reverse array \n";
   int i=0, j=n-1;
   while(i<j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;
   }
   for (int a=0; a<n; a++){
    cout<<arr[a]<<" ";
   }
}