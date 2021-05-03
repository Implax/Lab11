#include "cylindricalBlocks.h"
#include <algorithm>

cylindricalBlocks::cylindricalBlocks(){}

cylindricalBlocks::~cylindricalBlocks(){}

vector<vector<int>> cylindricalBlocks::cyl_blocks(vector<vector<int>> &cylinders){

    int diameter;
    int height;

    for (const auto& row : cylinders) {
        diameter = row[0];
        height = row[2];

        vector<int> temp;

        temp.push_back(diameter);
        temp.push_back(height);

        cylindrical_coords.push_back(temp);
        }
        return cylindrical_coords;
    }

    void cylindricalBlocks::calculate_cylinders(vector<vector<int>> &cylinder_objects){
        double dim, rad, surface_area, length, area;

            for (const auto& row : cylinder_objects){
                dim = row[0];
                rad = dim/2;
                length = row[1];
                surface_area = round ((2*M_PI*rad*length) + (2*M_PI*pow(rad,2)));
                area = round (M_PI * pow(rad,2));

                surface_areas.push_back(surface_area);
                diameters.push_back(dim);
                lengths.push_back(length);
                areas.push_back(area);
            }

                cout << "Cylindrical Blocks" << endl;

                sort (surface_areas.begin(), surface_areas.end());
                cout << "Surface Areas" << endl;
                for (const auto &i : surface_areas){
                    cout << i << " ";
                }
                cout << endl;

                sort (diameters.begin(), diameters.end());
                cout << "Diameters" << endl;
                for (const auto &i : diameters){
                    cout << i << " ";
                }
                cout << endl;

                sort ( lengths.begin(),  lengths.end());
                cout << "Lengths" << endl;;
                 for (const auto &i :  lengths){
                    cout << i << " ";
                }
                cout << endl;

                sort (areas.begin(), areas.end());
                cout << "Areas" << endl;
                 for (const auto &i : areas){
                    cout << i << " ";
                }
                cout << endl;
                cout << endl;
    }


