
#ifndef STARWARS_FORCEUSER_H
#define STARWARS_FORCEUSER_H

#include "Accessory.h"
#include <array>
#include <memory>
#include <string>

namespace StarWars {

class ForceUser { // abstract
public:
  ForceUser(std::string n, Atunement a) : name(n), atunement(a) {}
  void equipAccessory(std::unique_ptr<Accessory> accessory, int slot);
  void listEquipment() const;

private:
  std::string name;
  Atunement atunement;
  std::array<std::unique_ptr<Accessory>, 3> equipment;
};

} // namespace StarWars

#endif // STARWARS_FORCEUSER_H
