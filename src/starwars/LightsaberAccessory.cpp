
#include <iostream>
#include <starwars/starwars.h>

namespace StarWars {

void LightsaberAccessory::showInfo() const {
  std::cout << "Accessory: " << getName() << ", Atunement: "
            << (getAtunement() == LIGHT_SIDE ? "Light Side" : "Dark Side")
            << std::endl;
}

} // namespace StarWars
