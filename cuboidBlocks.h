#ifndef CUBOIDBLOCKS_H
#define CUBOIDBLOCKS_H

#include "sqrBaseRectBlocks.h"


class cuboidBlocks : public sqrBaseRectBlocks
{
    public:
        cuboidBlocks();
        virtual ~cuboidBlocks();

        vector<vector<int>> cubeBlocks(vector<vector<int>> &cubes);

        vector<vector<int>> cuboid_coords;
};

#endif // CUBOIDBLOCKS_H
