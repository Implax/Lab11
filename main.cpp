#include "rectBlocks.cpp"
#include "sqrBaseRectBlocks.cpp"
#include "cuboidBlocks.cpp"
#include "cylindricalBlocks.cpp"
#include "sphericalBlocks.cpp"
#include <iostream>

using namespace std;

int main(){

rectBlocks rect;
sqrBaseRectBlocks square;
cuboidBlocks cube;
cylindricalBlocks cylinder;
sphericalBlocks sphere;

vector<vector<int>> rectangle = rect.readBlocks();
vector<vector<int>> s_points = square.squareBlocks(rectangle);
vector<vector<int>> cube_points = cube.cubeBlocks(s_points);
vector<vector<int>> cylinder_points = cylinder.cyl_blocks(s_points);
vector<vector<int>> sphere_points = sphere.spherical(cube_points);

cylinder.calculate_cylinders(cylinder_points);

sphere.calculate_sphere(sphere_points);


return 0;
}
