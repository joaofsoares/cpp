#include <stdbool.h>

namespace targets {
class Alien {
public:
  int x_coordinate{0};
  int y_coordinate{0};

  Alien(int x, int y) {
    x_coordinate = x;
    y_coordinate = y;
  }

  int get_health() { return health; }

  bool hit() {
    if (health > 0) {
      health--;
      return true;
    }

    return false;
  }

  bool is_alive() { return health > 0; }

  bool teleport(int new_x, int new_y) {
    x_coordinate = new_x;
    y_coordinate = new_y;
    return true;
  }

  bool collision_detection(Alien other) {
    if (this->x_coordinate == other.x_coordinate ||
        this->y_coordinate == other.y_coordinate) {
      return true;
    }
    return false;
  }

private:
  int health{3};
};
} // namespace targets
