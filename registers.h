/*
 *      registers.h
 *      Justin Paik (jpaik03)
 *      17 November, 2025
 *      um
 * 
 *      TODO: Description 
 */

typedef struct Registers_T *Registers_T

Registers_T regs_new();
void regs_free(Registers_T *registers);
uint32_t regs_get(Registers_T registers, int reg);
void regs_set(Registers_T registers, int reg, uint32_t val);
