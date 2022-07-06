#include "menu.h"
#include "finding.h"
#include <iostream>
#include <vector>
#include <conio.h>
#include <cstring>
#include <string>

void Mymenu::first_menu()
{

    system("cls");

    std::cout << "(W)ork with text" << std::endl;
    std::cout << "(E)nter file" << std::endl;
    std::cout << "(F)ind word" << std::endl;
    std::cout << "(Q)uit" << std::endl;

    menu_answer();

}

void Mymenu::menu_answer()
{

    std::string file_name;
    std::string enter_word;

    char press = getch();

    if (number_menu == 1)
    {
        finding_file = "C://test/text.txt";

    }

    if ((press == 'W')||(press == 'w'))
    {
         system ("cls");
         choise = 1;
         Finding find1(finding_file, finding_word);
         find1.find_words();

         menu_continue();
     }
     if ((press == 'E')||(press == 'e'))
     {
          choise = 2;
          system ("cls");
          number_menu = 2;

          menu_file();

          menu_continue();
     }
     if ((press == 'F')||(press == 'f'))
     {

          choise = 3;
          system ("cls");
          std::cout << "Enter word for search: ";
          std::cin >> finding_word;

          Finding find2(finding_file, finding_word);
          find2.finding_word();

          menu_continue();
     }
     if ((press == 'Q')||(press == 'q'))
             exit;
}

void Mymenu::menu_continue()
{

    char answer;
    std::cout << " " << std::endl;
    std::cout << "Do you want continue? (y/n) : ";
    answer = getch();
    if ((answer == 'y')||(answer == 'Y'))
    {
        if (choise == 1) (number_menu = 1);
        if (choise == 2) (number_menu = 2);
        if (choise == 3) (number_menu = 3);
    }
    if ((answer == 'n')||(answer == 'N'))
        exit;

    system ("cls");
    first_menu();
}

char Mymenu::menu_file()
{
    number_menu = 2;
    std::string name_file;
    system("cls");
    std::cout << "Enter file name: ";
    std::cin >> name_file;
    finding_file = "C://test/";
    finding_file += name_file;
    finding_file += ".txt";

}


Mymenu::Mymenu(int n, int c)
    :number_menu(n)
    ,choise(c)
{

}

Mymenu::~Mymenu()
{

}

