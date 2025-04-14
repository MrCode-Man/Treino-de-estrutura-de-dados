#include "listaEncadeada.hpp"
#include <array>

using std::array;

class Hashtable{

public: 
        Hashtable(array<unique_ptr<Lista>, 8>& listaEncadeada);

private:
        array<unique_ptr<Lista>, 8> listaEncadeada;

};



