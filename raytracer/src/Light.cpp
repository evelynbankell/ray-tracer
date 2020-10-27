//
// Created by Evelyn Bankell on 2020-10-02.
//

#include "../headers/Light.h"

Light::Light() {
    color = ColorDbl (0, 0, 0);
    length = 1.0;

    point = Vertex (5, 0, 5);

    v0 = Vertex(4.5,-1.5,4);
    v1 = Vertex(5.5,-1.5,4);
    v2 = Vertex(4.5,1.5,4);
    v3 = Vertex(5.5,1.5,4);

    triangles[0] = Triangle(v0, v2, v1, color);
    triangles[1] = Triangle(v1, v2, v3, color);
}

void Light::rayIntersection(Ray &r, float &minDist) {
    for (int i = 0; i < 2; i++) {

        triangles[i].rayIntersection(r, minDist);
    }
}
