#include <iostream>
#include <memory>
#include <starwars/starwars.h>

namespace StarWars {

void ForceUser::equipAccessory(std::unique_ptr<Accessory> accessory) {
  equipment.push_back(std::move(accessory));
}

void ForceUser::listEquipment() const {
  for (const std::unique_ptr<Accessory> &accessory : equipment) {
    if (accessory) {
      accessory->showInfo();
    } else {
      std::cout << "Empty slot" << std::endl;
    }
  }
}

} // namespace StarWars
