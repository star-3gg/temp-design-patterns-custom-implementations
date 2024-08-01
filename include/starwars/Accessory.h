#ifndef STARWARS_ACCESSORY_H // INFO: Include guard, similar to #pragma once but
                             // more descriptive. also prevents header name
                             // collissions. custom header guards like this one
                             // are part of the c++ standard which ensures
                             // maximum portability. pragma once is not part of
                             // the official standard although widely supported.
#define STARWARS_ACCESSORY_H

#pragma once // INFO: custom header guards and pragma once can be combined for
             // maximum compatibility

#include <string>

using std::string;

namespace StarWars {

enum Atunement { DARK_SIDE, LIGHT_SIDE };

class Accessory { // abstract
public:
  Accessory(string name, Atunement atunement)
      : name(name), atunement(atunement) {}
  virtual ~Accessory() = 0; // WARN: Using pure virtual destructor since
                            // accessory is a non-instantiable abstract class.

  // INFO: Pure virtual member functions. Remember: pure virtual functions must
  // be overriden by concrete class.
  virtual string getName() const = 0;
  virtual Atunement getAtunement() const = 0;
  virtual void showInfo() const = 0;

protected: // INFO: Can be accessed by any derived class of the class, unlike
           // private which is only accessible by members of this class.
  string name;
  Atunement atunement;
};

class LightsaberAccessory : public Accessory { // concrete
public:
  LightsaberAccessory(string name, Atunement atunement)
      : Accessory(name, atunement) {}

  string getName() const override {
    return name;
  } // INFO: The keyword 'override' forces compile-time checking to ensure the
    // virtual function is actually overriden and makes the code clearer for
    // readers. Override also implies that the function is virtual. Do not use
    // virtual and override together.
  Atunement getAtunement() const override { return atunement; }
  void showInfo() const override;
};

class EyeAccessory : public Accessory { // concrete
public:
  EyeAccessory(string name, Atunement atunement) : Accessory(name, atunement) {}

  string getName() const override { return name; }
  Atunement getAtunement() const override { return atunement; }
  void showInfo() const override;
};

class RobeAccessory : public Accessory { // concrete
public:
  RobeAccessory(string name, Atunement atunement)
      : Accessory(name, atunement) {}

  string getName() const override { return name; }
  Atunement getAtunement() const override { return atunement; }
  void showInfo() const override;
};

} // namespace StarWars

#endif // STARWARS_ACCESSORY_H
