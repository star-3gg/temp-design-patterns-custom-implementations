#include <iostream>
#include <starwars/EyesAccessory.h>

namespace StarWars {

void EyesAccessory::showInfo() const {
  std::cout << "Accessory: " << getName() << ", Atunement: "
            << (getAtunement() == LIGHT_SIDE ? "Light Side" : "Dark Side")
            << std::endl;
}

} // namespace StarWars
