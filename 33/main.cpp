#include <fstream>

int main()
{
    std::ifstream in("INPUT.TXT");
    std::ofstream out("OUTPUT.TXT");
    int a, b;

    in >> a >> b;
    out << b-1 << " " << a-1 << std::endl;
    return 0;
}

