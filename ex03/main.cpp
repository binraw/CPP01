#include "Weapon.hpp"
#include "HumainA.hpp"
#include "HumainB.hpp"

int main() {
    Weapon sword("Sword");
    HumainA human("John", sword);
    HumainB test("Marc");
    human.attack();
    sword.setType("lance a double lame");
    human.attack();

    Weapon club = Weapon("crude spiked club");
    test.setWeapon(club);
    test.attack();
    club.setType("some other type of club");
    test.attack();




    return 0;
}