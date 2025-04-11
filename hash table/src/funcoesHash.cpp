#include "../include/listaEncadeada.hpp"

// exemplo simples que eu mesmo fiz para indexação na tabela
int indexacao(Dado& pessoa){
        
        int tamanhoNome = pessoa.nome.size();
        int idadePessoa = pessoa.idade;

        int valor = (((tamanhoNome + 2) * (tamanhoNome * 4 + idadePessoa)) / 5 * idadePessoa) + idadePessoa;

        return valor % 8; 
}




