#include <fstream>

int main()
{
    std::ifstream in("INPUT.TXT");
    std::ofstream out("OUTPUT.TXT");
    int n;
    in >> n;

    if(n==1)
    {
        out << 0 << std::endl;
    }
    else
    {
        if(n%2==0)
        {
            out << n/2 << std::endl;
        }
        else
        {
            out << n << std::endl;
        }
    }
    return 0;
}

