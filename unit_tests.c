/*
 *      unit_tests.c
 *      Justin Paik (jpaik03)
 *      17 November, 2025
 *      um
 * 
 *      TODO: Description 
 */

/******** test_regs_new ********
 *
 * This test verifies the initialization of the registers module.
 *
 * It tests:
 *      1. regs_new: Asserts that a new register file is not NULL.
 *      2. Initialization: Asserts that all 8 registers are initialized to 0.
 ************************/
void test_regs_new();

/******** test_regs_set_get ********
 *
 * This test verifies the set and get functionality of the registers module.
 *
 * It tests:
 *      1. regs_set: Sets a given value in a register.
 *      2. regs_get: Asserts that the get value matches the set value.
 ************************/
void test_regs_set_get();

/******** test_mem_map ********
 *
 * This test verifies that a new segment is mapped correctly.
 *
 * It tests:
 *      1. mem_map: Maps a new segment of a certain (non-zero) size.
 *      2. Return Value: Asserts the returned segment ID is not 0.
 ************************/
void test_mem_map();

/******** test_mem_put_get ********
 *
 * This test verifies the ability to read and write from a mapped segment.
 *
 * It tests:
 *      1. mem_map: Maps a new segment.
 *      2. mem_put: Stores a known value at a valid offset.
 *      3. mem_get: Retrieves the value and asserts it is as expected.
 ************************/
void test_mem_put_get();

/******** test_mem_recycle_id ********
 *
 * This test verifies that segment IDs are recycled after being unmapped.
 *
 * It tests:
 *      1. mem_map: Maps a segment and gets an ID.
 *      2. mem_unmap: Unmaps that segment.
 *      3. mem_map: Maps a new segment and asserts its ID is the same as the
 *                  first map call, verifying the ID was recycled.
 ************************/
void test_mem_recycle_id();