// Solved By       : Grant Gabriel Tambunan
// Connect With Me : https://www.linkedin.com/in/grantgabrieltambunan/

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

#define all(a) a.begin(), a.end()
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL)

string identik(const vector<vector<int>> &m1, const vector<vector<int>> &m2, int N) {
  for(int i = 0; i < N; i++)
    for(int j = 0; j < N; j++)
      if(m1[i][j] != m2[i][j])
        return "";

  return "identik";
}

string vertikal(const vector<vector<int>> &m1, const vector<vector<int>> &m2, int N) {
  vector<vector<int>> temp = m2;

  for(auto& x : temp) {
    reverse(x.begin(), x.end());
  }

  for(int i = 0; i < N; i++)
    for(int j = 0; j < N; j++)
      if(m1[i][j] != temp[i][j])
        return "";

  return "vertikal";
}

string horizontal(const vector<vector<int>> &m1, const vector<vector<int>> &m2, int N) {
  vector<vector<int>> temp = m2;
  reverse(all(temp));

  for(int i = 0; i < N; i++)
    for(int j = 0; j < N; j++)
      if(m1[i][j] != temp[i][j])
        return "";

  return "horisontal";
}

string diagonalkananbawah(const vector<vector<int>> &m1, const vector<vector<int>> &m2, int N) {
  for(int i = 0; i < N; i++)
    for(int j = 0; j < N; j++)
      if(m1[i][j] != m2[j][i])
        return "";

  return "diagonal kanan bawah";
}

string diagonalkiribawah(const vector<vector<int>> &m1, const vector<vector<int>> &m2, int N) {
  vector<vector<int>> temp;

  for(int i = N - 1; i >= 0; i--) {
    vector<int> row;
    for(int j = N - 1; j >= 0; j--)
      row.emplace_back(m2[i][j]);

    temp.emplace_back(row);
  }

  for(int i = 0; i < N; i++)
    for(int j = 0; j < N; j++)
      if(m1[i][j] != temp[j][i])
        return "";

  return "diagonal kiri bawah";
}

int main() {
  boost;
  
  int N;
  cin >> N >> N;
  
  vector<vector<int>> m1(N, vector<int>(N)), m2(N, vector<int>(N));
  for(int i = 0; i < N; i++) {
    for(int j = 0; j < N; j++) {
      cin >> m1[i][j];
    }
  }

  cin >> N >> N;
  for(int i = 0; i < N; i++) {
    for(int j = 0; j < N; j++) {
      cin >> m2[i][j];
    }
  }


  if(identik(m1, m2, N) == "identik")
    cout << "identik" << endl;
  else if(vertikal(m1, m2, N) == "vertikal")
    cout << "vertikal" << endl;
  else if(horizontal(m1, m2, N) == "horisontal")
    cout << "horisontal" << endl;
  else if(diagonalkananbawah(m1, m2, N) == "diagonal kanan bawah")
    cout << "diagonal kanan bawah" << endl;
  else if(diagonalkiribawah(m1, m2, N) == "diagonal kiri bawah")
    cout << "diagonal kiri bawah" << endl;
  else
    cout << "tidak identik" << endl;

  return 0;
}