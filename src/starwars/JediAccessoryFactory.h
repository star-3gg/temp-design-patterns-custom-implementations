#ifndef STARWARS_JEDI_ACCESSORY_FACTORY_H
#define STARWARS_JEDI_ACCESSORY_FACTORY_H

#pragma once

#include "AccessoryFactory.h"
#include <memory>

namespace StarWars {

// INFO: Concrete factory class
class JediAccessoryFactory : public AccessoryFactory {
public:
  std::unique_ptr<Accessory> createLightsaber() const override;
  std::unique_ptr<Accessory> createEyes() const override;
  std::unique_ptr<Accessory> createRobe() const override;
};

} // namespace StarWars

#endif // STARWARS_JEDI_ACCESSORY_FACTORY_H
