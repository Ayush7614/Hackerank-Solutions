#include <bits/stdc++.h>

using namespace std;



int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }


    int max_sum = 0;
    int temp_sum;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            temp_sum = 0;
            temp_sum += arr[i][j];
            temp_sum += arr[i][j+1];
            temp_sum += arr[i][j+2];
             
            temp_sum += arr[i+1][j+1];
            temp_sum += arr[i+2][j];
            temp_sum += arr[i+2][j+1];
            temp_sum += arr[i+2][j+2];
            
            if(temp_sum > max_sum || i == 0 && j == 0)
                max_sum = temp_sum;
        }
    }
    cout << max_sum;

    return 0;
}
