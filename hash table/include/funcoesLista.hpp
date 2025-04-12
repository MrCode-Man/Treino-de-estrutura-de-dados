#pragma once

#include <memory>
#include <iostream>

#include "../include/listaEncadeada.hpp"

using std::unique_ptr;
using std::make_unique;

void insereDadosNo(unique_ptr<Dado>& dado);
void mudaNome(unique_ptr<Dado>& dado);
void mudaIdade(unique_ptr<Dado>& dado);

unique_ptr<Lista> criaLista();
unique_ptr<No> criaNo(unique_ptr<Lista>& lista);