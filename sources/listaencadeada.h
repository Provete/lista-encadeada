#pragma once

typedef struct ListaEncadeada
{
    int valor;
    struct ListaEncadeada* proximo;
} ListaEncadeada;

ListaEncadeada* CriarLista();

int EstaVazia(ListaEncadeada* listaEncadeada);
void AdicionarElemento(ListaEncadeada** listaEncadeada, int novoValor);
void ImprimirLista(ListaEncadeada** listaEncadeada);
void RemoverPorValor(ListaEncadeada** listaEncadeada, int valor);
ListaEncadeada* ProcurarPorValor(ListaEncadeada** listaEncadeada, int valor);
void AdicionarElementoEmOrdem(ListaEncadeada** ListaEncadeada, int valor);