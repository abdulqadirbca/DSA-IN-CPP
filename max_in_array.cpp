#include <iostream>
using namespace std;
#include <climits>
int main(){
int arr[]={-7,-8,-1,-3};
int n=sizeof(arr)/4;
int mx =INT_MIN;
for(int i=0; i<n; i++){
    mx=max(mx,arr[i]);
}
cout<<mx;
}
