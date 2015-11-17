#include <fstream>

int main()
{
    std::ifstream in("INPUT.TXT");
    std::ofstream out("OUTPUT.TXT");
    int a, b;

    in >> a >> b;
    if( a==b )
    {
        out << "=" << std::endl;
    }
    else
    {
        if( a<b )
        {
            out << "<" << std::endl;
        }
        else
        {
            out << ">" << std::endl;
        }
    }

    return 0;
}

