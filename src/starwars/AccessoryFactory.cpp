// Cherno smart pointers: https://www.youtube.com/watch?v=UOB7-B2MfwA
#include <starwars/starwars.h>

namespace StarWars {

// WARN: Using pure virtual destructor since
// accessory is a non-instantiable abstract class.
AccessoryFactory::~AccessoryFactory() {}

} // namespace StarWars
