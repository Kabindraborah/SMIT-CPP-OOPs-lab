#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

struct cricket {
  char name[50];
  char team[50];
  float avg;
};

int main() {
  struct cricket player[50];
  int n;

  cout << "Enter the number of players: ";
  cin >> n;

  for (int i = 0; i < n; i++) {
    cout << "Enter the name of player " << i + 1 << ": ";
    cin >> player[i].name;

    cout << "Enter the team of player " << i + 1 << ": ";
    cin >> player[i].team;

    cout << "Enter the batting average of player " << i + 1 << ": ";
    cin >> player[i].avg;
  }

  sort(player, player + n, [](const struct cricket& a, const struct cricket& b) {
    return a.team, b.team;
  });

  cout << "\nTeamwise list of players with their batting average\n";
  for (int i = 0; i < n; i++) {
    cout << "\nPlayer name: " << player[i].name;
    cout << "\tTeam name: " << player[i].team;
    cout << "\tBatting average: " << player[i].avg;
  }

  return 0;
}
