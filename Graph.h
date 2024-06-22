#include <vector>
#include <set>
#include <string>
#include <filesystem>
#include <fstream>

using namespace std;

typedef vector<set<pair<int, int>>> Routes;
typedef vector<vector<int>> Matrix;

class Graph
{
public:
    Graph();
    ~Graph();
    bool loadPointData(filesystem::path filePath);

private:
    Routes routes;
    int width, height;
    Matrix matrix;
};