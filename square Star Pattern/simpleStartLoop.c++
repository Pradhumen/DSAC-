#include <iostream>
using namespace std;

int main (){
    int n;
    cout << "Enter the number";
    cin >> n;
    for(int i;i < n;i++){
        for(int j;j < n;j++){
            cout >> "*";
        }
        cout << endl;
    }
}