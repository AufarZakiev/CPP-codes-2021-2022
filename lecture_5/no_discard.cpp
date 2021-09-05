#include <cassert>
#include <iostream>

class Connection {};

[[no_discard]] auto createConnection() { return Connection{}; }

auto createConnectionOld() { return Connection{}; }

int main() {
  createConnection();
  createConnectionOld();
}