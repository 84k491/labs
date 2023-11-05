#include "dyn.h"
#include "static.h"

class LibUser{
public:
    LibUser();

    void action() const;

private:
    DynamicLibClass dlib;
    StaticLibraryClass slib;
};
