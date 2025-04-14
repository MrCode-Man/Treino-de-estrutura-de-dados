#include "../include/Hashtable.hpp"

Hashtable::Hashtable(array<unique_ptr<Lista>, 8>& listaEncadeada){

        for(size_t a = 0; a < listaEncadeada.size(); a++){
                this->listaEncadeada[a] = std::move(listaEncadeada[a]);
        }
}


