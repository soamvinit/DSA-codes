#include<iostream>
using namespace std;

int sumArray(int num[], int n){
    int sum=0;
    for(int i=0;i<n;i++){
         sum = sum + num[i]; 
    
    }
   return sum;
}

int main(){
    int size;
    cin>>size;

    int num[100];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"Sum of elements of array is "<<sumArray(num,size)<<endl;
    return 0;
}
