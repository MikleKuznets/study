#ifndef MENU_H
#define MENU_H
#include <string>

class Mymenu

{
public:
    Mymenu(int n, int c);
    ~Mymenu();

    void first_menu();
    void menu_answer();
    void menu_continue();
    char menu_file();

private:
    int number_menu;
    int choise;
    std::string finding_file;
    std::string finding_word;
};



#endif // MENU_H
