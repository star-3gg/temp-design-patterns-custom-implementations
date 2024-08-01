// TODO: reconfigure formatter width (check google guidelines)
// something like:
// IndentWidth: 4
// TabWidth: 4
// UseTab: Always
// ColumnLimit: 120
// BreakBeforeBraces: Linux

#include <ios>      // basic io stream classes
#include <iostream> // io stuff
#include <limits>   // input validation
#include <memory>   // smart pointer stuff
#include <starwars/starwars.h>
int menu() {
  // INFO: Google guidelines on 'using' declarations within source files:
  // - Prefer fully qualifying names.
  // - acceptable within function bodies to avoid verbosity.
  using std::numeric_limits;
  using std::streamsize;

  while (true) {
    // INFO: Prompt the user to select a number
    std::cout << std::endl
              << "--- Selection Menu ---" << std::endl
              << std::endl
              << "\t0) Exit" << std::endl
              << "\t1) Jedi" << std::endl
              << "\t2) Sith" << std::endl
              << std::endl
              << "Enter a selection number: ";

    // INFO: Store the entered number
    int selection;

    // INFO: Input validation
    if (!(std::cin >> selection)) {
      std::cin.clear(); // clear the error state
      std::cin.ignore(
          numeric_limits<streamsize>::max(),
          '\n'); // ignore invalid input by determining maximum integer size
      std::cout << "Invalid input! Please enter a number." << std::endl;
      continue;
    }
    return selection;
  }
}

// INFO: Creates a jedi object using an instance of the jedi factory class and
// uses non-shared smart pointers for automatic deallocation
void handleJediSelection() {
  // INFO: Polymorphism through base class pointers
  std::unique_ptr<StarWars::AccessoryFactory> jediFactory =
      std::make_unique<StarWars::JediAccessoryFactory>();
  std::unique_ptr<StarWars::Accessory> jediLightsaber(
      jediFactory->createLightsaber());
  jediLightsaber->showInfo();
}

// INFO: Creates a sith object using an instance of the sith factory class and
// uses non-shared smart pointers for automatic deallocation
void handleSithSelection() {
  std::unique_ptr<StarWars::AccessoryFactory> sithFactory =
      std::make_unique<StarWars::SithAccessoryFactory>();
  std::unique_ptr<StarWars::Accessory> sithLightsaber(
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
      std::cout << "Invalid selection! Please select a valid option."
                << std::endl;
      break;
    }
  }

  // INFO: Exit message and signal
  std::cout << "[ exit. ]" << std::endl;
  return 0;
}
