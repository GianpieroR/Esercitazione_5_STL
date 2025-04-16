#pragma once

#include <iostream>
#include <vector>
#include <map>
#include <list>
#include "Eigen/Eigen"

using namespace std;
using namespace Eigen;

namespace PolygonalLibrary{

struct Polygonal_Mesh
{
    unsigned int num_cell0Ds;
    unsigned int num_cell1Ds;
    unsigned int num_cell2Ds;

    vector<unsigned int> cell0Ds_id;
    vector<unsigned int> cell1Ds_id;
    vector<unsigned int> cell2Ds_id;

    MatrixXd cell0Ds_coordinates;
    MatrixXi cell1Ds_extrema;
    vector<vector<unsigned int>> cell2Ds_vertices;
    vector<vector<unsigned int>> cell2Ds_edges;

    /*I use a map to storage the markers, 
    in which the keys are the markers and
    the value is a list with the cell_id that have a specific key-marker*/
    map<unsigned int, list<unsigned int>> cell0Ds_markers;
    map<unsigned int, list<unsigned int>> cell1Ds_markers;
    map<unsigned int, list<unsigned int>> cell2Ds_markers;
};

}