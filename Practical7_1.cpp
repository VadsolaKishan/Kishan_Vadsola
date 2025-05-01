#include <iostream>
#include <vector>
#include <cstring>
#include <cctype>
using namespace std;

class Word 
{
public:
    string text;
    int count;

    Word(string t) : text(t), count(1) {}
};

class WordFrequency 
{
    vector<Word> words;

    void toLowerCase(string& str) 
    {
        for (char& c : str) 
        {
            c = tolower(c);
        }
    }

    int findWord(const string& word) 
    {
        for (int i = 0; i < words.size(); i++) 
        {
            if (words[i].text == word) 
            {
                return i;
            }
        }
        return -1;
    }

public:
    void processParagraph(const string& paragraph) 
    {
        string temp = paragraph;
        toLowerCase(temp);
        char* token = strtok(&temp[0], " ,.!?;:\n");
        while (token != nullptr) 
        {
            string word(token);
            int index = findWord(word);
            if (index != -1) 
            {
                words[index].count++;
            } else 
            {
                words.push_back(Word(word));
            }
            token = strtok(nullptr, " ,.!?;:\n");
        }
    }

    void displayFrequencies() 
    {
        cout << "Word Frequencies:" << endl;
        for (const auto& word : words) 
        {
            cout << word.text << ": " << word.count << endl;
        }
    }
};

int main() 
{
    string paragraph;
    cout << "Enter a paragraph: ";
    getline(cin, paragraph);

    WordFrequency wf;
    wf.processParagraph(paragraph);
    wf.displayFrequencies();

    return 0;
}