//write a program in cpp to find the sum of all even number between 1 to 100;
#include<iostream>
using namespace std;
int main(){
    int n,sum=0,j=0;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            cout<<i<<",";
            sum=sum+i;
            j++;
    
        }
    
    }
    float avg=sum/j;
    cout<<"Sum of all even number is: "<<sum<<endl;
    cout<<"Average of all even number is: "<<avg<<endl;
}