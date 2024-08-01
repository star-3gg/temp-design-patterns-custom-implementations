// INFO: Include guard, similar to #pragma once but
// more descriptive. also prevents header name
// collissions. custom header guards like this one
// are part of the c++ standard which ensures
// maximum portability. pragma once is not part of
// the official standard although widely supported.
#ifndef STARWARS_ACCESSORY_H
#define STARWARS_ACCESSORY_H

// INFO: custom header guards and pragma once can be combined for
// maximum compatibility
#pragma once

#include <string>

using std::string;

namespace StarWars {

enum Atunement { DARK_SIDE, LIGHT_SIDE };

class Accessory { // abstract
public:
  Accessory(string name, Atunement atunement)
      : name(name), atunement(atunement) {}

  // WARN: Using pure virtual destructor since
  // accessory is a non-instantiable abstract class.
  virtual ~Accessory() = 0;

  // INFO: Pure virtual member functions. Remember: pure virtual functions must
  // be overriden by concrete class.
  virtual string getName() const = 0;
  virtual Atunement getAtunement() const = 0;
  virtual void showInfo() const = 0;

protected:
  // INFO: Can be accessed by any derived class of the class, unlike
  // private which is only accessible by members of this class.
  string name;
  Atunement atunement;
};

} // namespace StarWars

#endif // STARWARS_ACCESSORY_H
