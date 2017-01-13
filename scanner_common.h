/*
  This file is part of MAMBO, a low-overhead dynamic binary modification tool:
      https://github.com/beehive-lab/mambo

  Copyright 2013-2016 Cosmin Gorgovan <cosmin at linux-geek dot org>

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
*/

#ifndef __SCANNER_COMMON_H__
#define __SCANNER_COMMON_H__

#include "scanner_public.h"

#define SETUP (1 << 0)
#define REPLACE_TARGET (1 << 1)
#define INSERT_BRANCH (1 << 2)

#ifdef __arm__
void thumb_cc_branch(dbm_thread *thread_data, uint16_t *write_p, uint32_t dest_addr);
void thumb_b16_cond_helper(uint16_t *write_p, uint32_t dest_addr, mambo_cond cond);
void thumb_b32_helper(uint16_t *write_p, uint32_t dest_addr);
void thumb_bl32_helper(uint16_t *write_p, uint32_t dest_addr);
void thumb_blx32_helper(uint16_t *write_p, uint32_t dest_addr);
void thumb_adjust_b_bl_target(dbm_thread *thread_data, uint16_t *write_p, uint32_t dest_addr);
void thumb_encode_cond_imm_branch(dbm_thread *thread_data,
                                       uint16_t **o_write_p,
                                       int basic_block,
                                       uint32_t address_taken,
                                       uint32_t address_skipped,
                                       enum arm_cond_codes condition,
                                       bool taken_in_cache,
                                       bool skipped_in_cache,
                                       bool update);
void thumb_encode_cbz_branch(dbm_thread *thread_data,
                                  uint32_t rn,
                                  uint16_t **o_write_p,
                                  int basic_block,
                                  uint32_t address_taken,
                                  uint32_t address_skipped,
                                  bool taken_in_cache,
                                  bool skipped_in_cache,
                                  bool update);

void arm_cc_branch(dbm_thread *thread_data, uint32_t *write_p, uint32_t target, uint32_t cond);
void arm_b32_helper(uint32_t *write_p, uint32_t target, uint32_t cond);
void arm_adjust_b_bl_target(uint32_t *write_p, uint32_t dest_addr);
#endif

#ifdef __aarch64__
void a64_branch_helper(uint32_t *write_p, uint64_t target, bool link);
void a64_b_helper(uint32_t *write_p, uint64_t target);
void a64_bl_helper(uint32_t *write_p, uint64_t target);
void a64_b_cond_helper(uint32_t *write_p, uint64_t target, mambo_cond cond);
void a64_cbz_cbnz_helper(uint32_t *write_p, bool cbnz, uint64_t target, uint32_t sf, uint32_t rt);
void a64_cbz_helper(uint32_t *write_p, uint64_t target, uint32_t sf, uint32_t rt);
void a64_cbnz_helper(uint32_t *write_p, uint64_t target, uint32_t sf, uint32_t rt);
void a64_tbz_tbnz_helper(uint32_t *write_p, bool is_tbnz,
                         uint64_t target, enum reg reg, uint32_t bit);
void a64_tbz_helper(uint32_t *write_p, uint64_t target, enum reg reg, uint32_t bit);
void a64_tbnz_helper(uint32_t *write_p, uint64_t target, enum reg reg, uint32_t bit);
#endif

extern void inline_hash_lookup();
extern void end_of_inline_hash_lookup();
extern void inline_hash_lookup_get_addr();
extern void inline_hash_lookup_data();
#endif
