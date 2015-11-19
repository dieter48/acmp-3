#include <fstream>

int main()
{
    std::ifstream in("INPUT.TXT");
    std::ofstream out("OUTPUT.TXT");
    int n,g;
    g=1;
    in >> n;

    for(int i=0; i<14; i++)
    {
        if(g==n)
        {
            out << "YES" << std::endl;
            return 0;
        }
        g*=2;
    }
    out << "NO" << std::endl;
    return 0;
}

