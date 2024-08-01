#include <iostream>
#include <starwars/RobeAccessory.h>

namespace StarWars {

void RobeAccessory::showInfo() const {
  std::cout << "Accessory: " << getName() << ", Atunement: "
            << (getAtunement() == LIGHT_SIDE ? "Light Side" : "Dark Side")
            << std::endl;
}

} // namespace StarWars
