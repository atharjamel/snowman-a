#include "doctest.h"
#include "snowman.hpp"
#include <string>

using namespace ariel;
using namespace std;

TEST_CASE ("test 1-good of code:"){
CHECK((snowman(12121212))== ("==_===_\n(..o)\n< : >\n(" ")"));
CHECK((snowman(33333331))== ("_\n/_\\n/(O_O)\\n/(> <)\\n( : )"));
CHECK((snowman(24444441))== ("___\n.....\n(-.-)\n( )\n( : )"));
CHECK((snowman(11111121))== ("==_===_\n<(.,.)>\n<(][)>\n( : )"));
CHECK((snowman(12333321))== ("==_===_\n/(O-O)\\n/( ][ )\\n( : )"));
CHECK((snowman(22341144))== ("___\n.....\n<(O.-)>\n<(  )>\n(  )"));
CHECK((snowman(22334411))==("___\n.....\n(O.O)\n( : )\n( : )"));
CHECK((snowman(44433111))== ("___\n(_*_)\n/_O\\n/( : )>\n( : )"));
CHECK((snowman(11111122))== ("==_===_\n(.,.)\n<(] [)>\n( " " )"));
}
TEST_CASE ("test 2-bad of code :"){
    CHECK_THROWS(snowman(918));
    CHECK_THROWS(snowman(12121217));
    CHECK_THROWS(snowman(0));
    CHECK_THROWS(snowman(1112));
    CHECK_THROWS(snowman(11111119));
    CHECK_THROWS(snowman(222222222));
    CHECK_THROWS(snowman(32321293));
    CHECK_THROWS(snowman(00000000));
    CHECK_THROWS(snowman(111111110));
    CHECK_THROWS(snowman(-98564123));
    CHECK_THROWS(snowman(-121212123));
    CHECK_THROWS(snowman(1234));

}