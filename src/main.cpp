#include <ios>                         // basic io stream classes
#include <iostream>                    // io stuff
#include <limits>                      // input validation
#include <memory>                      // smart pointer stuff
#include <starwars/AccessoryFactory.h> // factory

using std::cin;
using std::cout;
using std::endl;
using std::make_unique;
using std::numeric_limits;
using std::streamsize;
using std::unique_ptr;

int menu() {
  while (true) {
    // INFO: Prompt the user to select a number
    cout << endl
         << "--- Selection Menu ---" << endl
         << endl
         << "\t0) Exit" << endl
         << "\t1) Jedi" << endl
         << "\t2) Sith" << endl
         << endl
         << "Enter a selection number: ";

    // INFO: Store the entered number
    int selection;
    if (!(cin >> selection)) {
      cin.clear(); // clear the error state
      cin.ignore(
          numeric_limits<streamsize>::max(),
          '\n'); // ignore invalid input by determining maximum integer size
      cout << "Invalid input! Please enter a number." << endl;
      continue;
    }
    return selection;
  }
}

// INFO: Creates a jedi object using an instance of the jedi factory class and
// uses non-shared smart pointers for automatic deallocation
void handleJediSelection() {
  unique_ptr<StarWars::AccessoryFactory> jediFactory =
      make_unique<StarWars::JediAccessoryFactory>(); // AccessoryFactory base
                                                     // class pointer.
  unique_ptr<StarWars::Accessory> jediLightsaber(
      jediFactory->createLightsaber());
  jediLightsaber->showInfo();
}

// INFO: Creates a sith object using an instance of the sith factory class and
// uses non-shared smart pointers for automatic deallocation
void handleSithSelection() {
  unique_ptr<StarWars::AccessoryFactory> sithFactory =
      make_unique<StarWars::SithAccessoryFactory>();
  unique_ptr<StarWars::Accessory> sithLightsaber(
      sithFactory->createLightsaber());
  sithLightsaber->showInfo();
}

int main(int argc, char *argv[]) {
  // INFO: Whether or not to exit the prompt loop
  bool exit = false;

  // INFO: Main program prompt loop
  while (!exit) {
    int selection = menu();

    // INFO: Check if the selection matches an option number
    switch (selection) {
    case 0:
      exit = true;
      break;
    case 1:
      handleJediSelection();
      break;
    case 2:
      handleSithSelection();
      break;
    default:
      cout << "Invalid selection! Please select a valid option." << endl;
      break;
    }
  }

  // INFO: Exit message and signal
  cout << "[ exit. ]" << endl;
  return 0;
}
