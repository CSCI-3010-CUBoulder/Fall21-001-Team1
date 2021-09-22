#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE ("numbers from 1 to 5", "[numbers]"){
    CHECK( [0] == 1);
    CHECK ( [1] == 2);
    CHECK ( [2] == 3);
    CHECK ( [3] == 4);
    CHECK ( [4] == 5);
}

TEST_CASE ("incrementing values in int vector", "[addN]"){
    std::vector<int> v{1,2,3,4,5};


SECTION("checking with +ve n"){
    int n = 5;
    std::vector<int> res = addN(v,n);
    strand(time(NULL));
    int random = rand()%v.size();

    CHECK ( vector.size(v)-1 == 10);
    CHECK ( vector.size[0] == 6);
    CHECK ( vector.size[random] == random + n);


}