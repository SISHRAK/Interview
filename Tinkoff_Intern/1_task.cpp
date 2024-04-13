#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int cnt5 = 0;
    int cntbad = 0;
    int maxx = -1;
    int start = 0;

    for (int end = 0; end < n; end++) {
        if (arr[end] == 5) {
            cnt5++;
        } else if (arr[end] <= 3) {
            cntbad++;
        }

        while (end - start + 1 > 7) {
            if (arr[start] <= 3) {
                cntbad--;
            } else if (arr[start] == 5) {
                cnt5--;
            }
            start++;
        }

        if (cntbad == 0 && end - start + 1 == 7) {
            maxx = max(cnt5, maxx);
        }
    }

    cout << maxx << '\n';
}
