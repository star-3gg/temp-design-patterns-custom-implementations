#ifndef STARWARS_EYES_ACCESSORY_H
#define STARWARS_EYES_ACCESSORY_H

#pragma once

#include <starwars/Accessory.h>

namespace StarWars {

class EyesAccessory : public Accessory { // concrete
public:
  EyesAccessory(string name, Atunement atunement)
      : Accessory(name, atunement) {}

  string getName() const override { return name; }
  Atunement getAtunement() const override { return atunement; }
  void showInfo() const override;
};
} // namespace StarWars

#endif // STARWARS_EYES_ACCESSORY_H
