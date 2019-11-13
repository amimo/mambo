#ifdef PLUGINS_NEW
#ifndef __EMIT_PIE_PIE_A64_ENCODER_C__
#define __EMIT_PIE_PIE_A64_ENCODER_C__
#include "../dbm.h"
#include "../pie/pie-a64-encoder.h"
#include "plugin_support.h"
void emit_a64_CBZ_CBNZ (
	mambo_context *ctx,
	unsigned int sf,
	unsigned int op,
	unsigned int imm19,
	unsigned int rt
);
void emit_a64_B_cond (
	mambo_context *ctx,
	unsigned int imm19,
	unsigned int cond
);
void emit_a64_SVC (
	mambo_context *ctx,
	unsigned int imm16
);
void emit_a64_HVC (
	mambo_context *ctx,
	unsigned int imm16
);
void emit_a64_SMC (
	mambo_context *ctx,
	unsigned int imm16
);
void emit_a64_BRK (
	mambo_context *ctx,
	unsigned int imm16
);
void emit_a64_HLT (
	mambo_context *ctx,
	unsigned int imm16
);
void emit_a64_DCPS1 (
	mambo_context *ctx,
	unsigned int imm16
);
void emit_a64_DCPS2 (
	mambo_context *ctx,
	unsigned int imm16
);
void emit_a64_DCPS3 (
	mambo_context *ctx,
	unsigned int imm16
);
void emit_a64_MSR_immed (
	mambo_context *ctx,
	unsigned int op1,
	unsigned int crm,
	unsigned int op2
);
void emit_a64_HINT (
	mambo_context *ctx,
	unsigned int crm,
	unsigned int op2
);
void emit_a64_CLREX (
	mambo_context *ctx,
	unsigned int crm
);
void emit_a64_DSB (
	mambo_context *ctx,
	unsigned int crm
);
void emit_a64_DMB (
	mambo_context *ctx,
	unsigned int crm
);
void emit_a64_ISB (
	mambo_context *ctx,
	unsigned int crm
);
void emit_a64_SYS (
	mambo_context *ctx,
	unsigned int op1,
	unsigned int crn,
	unsigned int crm,
	unsigned int op2,
	unsigned int rt
);
void emit_a64_MRS_MSR_reg (
	mambo_context *ctx,
	unsigned int r,
	unsigned int o0,
	unsigned int op1,
	unsigned int crn,
	unsigned int crm,
	unsigned int op2,
	unsigned int rt
);
void emit_a64_SYSL (
	mambo_context *ctx,
	unsigned int op1,
	unsigned int crn,
	unsigned int crm,
	unsigned int op2,
	unsigned int rt
);
void emit_a64_TBZ_TBNZ (
	mambo_context *ctx,
	unsigned int b5,
	unsigned int op,
	unsigned int b40,
	unsigned int imm14,
	unsigned int rt
);
void emit_a64_B_BL (
	mambo_context *ctx,
	unsigned int op,
	unsigned int imm26
);
void emit_a64_BR (
	mambo_context *ctx,
	unsigned int rn
);
void emit_a64_BLR (
	mambo_context *ctx,
	unsigned int rn
);
void emit_a64_RET (
	mambo_context *ctx,
	unsigned int rn
);
void emit_a64_ERET (
	mambo_context *ctx
);
void emit_a64_DRPS (
	mambo_context *ctx
);
void emit_a64_LDX_STX (
	mambo_context *ctx,
	unsigned int size,
	unsigned int o2,
	unsigned int l,
	unsigned int o1,
	unsigned int rs,
	unsigned int o0,
	unsigned int rt2,
	unsigned int rn,
	unsigned int rt
);
void emit_a64_LDR_lit (
	mambo_context *ctx,
	unsigned int opc,
	unsigned int v,
	unsigned int imm19,
	unsigned int rt
);
void emit_a64_LDP_STP (
	mambo_context *ctx,
	unsigned int opc,
	unsigned int v,
	unsigned int type,
	unsigned int l,
	unsigned int imm7,
	unsigned int rt2,
	unsigned int rn,
	unsigned int rt
);
void emit_a64_LDR_STR_immed (
	mambo_context *ctx,
	unsigned int size,
	unsigned int v,
	unsigned int opc,
	unsigned int imm9,
	unsigned int type,
	unsigned int rn,
	unsigned int rt
);
void emit_a64_LDR_STR_reg (
	mambo_context *ctx,
	unsigned int size,
	unsigned int v,
	unsigned int opc,
	unsigned int rm,
	unsigned int option,
	unsigned int s,
	unsigned int rn,
	unsigned int rt
);
void emit_a64_LDR_STR_unsigned_immed (
	mambo_context *ctx,
	unsigned int size,
	unsigned int v,
	unsigned int opc,
	unsigned int imm12,
	unsigned int rn,
	unsigned int rt
);
void emit_a64_LDx_STx_multiple (
	mambo_context *ctx,
	unsigned int q,
	unsigned int l,
	unsigned int opcode,
	unsigned int size,
	unsigned int rn,
	unsigned int rt
);
void emit_a64_LDx_STx_multiple_post (
	mambo_context *ctx,
	unsigned int q,
	unsigned int l,
	unsigned int rm,
	unsigned int opcode,
	unsigned int size,
	unsigned int rn,
	unsigned int rt
);
void emit_a64_LDx_STx_single (
	mambo_context *ctx,
	unsigned int q,
	unsigned int l,
	unsigned int r,
	unsigned int opcode,
	unsigned int s,
	unsigned int size,
	unsigned int rn,
	unsigned int rt
);
void emit_a64_LDx_STx_single_post (
	mambo_context *ctx,
	unsigned int q,
	unsigned int l,
	unsigned int r,
	unsigned int rm,
	unsigned int opcode,
	unsigned int s,
	unsigned int size,
	unsigned int rn,
	unsigned int rt
);
void emit_a64_ADD_SUB_immed (
	mambo_context *ctx,
	unsigned int sf,
	unsigned int op,
	unsigned int s,
	unsigned int shift,
	unsigned int imm12,
	unsigned int rn,
	unsigned int rd
);
void emit_a64_BFM (
	mambo_context *ctx,
	unsigned int sf,
	unsigned int opc,
	unsigned int n,
	unsigned int immr,
	unsigned int imms,
	unsigned int rn,
	unsigned int rd
);
void emit_a64_EXTR (
	mambo_context *ctx,
	unsigned int sf,
	unsigned int n,
	unsigned int rm,
	unsigned int imms,
	unsigned int rn,
	unsigned int rd
);
void emit_a64_logical_immed (
	mambo_context *ctx,
	unsigned int sf,
	unsigned int opc,
	unsigned int n,
	unsigned int immr,
	unsigned int imms,
	unsigned int rn,
	unsigned int rd
);
void emit_a64_MOV_wide (
	mambo_context *ctx,
	unsigned int sf,
	unsigned int opc,
	unsigned int hw,
	unsigned int imm16,
	unsigned int rd
);
void emit_a64_ADR (
	mambo_context *ctx,
	unsigned int op,
	unsigned int immlo,
	unsigned int immhi,
	unsigned int rd
);
void emit_a64_ADD_SUB_ext_reg (
	mambo_context *ctx,
	unsigned int sf,
	unsigned int op,
	unsigned int s,
	unsigned int rm,
	unsigned int option,
	unsigned int imm3,
	unsigned int rn,
	unsigned int rd
);
void emit_a64_ADD_SUB_shift_reg (
	mambo_context *ctx,
	unsigned int sf,
	unsigned int op,
	unsigned int s,
	unsigned int shift,
	unsigned int rm,
	unsigned int imm6,
	unsigned int rn,
	unsigned int rd
);
void emit_a64_ADC_SBC (
	mambo_context *ctx,
	unsigned int sf,
	unsigned int op,
	unsigned int s,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
);
void emit_a64_CCMP_CCMN_immed (
	mambo_context *ctx,
	unsigned int sf,
	unsigned int op,
	unsigned int imm5,
	unsigned int cond,
	unsigned int rn,
	unsigned int nzcv
);
void emit_a64_CCMP_CCMN_reg (
	mambo_context *ctx,
	unsigned int sf,
	unsigned int op,
	unsigned int rm,
	unsigned int cond,
	unsigned int rn,
	unsigned int nzcv
);
void emit_a64_cond_select (
	mambo_context *ctx,
	unsigned int sf,
	unsigned int op,
	unsigned int rm,
	unsigned int cond,
	unsigned int op2,
	unsigned int rn,
	unsigned int rd
);
void emit_a64_data_proc_reg1 (
	mambo_context *ctx,
	unsigned int sf,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
);
void emit_a64_data_proc_reg2 (
	mambo_context *ctx,
	unsigned int sf,
	unsigned int rm,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
);
void emit_a64_data_proc_reg3 (
	mambo_context *ctx,
	unsigned int sf,
	unsigned int op31,
	unsigned int rm,
	unsigned int o0,
	unsigned int Ra,
	unsigned int rn,
	unsigned int rd
);
void emit_a64_logical_reg (
	mambo_context *ctx,
	unsigned int sf,
	unsigned int opc,
	unsigned int shift,
	unsigned int n,
	unsigned int rm,
	unsigned int imm6,
	unsigned int rn,
	unsigned int rd
);
void emit_a64_simd_across_lane (
	mambo_context *ctx,
	unsigned int q,
	unsigned int u,
	unsigned int size,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
);
void emit_a64_simd_copy (
	mambo_context *ctx,
	unsigned int q,
	unsigned int op,
	unsigned int imm5,
	unsigned int imm4,
	unsigned int rn,
	unsigned int rd
);
void emit_a64_simd_extract (
	mambo_context *ctx,
	unsigned int q,
	unsigned int rm,
	unsigned int imm4,
	unsigned int rn,
	unsigned int rd
);
void emit_a64_simd_modified_immed (
	mambo_context *ctx,
	unsigned int q,
	unsigned int op,
	unsigned int abc,
	unsigned int cmode,
	unsigned int defgh,
	unsigned int rd
);
void emit_a64_simd_permute (
	mambo_context *ctx,
	unsigned int q,
	unsigned int size,
	unsigned int rm,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
);
void emit_a64_simd_scalar_copy (
	mambo_context *ctx,
	unsigned int imm5,
	unsigned int rn,
	unsigned int rd
);
void emit_a64_simd_scalar_pairwise (
	mambo_context *ctx,
	unsigned int u,
	unsigned int size,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
);
void emit_a64_simd_scalar_shift_immed (
	mambo_context *ctx,
	unsigned int u,
	unsigned int immh,
	unsigned int immb,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
);
void emit_a64_simd_scalar_three_diff (
	mambo_context *ctx,
	unsigned int u,
	unsigned int size,
	unsigned int rm,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
);
void emit_a64_simd_scalar_three_same (
	mambo_context *ctx,
	unsigned int u,
	unsigned int size,
	unsigned int rm,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
);
void emit_a64_simd_scalar_two_reg (
	mambo_context *ctx,
	unsigned int u,
	unsigned int size,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
);
void emit_a64_simd_scalar_x_indexed (
	mambo_context *ctx,
	unsigned int u,
	unsigned int size,
	unsigned int l,
	unsigned int m,
	unsigned int rm,
	unsigned int opcode,
	unsigned int H,
	unsigned int rn,
	unsigned int rd
);
void emit_a64_simd_shift_immed (
	mambo_context *ctx,
	unsigned int q,
	unsigned int u,
	unsigned int immh,
	unsigned int immb,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
);
void emit_a64_simd_table_lookup (
	mambo_context *ctx,
	unsigned int q,
	unsigned int rm,
	unsigned int len,
	unsigned int op,
	unsigned int rn,
	unsigned int rd
);
void emit_a64_simd_three_diff (
	mambo_context *ctx,
	unsigned int q,
	unsigned int u,
	unsigned int size,
	unsigned int rm,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
);
void emit_a64_simd_three_same (
	mambo_context *ctx,
	unsigned int q,
	unsigned int u,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
);
void emit_a64_simd_two_reg (
	mambo_context *ctx,
	unsigned int q,
	unsigned int u,
	unsigned int size,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
);
void emit_a64_simd_x_indexed (
	mambo_context *ctx,
	unsigned int q,
	unsigned int u,
	unsigned int size,
	unsigned int l,
	unsigned int m,
	unsigned int rm,
	unsigned int opcode,
	unsigned int H,
	unsigned int rn,
	unsigned int rd
);
void emit_a64_crypto_aes (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
);
void emit_a64_crypto_sha_reg3 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
);
void emit_a64_crypto_sha_reg2 (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
);
void emit_a64_FCMP (
	mambo_context *ctx,
	unsigned int type,
	unsigned int rm,
	unsigned int rn,
	unsigned int opcode2
);
void emit_a64_FCCMP (
	mambo_context *ctx,
	unsigned int type,
	unsigned int rm,
	unsigned int cond,
	unsigned int rn,
	unsigned int op,
	unsigned int nzcv
);
void emit_a64_FCSEL (
	mambo_context *ctx,
	unsigned int type,
	unsigned int rm,
	unsigned int cond,
	unsigned int rn,
	unsigned int rd
);
void emit_a64_float_reg1 (
	mambo_context *ctx,
	unsigned int type,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
);
void emit_a64_float_reg2 (
	mambo_context *ctx,
	unsigned int type,
	unsigned int rm,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
);
void emit_a64_float_reg3 (
	mambo_context *ctx,
	unsigned int type,
	unsigned int o1,
	unsigned int rm,
	unsigned int o0,
	unsigned int Ra,
	unsigned int rn,
	unsigned int rd
);
void emit_a64_FMOV_immed (
	mambo_context *ctx,
	unsigned int type,
	unsigned int imm8,
	unsigned int rd
);
void emit_a64_float_cvt_fixed (
	mambo_context *ctx,
	unsigned int sf,
	unsigned int type,
	unsigned int rmode,
	unsigned int opcode,
	unsigned int scale,
	unsigned int rn,
	unsigned int rd
);
void emit_a64_float_cvt_int (
	mambo_context *ctx,
	unsigned int sf,
	unsigned int type,
	unsigned int rmode,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
);
#endif
#endif
