#include<iostream>
#include <iomanip>
#define M_PI 3.141592653
using namespace std;
int main(){
    double R;
    cin >> R;
    double area = M_PI * (R * R);
    cout << fixed << setprecision(9)<< area <<endl;
}
