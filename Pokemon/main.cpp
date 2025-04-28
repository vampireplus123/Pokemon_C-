#include <iostream>
#include <string.h>
using namespace std;


<<<<<<< Updated upstream

enum class PokemonChoice {
    Charmander,
    Bulbasaur,
    Splendid,
    InvalidChoice
};


enum class PokemonType   {
    Fire, 
    Electric, 
    Water, 
    Earth, 
    Normal
};

enum class HealingItems   {
    Potion,
    Elixir
};

enum class BattleItems   {
    Potion,
    Elixir
};


=======
enum PokemonChoice {
    Charmander,
    Bulbasaur,
    Squirtle,
    InvalidChoice
};
>>>>>>> Stashed changes
int main() {
    string player_name;
    int player_choice;
    int castle;
<<<<<<< Updated upstream
    PokemonChoice pokemon_choice  =  PokemonChoice::InvalidChoice;
    HealingItems HealingItems = HealingItems::Potion;
    BattleItems BattleItems = BattleItems::Potion;
    

    cout<<" Trainer! Before you embark on your journey,\nthe Pokemon world needs to know who you are!";
=======
    PokemonChoice choice = InvalidChoice;

    cout<<" Trainer! Before you embark on your journey,\nthe Pokémon world needs to know who you are!";
   
>>>>>>> Stashed changes
    cout<<"Time to step up and tell us your name.\nAnd remember, a great name is the start of every great adventure!"<<endl;
    
   
    cout << "Enter your name: ";
    cin >> player_name;
    cout << "Welcome to the world of Pokemon! "<<player_name<<"I am Professor Oak.\n";
    cout<<"--------\n";

	cout << "You can choose one of the following Pokemon:\n";
	cout << "1. Bulbasaur\n2. Charmander\n3. Squirtle\n";
	
    cout << "Which Pokemon would you like to choose? Enter the number: ";

    cin >> player_choice;

    switch (player_choice)
    {
        case 1:
            /* code */
            pokemon_choice =  PokemonChoice::Charmander;
            break;
        case 2:
            pokemon_choice =  PokemonChoice::Bulbasaur;
            break;
        case 3:
            pokemon_choice =  PokemonChoice::Splendid;
            break;
        default:
            cout<<"Professor Oak: Hmm, that doesn't seem right. Let me choose for you… Just kidding! Let's go with Pikachu, the surprise guest!";
            break;
    }

    switch (pokemon_choice)
    {
        case PokemonChoice::Charmander:
            cout << "Professor Oak: A fiery choice! Charmander is yours!\n";
            break;
        case PokemonChoice::Bulbasaur:
            cout << "Professor Oak: A fine choice! Bulbasaur is always ready to grow on you!\n";
            break;
        case PokemonChoice::Splendid:
            cout << "Professor Oak: Splendid! Squirtle will keep you cool under pressure!\n";
            break;
        default:
            cout << "Professor Oak: Hmm, that doesn't seem right. Let me choose for you...\n";
            pokemon_choice =  PokemonChoice::Charmander;
            cout << "Professor Oak: Just kidding! Let's go with Charmander, the fiery dragon in the making!\n";
            break;
    }

    cout<<"--------\n";
    cout<<"--------\n";
    cout << "Welcome, brave adventurer!\n"
        << "You find yourself standing in front of a massive, ancient castle.\n"
        << "The walls are cracked with age,\n"
        << "and the doors creak as they slowly open in front of you.\n"
        << "Inside, there are many rooms, each more mysterious than the last.\n"
        << "Some may hold treasures beyond imagination,\n"
        << "while others may hide dangers lurking in the shadows.\n";


    cout<<"--------\n";
    cout<<"Enter the castle, choose your room by entering a number (1, 2, or 3): ";
    cin>>castle;

    switch (castle)
    {
    case 1:
        cout<<"A room full of gold coins! You can retire now, you lucky soul!";
        break;
    case 2:
        cout<<"A library of ancient books! You gain immense knowledge, but beware… some knowledge comes with a price.";
        break;
    case 3:
        cout<<"A sleeping dragon! You barely escape with your life. Perhaps next time, choose more wisely...";
        break;
    default:
        cout<<"A secret passage to the dungeon! Beware, danger lies ahead in the dark corridors.";
        break;
    }
    
    cout<<"--------\n";
    cout<<"--------\n";
    cout << "Young Trainer!\n"
     << "You have been doing a fantastic job so far.\n"
     << "But a new challenge awaits, one that even I am struggling with in the lab!\n"
     << "Today, we are dealing with a type confusion like no other!\n";
     
    cout<<"--------\n";
    switch (HealingItems)
    {
        case HealingItems::Potion:
            cout << "Healing Potion used! Your Pokémon recovers HP!\n";
            break;
        case HealingItems::Elixir:
            cout << "Healing Elixir used! Your Pokémon recovers PP!\n";
            break;
        default:
            break;
    }
    
    switch (BattleItems)
    {
        case BattleItems::Potion:
            cout << "Battle Potion used! Your Pokémon's attack power rises!\n";
            break;
        case BattleItems::Elixir:
            cout << "Battle Elixir used! Your Pokémon can use moves without consuming PP for a while!\n";
            break;
        default:
            break;
    }
    return 0;
}
