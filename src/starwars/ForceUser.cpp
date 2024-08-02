#include <iostream>
#include <starwars/starwars.h>

namespace StarWars {

void ForceUser::equipAccessory(std::unique_ptr<Accessory> accessory, int slot) {
  if (slot < 0 || slot >= equipment.size()) {
    throw std::out_of_range("Invalid equipment slot");
  }
  equipment[slot] = std::move(accessory);
}

void ForceUser::listEquipment() const {
  for (const auto &accessory : equipment) {
    if (accessory) {
      accessory->showInfo();
    } else {
      std::cout << "Empty slot" << std::endl;
    }
  }
}

} // namespace StarWars
