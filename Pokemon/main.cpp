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
    switch (player_choice)
    {
    case 1:
        /* code */
        cout<<"Professor Oak: A fiery choice! Charmander is yours!";
        break;
    case 2:
        cout<<"Professor Oak: A fine choice! Bulbasaur is always ready to grow on you!";
        break;
    case 3:
        cout<<"Professor Oak: Splendid! Squirtle will keep you cool under pressure!";
        break;
    default:
        cout<<"Professor Oak: Hmm, that doesn't seem right. Let me choose for you… Just kidding! Let's go with Pikachu, the surprise guest!";
        break;
    }
    return 0;
}
