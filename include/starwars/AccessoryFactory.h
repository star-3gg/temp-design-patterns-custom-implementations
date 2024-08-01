#ifndef STARWARS_ACCESSORY_FACTORY_H
#define STARWARS_ACCESSORY_FACTORY_H

#include <starwars/Accessory.h>

namespace StarWars {

// INFO: An abstract factory base class
class AccessoryFactory {
public:
  virtual Accessory *createLightsaber() const = 0;
  virtual Accessory *createEyes() const = 0;
  virtual Accessory *createRobe() const = 0;
  virtual ~AccessoryFactory() = 0; // WARN: Using pure virtual destructor since
                                   // AccessoryFactory is a non-instantiable
                                   // abstract class.
};

// INFO: Concrete factory class
class JediAccessoryFactory : public AccessoryFactory {
public:
  Accessory *createLightsaber() const override;
  Accessory *createEyes() const override;
  Accessory *createRobe() const override;
};

// INFO: Concrete factory class
class SithAccessoryFactory : public AccessoryFactory {
public:
  Accessory *createLightsaber() const override;
  Accessory *createEyes() const override;
  Accessory *createRobe() const override;
};

} // namespace StarWars

#endif // STARWARS_ACCESSORY_FACTORY_H
