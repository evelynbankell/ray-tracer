//
// Created by Hannah Bergenroth & Evelyn Bankell
//

#ifndef RAYTRACER_CAMERA_H
#define RAYTRACER_CAMERA_H

#include <vector>
#include "../glm/glm.hpp"
#include "../glm/geometric.hpp"

#include "Definitions.h"
#include "Pixel.h"
#include "Scene.h"




class Camera {
public:
    Camera(int eye_perspective);
    ~Camera();

    Pixel** screen = new Pixel*[800];
   // std::vector<std::vector<Pixel>> screen;
    void render(Scene scene);
    void createImage();

    double pixelSize = 0.0025;

private:

    const int SCREEN_RESOLUTION = 800;

    const Vertex eye1 = Vertex(-1, 0, 0, 1);
    const Vertex eye2 = Vertex(-1, 0, 0, 1);

    int eye;
    int resolution;

    Vertex start;

    ColorDbl createPixel(Scene s, Vertex position);
    double findMaxIntensity();


};

#endif //RAYTRACER_CAMERA_H
