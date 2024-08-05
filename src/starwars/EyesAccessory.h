#ifndef STARWARS_EYES_ACCESSORY_H
#define STARWARS_EYES_ACCESSORY_H

#include "Accessory.h"
#pragma once

namespace StarWars {

class EyesAccessory : public Accessory { // concrete
public:
  EyesAccessory(std::string n, Atunement a) : Accessory(n, a) {}

  std::string getName() const override { return name; }
  Atunement getAtunement() const override { return atunement; }
  void showInfo() const override;
};
} // namespace StarWars

#endif // STARWARS_EYES_ACCESSORY_H
