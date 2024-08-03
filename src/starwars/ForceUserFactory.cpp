#include <memory>
#include <starwars/starwars.h>

namespace StarWars {

std::unique_ptr<ForceUser>
ForceUserFactory::createForceUser(std::string name, Atunement atunement) {
  std::unique_ptr<ForceUser> forceUser =
      std::make_unique<ForceUser>(name, atunement);
  if (atunement == LIGHT_SIDE) {
    JediAccessoryFactory const jaf = JediAccessoryFactory();
    forceUser->equipAccessory(jaf.createLightsaber());
    forceUser->equipAccessory(jaf.createEyes());
    forceUser->equipAccessory(jaf.createRobe());
  } else {
    SithAccessoryFactory const saf = SithAccessoryFactory();
    forceUser->equipAccessory(saf.createLightsaber());
    forceUser->equipAccessory(saf.createEyes());
    forceUser->equipAccessory(saf.createRobe());
  }
  return forceUser;
}

} // namespace StarWars
