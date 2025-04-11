#include "../include/funcoesLista.hpp" 

void mudaNome(Dado& pessoa, std::string nome){

        if(nome.empty()){
                pessoa.nome = "default";
                return;
        }

        pessoa.nome = nome;
}

void mudaIdade(Dado& pessoa, int idade){

        if(idade <= 0){
                pessoa.idade = 1;
                return;
        }

        pessoa.idade = idade;
}
