/*
 * BitNetMCU_inference.h
 *
 *  Created on: 09-Mar-2026
 *      Author: Workstation
 */

#ifndef BITNETMCU_INFERENCE_H_
#define BITNETMCU_INFERENCE_H_


#include <stdint.h>

uint32_t ReLUNorm(int32_t *input, int8_t *output, uint32_t n_input);

void processfclayer(int8_t *activations,
                    const uint32_t *weights,
                    int32_t bits_per_weight,
                    uint32_t n_input,
                    uint32_t n_output,
                    int32_t *output);

#endif /* BITNETMCU_INFERENCE_H_ */
