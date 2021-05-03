#ifndef CYLINDRICALBLOCKS_H
#define CYLINDRICALBLOCKS_H

#include "sqrBaseRectBlocks.h"


class cylindricalBlocks : public sqrBaseRectBlocks
{
    public:
        cylindricalBlocks();
        virtual ~cylindricalBlocks();

    //Stores Cylinders
    vector<vector<int>> cyl_blocks(vector<vector<int>> &cylinders);

        //Calculates Cylinders
    void calculate_cylinders(vector<vector<int>> &cylinder_objects);

    // Prints Cylinders
    //void printspheres(vector<double> &sa, vector<double> &dims, vector<double> &len, vector<double> &area);


    vector<vector<int>> cylindrical_coords;

    private:
        vector<double> surface_areas;
        vector<double> diameters;
        vector<double> lengths;
        vector<double> areas;

};

#endif // CYLINDRICALBLOCKS_H
