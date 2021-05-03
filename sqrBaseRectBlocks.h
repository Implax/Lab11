#ifndef SQRBASERECTBLOCKS_H
#define SQRBASERECTBLOCKS_H

#include "rectBlocks.h"


class sqrBaseRectBlocks : public rectBlocks
{
    public:
        sqrBaseRectBlocks();
        virtual ~sqrBaseRectBlocks();

        vector<vector<int>> squareBlocks(vector<vector<int>> &vect); //Calculates W=H

        vector<vector<int>> square_coords;
};

#endif // SQRBASERECTBLOCKS_H
