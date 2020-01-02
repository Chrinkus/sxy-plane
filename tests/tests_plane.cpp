#include <catch2/catch.hpp>

#include "Plane.hpp"

TEST_CASE("Plane_base default constructs", "[default_ctor]")
{
    Plane_base<double> pbd;

    REQUIRE(pbd.m() == 0);
    REQUIRE(pbd.n() == 0);
}

TEST_CASE("Plane_base constructs with args", "[ctor]")
{
    Plane_base<int> pbi { 13, 37 };

    REQUIRE(pbi.m() == 13);
    REQUIRE(pbi.n() == 37);
}
