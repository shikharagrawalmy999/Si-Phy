#include "object.h"

using namespace std;

object::object(double new_mass){
    mass = new_mass;
    position= {0,0,0};
    velocity= {0,0,0};
    force= {0,0,0};
}

void object::add_force(Vector3d& new_force){
    force += new_force;
}

void object::simulate(){
    //change it to physically correct update rule
    velocity += force*dt/mass;
    position += velocity*dt;
    force= {0,0,0};
}

ostream& operator<<(ostream& output, const object& obj){
    output<<"Info about object\n################"<<endl;
    output<<"mass: "<<obj.mass<<endl;
    output<<"position:\n "<<obj.position<<endl;
    output<<"velocity:\n "<<obj.velocity<<endl;
    output<<"################"<<endl;
    return output;
}