#include <fstream>

int main()
{
    std::ifstream in("INPUT.TXT");
    std::ofstream out("OUTPUT.TXT");
    int a, b;

    in >> a >> b;
    out << a+b;

    return 0;
}

