#include <fstream>

int main()
{
    std::ifstream in("INPUT.TXT");
    std::ofstream out("OUTPUT.TXT");
    int a, b, c;

    in >> a >> b >> c;

    int min = a;
    if(min>b)
    {
        min = b;
    }
    if(min>c)
    {
        min = c;
    }

    int max = a;
    if(max<b)
    {
        max = b;
    }
    if(max<c)
    {
        max = c;
    }

    out << max-min << std::endl;

    return 0;
}

