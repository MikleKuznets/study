#include "finding.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstring>
#include "menu.h"
#include <ctime>


finding::finding(char f[100], char w[100])
{
   strcpy(file_name, f);
   strcpy(find_word, w);
}


finding::~finding()
{

}

void finding::finding_word ()
{

    std::string s, word;
    std::string s1;
    s1 = "C://test/";
    s1 += file_name;
    s1 +=".txt";
    std::ifstream file(s1);

    char c;
    int letters = 0;
    int count = 0;
    int a = 0;
    int b = 0;

    while (!file.eof())
    {
            file.get(c);
            s.push_back(c);
    }

    file.close();

    std::vector<char> s2(s.c_str(), s.c_str() + s.size() + 1);

    while (s2[a] != '\0')
    {
        letters = 0;
        b = a;

        while ((s2[b]!=' ')&&(s2[b]!='.')&&(s2[b]!=','))
        {
            word += s2[b];
            ++b;
            ++letters;

        }
        if (word == find_word)
        {
            ++count;

            std::cout << "count = " << count << std::endl;
        }

        word.clear();
        if (letters == 0)
            letters = 1;

        a = a + letters;
    }

    std::cout << "words (" << find_word << ") found - " << count << " times" << std::endl;

}


void finding::find_file()
{
    std::string s1;
    s1 = "C://test/";
    s1 += file_name;
    s1 +=".txt";
    std::ifstream file(s1);

}

void finding::count_word(int &count_words)
{
    std::string s1;
    s1 = "C://test/";
    s1 += file_name;
    s1 +=".txt";
    std::ifstream file(s1);
    std::string s, word1;

    char c;
    int letters = 0;
    int count = 0;
    int a = 0;
    int b = 0;

//    system ("cls");

    while (!file.eof())
    {
        file.get(c);
        s.push_back(c);
    }

    file.close();

    std::vector<char> s2(s.c_str(), s.c_str() + s.size() + 1);

    while (s2[a] != '\0')
    {
        letters = 0;
        b = a;


        while ((s2[b]!=' ')&&(s2[b]!='.')&&(s2[b]!=','))
        {
            word1 += s2[b];
            ++b;
            ++letters;

        }

        if (letters > 0)
            ++count;
        else
            letters = 1;

    word1.clear();

    a = a + letters;
    }

    count_words = count;

}

void finding::find_words ()
{
    unsigned int time_begin, time_end, search_time;

    time_begin = clock();
    std::string s, s1, word1, word2, find_word;

    s1 = "C://test/";
    s1 += file_name;
    s1 += ".txt";

    std::ifstream file(s1);

    int count;
    int a = 0;
    int a2 = 0;
    int b2 = 0;
    int b = 0;
    int ab = 0;
    int letters = 0;
    int letters2 = 0;
    int else_count = 0;
    char c;

    count_word(count);

    while (!file.eof())
    {
            file.get(c);
            s.push_back(c);
    }

    file.close();

    std::vector<char> s2(s.c_str(), s.c_str() + s.size() + 1);

    while (ab != count)
    {

        while (s2[a] != '\0')
        {
            letters = 0;
            b = a;

            while ((s2[b]!=' ')&&(s2[b]!='.')&&(s2[b]!=','))
            {
                word1 += s2[b];
                ++b;
                ++letters;

            }

            if (letters > 0)
            {
                find_word = word1;
                a2 = 0;

                while (s2[a2] != '\0')
                {
                    letters2 = 0;
                    b2 = a2;
                    while ((s2[b2]!=' ')&&(s2[b2]!='.')&&(s2[b2]!=','))
                    {
                        word2 += s2[b2];
                        ++b2;
                        ++letters2;
                    }
                    if (letters2 > 0)
                    {

                        if (find_word == word2)
                        {
                            ++else_count;
                            if (else_count >= 1)
                            {
                                for (int del_w = a2; del_w != b2; ++del_w)
                                    s2[del_w] = ' ';

                            }
                        }
                    }
                    word2.clear();
                    if (letters2 == 0)
                        letters2 = 1;

                    a2 = a2 + letters2;

                }

                std:: cout << "" << word1 << " meat " << else_count <<" times" << std::endl;
                ab = ab + else_count;
                else_count = 0;

            }
            word1.clear();
            if (letters == 0)
                letters = 1;

            a = a + letters;
        }

    }
    time_end = clock();

    search_time = time_end - time_begin;

    std::cout << "Your time - " << search_time/CLOCKS_PER_SEC << " seconds" << std::endl;

}
