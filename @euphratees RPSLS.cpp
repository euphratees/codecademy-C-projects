#include <iostream>
#include <stdlib.h>
 
int main() {
 
  // Live long and prosper
  srand (time(NULL));
  int computer = rand() % 5 + 1;
  //int computer = 1;
  int user = 0;

  std::cout << "====================\n";
  std::cout << "rock paper scissors lizard Spock!\n";
  std::cout << "====================\n";
 
  std::cout << "1) rock ✊\n";
  std::cout << "2) paper ✋\n";
  std::cout << "3) scissors ✌️\n";
  std::cout << "4) lizard 🤏\n";
  std::cout << "5) spock 🖖\n";
   
  std::cout << "shoot! \n";

/* Rock Paper Scissors Lizard Spock (The Big Bang Theory)
1. scissors (3) cuts paper (2)
6. scissors (3) decapitates lizard (4)

2. paper (2) covers rock (1)
8. paper (2) disproves Spock (5)

3. rock (1) crushes lizard (4)
10. rock (1) crushes scissors (3)

4. lizard (4) poisons Spock (5)
7. lizard (4) eats paper (2)

5. Spock (5) smashes scissors (3)
9. Spock (5) vaporises rock (1)   */

  std::cin >> user;

if (computer == user) {
    std::cout << "draw \n";
    } else if ((computer == 3) && (user == 2)) {
    std::cout << "scissors ✌️ cuts paper ✋ \n";
    std::cout << "computer wins \n";
    } else if ((computer == 3) && (user == 4)) {
    std::cout << "scissors ✌️ decapitates lizard 🤏 \n";
    std::cout << "computer wins \n";

    } else if ((computer == 2) && (user == 1)) {
    std::cout << "paper ✋ covers rock ✊ \n";
    std::cout << "computer wins \n";
    } else if ((computer == 2) && (user == 5)) {
    std::cout << "paper ✋ disproves Spock 🖖 \n";
    std::cout << "computer wins \n";

    } else if ((computer == 1) && (user == 4)) {
    std::cout << "rock ✊ crushes lizard 🤏 \n";
    std::cout << "computer wins \n";
    } else if ((computer == 1) && (user == 3)) {
    std::cout << "rock ✊ crushes scissors ✌️ \n";
    std::cout << "computer wins \n";

    } else if ((computer == 4) && (user == 5)) {
    std::cout << "lizard 🤏 poisons Spock 🖖 \n";
    std::cout << "computer wins \n";
    } else if ((computer == 4) && (user == 2)) {
    std::cout << "lizard 🤏 eats paper ✋ \n";
    std::cout << "computer wins \n";

    } else if ((computer == 5) && (user == 3)) {
    std::cout << "Spock 🖖 smashes scissors ✌️ \n";
    std::cout << "computer wins \n";
    } else if ((computer == 5) && (user == 1)) {
    std::cout << "Spock 🖖 vaporises rock ✊ \n";
    std::cout << "computer wins \n";
    } 

    else if ((computer == 2) && (user == 3)) {
    std::cout << "scissors ✌️ cuts paper ✋ \n";
    std::cout << "you win! \n";
    } else if ((computer == 4) && (user == 3)) {
    std::cout << "scissors ✌️ decapitates lizard 🤏 \n";
    std::cout << "you win! \n";

    } else if ((computer == 1) && (user == 2)) {
    std::cout << "paper ✋ covers rock ✊ \n";
    std::cout << "you win! \n";
    } else if ((computer == 5) && (user == 2)) {
    std::cout << "paper ✋ disproves Spock 🖖 \n";
    std::cout << "you win! \n";

    } else if ((computer == 4) && (user == 1)) {
    std::cout << "rock ✊ crushes lizard 🤏 \n";
    std::cout << "you win! \n";
    } else if ((computer == 3) && (user == 1)) {
    std::cout << "rock ✊ crushes scissors ✌️ \n";
    std::cout << "you win! \n";

    } else if ((computer == 5) && (user == 4)) {
    std::cout << "lizard 🤏 poisons Spock 🖖 \n";
    std::cout << "you win! \n";
    } else if ((computer == 2) && (user == 4)) {
    std::cout << "lizard 🤏 eats paper ✋ \n";
    std::cout << "you win! \n";

    } else if ((computer == 3) && (user == 5)) {
    std::cout << "Spock 🖖 smashes scissors ✌️ \n";
    std::cout << "you win! \n";
    } else if ((computer == 1) && (user == 5)) {
    std::cout << "Spock 🖖 vaporises rock ✊ \n";
    std::cout << "you win! \n";
    } 
}