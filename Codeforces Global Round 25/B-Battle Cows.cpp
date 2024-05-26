#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(n);
        for  (int i = 0; i < n ; i++) cin >> a[i];
        long long m_Spending = 0;
        int r_Tickets = k;
        int mx;
        int day = min(n, k / m + (k % m != 0));

        for (int j = 0;  j <= day; j++){
            if(r_Tickets %  m == 0){
                mx = m;
            }else{
                mx = r_Tickets % m;
            }
            int min_price = INT_MAX;
            int min_index = -1;
            for (int k = 0; k < n && k < j + 1; ++k){
                if (a[k] < min_price){
                    min_price = a[k];
                    min_index = k;
                }
            }

            m_Spending += min_price * mx;
            for (int k = min_index + 1; k < n && k < j + 1 + m; k++){
                a[k] += mx;
            }
                r_Tickets -= mx;
        }
    }
    
}
