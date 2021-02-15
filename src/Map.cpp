#include "Map.h"

using namespace std;

Map::Map(int x, int y)
{
    layout = new char[x][y];

    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            if((i == 0) || (i == x-1))
            {
                layout[i][j] = '-';
            }
            else if((j == 0)||(j == y-1))
            {
                layout[i][j] = '|';
            }
        }
    }
}

ostream& operator<<(ostream& out, Map const& map)
{
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y: j++)
        {
            std::cout << layout[i][j];
        }
    }
    return out;
}