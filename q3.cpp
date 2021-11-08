#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Player
{
 private:
   string name;
   int score;
 public:
   Player() {
     score=0;
     name = "no name";
   }
   Player(int newScore, string newName) {
     score=newScore;
     name=newName;
   }
   void setName(string newName) {name=newName;}
   void setScore(int newScore) {score=newScore;}
   string getName() {return name;}
   int getScore() {return score;}
};


void addPlayer(int &numPlayers, vector<Player> &players)
{  
  string name;
  int score;

  if (numPlayers < 10) {
    cout << "\nEnter the new player's name: ";
    cin >> name;
    cout << "Enter the new player's score: ";
    cin >> score;
    Player newPlayer(score, name);
    players.push_back(newPlayer);
    cout << name << " has been added to the list.\n";
    numPlayers++;
  }
  else {
    cout << "\nThe list of plyers is full.\n";
  }
}
void printPlayers(int numPlayers, vector<Player> players)
{
  if (numPlayers > 0) {
    cout << "\nPlayer Scores: " << endl;
    for (int i = 0; i < numPlayers; i++) 
    {
      cout << players[i].getName() << " " << players[i].getScore() << endl; 
    }
  }
  else {
    cout << "\nThe player list is empty.\n";
  }
}
void searchPlayer(int numPlayers, vector<Player> players)
{
  string name;
  
  if (numPlayers > 0) {
    cout << "\nEnter the name of the player you want to search for: " << endl;
    cin >> name;
    
    for (int i = 0; i < numPlayers; i++) {
      if (players[i].getName() == name)
      {
        cout << players[i].getName() << " " << players[i].getScore() << endl;
      }
      else {
        cout << "This player does not exist.\n";
      }
    }
  }
  else {
    cout << "\nThe player list is empty.\n";
  }
}
void removePlayer(int &numPlayers, vector<Player> &players)
{
  string name;
  
  if (numPlayers > 0) {
    cout << "\nEnter the player's name you want to remove: ";
    cin >> name;
    
    for (int i = 0; i < numPlayers; i++) {
      if (players[i].getName() == name)
      {
        players.erase(players.begin() + i);
        cout << name << " has been removed from the list.\n";
        numPlayers--;
      }
      else {
        cout << "This player does not exist.\n";
      }
    }
  }
  else {
    cout << "\nThe player list is empty.\n";
  }
}

int main () {
  
  int input = 0;
  string name;
  int score;
  int numberPlayers = 0;

  vector<Player> players;
  
  while (input !=5) {
    cout << "\nEnter the number for the action you want to preform:";
    cout << "\n1: Add a new player.";
    cout << "\n2: Print all player names and scores.";
    cout << "\n3: Get a player's score.";
    cout << "\n4: Remove a player.";
    cout << "\n5: Done.\n";
    cin >> input;

    switch (input) {
      case 1:
      addPlayer(numberPlayers, players);
      break;
      
      case 2: 
      printPlayers(numberPlayers, players);
      break;
      
      case 3:
      searchPlayer(numberPlayers, players);
      break;
      
      case 4:
      removePlayer(numberPlayers, players);
      break;

      case 5:
      break;
      
      default:
      cout << "Enter a number between 1 and 5.";
      break;
    }
  }
return 0;
};


