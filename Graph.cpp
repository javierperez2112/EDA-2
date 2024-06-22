#include "Graph.h"
#include <iostream>

Graph::Graph()
{
    this->routes = *(new Routes);
    this->matrix = *(new Matrix);
}

bool Graph::loadPointData(filesystem::path filePath)
{
    ifstream file;
    file.open(filePath, ifstream::in);
    if(!file.is_open())
    {
        cout << "Could not open file!" << endl;
        return false;
    }
    // Count width and height.
    string line;
    while(getline(file, line))
    {
        
    }
}