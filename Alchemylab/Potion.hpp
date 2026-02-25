#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "AlchemyLib.hpp"

class Зелье {
private:
    std::string название;
    std::string описание;
    double цена;
    int объем;
    Основа основа;
    std::vector<Ингредиент> ингредиенты;

public:
    Зелье();
    Зелье(std::string н,
        std::string о,
        double ц,
        int об,
        Основа ос,
        std::vector<Ингредиент> инг);

    Зелье(const Зелье& другое);
    ~Зелье();

    // getters
    std::string getНазвание() const;
    std::string getОписание() const;
    double getЦена() const;
    int getОбъем() const;
    Основа getОснова() const;
    std::vector<Ингредиент> getИнгредиенты() const;

    // setters
    void setНазвание(std::string н);
    void setОписание(std::string о);
    void setЦена(double ц);
    void setОбъем(int об);
    void setОснова(Основа ос);

    Зелье operator+(const Зелье& другое);
    Зелье& operator+=(const Зелье& другое);
    Зелье operator*(const Зелье& другое);

    void сменитьОснову(Основа новаяОснова);
    void отпить(int количество);

    void вывести() const;
};