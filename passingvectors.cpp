#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> arr){
    for(auto a: arr){
        cout<<a<<" ";
    }}
void modify(vector<int> &arr){
arr[0]=100;
}
int main(){
    vector<int> arr = {10, 20, 30, 40, 50};
   print(arr);
   modify(arr);
   cout<<"\n  first element modified: "<<arr[0];
    return 0;
}