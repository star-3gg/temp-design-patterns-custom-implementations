#include "ForceUser.h"
#include <memory>
#include <string>

namespace StarWars {

class ForceUserFactory {
public:
  std::unique_ptr<ForceUser> createForceUser(std::string, Atunement);
};

} // namespace StarWars
