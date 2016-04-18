#define CATCH_CONFIG_RUNNER
#include <catch.hpp>

int gcd(int a, int b)
{
  return 0;
}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}
