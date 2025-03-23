//write a cpp program to calculate the sum of the first 50 natural number using a while loop:
#include<iostream>
using namespace std;
int main(){
    int sum =0, count=1;
    while(count<=50){
        sum+=count;
        count+=1;
}
cout<<"sum of first 50 natural number is: "<<sum<<endl;
}