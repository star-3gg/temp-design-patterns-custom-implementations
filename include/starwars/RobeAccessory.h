#ifndef STARWARS_ROBE_ACCESSORY_H
#define STARWARS_ROBE_ACCESSORY_H

#pragma once

#include <starwars/Accessory.h>

namespace StarWars {

class RobeAccessory : public Accessory { // concrete
public:
  RobeAccessory(string name, Atunement atunement)
      : Accessory(name, atunement) {}

  string getName() const override { return name; }
  Atunement getAtunement() const override { return atunement; }
  void showInfo() const override;
};
} // namespace StarWars

#endif // STARWARS_ROBE_ACCESSORY_H
