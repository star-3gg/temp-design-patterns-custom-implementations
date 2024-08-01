#ifndef STARWARS_SITH_ACCESSORY_FACTORY_H
#define STARWARS_SITH_ACCESSORY_FACTORY_H

#include <memory>
#include <starwars/Accessory.h>
#include <starwars/AccessoryFactory.h>

namespace StarWars {

// INFO: Concrete factory class
class SithAccessoryFactory : public AccessoryFactory {
public:
  std::unique_ptr<Accessory> createLightsaber() const override;
  std::unique_ptr<Accessory> createEyes() const override;
  std::unique_ptr<Accessory> createRobe() const override;
};

} // namespace StarWars

#endif // STARWARS_SITH_ACCESSORY_FACTORY_H
