#include <iostream>
#include <fstream>
#include <vector>

class Word{
    std::string wordToType;
    Word(std::string wordToType);
};
void initWordVector(std::ifstream& inFile) {
    std::vector<std::string> vectorOfWords;
    std::string element;
    while(inFile >> element) {
        vectorOfWords.push_back(element);
    }
}

int main(){
    std::ifstream wordTextFile;
    wordTextFile.open("C:\\Users\\badmo\\Typing Project\\typedWord.txt");
    if (!wordTextFile) {
        std::cerr << "file \"typedWord.txt\" was unable to load/open" << std::endl;
        exit(1);
    }
    if(wordTextFile.is_open()) {
        std::cout << wordTextFile.rdbuf();
        initWordVector(wordTextFile);
    }
    return 0;
};
