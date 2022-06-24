#ifndef MENU_H
#define MENU_H


// namespace Menus
// {

class Mymenu // : public Othermenu

{
public:
    Mymenu(int number_menu, int choise);
    ~Mymenu();

    void first_menu();
    void menu_answer();
    void menu_continue();
    char menu_file();
//    int choose;
//    char press;
//    int n_m;

private:
//    int choise;
//    char press;
    int number_menu;
    int choise;
    char finding_file[100];
    char finding_word[100];
};

// }


#endif // MENU_H
