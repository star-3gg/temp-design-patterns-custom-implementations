// Cherno smart pointers: https://www.youtube.com/watch?v=UOB7-B2MfwA
#include <memory>
#include <starwars/starwars.h>

namespace StarWars {

std::unique_ptr<Accessory> SithAccessoryFactory::createLightsaber() const {
  return std::make_unique<LightsaberAccessory>("Sith Lightsaber", DARK_SIDE);
}

std::unique_ptr<Accessory> SithAccessoryFactory::createEyes() const {
  return std::make_unique<EyesAccessory>("Sith Eye", DARK_SIDE);
}

std::unique_ptr<Accessory> SithAccessoryFactory::createRobe() const {
  return std::make_unique<RobeAccessory>("Sith Robe", DARK_SIDE);
}

} // namespace StarWars
