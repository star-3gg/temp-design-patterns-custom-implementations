
#include <iostream>
#include <starwars/Accessory.h>

namespace StarWars {

Accessory::~Accessory() {} // WARN: Using pure virtual destructor since
                           // accessory is a non-instantiable abstract class.

// INFO: Implementations for the accessory methods

void LightsaberAccessory::showInfo() const {
  std::cout << "Accessory: " << getName() << ", Atunement: "
            << (getAtunement() == LIGHT_SIDE ? "Light Side" : "Dark Side")
            << std::endl;
}

void EyeAccessory::showInfo() const {
  std::cout << "Accessory: " << getName() << ", Atunement: "
            << (getAtunement() == LIGHT_SIDE ? "Light Side" : "Dark Side")
            << std::endl;
}

void RobeAccessory::showInfo() const {
  std::cout << "Accessory: " << getName() << ", Atunement: "
            << (getAtunement() == LIGHT_SIDE ? "Light Side" : "Dark Side")
            << std::endl;
}

} // namespace StarWars
