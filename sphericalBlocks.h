#ifndef SPHERICALBLOCKS_H
#define SPHERICALBLOCKS_H

#include "cuboidBlocks.h"


class sphericalBlocks : public cuboidBlocks
{
    public:
        sphericalBlocks();
        virtual ~sphericalBlocks();

    //Stores spheres
    vector<vector<int>> spherical(vector<vector<int>> &spheres);

    //Calculates Spheres
    void calculate_sphere(vector<vector<int>> &sphere_objects);

    vector<vector<int>> spherical_coords;

    private:
        vector<double> diameters;
        vector<double> surface_areas;
        vector<double> volumes;
};

#endif // SPHERICALBLOCKS_H
