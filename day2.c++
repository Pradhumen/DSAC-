#include <iostream>
using namespace std;

void printNumberDivisibleBy3(int num[],int length){
    for(int i = 0; i < length; i++){
        if(num[i] % 3 == 0){
            cout << num[i] << " ";
        }
    }
}

void sumOfArray(int num[],int length){
    int sum = 0;
    for(int i = 0;i < length;i++){
        sum += num[i];
    }
    cout << sum << " ";
}

void maximumElementInArray(int arr[],int length){
    int max = 0;
    for(int i = 0;i < length; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << max;
}

void countEvenNumber(int arr[], int length){
    int evenCount = 0;
    for(int i = 0; i < length; i++){
        if(arr[i] % 2 == 0){
            evenCount += arr[i];
        }
    }
     cout << evenCount;
}

void reverseArray(int arr[],int length){
    for(int i = length-1;i >= 0;i--){
        cout << arr[i];
    }
}

void linearSearch(int arr[],int length,int key){
    for(int i = 0;i < length;i++){
        if(arr[i] == key){
            cout << i;
        }
    }
}

int main(){
   int key = 6;
   int arr[] = {1,2,3,4,5,6};
   int length = sizeof(arr) / sizeof(arr[0]);
   printNumberDivisibleBy3(arr,length);
   sumOfArray(arr,length);
   maximumElementInArray(arr,length);
   countEvenNumber(arr,length);
   reverseArray(arr,length);
   linearSearch(arr,length,key);
}

