#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

int main(){
    int t, res, n, k, max = 0;
    std::cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        std::cin >> n >> k;
        for (int i = 1; i < n; ++i) {
            for (int j = i + 1; j <= n; ++j) {
                res = i & j;
                if (res > max && res < k) {
                    max = res;
                }
            }
        }
        std::cout << max << std::endl;
        max = 0;
    }
    return 0;
}
