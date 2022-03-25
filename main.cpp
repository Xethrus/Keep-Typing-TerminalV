#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <random>
#include <iterator>
#include <string>    

void fillVector(std::ifstream &inFile, std::vector<std::string> &allWords){
    std::copy(std::istream_iterator<std::string>(inFile),
              std::istream_iterator<std::string>(),
              std::back_inserter(allWords));
}
void shuffleVector(std::vector<std::string> &vectorToBeShuffled){
    auto rng = std::default_random_engine {};
    std::shuffle(std::begin(vectorToBeShuffled), std::end(vectorToBeShuffled), rng);
}
std::string getString(void){
    std::string userString;
    std::cout << "enter string" << std::endl;
    std::cin >> userString;
    return userString;
}
void typeWord(std::string inString, std::vector<std::string> vectorIndex,int counterIndex){
    if(inString != vectorIndex[counterIndex]) {
        std::cout << "incorrect spelling" << std::endl;
    } else {
        std::cout << "correct" << std::endl;
    }

}
void iterateAllWords(std::vector<std::string> &vectorToBeIterated){
    int counterIndex = 0;
    for (auto & element : vectorToBeIterated){
        //TODO make this do the thing LOL (check if word typed)
        counterIndex++;
        typeWord(getString(),vectorToBeIterated,counterIndex);
    }
}
void printVector(std::vector<std::string> vectorToBePrinted){
    for (auto & element : vectorToBePrinted){
        std::cout << element << std::endl;
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
        std::vector<std::string> allWords;
        fillVector(wordTextFile, allWords);
        
        //testing things LOL
        printVector(allWords);
        shuffleVector(allWords); //not working for intended purpose
        printVector(allWords);


    }
    return 0;
};
