//
// Created by jan.wendler on 14.03.2022.
//

#ifndef FALCON_IMPL_20211101__RNG_H_
#define FALCON_IMPL_20211101__RNG_H_

#include <stdint.h>

typedef struct {
	union {
		uint8_t d[512]; /* MUST be 512, exactly */
		uint64_t dummy_u64;
	} buf;
	size_t ptr;
	union {
		uint8_t d[256];
		uint64_t dummy_u64;
	} state;
	int type;
} prng;

int falcon_inner_get_seed(void* seed, size_t len);

void falcon_inner_prng_init(prng* p, inner_shake256_context* src);
void falcon_inner_prng_refill(prng *p);
void falcon_inner_prng_get_bytes(prng *p, void *dst, size_t len);

#endif//FALCON_IMPL_20211101__RNG_H_
