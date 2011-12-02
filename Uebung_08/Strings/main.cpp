#include <iostream>
#include <string>

int main() {
    std::string s1 = "abc";
    std::string s2 = "def";
    std::string s;

    std::cout << s1.length() << std::endl;

    s = s1 + s2;

    std::cout << "s = " << s << std::endl;

    s1.append(s2);
    std::cout << "s1 = " << s1 << std::endl;

    std::string s_sub = s.substr(1, 4);
    std::cout << s_sub << std::endl;

    // Test whether the stings are equal.
    if (s.compare(s1) == 0) {
        std::cout << "s and s1 are equal" << std::endl;
    }

    if (s1.compare(s2) == 0) {
        std::cout << "s1 and s2 are equal" << std::endl;
    }

    if (s.compare(s2) == 0) {
        std::cout << "s and s2 are equal" << std::endl;
    }

    // Position of substring "ef".
    size_t pos_ef = s.find_first_of("ef");
    std::cout << "Position of \"ef\" is: " << pos_ef << std::endl;

    // Replace "cd" with "ZZ".
    size_t pos_cd = s.find_first_of("cd");
    s = s.replace(pos_cd, 2, "ZZ");

    std::cout << "s is now " << s << std::endl;

}
