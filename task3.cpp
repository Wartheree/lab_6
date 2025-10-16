//
// Created by danil on 14.10.2025.
//

#include <iostream>
#include <string>
int wordsCounter(const std::string&);

int main() {
    int words = wordsCounter("can you can  ");
    std::cout << words;
    return 0;
}

int wordsCounter(const std::string& str) {
    std::string::const_iterator it= str.begin();
    int count = 0;
    int words_amount=0;
    for (it;it!=str.end();it++) {
        if (*it == ' ' || *it == ',' || *it == '.') {
            if (count!=0) words_amount++;
            count=0;
        }
        else count++;
    }
    if (count!=0) words_amount++;
    return words_amount;
}
