#include<iostream>
using namespace std;
int sum(int arr[ ], int n){
    int sum =0;
    for(int i=0; i<n;i++)
    sum=sum+arr[i];
    return sum;
}
int main(){
    int arr[]={2,5,6,8,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"sum of given array is: "<<sum(arr,n);
    return 0;
}