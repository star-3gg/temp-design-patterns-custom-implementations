#ifndef STARWARS_ROBE_ACCESSORY_H
#define STARWARS_ROBE_ACCESSORY_H

#include "Accessory.h"
#pragma once

namespace StarWars {

class RobeAccessory : public Accessory { // concrete
public:
  RobeAccessory(std::string const n, Atunement const a) : Accessory(n, a) {}

  std::string getName() const override { return name; }
  Atunement getAtunement() const override { return atunement; }
  void showInfo() const override;
};
} // namespace StarWars

#endif // STARWARS_ROBE_ACCESSORY_H
