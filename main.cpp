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
    std::cout << "Press \"0\" To exit" << std::endl;
    int n = 0;
    while(!GetKeyState('0'){
        std::cout << "Please Type The word \"" << currentVector[n] << ": ";
        
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
        //std::cout << wordTextFile.rdbuf();
        makeVector(wordTextFile);
    }
    return 0;
};
