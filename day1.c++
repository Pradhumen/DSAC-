#include <iostream>
using namespace std;

int square(int a){
    return a*a;
}

string evenOdd(int a){
   return (a%2==0)? "even" : "odd";
}

int countTotalDigit(int a){
    int count = 0;
    while(a > 0){
        count++;
        a = a/10;
    }
}

int main (){
    int data;
    cin >> data;
    cout << countTotalDigit(data);
    cout << square(data);
    cout << evenOdd(data);
    return 0;
}