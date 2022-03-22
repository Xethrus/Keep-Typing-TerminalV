#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <string>    

void makeVector(std::ifstream &inFile){
    std::vector<std::string> allWords;
    std::copy(std::istream_iterator<std::string>(inFile),
              std::istream_iterator<std::string>(),
              std::back_inserter(allWords));
}
void typeWord(std::vector<std::string> currentVector){
    //TODO lol make this do stuff
}

int main(){
    std::ifstream wordTextFile;
    wordTextFile.open("C:\\Users\\badmo\\Typing Project\\typedWord.txt");
    if (!wordTextFile) {
        std::cerr << "file \"typedWord.txt\" was unable to load/open" << std::endl;
        exit(1);
    }
    if(wordTextFile.is_open()) {
        //std::cout << wordTextFile.rdbuf();
        makeVector(wordTextFile);
    }
    return 0;
};
