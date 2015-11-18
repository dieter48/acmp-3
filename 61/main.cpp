#include <fstream>

int main()
{
    std::ifstream in("INPUT.TXT");
    std::ofstream out("OUTPUT.TXT");
    int sumA, sumB, temp;
    sumA=sumB=0;

    for(int i=0; i<4; i++)
    {
        in >> temp;
        sumA += temp;
        in >> temp;
        sumB += temp;
    }

    if(sumA>sumB)
    {
        out << 1 << std::endl;
    }
    else
    {
        if(sumB>sumA)
        {
            out << 2 << std::endl;
        }
        else
        {
            out << "DRAW" << std::endl;
        }
    }

    return 0;
}

