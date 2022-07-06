#ifndef FINDING_H
#define FINDING_H
#include <string>

class Finding
{
public:
    Finding(std::string f, std::string w);

    ~Finding();

    void count_letters(int &count_letter);
    void count_word(int &count_words);
    void read_text();
    void find_words();
    void find_file();
    void finding_word();


private:
    std::string file_name;
    std::string find_word;
    std::string working_text;

};


#endif // FINDING_H
