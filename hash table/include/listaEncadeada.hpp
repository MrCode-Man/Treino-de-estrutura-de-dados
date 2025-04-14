#pragma once

#include <string>
#include <memory>

using std::unique_ptr;

struct Dado{

        std::string nome;
        int idade;
};

struct No{

        unique_ptr<Dado> dados;

        unique_ptr<No> proximo;
        No* anterior;
};

struct Lista{

        No* comeco;
        No* final;
};
