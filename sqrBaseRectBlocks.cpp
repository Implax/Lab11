#include "sqrBaseRectBlocks.h"
#include <iostream>

//Constructor and Destructor
sqrBaseRectBlocks::sqrBaseRectBlocks(){};

sqrBaseRectBlocks::~sqrBaseRectBlocks(){};


vector<vector<int>> sqrBaseRectBlocks::squareBlocks(vector<vector<int>> &vect){
    for (const auto& row : vect) { //coords is the name of vector being iterated through
        int w = row[0];
        int h = row[1];
        int l = row[2];

        if (w == h){
            square_coords.push_back(row);
        }

    }
    return square_coords;
}



