#ifndef __TRIANGLE_H__
#define __TRIANGLE_H__
#include "plane.h"

class Triangle : public Plane{
private:
   double denom;
   double minX;
   double minY;
   double minZ;
   double maxX;
   double maxY;
   double maxZ;
   Vector bscenter;
   double bsradsq;

public:
   double thirdX;
   Triangle(Vector c, Vector b, Vector a, Texture* t);
   double getIntersection(Ray ray);
   bool getLightIntersection(Ray ray, double* fill);
};

#endif
