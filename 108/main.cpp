#include <fstream>

int main()
{
    std::ifstream in("INPUT.TXT");
    std::ofstream out("OUTPUT.TXT");
    int number;

    in >> number;
    out << number;
    return 0;
}

