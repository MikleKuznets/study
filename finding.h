#ifndef FINDING_H
#define FINDING_H


class finding
{
public:
    finding(char f[100], char w[100]);

    ~finding();

    void count_word(int &count_words);
    void find_words();
    void find_file();
    void finding_word();

//    int count_words;

private:
    char file_name[100];
    char find_word[100];
//    int count_words;
};


#endif // FINDING_H
