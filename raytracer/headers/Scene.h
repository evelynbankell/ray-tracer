//
// Created by Hannah Bergenroth & Evelyn Bankell
//

#ifndef RAYTRACER_SCENE_H
#define RAYTRACER_SCENE_H

#include "Ray.h"
#include "Triangle.h"
#include "Definitions.h"
#include "Tetrahedron.h"
#include "Sphere.h"
#include "Light.h"
#include <cmath>

class Scene {
public:
    Scene();
    //~Scene();
    Triangle triangleList[26];
    Tetrahedron tetrahedron;
    Sphere sphere;
    Sphere sphere2;
    Sphere sphere3;
    Light lightsource;

    void rayIntersection(Ray &r, int depth);
    bool isIntersected(Ray &r, float minDist, int depth);
    ColorDbl computeDirectLight(Ray &r, float &minDist);
    ColorDbl computeIndirectLight(Ray &r, int depth);

private:
    //Triangle triangleList[24];





};


#endif //RAYTRACER_SCENE_H
