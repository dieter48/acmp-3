#include <fstream>

int main()
{
    std::ifstream in("INPUT.TXT");
    std::ofstream out("OUTPUT.TXT");
    int s;

    in >> s;

    out << s/6 << " " << s*2/3 << " " << s/6 << std::endl;


    return 0;
}

