#include "Math.h"
#include <cmath> 

Vec::Vec(float _x, float _y, float _z){
    x = _x;
    y = _y;
    z = _z;
}

float Vec::dot(const Vec& other){
    return x * other.x + y * other.y + z * other.z;
}
float Vec::mag(){
    return sqrt(x*x, y*y, z*z);
}

Vec Vec::normalize(){
    float mag = this.mag();
    return Vec(x/mag, y/mag, z/mag);    
}

Vec Vec::cross(const Vec& other){
    return Vec(y * other.z - z * other.y, 
                z * other.x - x * other.z, x * other.y - y * other.x);
}

Ray::Ray(const Vec& _start, const Vec& _dir){
    start = _start;
    dir = _dir;
}

Sphere::Sphere(Vec _center, float radius){
    center = _center;
    radius = _radius;
}
