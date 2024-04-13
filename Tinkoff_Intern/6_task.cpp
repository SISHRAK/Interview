#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <tuple>
#include <string>
#include <map>

using namespace std;

int bfs(int n, const vector<string>& board, pair<int, int> start, pair<int, int> end, map<char, set<pair<int, int>>> direction) {
    queue<tuple<pair<int, int>, char, int>> queue;
    map<char, set<pair<int, int>>> visited;
    visited['K'].insert(start);
    visited['G'].insert({});

    queue.push(make_tuple(start, 'K', 0));

    while (!queue.empty()) {
        auto [pos, state, dist] = queue.front();
        queue.pop();
        auto [cur_i, cur_j] = pos;

        for (auto [di, dj] : direction[state]) {
            int i = cur_i + di, j = cur_j + dj;
            if (i < 0 || i >= n || j < 0 || j >= n || visited[state].count({i, j})) {
                continue;
            }
            if (make_pair(i, j) == end) {
                return dist + 1;
            }
            char nextState = (board[i][j] == '.' || board[i][j] == 'S') ? state : board[i][j];
            queue.push(make_tuple(make_pair(i, j), nextState, dist + 1));
            visited[nextState].insert({i, j});
        }
    }

    return -1;
}

int main() {
    int n;
    cin >> n;
    vector<string> board(n);
    pair<int, int> start, end;

    for (int i = 0; i < n; ++i) {
        cin >> board[i];
        int sPos = board[i].find('S');
        int fPos = board[i].find('F');
        if (sPos != string::npos) start = {i, sPos};
        if (fPos != string::npos) end = {i, fPos};
    }

    map<char, set<pair<int, int>>> direction{
            {'K', {{-2, -1}, {-1, -2}, {1, -2}, {2, -1}, {2, 1}, {1, 2}, {-1, 2}, {-2, 1}}},
            {'G', {{-1, -1}, {0, -1}, {1, -1}, {1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}}}
    };

    int result = bfs(n, board, start, end, direction);
    cout << result << '\n';

    return 0;
}
