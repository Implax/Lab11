#include "sphericalBlocks.h"
#include <algorithm>

sphericalBlocks::sphericalBlocks(){}

sphericalBlocks::~sphericalBlocks(){}

vector<vector<int>> sphericalBlocks::spherical(vector<vector<int>> &spheres){

    int diameter;

        for (const auto& row : spheres) {
        diameter = row[0];

        vector<int> temp;

        temp.push_back(diameter);

        spherical_coords.push_back(temp);
        }
        return spherical_coords;
}

void sphericalBlocks::calculate_sphere(vector<vector<int>> &sphere_objects){
    double dim, rad, surface_area, volume;

    for (const auto& row : sphere_objects){
        dim = row[0];
        rad = dim/2;
        surface_area = round (4 * M_PI * pow(rad, 2));
        volume = round(4/3 * M_PI * pow(rad, 3));

        diameters.push_back(dim);
        surface_areas.push_back(surface_area);
        volumes.push_back(volume);
    }

    cout << "Spherical Blocks" << endl;

    sort (diameters.begin(), diameters.end());
    cout << "Diameters" << endl;
    for (const auto &i : diameters){
        cout << i << " ";
    }
    cout << endl;

    sort (surface_areas.begin(), surface_areas.end());
    cout << "Surface Areas" << endl;
    for (const auto &i : surface_areas){
        cout << i << " ";
    }
    cout << endl;

    sort (volumes.begin(), volumes.end());
    cout << "Volumes" << endl;
     for (const auto &i : volumes){
        cout << i << " ";
    }
    cout << endl;
}

