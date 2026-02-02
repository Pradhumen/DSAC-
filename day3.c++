#include <iostream>
using namespace std;

void reverseArray(int arr[],int length){
    int left = 0;
    int right = length - 1;
    while(left < right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
}



void buildPrefixSum(int arr[],int length,int prefix[]){
    prefix[0] = arr[0];
    for(int i =1;i < length;i++){
        prefix[i] = prefix[i-1] + arr[i];
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int length = sizeof(arr)/ sizeof(arr[0]);
    int prefix[length];
    reverseArray(arr,length);
    buildPrefixSum(arr,length,prefix);

     cout << prefix[0];
}