#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    std::vector<std::string> grid(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> grid[i];
    }

    std::vector<std::vector<int>> dp(n, std::vector<int>(3, 0));

    for (int j = 0; j < 3; ++j) {
        if (grid[n - 1][j] == 'C') {
            dp[n - 1][j] = 1;
        }
    }


    for (int i = n - 2; i >= 0; --i) {
        for (int j = 0; j < 3; ++j) {
            if (grid[i][j] == 'W') continue;

            for (int k = j - 1; k <= j + 1; ++k) {
                if (k >= 0 && k < 3 && grid[i + 1][k] != 'W') {
                    int has_mushroom = (grid[i][j] == 'C') ? 1 : 0;
                    dp[i][j] = std::max(dp[i][j], dp[i + 1][k] + has_mushroom);
                }
            }
        }
    }
    int max_mushrooms = *std::max_element(dp[0].begin(), dp[0].end());
    std::cout << max_mushrooms << '\n';
}
