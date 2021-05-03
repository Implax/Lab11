#include "cuboidBlocks.h"

cuboidBlocks::cuboidBlocks(){}

cuboidBlocks::~cuboidBlocks(){}

vector<vector<int>> cuboidBlocks::cubeBlocks(vector<vector<int>> &cubes){
    for (const auto& row : cubes) {
        int w = row[0];
        int h = row[1];
        int l = row[2];

        if ((w == h) && (w == l)){
            cuboid_coords.push_back(row);
        }
    }
    return cuboid_coords;
}
