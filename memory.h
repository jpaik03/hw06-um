/*
 *      memory.h
 *      Justin Paik (jpaik03)
 *      17 November, 2025
 *      um
 * 
 *      TODO: Description 
 */

typedef struct Memory_T *Memory_T;

Memory_T mem_new(FILE *fp);
void mem_free(Memory_T *mem);
uint32_t mem_get(Memory_T mem, uint32_t segId, uint32_t offset);
void mem_put(Memory_T mem, uint32_t segId, uint32_t offset, uint32_t val); 
uint32_t mem_map(Memory_T mem, uint32_t numWords);
void mem_unmap(Memory_T mem, uint32_t segId);
void mem_load(Memory_T mem, uint32_t segId);
