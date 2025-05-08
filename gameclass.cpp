// Create a class game with member function to simulate a simple game with player actions and scoring:
#include <iostream>
#include<string>
using namespace std;
class Game
{
private:
    int score;
    string playerName;

public:
    Game(string name)
    {
        playerName = name;
        score = 0;
    }
    void attack()
    {
        cout << playerName << " perform attack! " << endl;
        score = score + 10;
    }
    void defend()
    {
        cout << playerName << " perform defends! " << endl;
        score = score + 5;
    }
    void heal()
    {
        cout << playerName << " perform heal! " << endl;
        score = score + 7;
    }
    void showScore()
    {
        cout << playerName << " current score: "<<score << endl;
    }
};
int main()
{
    Game p1("Sanskrati");
    //simulate actions:
    p1.attack();
    p1.defend();
    p1.heal();
    //show final score;
    p1.showScore();
    return 0;
}