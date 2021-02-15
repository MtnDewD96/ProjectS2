// command_line_arguments.cpp
// compile with: /EHsc
#include <iostream>
#include "Map.h"

using namespace std;

int main( int argc,      // Number of strings in array argv
          char *argv[],   // Array of command-line argument strings
          char *envp[] )  // Array of environment variable strings
{
    int x = 10;
    int y = 10;
    Map map = Map(x,y);
    cout << map;
    return 0;
}