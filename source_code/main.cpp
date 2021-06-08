#include <iostream>
#include "object.h"

using namespace std;
using namespace Eigen;

int main(){
    object a;
    Vector3d f1(0,10,0);
    for(int i=0;i<1000;i++)
    {
        a.add_force(f1);
        a.simulate();
    }
    cout<<a;
    return 0;
}
