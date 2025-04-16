#include <iostream>
#include "PolygonalMesh.hpp"
#include "Utils.hpp"
#include "UCDUtilities.hpp"

using namespace std;
using namespace Eigen;
using namespace PolygonalLibrary;


int main()
{   
    Polygonal_Mesh mesh;
    
    if(!import_mesh(mesh))
    {
        cerr<<"Error: file not found"<<endl;
        return 1;
    }

    Gedim::UCDUtilities utilities;
    utilities.ExportPoints("./Cell0Ds.inp",
                           mesh.cell0Ds_coordinates);

    utilities.ExportSegments("./Cell1Ds.inp",
                             mesh.cell0Ds_coordinates,
                             mesh.cell1Ds_extrema);
    


    return 0;
}