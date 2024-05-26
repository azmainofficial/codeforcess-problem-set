#include<iostream>
using namespace std;
int main() {
    long long n , sum = 0;
    cin >> n;
    for (size_t i = n; i >0; i--){
        sum = sum + i;
    }
    cout << sum;
}
// time limit ex