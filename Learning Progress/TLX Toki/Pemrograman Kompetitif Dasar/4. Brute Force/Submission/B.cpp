#include <bits/stdc++.h>
using namespace std;
#define begin ios::sync_with_stdio(0); cin.tie(0);

int team_scores[5] = {0}, final_guess[5], num_teams;
bool is_possible;

bool check_possible(int current_team, int next_team)
{
    if (current_team == num_teams - 1)
    {
        for (int i = 0; i < num_teams; ++i) if (team_scores[i] != final_guess[i]) return false;
        return true;
    }
    else if (next_team == num_teams) return check_possible(current_team + 1, current_team + 2);
    else
    {
        team_scores[current_team] += 3;
        is_possible |= check_possible(current_team, next_team + 1);
        team_scores[current_team] -= 3;

        team_scores[current_team]++;
        team_scores[next_team]++;
        is_possible |= check_possible(current_team, next_team + 1);
        team_scores[current_team]--;
        team_scores[next_team]--;

        team_scores[next_team] += 3;
        is_possible |= check_possible(current_team, next_team + 1);
        team_scores[next_team] -= 3;

        return is_possible;
    }
}

void solve()
{
    cin >> num_teams;

    for (int i = 0; i < num_teams; ++i) cin >> final_guess[i];

    is_possible = false;
    cout << ((check_possible(0, 1)) ? "YES" : "NO") << endl;
}

int main()
{
    begin;

    int test_cases;
    cin >> test_cases;

    while (test_cases--) solve();

    return 0;
}
