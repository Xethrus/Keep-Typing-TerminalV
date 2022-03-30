#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <random>
#include <iterator>
#include <string>    

//Global Functions

//filling the vector with words from txt file 
void fillVector(std::ifstream &inFile, std::vector<std::string> &inVector) {
   std::copy(std::istream_iterator<std::string>(inFile),
             std::istream_iterator<std::string>(),
             std::back_inserter(inVector));
}
//shuffle the vector
void shuffleTheVector(std::vector<std::string> &inVector) {
   std::random_device rd;
   std::mt19937 randomGen(rd());
   std::shuffle(inVector.begin(), inVector.end(), randomGen);
}
//print vector contents
void printVector(std::vector<std::string> inVector) {
   for(auto & word : inVector) {
      std::cout << word << std::endl;
   }
}


//The main
int main(void) {
   //the inFile
   std::ifstream fileOfWords;
   //opening the file
   fileOfWords.open("C:\\Users\\Stevi\\Desktop\\Projects\\KeyboardTypingTerminal\\typedWord.txt");
   //Check if succesful
      //not
   if(!fileOfWords) {
      std::cerr << "file was unable to load/open" << std::endl;
      exit(1);
   }
      //is
   if(fileOfWords.is_open()) {
      //initilize vector for use
      std::vector<std::string> vectorOfWords;
      //fill
      fillVector(fileOfWords, vectorOfWords);
      //print for testing
      printVector(vectorOfWords);
      //shuffle for testing
      shuffleTheVector(vectorOfWords);
      printVector(vectorOfWords);
      //

   } 
   return 0;
}


