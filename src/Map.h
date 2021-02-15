

#include <iostream>

using namespace std;

class Map
{
public:
    Map(int x, int y);
    ~Map();
    friend ostream& operator<<(ostream&, Map const&);
private:
    //MovableObject* objects;
    char* layout;
    int x;
    int y;
};