#include "../include/funcoesLista.hpp" 

// funções para struct dado
void insereDadosNo(unique_ptr<Dado>& dado){
        
        mudaNome(dado);
        mudaIdade(dado);
}


void mudaNome(unique_ptr<Dado>& dado){
        
        std::cout << "informe o nome: ";
        std::cin >> dado->nome;

        std::cout << '\n';

        if(dado->nome.empty() || dado->nome[0] == ' '){ 
                dado->nome = "default";
        }

}

void mudaIdade(unique_ptr<Dado>& dado){
        
        std::cout << '\n' << "infome a idade: ";
        std::cin >> dado->idade;

        std::cout << '\n';

        if(dado->idade <= 0){
                dado->idade = 1;
        }

}


// funções para struct No
unique_ptr<No> criaNo(unique_ptr<Lista>& lista){

        unique_ptr<No> novoNo = make_unique<No>();
        unique_ptr<Dado> novoDado = make_unique<Dado>();

        insereDadosNo(novoDado);

        if(lista->comeco == nullptr){
                novoNo->anterior = nullptr;
                novoNo->proximo = nullptr;

        } else {
                // continuar depois                

        }

        return novoNo;
}


// funções para struct lista
unique_ptr<Lista> criaLista(){

        unique_ptr<Lista> lista = make_unique<Lista>();

        lista->comeco = nullptr;
        lista->final = nullptr;

        return lista;
}
