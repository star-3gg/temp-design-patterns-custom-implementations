#ifndef STARWARS_LIGHTSABER_ACCESSORY_H
#define STARWARS_LIGHTSABER_ACCESSORY_H

#pragma once

#include <starwars/starwars.h>

namespace StarWars {

class LightsaberAccessory : public Accessory { // concrete
public:
  LightsaberAccessory(std::string name, Atunement atunement)
      : Accessory(name, atunement) {}

  std::string getName() const override {
    return name;
  } // INFO: The keyword 'override' forces compile-time checking to ensure the
    // virtual function is actually overriden and makes the code clearer for
    // readers. Override also implies that the function is virtual. Do not use
    // virtual and override together.
  Atunement getAtunement() const override { return atunement; }
  void showInfo() const override;
};
} // namespace StarWars

#endif // STARWARS_LIGHTSABER_ACCESSORY_H
