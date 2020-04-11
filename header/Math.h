struct Vec{
    float x, y, z;

    Vec(){}
    Vec(float _x, float _y, float _z);

    float dot(const Vec& other);
    float mag();
    Vec normalize();
    Vec cross(const Vec& other);
};

struct Ray{
    Vec start, dir;
    Ray(){}
    Ray(const Vec& _start, const Vec& _dir);
};

struct Sphere{
    Vec center;
    float radius;
    Ray(){}
    Ray(const Vec& _center, float _radius);
}
