#ifndef WSRSA2048_HPP_
#define WSRSA2048_HPP_

#include "globals.hpp"
//#include "interleaveModMult.hpp"
#include "montMult.hpp"

typedef enum { ENCRYPT=0, DECRYPT=1, DECRYPTKEYINIT=2, INIT=3} RSAmode_t;


void wsrsa1024( memword_t base_mem[NUM_MEMWORDS],
		memword_t publexp_mem[NUM_MEMWORDS],
		memword_t modulus_mem[NUM_MEMWORDS],
		memword_t result_mem[NUM_MEMWORDS]);

#endif
