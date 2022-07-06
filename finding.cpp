#include "finding.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstring>
#include "menu.h"
#include <ctime>


Finding::Finding(std::string f, std::string w)
    :file_name(f)
    ,find_word(w)
{

}


Finding::~Finding()
{

}

void Finding::finding_word()
{
    std::string word;
    int count_letter;
    int count = -1;

    read_text();
    count_letters (count_letter);

    int place = 0;

    while (place != -1)
    {
        place = working_text.find(find_word);

        std:: cout << " place = " << place << std::endl;
        ++count;

        if (place != -1)
            working_text.erase(place, count_letter);

    }

    std::cout << "words (" << find_word << ") found - " << count << " times" << std::endl;

}


void Finding::find_file()
{
    read_text();

}

void Finding::read_text()
{
    std::ifstream file(file_name);
    char c;
    working_text.clear();
    while (!file.eof())
    {
        file.get(c);
        working_text.push_back(c);
    }

    working_text += '\0';
    file.close();

}

void Finding::count_letters(int &count_letter)
{
    count_letter = size(find_word);
}

void Finding::count_word(int &count_words)
{
    std::string word;

    int letters = 0;
    int count = 0;
    unsigned long long a = 0;
    unsigned long long b = 0;

    while (working_text[a] != '\0')
    {
        letters = 0;
        b = a;

        while ((working_text[b]!=' ')&&(working_text[b]!='.')&&(working_text[b]!=','))
        {
             word += working_text[b];
             ++b;
             ++letters;
         }

        if (letters > 0)
            ++count;
        else
            letters = 1;

        word.clear();

        a = a + letters;
    }

    count_words = count;

}


void Finding::find_words ()
{
    unsigned int time_begin, time_end, search_time;

    time_begin = clock();
    std::string word, find_word;

    int count;
    int a = 0;
    int b = 0;
    int ab = 0;
    int letters = 0;
    int else_count = 0;


    read_text();

//    std::cout << "we read file: " << file_name << std::endl;

    count_word(count);

//    std::cout << "there " << count << " words" << std::endl;

    while (ab != count)
    {

        while (working_text[a] != '\0')
        {
            letters = 0;
            b = a;

            while ((working_text[b]!=' ')&&(working_text[b]!='.')&&(working_text[b]!=','))
            {
                word += working_text[b];
                ++b;
                ++letters;

            }

            if (letters > 0)
            {

                int place = 0;
                while (place != -1)
                {
                     place = working_text.find(word);
                     ++else_count;
                     if (place != -1)
                         working_text.erase(place, letters);

                 }

                else_count = else_count - 1;

                std:: cout << "" << word << " meat " << else_count <<" times" << std::endl;

                ab = ab + else_count;
                else_count = 0;
                word.clear();
                a = 1;
            }
            else
                ++a;
         }

    }

    time_end = clock();

    search_time = time_end - time_begin;

    std::cout << "Your time - " << search_time/CLOCKS_PER_SEC << " seconds" << std::endl;

}
