#include <iostream>
#include <string.h>
using namespace std;

int main() {
    string player_name;
    int player_choice;
    cout<<" Trainer! Before you embark on your journey,\nthe Pokémon world needs to know who you are!";
   
    cout<<"Time to step up and tell us your name.\nAnd remember, a great name is the start of every great adventure!"<<endl;
    
   
    cout << "Enter your name: ";
    cin >> player_name;

    cout<<"Great start,"<<player_name<< " Looks like you’ve mastered the opening of every code adventure. Keep this up, and you’ll be a coding master in no time!";

    cout << "Welcome to the world of Pokémon! I am Professor Oak.\n";
	cout << "You can choose one of the following Pokémon:\n";
	cout << "1. Bulbasaur\n2. Charmander\n3. Squirtle\n";
	
    cout << "Which Pokémon would you like to choose? Enter the number: ";
    cin >> player_choice;
    if(player_choice == 1)
    {
        cout<<"You chose Bulbasaur! A wise choice.";
    }else if(player_choice == 2)
    {
        cout<<"You chose Charmander! A fiery choice.";
    }else if (player_choice == 3)
    {
        cout<<"You chose Squirtle! A cool choice.";

    }
    else
    {
        cout<<"Invalid choice. Please restart the game.";
    }
    return 0;
}
