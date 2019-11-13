#ifndef __A64_PIE_ENCODER_H__
#define __A64_PIE_ENCODER_H__
#include <stdint.h>
void a64_CBZ_CBNZ (
	uint32_t **address,
	unsigned int sf,
	unsigned int op,
	unsigned int imm19,
	unsigned int rt
);
void a64_B_cond (
	uint32_t **address,
	unsigned int imm19,
	unsigned int cond
);
void a64_SVC (
	uint32_t **address,
	unsigned int imm16
);
void a64_HVC (
	uint32_t **address,
	unsigned int imm16
);
void a64_SMC (
	uint32_t **address,
	unsigned int imm16
);
void a64_BRK (
	uint32_t **address,
	unsigned int imm16
);
void a64_HLT (
	uint32_t **address,
	unsigned int imm16
);
void a64_DCPS1 (
	uint32_t **address,
	unsigned int imm16
);
void a64_DCPS2 (
	uint32_t **address,
	unsigned int imm16
);
void a64_DCPS3 (
	uint32_t **address,
	unsigned int imm16
);
void a64_MSR_immed (
	uint32_t **address,
	unsigned int op1,
	unsigned int crm,
	unsigned int op2
);
void a64_HINT (
	uint32_t **address,
	unsigned int crm,
	unsigned int op2
);
void a64_CLREX (
	uint32_t **address,
	unsigned int crm
);
void a64_DSB (
	uint32_t **address,
	unsigned int crm
);
void a64_DMB (
	uint32_t **address,
	unsigned int crm
);
void a64_ISB (
	uint32_t **address,
	unsigned int crm
);
void a64_SYS (
	uint32_t **address,
	unsigned int op1,
	unsigned int crn,
	unsigned int crm,
	unsigned int op2,
	unsigned int rt
);
void a64_MRS_MSR_reg (
	uint32_t **address,
	unsigned int r,
	unsigned int o0,
	unsigned int op1,
	unsigned int crn,
	unsigned int crm,
	unsigned int op2,
	unsigned int rt
);
void a64_SYSL (
	uint32_t **address,
	unsigned int op1,
	unsigned int crn,
	unsigned int crm,
	unsigned int op2,
	unsigned int rt
);
void a64_TBZ_TBNZ (
	uint32_t **address,
	unsigned int b5,
	unsigned int op,
	unsigned int b40,
	unsigned int imm14,
	unsigned int rt
);
void a64_B_BL (
	uint32_t **address,
	unsigned int op,
	unsigned int imm26
);
void a64_BR (
	uint32_t **address,
	unsigned int rn
);
void a64_BLR (
	uint32_t **address,
	unsigned int rn
);
void a64_RET (
	uint32_t **address,
	unsigned int rn
);
void a64_ERET (
	uint32_t **address
);
void a64_DRPS (
	uint32_t **address
);
void a64_LDX_STX (
	uint32_t **address,
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
void a64_LDR_lit (
	uint32_t **address,
	unsigned int opc,
	unsigned int v,
	unsigned int imm19,
	unsigned int rt
);
void a64_LDP_STP (
	uint32_t **address,
	unsigned int opc,
	unsigned int v,
	unsigned int type,
	unsigned int l,
	unsigned int imm7,
	unsigned int rt2,
	unsigned int rn,
	unsigned int rt
);
void a64_LDR_STR_immed (
	uint32_t **address,
	unsigned int size,
	unsigned int v,
	unsigned int opc,
	unsigned int imm9,
	unsigned int type,
	unsigned int rn,
	unsigned int rt
);
void a64_LDR_STR_reg (
	uint32_t **address,
	unsigned int size,
	unsigned int v,
	unsigned int opc,
	unsigned int rm,
	unsigned int option,
	unsigned int s,
	unsigned int rn,
	unsigned int rt
);
void a64_LDR_STR_unsigned_immed (
	uint32_t **address,
	unsigned int size,
	unsigned int v,
	unsigned int opc,
	unsigned int imm12,
	unsigned int rn,
	unsigned int rt
);
void a64_LDx_STx_multiple (
	uint32_t **address,
	unsigned int q,
	unsigned int l,
	unsigned int opcode,
	unsigned int size,
	unsigned int rn,
	unsigned int rt
);
void a64_LDx_STx_multiple_post (
	uint32_t **address,
	unsigned int q,
	unsigned int l,
	unsigned int rm,
	unsigned int opcode,
	unsigned int size,
	unsigned int rn,
	unsigned int rt
);
void a64_LDx_STx_single (
	uint32_t **address,
	unsigned int q,
	unsigned int l,
	unsigned int r,
	unsigned int opcode,
	unsigned int s,
	unsigned int size,
	unsigned int rn,
	unsigned int rt
);
void a64_LDx_STx_single_post (
	uint32_t **address,
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
void a64_ADD_SUB_immed (
	uint32_t **address,
	unsigned int sf,
	unsigned int op,
	unsigned int s,
	unsigned int shift,
	unsigned int imm12,
	unsigned int rn,
	unsigned int rd
);
void a64_BFM (
	uint32_t **address,
	unsigned int sf,
	unsigned int opc,
	unsigned int n,
	unsigned int immr,
	unsigned int imms,
	unsigned int rn,
	unsigned int rd
);
void a64_EXTR (
	uint32_t **address,
	unsigned int sf,
	unsigned int n,
	unsigned int rm,
	unsigned int imms,
	unsigned int rn,
	unsigned int rd
);
void a64_logical_immed (
	uint32_t **address,
	unsigned int sf,
	unsigned int opc,
	unsigned int n,
	unsigned int immr,
	unsigned int imms,
	unsigned int rn,
	unsigned int rd
);
void a64_MOV_wide (
	uint32_t **address,
	unsigned int sf,
	unsigned int opc,
	unsigned int hw,
	unsigned int imm16,
	unsigned int rd
);
void a64_ADR (
	uint32_t **address,
	unsigned int op,
	unsigned int immlo,
	unsigned int immhi,
	unsigned int rd
);
void a64_ADD_SUB_ext_reg (
	uint32_t **address,
	unsigned int sf,
	unsigned int op,
	unsigned int s,
	unsigned int rm,
	unsigned int option,
	unsigned int imm3,
	unsigned int rn,
	unsigned int rd
);
void a64_ADD_SUB_shift_reg (
	uint32_t **address,
	unsigned int sf,
	unsigned int op,
	unsigned int s,
	unsigned int shift,
	unsigned int rm,
	unsigned int imm6,
	unsigned int rn,
	unsigned int rd
);
void a64_ADC_SBC (
	uint32_t **address,
	unsigned int sf,
	unsigned int op,
	unsigned int s,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
);
void a64_CCMP_CCMN_immed (
	uint32_t **address,
	unsigned int sf,
	unsigned int op,
	unsigned int imm5,
	unsigned int cond,
	unsigned int rn,
	unsigned int nzcv
);
void a64_CCMP_CCMN_reg (
	uint32_t **address,
	unsigned int sf,
	unsigned int op,
	unsigned int rm,
	unsigned int cond,
	unsigned int rn,
	unsigned int nzcv
);
void a64_cond_select (
	uint32_t **address,
	unsigned int sf,
	unsigned int op,
	unsigned int rm,
	unsigned int cond,
	unsigned int op2,
	unsigned int rn,
	unsigned int rd
);
void a64_data_proc_reg1 (
	uint32_t **address,
	unsigned int sf,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
);
void a64_data_proc_reg2 (
	uint32_t **address,
	unsigned int sf,
	unsigned int rm,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
);
void a64_data_proc_reg3 (
	uint32_t **address,
	unsigned int sf,
	unsigned int op31,
	unsigned int rm,
	unsigned int o0,
	unsigned int Ra,
	unsigned int rn,
	unsigned int rd
);
void a64_logical_reg (
	uint32_t **address,
	unsigned int sf,
	unsigned int opc,
	unsigned int shift,
	unsigned int n,
	unsigned int rm,
	unsigned int imm6,
	unsigned int rn,
	unsigned int rd
);
void a64_simd_across_lane (
	uint32_t **address,
	unsigned int q,
	unsigned int u,
	unsigned int size,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
);
void a64_simd_copy (
	uint32_t **address,
	unsigned int q,
	unsigned int op,
	unsigned int imm5,
	unsigned int imm4,
	unsigned int rn,
	unsigned int rd
);
void a64_simd_extract (
	uint32_t **address,
	unsigned int q,
	unsigned int rm,
	unsigned int imm4,
	unsigned int rn,
	unsigned int rd
);
void a64_simd_modified_immed (
	uint32_t **address,
	unsigned int q,
	unsigned int op,
	unsigned int abc,
	unsigned int cmode,
	unsigned int defgh,
	unsigned int rd
);
void a64_simd_permute (
	uint32_t **address,
	unsigned int q,
	unsigned int size,
	unsigned int rm,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
);
void a64_simd_scalar_copy (
	uint32_t **address,
	unsigned int imm5,
	unsigned int rn,
	unsigned int rd
);
void a64_simd_scalar_pairwise (
	uint32_t **address,
	unsigned int u,
	unsigned int size,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
);
void a64_simd_scalar_shift_immed (
	uint32_t **address,
	unsigned int u,
	unsigned int immh,
	unsigned int immb,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
);
void a64_simd_scalar_three_diff (
	uint32_t **address,
	unsigned int u,
	unsigned int size,
	unsigned int rm,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
);
void a64_simd_scalar_three_same (
	uint32_t **address,
	unsigned int u,
	unsigned int size,
	unsigned int rm,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
);
void a64_simd_scalar_two_reg (
	uint32_t **address,
	unsigned int u,
	unsigned int size,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
);
void a64_simd_scalar_x_indexed (
	uint32_t **address,
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
void a64_simd_shift_immed (
	uint32_t **address,
	unsigned int q,
	unsigned int u,
	unsigned int immh,
	unsigned int immb,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
);
void a64_simd_table_lookup (
	uint32_t **address,
	unsigned int q,
	unsigned int rm,
	unsigned int len,
	unsigned int op,
	unsigned int rn,
	unsigned int rd
);
void a64_simd_three_diff (
	uint32_t **address,
	unsigned int q,
	unsigned int u,
	unsigned int size,
	unsigned int rm,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
);
void a64_simd_three_same (
	uint32_t **address,
	unsigned int q,
	unsigned int u,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
);
void a64_simd_two_reg (
	uint32_t **address,
	unsigned int q,
	unsigned int u,
	unsigned int size,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
);
void a64_simd_x_indexed (
	uint32_t **address,
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
void a64_crypto_aes (
	uint32_t **address,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
);
void a64_crypto_sha_reg3 (
	uint32_t **address,
	unsigned int rm,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
);
void a64_crypto_sha_reg2 (
	uint32_t **address,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
);
void a64_FCMP (
	uint32_t **address,
	unsigned int type,
	unsigned int rm,
	unsigned int rn,
	unsigned int opcode2
);
void a64_FCCMP (
	uint32_t **address,
	unsigned int type,
	unsigned int rm,
	unsigned int cond,
	unsigned int rn,
	unsigned int op,
	unsigned int nzcv
);
void a64_FCSEL (
	uint32_t **address,
	unsigned int type,
	unsigned int rm,
	unsigned int cond,
	unsigned int rn,
	unsigned int rd
);
void a64_float_reg1 (
	uint32_t **address,
	unsigned int type,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
);
void a64_float_reg2 (
	uint32_t **address,
	unsigned int type,
	unsigned int rm,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
);
void a64_float_reg3 (
	uint32_t **address,
	unsigned int type,
	unsigned int o1,
	unsigned int rm,
	unsigned int o0,
	unsigned int Ra,
	unsigned int rn,
	unsigned int rd
);
void a64_FMOV_immed (
	uint32_t **address,
	unsigned int type,
	unsigned int imm8,
	unsigned int rd
);
void a64_float_cvt_fixed (
	uint32_t **address,
	unsigned int sf,
	unsigned int type,
	unsigned int rmode,
	unsigned int opcode,
	unsigned int scale,
	unsigned int rn,
	unsigned int rd
);
void a64_float_cvt_int (
	uint32_t **address,
	unsigned int sf,
	unsigned int type,
	unsigned int rmode,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
);
#endif
