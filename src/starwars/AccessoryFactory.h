// TODO: Split into multiple header files
// TODO: Move adjacent to .cpp implementations but include in include/starwars.h
// or smt. coallate

#ifndef STARWARS_ACCESSORY_FACTORY_H
#define STARWARS_ACCESSORY_FACTORY_H

#include "Accessory.h"
#pragma once

#include <memory>

namespace StarWars {

// INFO: An abstract factory base class
class AccessoryFactory {
public:
  virtual std::unique_ptr<Accessory> createLightsaber() const = 0;
  virtual std::unique_ptr<Accessory> createEyes() const = 0;
  virtual std::unique_ptr<Accessory> createRobe() const = 0;

  // WARN: Using pure virtual destructor since
  // AccessoryFactory is a non-instantiable
  // abstract class.
  virtual ~AccessoryFactory() = 0;
};

} // namespace StarWars

#endif // STARWARS_ACCESSORY_FACTORY_H
