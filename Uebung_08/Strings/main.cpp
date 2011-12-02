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
}
