#include <iostream>
#include<iostream>
#include<string>
#include <cstdio>

using namespace std;



// Define an enum for Pokemon choices
enum class PokemonChoice {
    CHARMANDER = 1,
    BULBASAUR,
    SQUIRTLE,
    PIKACHU // Default choice
};

// Define an enum for Pokemon types
enum class PokemonType {
    FIRE,
    GRASS,
    WATER,
    ELECTRIC
};
// Pokemon class definition
class Pokemon {
    public:
    // Attributes
    string name;
    PokemonType type;
    int health;

    Pokemon()
    {
        name = "Pikachu";
        type = PokemonType::ELECTRIC;
        health = 10;
    };
    // Parameterized constructor
    Pokemon(string p_name, PokemonType p_type, int p_health){
        name = p_name;
        type = p_type;
        health = p_health;
    }
    // Copy constructor
    Pokemon(const Pokemon& other) {
        name = other.name;
        type = other.type;
        health = other.health;
    }


    // Method to simulate attacking (just for demonstration)
    void attack() { std::cout << name << "attacks with a powerful move!\n"; }
};


class Player
{
    public:
        string name;
        Pokemon chosenPokemon;

        Player()
        {
            name = "Trainer";
            chosenPokemon = Pokemon(); // Default to Pikachu
        }
        // Parameterized constructor
        Player(string P_name, Pokemon P_chosenPokemon) {
            name = P_name;
            chosenPokemon = P_chosenPokemon;
        }
        // Copy constructor
        Player(const Player& other) {
            name = other.name;
            chosenPokemon = other.chosenPokemon;
        }

        void choosePokemon(int choice) {
            switch ((PokemonChoice)choice) { 
                case PokemonChoice::CHARMANDER:
                        chosenPokemon = Pokemon("Charmander", PokemonType::FIRE, 100); 
                        break; 
                case PokemonChoice::BULBASAUR: 
                        chosenPokemon = Pokemon("Bulbasaur", PokemonType::GRASS, 100); 
                        break; 
                case PokemonChoice::SQUIRTLE: 
                        chosenPokemon = Pokemon("Squirtle", PokemonType::WATER, 100); 
                        break; 
                default: 
                        chosenPokemon = Pokemon(); 
                        break; 
                        } 
                        cout << "Player " << name << " chose " << chosenPokemon.name << "!\n";
        }
};

class ProfessorOak {
    // Attributes
    public:
    string name;

    // Method to greet the player
    void greetPlayer() {
        cout << name << ": Hello there! Welcome to the world of Pokemon!\n"; 
        cout << name << ": My name is Oak. People call me the Pokemon Professor!\n"; 
        cout << name << ": But enough about me. Let's talk about you!\n";
        cout<<"---------------------------------------------------------\n";
    }

    // Method to ask the player to choose a Pokemon
    void offerPokemonChoices(Player& player) {
        cout << name << ": Ah, " << player.name << "! What a fantastic name!\n";
        cout << name << ": You must be eager to start your adventure. But first, you’ll need a Pokemon of your own!\n"; 

        // Presenting Pokemon choices 
        cout << name << ": I have three Pokemon here with me. They’re all quite feisty!\n"; 
        cout << name << ": Choose wisely...\n"; cout << "1. Charmander - The fire type. A real hothead!\n"; 
        cout << "2. Bulbasaur - The grass type. Calm and collected!\n"; 
        cout << "3. Squirtle - The water type. Cool as a cucumber!\n"; 

        int choice; 
        cout << name << ": So, which one will it be? Enter the number of your choice: "; 
        cin >> choice; 
        player.choosePokemon(choice);
    }
};

int main() {
    ProfessorOak professor;
    Pokemon placeholderPokemon;
    Player player;
    string playerName;
    professor.name = "Professor Oak";

    professor.greetPlayer();
    
    cout << "Enter Your Name: \n";
    cin >> playerName;
    player.name = playerName;

    professor.offerPokemonChoices(player);

    cout << "Professor Oak: " << player.chosenPokemon.name << " and you, " << player.name << ", are going to be the best of friends!\n";
    cout << "Professor Oak: Your journey begins now! Get ready to explore the vast world of Pokemon!\n";

    return 0;
}
