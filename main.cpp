// Robot Guesses Your Number
// Another simple game where you pick a number,
// and we see how long it takes the program
// to guess it
#include <iostream>
#include <string>

using namespace std;

int main(){
  int iGuess = 0;
  bool bCorrect = false;

  srand(time(NULL));
  std::cout << "Pick a number, any number, and I will guess it: "  << std::endl;
  do {
    iGuess = rand() % 100 + 1;
    std::cout 
      << "Is this your number? (y/n)\n"
      << iGuess << std::endl;

    string temp;
    cin >> temp;

    if (temp == "y"){
      bCorrect = true;
      std::cout << "Your number was " << iGuess << "!" << std::endl;
    }
    else if (temp != "n") {
      std::cout << "You have entered an incorrect answer" << std::endl;
    };
    
  } while (!bCorrect);

  return 0;
}
