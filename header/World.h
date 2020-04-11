#include <string>
#include <vector>

class World{
 private:
    std::vector<Sphere> spheres;


 public:
    /*
        Reads in a world, returns true if world is valid.
     */
    bool read(const std::string& path);

    /*
        Renders the world, returns NULL if something goes wrong 
     */
    char* render();
}
