#ifndef POC_VECTOR
#define POC_VECTOR

namespace Rule {

//This is just a position. Nothing magic. Carry on.
struct Vector{
    double x;
    double y;
    void set(double nx, double ny) {x = nx; y = ny;}
    double getX() const { return x; };
    double getY() const { return y; };
};

}

#endif
