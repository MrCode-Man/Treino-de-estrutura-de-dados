#pragma once

#include <string>

struct Dado{

        std::string nome;
        int idade;
};

struct No{

        Dado* dados;

        No* proximo;
        No* anterior;
};
