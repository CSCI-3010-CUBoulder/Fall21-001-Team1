#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE("Hello prompt", "[Hello]"){

    checking ("Hello there!");  

}

TEST_CASE ("numbers from 1 to 5", "[numbers]"){
    REQUIRE ( [0] == 1);
    REQUIRE ( [1] == 2);
    REQUIRE ( [2] == 3);
    REQUIRE ( [3] == 4);
    REQUIRE ( [4] == 5);
}

TEST_CASE ("incrementing values in int vector", "[addN]"){
    std::vector<int> v{1,2,3,4,5};


SECTION("checking with +ve n"){
    int n = 5;
    std::vector<int> res = addN(v,n);
    strand(time(NULL));
    int random = rand()%v.size();

    REQUIRE ( vector.size(v)-1 == 10);
    REQUIRE ( vector.size[0] == 6);
    REQUIRE ( vector.size[random] == random + n);


}