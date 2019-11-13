#ifdef PLUGINS_NEW
#include "../dbm.h"
#include "../pie/pie-a64-encoder.h"
#include "plugin_support.h"
void emit_a64_CBZ_CBNZ (
	mambo_context *ctx,
	unsigned int sf,
	unsigned int op,
	unsigned int imm19,
	unsigned int rt
)
{
	a64_CBZ_CBNZ((uint32_t **)(&ctx->code.write_p), sf, op, imm19, rt);
	ctx->code.write_p += 4;
}
void emit_a64_B_cond (
	mambo_context *ctx,
	unsigned int imm19,
	unsigned int cond
)
{
	a64_B_cond((uint32_t **)(&ctx->code.write_p), imm19, cond);
	ctx->code.write_p += 4;
}
void emit_a64_SVC (
	mambo_context *ctx,
	unsigned int imm16
)
{
	a64_SVC((uint32_t **)(&ctx->code.write_p), imm16);
	ctx->code.write_p += 4;
}
void emit_a64_HVC (
	mambo_context *ctx,
	unsigned int imm16
)
{
	a64_HVC((uint32_t **)(&ctx->code.write_p), imm16);
	ctx->code.write_p += 4;
}
void emit_a64_SMC (
	mambo_context *ctx,
	unsigned int imm16
)
{
	a64_SMC((uint32_t **)(&ctx->code.write_p), imm16);
	ctx->code.write_p += 4;
}
void emit_a64_BRK (
	mambo_context *ctx,
	unsigned int imm16
)
{
	a64_BRK((uint32_t **)(&ctx->code.write_p), imm16);
	ctx->code.write_p += 4;
}
void emit_a64_HLT (
	mambo_context *ctx,
	unsigned int imm16
)
{
	a64_HLT((uint32_t **)(&ctx->code.write_p), imm16);
	ctx->code.write_p += 4;
}
void emit_a64_DCPS1 (
	mambo_context *ctx,
	unsigned int imm16
)
{
	a64_DCPS1((uint32_t **)(&ctx->code.write_p), imm16);
	ctx->code.write_p += 4;
}
void emit_a64_DCPS2 (
	mambo_context *ctx,
	unsigned int imm16
)
{
	a64_DCPS2((uint32_t **)(&ctx->code.write_p), imm16);
	ctx->code.write_p += 4;
}
void emit_a64_DCPS3 (
	mambo_context *ctx,
	unsigned int imm16
)
{
	a64_DCPS3((uint32_t **)(&ctx->code.write_p), imm16);
	ctx->code.write_p += 4;
}
void emit_a64_MSR_immed (
	mambo_context *ctx,
	unsigned int op1,
	unsigned int crm,
	unsigned int op2
)
{
	a64_MSR_immed((uint32_t **)(&ctx->code.write_p), op1, crm, op2);
	ctx->code.write_p += 4;
}
void emit_a64_HINT (
	mambo_context *ctx,
	unsigned int crm,
	unsigned int op2
)
{
	a64_HINT((uint32_t **)(&ctx->code.write_p), crm, op2);
	ctx->code.write_p += 4;
}
void emit_a64_CLREX (
	mambo_context *ctx,
	unsigned int crm
)
{
	a64_CLREX((uint32_t **)(&ctx->code.write_p), crm);
	ctx->code.write_p += 4;
}
void emit_a64_DSB (
	mambo_context *ctx,
	unsigned int crm
)
{
	a64_DSB((uint32_t **)(&ctx->code.write_p), crm);
	ctx->code.write_p += 4;
}
void emit_a64_DMB (
	mambo_context *ctx,
	unsigned int crm
)
{
	a64_DMB((uint32_t **)(&ctx->code.write_p), crm);
	ctx->code.write_p += 4;
}
void emit_a64_ISB (
	mambo_context *ctx,
	unsigned int crm
)
{
	a64_ISB((uint32_t **)(&ctx->code.write_p), crm);
	ctx->code.write_p += 4;
}
void emit_a64_SYS (
	mambo_context *ctx,
	unsigned int op1,
	unsigned int crn,
	unsigned int crm,
	unsigned int op2,
	unsigned int rt
)
{
	a64_SYS((uint32_t **)(&ctx->code.write_p), op1, crn, crm, op2, rt);
	ctx->code.write_p += 4;
}
void emit_a64_MRS_MSR_reg (
	mambo_context *ctx,
	unsigned int r,
	unsigned int o0,
	unsigned int op1,
	unsigned int crn,
	unsigned int crm,
	unsigned int op2,
	unsigned int rt
)
{
	a64_MRS_MSR_reg((uint32_t **)(&ctx->code.write_p), r, o0, op1, crn, crm, op2, rt);
	ctx->code.write_p += 4;
}
void emit_a64_SYSL (
	mambo_context *ctx,
	unsigned int op1,
	unsigned int crn,
	unsigned int crm,
	unsigned int op2,
	unsigned int rt
)
{
	a64_SYSL((uint32_t **)(&ctx->code.write_p), op1, crn, crm, op2, rt);
	ctx->code.write_p += 4;
}
void emit_a64_TBZ_TBNZ (
	mambo_context *ctx,
	unsigned int b5,
	unsigned int op,
	unsigned int b40,
	unsigned int imm14,
	unsigned int rt
)
{
	a64_TBZ_TBNZ((uint32_t **)(&ctx->code.write_p), b5, op, b40, imm14, rt);
	ctx->code.write_p += 4;
}
void emit_a64_B_BL (
	mambo_context *ctx,
	unsigned int op,
	unsigned int imm26
)
{
	a64_B_BL((uint32_t **)(&ctx->code.write_p), op, imm26);
	ctx->code.write_p += 4;
}
void emit_a64_BR (
	mambo_context *ctx,
	unsigned int rn
)
{
	a64_BR((uint32_t **)(&ctx->code.write_p), rn);
	ctx->code.write_p += 4;
}
void emit_a64_BLR (
	mambo_context *ctx,
	unsigned int rn
)
{
	a64_BLR((uint32_t **)(&ctx->code.write_p), rn);
	ctx->code.write_p += 4;
}
void emit_a64_RET (
	mambo_context *ctx,
	unsigned int rn
)
{
	a64_RET((uint32_t **)(&ctx->code.write_p), rn);
	ctx->code.write_p += 4;
}
void emit_a64_ERET (
	mambo_context *ctx
)
{
	a64_ERET((uint32_t **)(&ctx->code.write_p));
	ctx->code.write_p += 4;
}
void emit_a64_DRPS (
	mambo_context *ctx
)
{
	a64_DRPS((uint32_t **)(&ctx->code.write_p));
	ctx->code.write_p += 4;
}
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
)
{
	a64_LDX_STX((uint32_t **)(&ctx->code.write_p), size, o2, l, o1, rs, o0, rt2, rn, rt);
	ctx->code.write_p += 4;
}
void emit_a64_LDR_lit (
	mambo_context *ctx,
	unsigned int opc,
	unsigned int v,
	unsigned int imm19,
	unsigned int rt
)
{
	a64_LDR_lit((uint32_t **)(&ctx->code.write_p), opc, v, imm19, rt);
	ctx->code.write_p += 4;
}
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
)
{
	a64_LDP_STP((uint32_t **)(&ctx->code.write_p), opc, v, type, l, imm7, rt2, rn, rt);
	ctx->code.write_p += 4;
}
void emit_a64_LDR_STR_immed (
	mambo_context *ctx,
	unsigned int size,
	unsigned int v,
	unsigned int opc,
	unsigned int imm9,
	unsigned int type,
	unsigned int rn,
	unsigned int rt
)
{
	a64_LDR_STR_immed((uint32_t **)(&ctx->code.write_p), size, v, opc, imm9, type, rn, rt);
	ctx->code.write_p += 4;
}
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
)
{
	a64_LDR_STR_reg((uint32_t **)(&ctx->code.write_p), size, v, opc, rm, option, s, rn, rt);
	ctx->code.write_p += 4;
}
void emit_a64_LDR_STR_unsigned_immed (
	mambo_context *ctx,
	unsigned int size,
	unsigned int v,
	unsigned int opc,
	unsigned int imm12,
	unsigned int rn,
	unsigned int rt
)
{
	a64_LDR_STR_unsigned_immed((uint32_t **)(&ctx->code.write_p), size, v, opc, imm12, rn, rt);
	ctx->code.write_p += 4;
}
void emit_a64_LDx_STx_multiple (
	mambo_context *ctx,
	unsigned int q,
	unsigned int l,
	unsigned int opcode,
	unsigned int size,
	unsigned int rn,
	unsigned int rt
)
{
	a64_LDx_STx_multiple((uint32_t **)(&ctx->code.write_p), q, l, opcode, size, rn, rt);
	ctx->code.write_p += 4;
}
void emit_a64_LDx_STx_multiple_post (
	mambo_context *ctx,
	unsigned int q,
	unsigned int l,
	unsigned int rm,
	unsigned int opcode,
	unsigned int size,
	unsigned int rn,
	unsigned int rt
)
{
	a64_LDx_STx_multiple_post((uint32_t **)(&ctx->code.write_p), q, l, rm, opcode, size, rn, rt);
	ctx->code.write_p += 4;
}
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
)
{
	a64_LDx_STx_single((uint32_t **)(&ctx->code.write_p), q, l, r, opcode, s, size, rn, rt);
	ctx->code.write_p += 4;
}
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
)
{
	a64_LDx_STx_single_post((uint32_t **)(&ctx->code.write_p), q, l, r, rm, opcode, s, size, rn, rt);
	ctx->code.write_p += 4;
}
void emit_a64_ADD_SUB_immed (
	mambo_context *ctx,
	unsigned int sf,
	unsigned int op,
	unsigned int s,
	unsigned int shift,
	unsigned int imm12,
	unsigned int rn,
	unsigned int rd
)
{
	a64_ADD_SUB_immed((uint32_t **)(&ctx->code.write_p), sf, op, s, shift, imm12, rn, rd);
	ctx->code.write_p += 4;
}
void emit_a64_BFM (
	mambo_context *ctx,
	unsigned int sf,
	unsigned int opc,
	unsigned int n,
	unsigned int immr,
	unsigned int imms,
	unsigned int rn,
	unsigned int rd
)
{
	a64_BFM((uint32_t **)(&ctx->code.write_p), sf, opc, n, immr, imms, rn, rd);
	ctx->code.write_p += 4;
}
void emit_a64_EXTR (
	mambo_context *ctx,
	unsigned int sf,
	unsigned int n,
	unsigned int rm,
	unsigned int imms,
	unsigned int rn,
	unsigned int rd
)
{
	a64_EXTR((uint32_t **)(&ctx->code.write_p), sf, n, rm, imms, rn, rd);
	ctx->code.write_p += 4;
}
void emit_a64_logical_immed (
	mambo_context *ctx,
	unsigned int sf,
	unsigned int opc,
	unsigned int n,
	unsigned int immr,
	unsigned int imms,
	unsigned int rn,
	unsigned int rd
)
{
	a64_logical_immed((uint32_t **)(&ctx->code.write_p), sf, opc, n, immr, imms, rn, rd);
	ctx->code.write_p += 4;
}
void emit_a64_MOV_wide (
	mambo_context *ctx,
	unsigned int sf,
	unsigned int opc,
	unsigned int hw,
	unsigned int imm16,
	unsigned int rd
)
{
	a64_MOV_wide((uint32_t **)(&ctx->code.write_p), sf, opc, hw, imm16, rd);
	ctx->code.write_p += 4;
}
void emit_a64_ADR (
	mambo_context *ctx,
	unsigned int op,
	unsigned int immlo,
	unsigned int immhi,
	unsigned int rd
)
{
	a64_ADR((uint32_t **)(&ctx->code.write_p), op, immlo, immhi, rd);
	ctx->code.write_p += 4;
}
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
)
{
	a64_ADD_SUB_ext_reg((uint32_t **)(&ctx->code.write_p), sf, op, s, rm, option, imm3, rn, rd);
	ctx->code.write_p += 4;
}
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
)
{
	a64_ADD_SUB_shift_reg((uint32_t **)(&ctx->code.write_p), sf, op, s, shift, rm, imm6, rn, rd);
	ctx->code.write_p += 4;
}
void emit_a64_ADC_SBC (
	mambo_context *ctx,
	unsigned int sf,
	unsigned int op,
	unsigned int s,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
)
{
	a64_ADC_SBC((uint32_t **)(&ctx->code.write_p), sf, op, s, rm, rn, rd);
	ctx->code.write_p += 4;
}
void emit_a64_CCMP_CCMN_immed (
	mambo_context *ctx,
	unsigned int sf,
	unsigned int op,
	unsigned int imm5,
	unsigned int cond,
	unsigned int rn,
	unsigned int nzcv
)
{
	a64_CCMP_CCMN_immed((uint32_t **)(&ctx->code.write_p), sf, op, imm5, cond, rn, nzcv);
	ctx->code.write_p += 4;
}
void emit_a64_CCMP_CCMN_reg (
	mambo_context *ctx,
	unsigned int sf,
	unsigned int op,
	unsigned int rm,
	unsigned int cond,
	unsigned int rn,
	unsigned int nzcv
)
{
	a64_CCMP_CCMN_reg((uint32_t **)(&ctx->code.write_p), sf, op, rm, cond, rn, nzcv);
	ctx->code.write_p += 4;
}
void emit_a64_cond_select (
	mambo_context *ctx,
	unsigned int sf,
	unsigned int op,
	unsigned int rm,
	unsigned int cond,
	unsigned int op2,
	unsigned int rn,
	unsigned int rd
)
{
	a64_cond_select((uint32_t **)(&ctx->code.write_p), sf, op, rm, cond, op2, rn, rd);
	ctx->code.write_p += 4;
}
void emit_a64_data_proc_reg1 (
	mambo_context *ctx,
	unsigned int sf,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
)
{
	a64_data_proc_reg1((uint32_t **)(&ctx->code.write_p), sf, opcode, rn, rd);
	ctx->code.write_p += 4;
}
void emit_a64_data_proc_reg2 (
	mambo_context *ctx,
	unsigned int sf,
	unsigned int rm,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
)
{
	a64_data_proc_reg2((uint32_t **)(&ctx->code.write_p), sf, rm, opcode, rn, rd);
	ctx->code.write_p += 4;
}
void emit_a64_data_proc_reg3 (
	mambo_context *ctx,
	unsigned int sf,
	unsigned int op31,
	unsigned int rm,
	unsigned int o0,
	unsigned int Ra,
	unsigned int rn,
	unsigned int rd
)
{
	a64_data_proc_reg3((uint32_t **)(&ctx->code.write_p), sf, op31, rm, o0, Ra, rn, rd);
	ctx->code.write_p += 4;
}
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
)
{
	a64_logical_reg((uint32_t **)(&ctx->code.write_p), sf, opc, shift, n, rm, imm6, rn, rd);
	ctx->code.write_p += 4;
}
void emit_a64_simd_across_lane (
	mambo_context *ctx,
	unsigned int q,
	unsigned int u,
	unsigned int size,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
)
{
	a64_simd_across_lane((uint32_t **)(&ctx->code.write_p), q, u, size, opcode, rn, rd);
	ctx->code.write_p += 4;
}
void emit_a64_simd_copy (
	mambo_context *ctx,
	unsigned int q,
	unsigned int op,
	unsigned int imm5,
	unsigned int imm4,
	unsigned int rn,
	unsigned int rd
)
{
	a64_simd_copy((uint32_t **)(&ctx->code.write_p), q, op, imm5, imm4, rn, rd);
	ctx->code.write_p += 4;
}
void emit_a64_simd_extract (
	mambo_context *ctx,
	unsigned int q,
	unsigned int rm,
	unsigned int imm4,
	unsigned int rn,
	unsigned int rd
)
{
	a64_simd_extract((uint32_t **)(&ctx->code.write_p), q, rm, imm4, rn, rd);
	ctx->code.write_p += 4;
}
void emit_a64_simd_modified_immed (
	mambo_context *ctx,
	unsigned int q,
	unsigned int op,
	unsigned int abc,
	unsigned int cmode,
	unsigned int defgh,
	unsigned int rd
)
{
	a64_simd_modified_immed((uint32_t **)(&ctx->code.write_p), q, op, abc, cmode, defgh, rd);
	ctx->code.write_p += 4;
}
void emit_a64_simd_permute (
	mambo_context *ctx,
	unsigned int q,
	unsigned int size,
	unsigned int rm,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
)
{
	a64_simd_permute((uint32_t **)(&ctx->code.write_p), q, size, rm, opcode, rn, rd);
	ctx->code.write_p += 4;
}
void emit_a64_simd_scalar_copy (
	mambo_context *ctx,
	unsigned int imm5,
	unsigned int rn,
	unsigned int rd
)
{
	a64_simd_scalar_copy((uint32_t **)(&ctx->code.write_p), imm5, rn, rd);
	ctx->code.write_p += 4;
}
void emit_a64_simd_scalar_pairwise (
	mambo_context *ctx,
	unsigned int u,
	unsigned int size,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
)
{
	a64_simd_scalar_pairwise((uint32_t **)(&ctx->code.write_p), u, size, opcode, rn, rd);
	ctx->code.write_p += 4;
}
void emit_a64_simd_scalar_shift_immed (
	mambo_context *ctx,
	unsigned int u,
	unsigned int immh,
	unsigned int immb,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
)
{
	a64_simd_scalar_shift_immed((uint32_t **)(&ctx->code.write_p), u, immh, immb, opcode, rn, rd);
	ctx->code.write_p += 4;
}
void emit_a64_simd_scalar_three_diff (
	mambo_context *ctx,
	unsigned int u,
	unsigned int size,
	unsigned int rm,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
)
{
	a64_simd_scalar_three_diff((uint32_t **)(&ctx->code.write_p), u, size, rm, opcode, rn, rd);
	ctx->code.write_p += 4;
}
void emit_a64_simd_scalar_three_same (
	mambo_context *ctx,
	unsigned int u,
	unsigned int size,
	unsigned int rm,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
)
{
	a64_simd_scalar_three_same((uint32_t **)(&ctx->code.write_p), u, size, rm, opcode, rn, rd);
	ctx->code.write_p += 4;
}
void emit_a64_simd_scalar_two_reg (
	mambo_context *ctx,
	unsigned int u,
	unsigned int size,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
)
{
	a64_simd_scalar_two_reg((uint32_t **)(&ctx->code.write_p), u, size, opcode, rn, rd);
	ctx->code.write_p += 4;
}
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
)
{
	a64_simd_scalar_x_indexed((uint32_t **)(&ctx->code.write_p), u, size, l, m, rm, opcode, H, rn, rd);
	ctx->code.write_p += 4;
}
void emit_a64_simd_shift_immed (
	mambo_context *ctx,
	unsigned int q,
	unsigned int u,
	unsigned int immh,
	unsigned int immb,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
)
{
	a64_simd_shift_immed((uint32_t **)(&ctx->code.write_p), q, u, immh, immb, opcode, rn, rd);
	ctx->code.write_p += 4;
}
void emit_a64_simd_table_lookup (
	mambo_context *ctx,
	unsigned int q,
	unsigned int rm,
	unsigned int len,
	unsigned int op,
	unsigned int rn,
	unsigned int rd
)
{
	a64_simd_table_lookup((uint32_t **)(&ctx->code.write_p), q, rm, len, op, rn, rd);
	ctx->code.write_p += 4;
}
void emit_a64_simd_three_diff (
	mambo_context *ctx,
	unsigned int q,
	unsigned int u,
	unsigned int size,
	unsigned int rm,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
)
{
	a64_simd_three_diff((uint32_t **)(&ctx->code.write_p), q, u, size, rm, opcode, rn, rd);
	ctx->code.write_p += 4;
}
void emit_a64_simd_three_same (
	mambo_context *ctx,
	unsigned int q,
	unsigned int u,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
)
{
	a64_simd_three_same((uint32_t **)(&ctx->code.write_p), q, u, opcode, rn, rd);
	ctx->code.write_p += 4;
}
void emit_a64_simd_two_reg (
	mambo_context *ctx,
	unsigned int q,
	unsigned int u,
	unsigned int size,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
)
{
	a64_simd_two_reg((uint32_t **)(&ctx->code.write_p), q, u, size, opcode, rn, rd);
	ctx->code.write_p += 4;
}
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
)
{
	a64_simd_x_indexed((uint32_t **)(&ctx->code.write_p), q, u, size, l, m, rm, opcode, H, rn, rd);
	ctx->code.write_p += 4;
}
void emit_a64_crypto_aes (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
)
{
	a64_crypto_aes((uint32_t **)(&ctx->code.write_p), opcode, rn, rd);
	ctx->code.write_p += 4;
}
void emit_a64_crypto_sha_reg3 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
)
{
	a64_crypto_sha_reg3((uint32_t **)(&ctx->code.write_p), rm, opcode, rn, rd);
	ctx->code.write_p += 4;
}
void emit_a64_crypto_sha_reg2 (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
)
{
	a64_crypto_sha_reg2((uint32_t **)(&ctx->code.write_p), opcode, rn, rd);
	ctx->code.write_p += 4;
}
void emit_a64_FCMP (
	mambo_context *ctx,
	unsigned int type,
	unsigned int rm,
	unsigned int rn,
	unsigned int opcode2
)
{
	a64_FCMP((uint32_t **)(&ctx->code.write_p), type, rm, rn, opcode2);
	ctx->code.write_p += 4;
}
void emit_a64_FCCMP (
	mambo_context *ctx,
	unsigned int type,
	unsigned int rm,
	unsigned int cond,
	unsigned int rn,
	unsigned int op,
	unsigned int nzcv
)
{
	a64_FCCMP((uint32_t **)(&ctx->code.write_p), type, rm, cond, rn, op, nzcv);
	ctx->code.write_p += 4;
}
void emit_a64_FCSEL (
	mambo_context *ctx,
	unsigned int type,
	unsigned int rm,
	unsigned int cond,
	unsigned int rn,
	unsigned int rd
)
{
	a64_FCSEL((uint32_t **)(&ctx->code.write_p), type, rm, cond, rn, rd);
	ctx->code.write_p += 4;
}
void emit_a64_float_reg1 (
	mambo_context *ctx,
	unsigned int type,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
)
{
	a64_float_reg1((uint32_t **)(&ctx->code.write_p), type, opcode, rn, rd);
	ctx->code.write_p += 4;
}
void emit_a64_float_reg2 (
	mambo_context *ctx,
	unsigned int type,
	unsigned int rm,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
)
{
	a64_float_reg2((uint32_t **)(&ctx->code.write_p), type, rm, opcode, rn, rd);
	ctx->code.write_p += 4;
}
void emit_a64_float_reg3 (
	mambo_context *ctx,
	unsigned int type,
	unsigned int o1,
	unsigned int rm,
	unsigned int o0,
	unsigned int Ra,
	unsigned int rn,
	unsigned int rd
)
{
	a64_float_reg3((uint32_t **)(&ctx->code.write_p), type, o1, rm, o0, Ra, rn, rd);
	ctx->code.write_p += 4;
}
void emit_a64_FMOV_immed (
	mambo_context *ctx,
	unsigned int type,
	unsigned int imm8,
	unsigned int rd
)
{
	a64_FMOV_immed((uint32_t **)(&ctx->code.write_p), type, imm8, rd);
	ctx->code.write_p += 4;
}
void emit_a64_float_cvt_fixed (
	mambo_context *ctx,
	unsigned int sf,
	unsigned int type,
	unsigned int rmode,
	unsigned int opcode,
	unsigned int scale,
	unsigned int rn,
	unsigned int rd
)
{
	a64_float_cvt_fixed((uint32_t **)(&ctx->code.write_p), sf, type, rmode, opcode, scale, rn, rd);
	ctx->code.write_p += 4;
}
void emit_a64_float_cvt_int (
	mambo_context *ctx,
	unsigned int sf,
	unsigned int type,
	unsigned int rmode,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
)
{
	a64_float_cvt_int((uint32_t **)(&ctx->code.write_p), sf, type, rmode, opcode, rn, rd);
	ctx->code.write_p += 4;
}
#endif
