#include <iostream>
#include <stdlib.h>

typedef void function;

int level=1;
int a = 4;
int b = 10;
int c = 7;

function values() {
    std::cout << "A: " << a << "\n";
    std::cout << "B: " << b << "\n";
    std::cout << "C: " << c << "\n";
}

function level1_problems() {
    std::cout << "4a + 5bc(b-c)\n";
    std::cout << "33c - b(5-c)\n";
}

function solved_lvl1() {
    char solvedLvl1;
    std::cout << "Have you solved it? [y or n]: ";
    std::cin >> solvedLvl1;
    if(solvedLvl1 == 'y') {
        level = 2;
    } else {
        exit(0);
    }
}

int main() {
    values();
    level1_problems();
    solved_lvl1();
}
