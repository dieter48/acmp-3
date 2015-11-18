#include <fstream>

int main()
{
    std::ifstream in("INPUT.TXT");
    std::ofstream out("OUTPUT.TXT");
    int a, b, c;

    in >> a >> b >> c;

    if(a*b==c)
    {
        out << "YES" <<  std::endl;
    }
    else
    {
       out << "NO" << std::endl;
    }

    return 0;
}

