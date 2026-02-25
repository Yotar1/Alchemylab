#include "Potion.hpp"
#include "AlchemyLib.hpp"

void оценкаЛабы() {
    std::cout << "\n=== Lab evaluation ===\n";
    std::cout << "Interest: 9/10\n";
    std::cout << "Content: 9/10\n";
    std::cout << "Difficulty: 10/10\n";
}

int main() {

    Ингредиент мана = { "Mana", "Restores magic", 10 };
    Ингредиент порох = { "Gunpowder", "Explosion effect", 15 };

    Основа эликсир = { "Elixir", "Magical base", 1.5 };

    Котел котел(100, эликсир);
    котел.добавитьИнгредиент(мана);
    котел.добавитьИнгредиент(порох);

    Зелье зелье = котел.создатьЗелье("Battle elixir",
        "Improves combat abilities",
        150.0);

    зелье.вывести();

    оценкаЛабы();
    return 0;
}