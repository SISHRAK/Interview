#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<long long>> mat(n, vector<long long>(m));

    for (long long i = 0; i < n; i++) {
        for (long long j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }

    vector<vector<long long>> transposed(m, vector<long long>(n));

    for (long long i = 0; i < m; i++) {
        for (long long j = 0; j < n; j++) {
            transposed[i][j] = mat[j][i];
        }
    }

    for (long long i = 0; i < m; i++) {
        for (long long j = 0; j < n / 2; j++) {
            swap(transposed[i][j], transposed[i][n - j - 1]);
        }
    }

    for (long long i = 0; i < m; i++) {
        for (long long j = 0; j < n; j++) {
            cout << transposed[i][j] << " ";
        }
        cout << '\n';
    }
}
