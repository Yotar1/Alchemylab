#pragma once
#include <string>
#include <vector>
#include <iostream>

struct Ингредиент {
    std::string название;
    std::string описание;
    int эффект;

    void вывести() const {
        std::cout << "Ingredient: " << название
            << "\nDescription: " << описание
            << "\nEffect: " << эффект << "\n\n";
    }
};

struct Основа {
    std::string название;
    std::string описание;
    double множительЭффекта;

    void вывести() const {
        std::cout << "Base: " << название
            << "\nDescription: " << описание
            << "\nMultiplier: " << множительЭффекта << "\n\n";
    }
};

class Зелье;

class Котел {
private:
    int объем;
    std::vector<Ингредиент> ингредиенты;
    Основа текущаяОснова;

public:
    Котел();
    Котел(int объем, Основа основа);
    Котел(const Котел& другой);
    ~Котел();

    void добавитьИнгредиент(const Ингредиент& ингредиент);
    Зелье создатьЗелье(std::string название,
        std::string описание,
        double цена);
    void заполнитьИзЗелья(const Зелье& зелье);

    void вывести() const;
};