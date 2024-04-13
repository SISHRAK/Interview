#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    char rotate;
    cin >> n >> rotate;

    vector<vector<int>> mat(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    vector<vector<pair<int, int>>> result;

    if (rotate == 'L') {
        for (int i = 0; i < n / 2; i++) {
            for (int j = i; j < n - i - 1; j++) {
                result.push_back({{i, j}, {j, n - i - 1}});
                result.push_back({{j, n - i - 1}, {n - i - 1, n - j - 1}});
                result.push_back({{n - i - 1, n - j - 1}, {n - j - 1, i}});
            }
        }
    } else {
        for (int i = 0; i < n / 2; i++) {
            for (int j = i; j < n - i - 1; j++) {
                result.push_back({{i, j}, {n - j - 1, i}});
                result.push_back({{j, n - i - 1}, {n - i - 1, n - j - 1}});
                result.push_back({{n - i - 1, n - j - 1}, {n - j - 1, i}});
            }
        }
    }

    cout << result.size() << endl;
    for (auto& pairs : result) {
        cout << pairs[0].first << " " << pairs[0].second << " "
             << pairs[1].first << " " << pairs[1].second << endl;
    }

    return 0;
}
