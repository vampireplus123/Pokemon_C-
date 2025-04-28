#include <iostream>

using namespace std;


void castSpell(int magicLevel)
{
    cout<<"Casting spell with magic level: "<<magicLevel;
}
void brewElixir(int &magicLevel)
{
    magicLevel += 10;
}

void brewPotion(int magicLevel)
{
    magicLevel += 50;
}
int main() {
    int magicLevel = 30;
    castSpell(magicLevel);

    // Brew the Elixir of Wisdom and call castSpell to show effect
    brewElixir(magicLevel);
    castSpell(magicLevel);

    // Brew the Potion of Swiftness and call castSpell to show effect
    brewPotion(magicLevel);
    
    // Final magic level after all potions
    cout << "Final magic level: " << magicLevel << endl;
    return 0;
}
