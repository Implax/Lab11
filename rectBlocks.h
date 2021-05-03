#ifndef RECTBLOCKS_H
#define RECTBLOCKS_H

#include <iostream>
#include <vector>
#include <cmath>
#include <vector>
#include <sstream>
#include <cstdio>
#include <iterator>

using namespace std;

class rectBlocks
{

    public:
        rectBlocks();

        //destructor
        virtual ~rectBlocks();


        vector<vector<int>> readBlocks(); //Gets all block vertices from file
        void print();


        //vector members
        vector<vector<int>> coords;

};

#endif // RECTBLOCKS_H
