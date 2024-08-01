#include <starwars/AccessoryFactory.h>

namespace StarWars {

AccessoryFactory::~AccessoryFactory() {
} // WARN: Using pure virtual destructor since
  // accessory is a non-instantiable abstract class.

// INFO: Create accessories
Accessory *JediAccessoryFactory::createLightsaber() const {
  return new LightsaberAccessory("Jedi Lightsaber", LIGHT_SIDE);
}

Accessory *JediAccessoryFactory::createEyes() const {
  return new EyeAccessory("Jedi Eye", LIGHT_SIDE);
}

Accessory *JediAccessoryFactory::createRobe() const {
  return new RobeAccessory("Jedi Robe", LIGHT_SIDE);
}

Accessory *SithAccessoryFactory::createLightsaber() const {
  return new LightsaberAccessory("Sith Lightsaber", DARK_SIDE);
}

Accessory *SithAccessoryFactory::createEyes() const {
  return new EyeAccessory("Sith Eye", DARK_SIDE);
}

Accessory *SithAccessoryFactory::createRobe() const {
  return new RobeAccessory("Sith Robe", DARK_SIDE);
}

} // namespace StarWars
