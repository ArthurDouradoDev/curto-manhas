#ifndef JOGADOR16855233_H
#define JOGADOR16855233_H

#include "../baralho.h"

const char *nome_16855233();
void iniciar_16855233(const int meu_id, const int total_jogadores);
void nova_rodada_16855233(const int rodada, const Carta carta_virada, const int n_cartas, Carta *minha_mao);
int apostar_16855233(const int *apostas);
int jogar_16855233(const Carta *mesa, const int num_na_mesa, const int vitorias);

#endif // JOGADOR16855233_H