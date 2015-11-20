#include <fstream>

int main()
{
    std::ifstream in("INPUT.TXT");
    std::ofstream out("OUTPUT.TXT");
    int n, a, b, temp;
    in >> n;
    a=0;
    b=0;
    for(int i=0;i<n;i++)
    {
        in >> temp;
        if(temp==0)
            a++;
        else
            b++;
    }
    if(a>b)
        out << b;
    else
        out << a;

    return 0;
}

