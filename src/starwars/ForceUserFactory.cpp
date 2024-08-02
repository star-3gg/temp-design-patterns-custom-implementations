#include <memory>
#include <starwars/starwars.h>

namespace StarWars {

std::unique_ptr<ForceUser>
ForceUserFactory::createForceUser(std::string name, Atunement atunement) {
  std::unique_ptr<ForceUser> forceUser =
      std::make_unique<ForceUser>(name, atunement);
  if (atunement == LIGHT_SIDE) {
    JediAccessoryFactory jaf = JediAccessoryFactory();
    forceUser->equipAccessory(jaf.createLightsaber(), 0);
    forceUser->equipAccessory(jaf.createEyes(), 1);
    forceUser->equipAccessory(jaf.createRobe(), 2);
  } else {
    SithAccessoryFactory saf = SithAccessoryFactory();
    forceUser->equipAccessory(saf.createLightsaber(), 0);
    forceUser->equipAccessory(saf.createEyes(), 1);
    forceUser->equipAccessory(saf.createRobe(), 2);
  }
  return forceUser;
}

} // namespace StarWars
