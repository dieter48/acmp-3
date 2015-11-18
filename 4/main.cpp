#include <fstream>

int main()
{
    std::ifstream in("INPUT.TXT");
    std::ofstream out("OUTPUT.TXT");
    int a;

    in >> a;

    out << a << 9 << 9-a << std::endl;


    return 0;
}

