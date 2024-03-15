#include <cstring>
#include <iostream>
#include <vector>

using namespace std;

int N;
vector<string> grid;
bool visited_normal[100][100];
bool visited_color_blind[100][100];

void dfs(int x, int y, char color, bool visited[100][100]) {
  if (x < 0 || x >= N || y < 0 || y >= N || visited[x][y] ||
      grid[x][y] != color)
    return;

  visited[x][y] = true;

  dfs(x + 1, y, color, visited);
  dfs(x - 1, y, color, visited);
  dfs(x, y + 1, color, visited);
  dfs(x, y - 1, color, visited);
}

int main() {
  cin >> N;
  grid.resize(N);
  for (int i = 0; i < N; ++i)
    cin >> grid[i];

  int count_normal = 0;
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N; ++j) {
      if (!visited_normal[i][j]) {
        dfs(i, j, grid[i][j], visited_normal);
        count_normal++;
      }
    }
  }

  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N; ++j) {
      if (grid[i][j] == 'G')
        grid[i][j] = 'R';
    }
  }

  int count_color_blind = 0;
  memset(visited_color_blind, false, sizeof(visited_color_blind));
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N; ++j) {
      if (!visited_color_blind[i][j]) {
        dfs(i, j, grid[i][j], visited_color_blind);
        count_color_blind++;
      }
    }
  }

  cout << count_normal << " " << count_color_blind << endl;

  return 0;
}
