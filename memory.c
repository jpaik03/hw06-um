/*
 *      memory.c
 *      Justin Paik (jpaik03)
 *      17 November, 2025
 *      um
 * 
 *      TODO: Description 
 */

#include <seq.h>
#include <array.h>

#include "memory.h"

/******** mem_map ********
 *
 * Implements the 'Map Segment' instruction (opcode 8). Creates a new segment
 * with a specified number of words, all initialized to 0.
 *
 * Parameters:
 *      Memory_T mem:           The memory module instance
 *      uint32_t numWords:      The number of 32-bit words for the new segment
 * Returns:
 *      A 32-bit segment identifier for the new segment. This ID is guaranteed
 *      not to be 0 and not to identify any other currently mapped segment.
 * Expects:
 *      'mem' is not NULL.
 *      'mem' is a valid Memory_T instance.
 * Notes:
 *      This function attempts to get a recycled ID from the free list stack.
 *      If none is available, it will use the next available ID.
 *      Throws a CRE if 'mem' is NULL.
 *      Halts execution with a CRE if memory allocation fails.
 ************************/
uint32_t mem_map(Memory_T mem, uint32_t numWords);

/******** mem_unmap ********
 *
 * Implements the 'Unmap Segment' instruction (opcode 9). Frees the specified
 * segment and adds its ID to the free list for recycling.
 *
 * Parameters:
 *      Memory_T mem:   The memory module instance
 *      uint32_t segId: The 32-bit identifier of the segment to unmap
 * Returns:
 *      Nothing.
 * Expects:
 *      'mem' is not NULL.
 *      'mem' is a valid Memory_T instance.
 * Notes:
 *      The 'segId' is added to the free list to be reused by a future 'mem_map'
 *      call.
 *      Throws a CRE if 'mem' is NULL.
 *      Throws an unchecked run-time error if 'segId' is 0 or refers to a
 *      segment that is not currently mapped.
 ************************/
void mem_unmap(Memory_T mem, uint32_t segId);

/******** mem_load ********
 *
 * Implements the 'Load Program' instruction (opcode 12). Duplicates the segment
 * at 'segId' and replaces segment 0 with the duplicate.
 *
 * Parameters:
 *      Memory_T mem:   The memory module instance
 *      uint32_t segId: The 32-bit identifier of the segment to load
 * Returns:
 *      Nothing.
 * Expects:
 *      'mem' is not NULL.
 *      'mem' is a valid Memory_T instance.
 * Notes:
 *      If 'segId' is not 0, the existing segment 0 is unmapped, the segment at
 *      'segId' is duplicated, and the new duplicate segment is mapped as
 *      segment 0.
 *      Throws a CRE if 'mem' is NULL.
 *      Throws an unchecked run-time error if 'segId' refers to a segment that
 *      is not currently mapped.
 ************************/
void mem_load(Memory_T mem, uint32_t segId);
