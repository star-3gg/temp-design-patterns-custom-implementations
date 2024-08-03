
#ifndef STARWARS_FORCEUSER_H
#define STARWARS_FORCEUSER_H

#include "Accessory.h"
#include <memory>
#include <string>
#include <vector>

namespace StarWars {

class ForceUser { // abstract
public:
  ForceUser(std::string n, Atunement a) : name(n), atunement(a) {}
  void equipAccessory(std::unique_ptr<Accessory> accessory);
  void listEquipment() const;

private:
  std::string name{};
  Atunement atunement{};
  std::vector<std::unique_ptr<Accessory>> equipment{};
};

} // namespace StarWars

#endif // STARWARS_FORCEUSER_H
