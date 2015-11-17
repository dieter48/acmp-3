#include <fstream>

int main()
{
    std::ifstream in("INPUT.TXT");
    std::ofstream out("OUTPUT.TXT");
    int n, a, b;

    in >> n >> a >> b;
    out << n*a*b*2 << std::endl;

    return 0;
}

