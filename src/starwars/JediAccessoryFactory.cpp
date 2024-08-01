// Cherno smart pointers: https://www.youtube.com/watch?v=UOB7-B2MfwA
#include <memory>
#include <starwars/starwars.h>

namespace StarWars {

std::unique_ptr<Accessory> JediAccessoryFactory::createLightsaber() const {
  return std::make_unique<LightsaberAccessory>("Jedi Lightsaber", LIGHT_SIDE);
}

std::unique_ptr<Accessory> JediAccessoryFactory::createEyes() const {
  return std::make_unique<EyesAccessory>("Jedi Eye", LIGHT_SIDE);
}

std::unique_ptr<Accessory> JediAccessoryFactory::createRobe() const {
  return std::make_unique<RobeAccessory>("Jedi Robe", LIGHT_SIDE);
}

} // namespace StarWars
