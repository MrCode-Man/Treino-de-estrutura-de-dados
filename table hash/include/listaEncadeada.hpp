#pragma once

#include <string>

struct Dado{

        std::string nome;
};

struct No{

        Dado* dados;

        No* proximo;
        No* anterior;
};
