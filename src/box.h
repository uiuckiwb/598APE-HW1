#ifndef __BOX_H__
#define __BOX_H__
#include "plane.h"

class Box : public Plane{
private:
  double denom;
	
public:
  Box(const Vector &c, Texture* t, double ya, double pi, double ro, double tx, double ty);
  Box(const Vector &c, Texture* t, double ya, double pi, double ro, double tx);
  double getIntersection(Ray ray);
  bool getLightIntersection(Ray ray, double* fill);
};

#endif
