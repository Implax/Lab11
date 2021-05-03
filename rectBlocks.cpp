#include "rectBlocks.h"
#include <iostream>
#include <fstream>
#include <vector>

//Constructor and Destructor
rectBlocks::rectBlocks(){};

rectBlocks::~rectBlocks(){};


rectBlocks test;

vector<vector<int>> rectBlocks::readBlocks(){
    ifstream values;
    values.open("dataBlocks.dat");

    int w, h, l;


    for (int i=0; i < 20; i++){

        vector<int> tempv;
        for (int i = 0; i < 1; i++){
            values >> w >> h >> l;

            tempv.push_back(w);
            tempv.push_back(h);
            tempv.push_back(l);
        }
        coords.push_back(tempv);
    }

    values.close();
    return coords;
}

//    void rectBlocks::print(){
//        for (const auto& row : coords) {
//            int w = row[0];
//            int h = row[1];
//            int l = row[2];
//
//        cout << w << " " << h << " " << l << endl;
//        }
//    }



