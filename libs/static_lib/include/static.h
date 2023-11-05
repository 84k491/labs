#include <string>

class StaticLibraryClass {
public:
    StaticLibraryClass(std::string str);

    std::string get_string() const;

private:
    std::string m_string;
};
