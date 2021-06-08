#ifndef OBJECT_H
#define OBJECT_H
#include <C:\Users\hp\Desktop\Si-Phy\New folder\eigen-3.3.9\Eigen\Dense>
#include "constants.h"
using namespace std;

using namespace Eigen;

class object{
    double mass;
    Vector3d position;
    Vector3d velocity;
    Vector3d force;
    

    public:
    object(double mass=1);
    void add_force(Vector3d&);
    void simulate();
    friend ostream& operator<<(ostream&, const object&);
};

#endif