#pragma once

#include "../IShape.hpp"
#include "../../math/Vector4.hpp"

class Sphere : public IShape {
    public:
        Vector4 center;
        float radius;

        unsigned int u; // latitude
        unsigned int v; // longitude

        Sphere() = default;
        ~Sphere() = default;

        Sphere(const Vector4 &center, const float radius);

        Mesh generate_mesh() const override;

    private:
        // Compute the sphere position by spherical coordinates.
        // Theta and phi in degrees.
        static Vector4 position(float radius, float theta, float phi);
};
