#include <iostream>
#include <string.h>

using namespace std;

struct cricket {
  char name[50];
  char team[50];
  float avg;
};

int main() {
  cricket player[50];
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

  // Sort the players by team name
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (strcmp(player[i].team, player[j].team) > 0) {
        struct cricket temp = player[i];
        player[i] = player[j];
        player[j] = temp;
      }
    }
  }

  // Print the player list
  cout << "\nTeamwise list of players with their batting average\n";
  for (int i = 0; i < n; i++) {
    cout << "\nPlayer name: " << player[i].name;
    cout << "\tTeam name: " << player[i].team;
    cout << "\tBatting average: " << player[i].avg;
  }

  return 0;
}
