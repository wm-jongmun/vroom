#ifndef WRAPPER_H
#define WRAPPER_H

/*

This file is part of VROOM.

Copyright (c) 2015-2018, Julien Coupey.
All rights reserved (see LICENSE).

*/

#include <vector>

#include "structures/generic/matrix.h"
#include "structures/vroom/location.h"
#include "structures/vroom/solution/route.h"

namespace vroom {
namespace routing {

template <class T> class Wrapper {

public:
  std::string _profile;

  virtual Matrix<T> get_matrix(const std::vector<Location>& locs) const = 0;

  virtual void add_route_info(Route& route) const = 0;

  virtual void set_profile(const std::string& profile) {
    _profile = profile;
  }

  virtual ~Wrapper() {
  }

protected:
  Wrapper() : _profile("car") {
  }
};

} // namespace routing
} // namespace vroom

#endif
