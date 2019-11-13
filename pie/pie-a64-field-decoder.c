#include "pie-a64-field-decoder.h"
void a64_CBZ_CBNZ_decode_fields (
	uint32_t *address,
	unsigned int *sf,
	unsigned int *op,
	unsigned int *imm19,
	unsigned int *rt)
{
	uint32_t instruction = *address;
	*sf = (instruction >> 31) & 0x1;
	*op = (instruction >> 24) & 0x1;
	*imm19 = (instruction >> 5) & 0x7ffff;
	*rt = (instruction >> 0) & 0x1f;
}
void a64_B_cond_decode_fields (
	uint32_t *address,
	unsigned int *imm19,
	unsigned int *cond)
{
	uint32_t instruction = *address;
	*imm19 = (instruction >> 5) & 0x7ffff;
	*cond = (instruction >> 0) & 0xf;
}
void a64_SVC_decode_fields (
	uint32_t *address,
	unsigned int *imm16)
{
	uint32_t instruction = *address;
	*imm16 = (instruction >> 5) & 0xffff;
}
void a64_HVC_decode_fields (
	uint32_t *address,
	unsigned int *imm16)
{
	uint32_t instruction = *address;
	*imm16 = (instruction >> 5) & 0xffff;
}
void a64_SMC_decode_fields (
	uint32_t *address,
	unsigned int *imm16)
{
	uint32_t instruction = *address;
	*imm16 = (instruction >> 5) & 0xffff;
}
void a64_BRK_decode_fields (
	uint32_t *address,
	unsigned int *imm16)
{
	uint32_t instruction = *address;
	*imm16 = (instruction >> 5) & 0xffff;
}
void a64_HLT_decode_fields (
	uint32_t *address,
	unsigned int *imm16)
{
	uint32_t instruction = *address;
	*imm16 = (instruction >> 5) & 0xffff;
}
void a64_DCPS1_decode_fields (
	uint32_t *address,
	unsigned int *imm16)
{
	uint32_t instruction = *address;
	*imm16 = (instruction >> 5) & 0xffff;
}
void a64_DCPS2_decode_fields (
	uint32_t *address,
	unsigned int *imm16)
{
	uint32_t instruction = *address;
	*imm16 = (instruction >> 5) & 0xffff;
}
void a64_DCPS3_decode_fields (
	uint32_t *address,
	unsigned int *imm16)
{
	uint32_t instruction = *address;
	*imm16 = (instruction >> 5) & 0xffff;
}
void a64_MSR_immed_decode_fields (
	uint32_t *address,
	unsigned int *op1,
	unsigned int *crm,
	unsigned int *op2)
{
	uint32_t instruction = *address;
	*op1 = (instruction >> 16) & 0x7;
	*crm = (instruction >> 8) & 0xf;
	*op2 = (instruction >> 5) & 0x7;
}
void a64_HINT_decode_fields (
	uint32_t *address,
	unsigned int *crm,
	unsigned int *op2)
{
	uint32_t instruction = *address;
	*crm = (instruction >> 8) & 0xf;
	*op2 = (instruction >> 5) & 0x7;
}
void a64_CLREX_decode_fields (
	uint32_t *address,
	unsigned int *crm)
{
	uint32_t instruction = *address;
	*crm = (instruction >> 8) & 0xf;
}
void a64_DSB_decode_fields (
	uint32_t *address,
	unsigned int *crm)
{
	uint32_t instruction = *address;
	*crm = (instruction >> 8) & 0xf;
}
void a64_DMB_decode_fields (
	uint32_t *address,
	unsigned int *crm)
{
	uint32_t instruction = *address;
	*crm = (instruction >> 8) & 0xf;
}
void a64_ISB_decode_fields (
	uint32_t *address,
	unsigned int *crm)
{
	uint32_t instruction = *address;
	*crm = (instruction >> 8) & 0xf;
}
void a64_SYS_decode_fields (
	uint32_t *address,
	unsigned int *op1,
	unsigned int *crn,
	unsigned int *crm,
	unsigned int *op2,
	unsigned int *rt)
{
	uint32_t instruction = *address;
	*op1 = (instruction >> 16) & 0x7;
	*crn = (instruction >> 12) & 0xf;
	*crm = (instruction >> 8) & 0xf;
	*op2 = (instruction >> 5) & 0x7;
	*rt = (instruction >> 0) & 0x1f;
}
void a64_MRS_MSR_reg_decode_fields (
	uint32_t *address,
	unsigned int *r,
	unsigned int *o0,
	unsigned int *op1,
	unsigned int *crn,
	unsigned int *crm,
	unsigned int *op2,
	unsigned int *rt)
{
	uint32_t instruction = *address;
	*r = (instruction >> 21) & 0x1;
	*o0 = (instruction >> 19) & 0x1;
	*op1 = (instruction >> 16) & 0x7;
	*crn = (instruction >> 12) & 0xf;
	*crm = (instruction >> 8) & 0xf;
	*op2 = (instruction >> 5) & 0x7;
	*rt = (instruction >> 0) & 0x1f;
}
void a64_SYSL_decode_fields (
	uint32_t *address,
	unsigned int *op1,
	unsigned int *crn,
	unsigned int *crm,
	unsigned int *op2,
	unsigned int *rt)
{
	uint32_t instruction = *address;
	*op1 = (instruction >> 16) & 0x7;
	*crn = (instruction >> 12) & 0xf;
	*crm = (instruction >> 8) & 0xf;
	*op2 = (instruction >> 5) & 0x7;
	*rt = (instruction >> 0) & 0x1f;
}
void a64_TBZ_TBNZ_decode_fields (
	uint32_t *address,
	unsigned int *b5,
	unsigned int *op,
	unsigned int *b40,
	unsigned int *imm14,
	unsigned int *rt)
{
	uint32_t instruction = *address;
	*b5 = (instruction >> 31) & 0x1;
	*op = (instruction >> 24) & 0x1;
	*b40 = (instruction >> 19) & 0x1f;
	*imm14 = (instruction >> 5) & 0x3fff;
	*rt = (instruction >> 0) & 0x1f;
}
void a64_B_BL_decode_fields (
	uint32_t *address,
	unsigned int *op,
	unsigned int *imm26)
{
	uint32_t instruction = *address;
	*op = (instruction >> 31) & 0x1;
	*imm26 = (instruction >> 0) & 0x3ffffff;
}
void a64_BR_decode_fields (
	uint32_t *address,
	unsigned int *rn)
{
	uint32_t instruction = *address;
	*rn = (instruction >> 5) & 0x1f;
}
void a64_BLR_decode_fields (
	uint32_t *address,
	unsigned int *rn)
{
	uint32_t instruction = *address;
	*rn = (instruction >> 5) & 0x1f;
}
void a64_RET_decode_fields (
	uint32_t *address,
	unsigned int *rn)
{
	uint32_t instruction = *address;
	*rn = (instruction >> 5) & 0x1f;
}
void a64_LDX_STX_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *o2,
	unsigned int *l,
	unsigned int *o1,
	unsigned int *rs,
	unsigned int *o0,
	unsigned int *rt2,
	unsigned int *rn,
	unsigned int *rt)
{
	uint32_t instruction = *address;
	*size = (instruction >> 30) & 0x3;
	*o2 = (instruction >> 23) & 0x1;
	*l = (instruction >> 22) & 0x1;
	*o1 = (instruction >> 21) & 0x1;
	*rs = (instruction >> 16) & 0x1f;
	*o0 = (instruction >> 15) & 0x1;
	*rt2 = (instruction >> 10) & 0x1f;
	*rn = (instruction >> 5) & 0x1f;
	*rt = (instruction >> 0) & 0x1f;
}
void a64_LDR_lit_decode_fields (
	uint32_t *address,
	unsigned int *opc,
	unsigned int *v,
	unsigned int *imm19,
	unsigned int *rt)
{
	uint32_t instruction = *address;
	*opc = (instruction >> 30) & 0x3;
	*v = (instruction >> 26) & 0x1;
	*imm19 = (instruction >> 5) & 0x7ffff;
	*rt = (instruction >> 0) & 0x1f;
}
void a64_LDP_STP_decode_fields (
	uint32_t *address,
	unsigned int *opc,
	unsigned int *v,
	unsigned int *type,
	unsigned int *l,
	unsigned int *imm7,
	unsigned int *rt2,
	unsigned int *rn,
	unsigned int *rt)
{
	uint32_t instruction = *address;
	*opc = (instruction >> 30) & 0x3;
	*v = (instruction >> 26) & 0x1;
	*type = (instruction >> 23) & 0x3;
	*l = (instruction >> 22) & 0x1;
	*imm7 = (instruction >> 15) & 0x7f;
	*rt2 = (instruction >> 10) & 0x1f;
	*rn = (instruction >> 5) & 0x1f;
	*rt = (instruction >> 0) & 0x1f;
}
void a64_LDR_STR_immed_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *v,
	unsigned int *opc,
	unsigned int *imm9,
	unsigned int *type,
	unsigned int *rn,
	unsigned int *rt)
{
	uint32_t instruction = *address;
	*size = (instruction >> 30) & 0x3;
	*v = (instruction >> 26) & 0x1;
	*opc = (instruction >> 22) & 0x3;
	*imm9 = (instruction >> 12) & 0x1ff;
	*type = (instruction >> 10) & 0x3;
	*rn = (instruction >> 5) & 0x1f;
	*rt = (instruction >> 0) & 0x1f;
}
void a64_LDR_STR_reg_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *v,
	unsigned int *opc,
	unsigned int *rm,
	unsigned int *option,
	unsigned int *s,
	unsigned int *rn,
	unsigned int *rt)
{
	uint32_t instruction = *address;
	*size = (instruction >> 30) & 0x3;
	*v = (instruction >> 26) & 0x1;
	*opc = (instruction >> 22) & 0x3;
	*rm = (instruction >> 16) & 0x1f;
	*option = (instruction >> 13) & 0x7;
	*s = (instruction >> 12) & 0x1;
	*rn = (instruction >> 5) & 0x1f;
	*rt = (instruction >> 0) & 0x1f;
}
void a64_LDR_STR_unsigned_immed_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *v,
	unsigned int *opc,
	unsigned int *imm12,
	unsigned int *rn,
	unsigned int *rt)
{
	uint32_t instruction = *address;
	*size = (instruction >> 30) & 0x3;
	*v = (instruction >> 26) & 0x1;
	*opc = (instruction >> 22) & 0x3;
	*imm12 = (instruction >> 10) & 0xfff;
	*rn = (instruction >> 5) & 0x1f;
	*rt = (instruction >> 0) & 0x1f;
}
void a64_LDx_STx_multiple_decode_fields (
	uint32_t *address,
	unsigned int *q,
	unsigned int *l,
	unsigned int *opcode,
	unsigned int *size,
	unsigned int *rn,
	unsigned int *rt)
{
	uint32_t instruction = *address;
	*q = (instruction >> 30) & 0x1;
	*l = (instruction >> 22) & 0x1;
	*opcode = (instruction >> 12) & 0xf;
	*size = (instruction >> 10) & 0x3;
	*rn = (instruction >> 5) & 0x1f;
	*rt = (instruction >> 0) & 0x1f;
}
void a64_LDx_STx_multiple_post_decode_fields (
	uint32_t *address,
	unsigned int *q,
	unsigned int *l,
	unsigned int *rm,
	unsigned int *opcode,
	unsigned int *size,
	unsigned int *rn,
	unsigned int *rt)
{
	uint32_t instruction = *address;
	*q = (instruction >> 30) & 0x1;
	*l = (instruction >> 22) & 0x1;
	*rm = (instruction >> 16) & 0x1f;
	*opcode = (instruction >> 12) & 0xf;
	*size = (instruction >> 10) & 0x3;
	*rn = (instruction >> 5) & 0x1f;
	*rt = (instruction >> 0) & 0x1f;
}
void a64_LDx_STx_single_decode_fields (
	uint32_t *address,
	unsigned int *q,
	unsigned int *l,
	unsigned int *r,
	unsigned int *opcode,
	unsigned int *s,
	unsigned int *size,
	unsigned int *rn,
	unsigned int *rt)
{
	uint32_t instruction = *address;
	*q = (instruction >> 30) & 0x1;
	*l = (instruction >> 22) & 0x1;
	*r = (instruction >> 21) & 0x1;
	*opcode = (instruction >> 13) & 0x7;
	*s = (instruction >> 12) & 0x1;
	*size = (instruction >> 10) & 0x3;
	*rn = (instruction >> 5) & 0x1f;
	*rt = (instruction >> 0) & 0x1f;
}
void a64_LDx_STx_single_post_decode_fields (
	uint32_t *address,
	unsigned int *q,
	unsigned int *l,
	unsigned int *r,
	unsigned int *rm,
	unsigned int *opcode,
	unsigned int *s,
	unsigned int *size,
	unsigned int *rn,
	unsigned int *rt)
{
	uint32_t instruction = *address;
	*q = (instruction >> 30) & 0x1;
	*l = (instruction >> 22) & 0x1;
	*r = (instruction >> 21) & 0x1;
	*rm = (instruction >> 16) & 0x1f;
	*opcode = (instruction >> 13) & 0x7;
	*s = (instruction >> 12) & 0x1;
	*size = (instruction >> 10) & 0x3;
	*rn = (instruction >> 5) & 0x1f;
	*rt = (instruction >> 0) & 0x1f;
}
void a64_ADD_SUB_immed_decode_fields (
	uint32_t *address,
	unsigned int *sf,
	unsigned int *op,
	unsigned int *s,
	unsigned int *shift,
	unsigned int *imm12,
	unsigned int *rn,
	unsigned int *rd)
{
	uint32_t instruction = *address;
	*sf = (instruction >> 31) & 0x1;
	*op = (instruction >> 30) & 0x1;
	*s = (instruction >> 29) & 0x1;
	*shift = (instruction >> 22) & 0x3;
	*imm12 = (instruction >> 10) & 0xfff;
	*rn = (instruction >> 5) & 0x1f;
	*rd = (instruction >> 0) & 0x1f;
}
void a64_BFM_decode_fields (
	uint32_t *address,
	unsigned int *sf,
	unsigned int *opc,
	unsigned int *n,
	unsigned int *immr,
	unsigned int *imms,
	unsigned int *rn,
	unsigned int *rd)
{
	uint32_t instruction = *address;
	*sf = (instruction >> 31) & 0x1;
	*opc = (instruction >> 29) & 0x3;
	*n = (instruction >> 22) & 0x1;
	*immr = (instruction >> 16) & 0x3f;
	*imms = (instruction >> 10) & 0x3f;
	*rn = (instruction >> 5) & 0x1f;
	*rd = (instruction >> 0) & 0x1f;
}
void a64_EXTR_decode_fields (
	uint32_t *address,
	unsigned int *sf,
	unsigned int *n,
	unsigned int *rm,
	unsigned int *imms,
	unsigned int *rn,
	unsigned int *rd)
{
	uint32_t instruction = *address;
	*sf = (instruction >> 31) & 0x1;
	*n = (instruction >> 22) & 0x1;
	*rm = (instruction >> 16) & 0x1f;
	*imms = (instruction >> 10) & 0x3f;
	*rn = (instruction >> 5) & 0x1f;
	*rd = (instruction >> 0) & 0x1f;
}
void a64_logical_immed_decode_fields (
	uint32_t *address,
	unsigned int *sf,
	unsigned int *opc,
	unsigned int *n,
	unsigned int *immr,
	unsigned int *imms,
	unsigned int *rn,
	unsigned int *rd)
{
	uint32_t instruction = *address;
	*sf = (instruction >> 31) & 0x1;
	*opc = (instruction >> 29) & 0x3;
	*n = (instruction >> 22) & 0x1;
	*immr = (instruction >> 16) & 0x3f;
	*imms = (instruction >> 10) & 0x3f;
	*rn = (instruction >> 5) & 0x1f;
	*rd = (instruction >> 0) & 0x1f;
}
void a64_MOV_wide_decode_fields (
	uint32_t *address,
	unsigned int *sf,
	unsigned int *opc,
	unsigned int *hw,
	unsigned int *imm16,
	unsigned int *rd)
{
	uint32_t instruction = *address;
	*sf = (instruction >> 31) & 0x1;
	*opc = (instruction >> 29) & 0x3;
	*hw = (instruction >> 21) & 0x3;
	*imm16 = (instruction >> 5) & 0xffff;
	*rd = (instruction >> 0) & 0x1f;
}
void a64_ADR_decode_fields (
	uint32_t *address,
	unsigned int *op,
	unsigned int *immlo,
	unsigned int *immhi,
	unsigned int *rd)
{
	uint32_t instruction = *address;
	*op = (instruction >> 31) & 0x1;
	*immlo = (instruction >> 29) & 0x3;
	*immhi = (instruction >> 5) & 0x7ffff;
	*rd = (instruction >> 0) & 0x1f;
}
void a64_ADD_SUB_ext_reg_decode_fields (
	uint32_t *address,
	unsigned int *sf,
	unsigned int *op,
	unsigned int *s,
	unsigned int *rm,
	unsigned int *option,
	unsigned int *imm3,
	unsigned int *rn,
	unsigned int *rd)
{
	uint32_t instruction = *address;
	*sf = (instruction >> 31) & 0x1;
	*op = (instruction >> 30) & 0x1;
	*s = (instruction >> 29) & 0x1;
	*rm = (instruction >> 16) & 0x1f;
	*option = (instruction >> 13) & 0x7;
	*imm3 = (instruction >> 10) & 0x7;
	*rn = (instruction >> 5) & 0x1f;
	*rd = (instruction >> 0) & 0x1f;
}
void a64_ADD_SUB_shift_reg_decode_fields (
	uint32_t *address,
	unsigned int *sf,
	unsigned int *op,
	unsigned int *s,
	unsigned int *shift,
	unsigned int *rm,
	unsigned int *imm6,
	unsigned int *rn,
	unsigned int *rd)
{
	uint32_t instruction = *address;
	*sf = (instruction >> 31) & 0x1;
	*op = (instruction >> 30) & 0x1;
	*s = (instruction >> 29) & 0x1;
	*shift = (instruction >> 22) & 0x3;
	*rm = (instruction >> 16) & 0x1f;
	*imm6 = (instruction >> 10) & 0x3f;
	*rn = (instruction >> 5) & 0x1f;
	*rd = (instruction >> 0) & 0x1f;
}
void a64_ADC_SBC_decode_fields (
	uint32_t *address,
	unsigned int *sf,
	unsigned int *op,
	unsigned int *s,
	unsigned int *rm,
	unsigned int *rn,
	unsigned int *rd)
{
	uint32_t instruction = *address;
	*sf = (instruction >> 31) & 0x1;
	*op = (instruction >> 30) & 0x1;
	*s = (instruction >> 29) & 0x1;
	*rm = (instruction >> 16) & 0x1f;
	*rn = (instruction >> 5) & 0x1f;
	*rd = (instruction >> 0) & 0x1f;
}
void a64_CCMP_CCMN_immed_decode_fields (
	uint32_t *address,
	unsigned int *sf,
	unsigned int *op,
	unsigned int *imm5,
	unsigned int *cond,
	unsigned int *rn,
	unsigned int *nzcv)
{
	uint32_t instruction = *address;
	*sf = (instruction >> 31) & 0x1;
	*op = (instruction >> 30) & 0x1;
	*imm5 = (instruction >> 16) & 0x1f;
	*cond = (instruction >> 12) & 0xf;
	*rn = (instruction >> 5) & 0x1f;
	*nzcv = (instruction >> 0) & 0xf;
}
void a64_CCMP_CCMN_reg_decode_fields (
	uint32_t *address,
	unsigned int *sf,
	unsigned int *op,
	unsigned int *rm,
	unsigned int *cond,
	unsigned int *rn,
	unsigned int *nzcv)
{
	uint32_t instruction = *address;
	*sf = (instruction >> 31) & 0x1;
	*op = (instruction >> 30) & 0x1;
	*rm = (instruction >> 16) & 0x1f;
	*cond = (instruction >> 12) & 0xf;
	*rn = (instruction >> 5) & 0x1f;
	*nzcv = (instruction >> 0) & 0xf;
}
void a64_cond_select_decode_fields (
	uint32_t *address,
	unsigned int *sf,
	unsigned int *op,
	unsigned int *rm,
	unsigned int *cond,
	unsigned int *op2,
	unsigned int *rn,
	unsigned int *rd)
{
	uint32_t instruction = *address;
	*sf = (instruction >> 31) & 0x1;
	*op = (instruction >> 30) & 0x1;
	*rm = (instruction >> 16) & 0x1f;
	*cond = (instruction >> 12) & 0xf;
	*op2 = (instruction >> 10) & 0x3;
	*rn = (instruction >> 5) & 0x1f;
	*rd = (instruction >> 0) & 0x1f;
}
void a64_data_proc_reg1_decode_fields (
	uint32_t *address,
	unsigned int *sf,
	unsigned int *opcode,
	unsigned int *rn,
	unsigned int *rd)
{
	uint32_t instruction = *address;
	*sf = (instruction >> 31) & 0x1;
	*opcode = (instruction >> 10) & 0x3f;
	*rn = (instruction >> 5) & 0x1f;
	*rd = (instruction >> 0) & 0x1f;
}
void a64_data_proc_reg2_decode_fields (
	uint32_t *address,
	unsigned int *sf,
	unsigned int *rm,
	unsigned int *opcode,
	unsigned int *rn,
	unsigned int *rd)
{
	uint32_t instruction = *address;
	*sf = (instruction >> 31) & 0x1;
	*rm = (instruction >> 16) & 0x1f;
	*opcode = (instruction >> 10) & 0x3f;
	*rn = (instruction >> 5) & 0x1f;
	*rd = (instruction >> 0) & 0x1f;
}
void a64_data_proc_reg3_decode_fields (
	uint32_t *address,
	unsigned int *sf,
	unsigned int *op31,
	unsigned int *rm,
	unsigned int *o0,
	unsigned int *Ra,
	unsigned int *rn,
	unsigned int *rd)
{
	uint32_t instruction = *address;
	*sf = (instruction >> 31) & 0x1;
	*op31 = (instruction >> 21) & 0x7;
	*rm = (instruction >> 16) & 0x1f;
	*o0 = (instruction >> 15) & 0x1;
	*Ra = (instruction >> 10) & 0x1f;
	*rn = (instruction >> 5) & 0x1f;
	*rd = (instruction >> 0) & 0x1f;
}
void a64_logical_reg_decode_fields (
	uint32_t *address,
	unsigned int *sf,
	unsigned int *opc,
	unsigned int *shift,
	unsigned int *n,
	unsigned int *rm,
	unsigned int *imm6,
	unsigned int *rn,
	unsigned int *rd)
{
	uint32_t instruction = *address;
	*sf = (instruction >> 31) & 0x1;
	*opc = (instruction >> 29) & 0x3;
	*shift = (instruction >> 22) & 0x3;
	*n = (instruction >> 21) & 0x1;
	*rm = (instruction >> 16) & 0x1f;
	*imm6 = (instruction >> 10) & 0x3f;
	*rn = (instruction >> 5) & 0x1f;
	*rd = (instruction >> 0) & 0x1f;
}
void a64_simd_across_lane_decode_fields (
	uint32_t *address,
	unsigned int *q,
	unsigned int *u,
	unsigned int *size,
	unsigned int *opcode,
	unsigned int *rn,
	unsigned int *rd)
{
	uint32_t instruction = *address;
	*q = (instruction >> 30) & 0x1;
	*u = (instruction >> 29) & 0x1;
	*size = (instruction >> 22) & 0x3;
	*opcode = (instruction >> 12) & 0x1f;
	*rn = (instruction >> 5) & 0x1f;
	*rd = (instruction >> 0) & 0x1f;
}
void a64_simd_copy_decode_fields (
	uint32_t *address,
	unsigned int *q,
	unsigned int *op,
	unsigned int *imm5,
	unsigned int *imm4,
	unsigned int *rn,
	unsigned int *rd)
{
	uint32_t instruction = *address;
	*q = (instruction >> 30) & 0x1;
	*op = (instruction >> 29) & 0x1;
	*imm5 = (instruction >> 16) & 0x1f;
	*imm4 = (instruction >> 11) & 0xf;
	*rn = (instruction >> 5) & 0x1f;
	*rd = (instruction >> 0) & 0x1f;
}
void a64_simd_extract_decode_fields (
	uint32_t *address,
	unsigned int *q,
	unsigned int *rm,
	unsigned int *imm4,
	unsigned int *rn,
	unsigned int *rd)
{
	uint32_t instruction = *address;
	*q = (instruction >> 30) & 0x1;
	*rm = (instruction >> 16) & 0x1f;
	*imm4 = (instruction >> 11) & 0xf;
	*rn = (instruction >> 5) & 0x1f;
	*rd = (instruction >> 0) & 0x1f;
}
void a64_simd_modified_immed_decode_fields (
	uint32_t *address,
	unsigned int *q,
	unsigned int *op,
	unsigned int *abc,
	unsigned int *cmode,
	unsigned int *defgh,
	unsigned int *rd)
{
	uint32_t instruction = *address;
	*q = (instruction >> 30) & 0x1;
	*op = (instruction >> 29) & 0x1;
	*abc = (instruction >> 16) & 0x7;
	*cmode = (instruction >> 12) & 0xf;
	*defgh = (instruction >> 5) & 0x1f;
	*rd = (instruction >> 0) & 0x1f;
}
void a64_simd_permute_decode_fields (
	uint32_t *address,
	unsigned int *q,
	unsigned int *size,
	unsigned int *rm,
	unsigned int *opcode,
	unsigned int *rn,
	unsigned int *rd)
{
	uint32_t instruction = *address;
	*q = (instruction >> 30) & 0x1;
	*size = (instruction >> 22) & 0x3;
	*rm = (instruction >> 16) & 0x1f;
	*opcode = (instruction >> 12) & 0x7;
	*rn = (instruction >> 5) & 0x1f;
	*rd = (instruction >> 0) & 0x1f;
}
void a64_simd_scalar_copy_decode_fields (
	uint32_t *address,
	unsigned int *imm5,
	unsigned int *rn,
	unsigned int *rd)
{
	uint32_t instruction = *address;
	*imm5 = (instruction >> 16) & 0x1f;
	*rn = (instruction >> 5) & 0x1f;
	*rd = (instruction >> 0) & 0x1f;
}
void a64_simd_scalar_pairwise_decode_fields (
	uint32_t *address,
	unsigned int *u,
	unsigned int *size,
	unsigned int *opcode,
	unsigned int *rn,
	unsigned int *rd)
{
	uint32_t instruction = *address;
	*u = (instruction >> 29) & 0x1;
	*size = (instruction >> 22) & 0x3;
	*opcode = (instruction >> 12) & 0x1f;
	*rn = (instruction >> 5) & 0x1f;
	*rd = (instruction >> 0) & 0x1f;
}
void a64_simd_scalar_shift_immed_decode_fields (
	uint32_t *address,
	unsigned int *u,
	unsigned int *immh,
	unsigned int *immb,
	unsigned int *opcode,
	unsigned int *rn,
	unsigned int *rd)
{
	uint32_t instruction = *address;
	*u = (instruction >> 29) & 0x1;
	*immh = (instruction >> 19) & 0xf;
	*immb = (instruction >> 16) & 0x7;
	*opcode = (instruction >> 11) & 0x1f;
	*rn = (instruction >> 5) & 0x1f;
	*rd = (instruction >> 0) & 0x1f;
}
void a64_simd_scalar_three_diff_decode_fields (
	uint32_t *address,
	unsigned int *u,
	unsigned int *size,
	unsigned int *rm,
	unsigned int *opcode,
	unsigned int *rn,
	unsigned int *rd)
{
	uint32_t instruction = *address;
	*u = (instruction >> 29) & 0x1;
	*size = (instruction >> 22) & 0x3;
	*rm = (instruction >> 16) & 0x1f;
	*opcode = (instruction >> 12) & 0xf;
	*rn = (instruction >> 5) & 0x1f;
	*rd = (instruction >> 0) & 0x1f;
}
void a64_simd_scalar_three_same_decode_fields (
	uint32_t *address,
	unsigned int *u,
	unsigned int *size,
	unsigned int *rm,
	unsigned int *opcode,
	unsigned int *rn,
	unsigned int *rd)
{
	uint32_t instruction = *address;
	*u = (instruction >> 29) & 0x1;
	*size = (instruction >> 22) & 0x3;
	*rm = (instruction >> 16) & 0x1f;
	*opcode = (instruction >> 11) & 0x1f;
	*rn = (instruction >> 5) & 0x1f;
	*rd = (instruction >> 0) & 0x1f;
}
void a64_simd_scalar_two_reg_decode_fields (
	uint32_t *address,
	unsigned int *u,
	unsigned int *size,
	unsigned int *opcode,
	unsigned int *rn,
	unsigned int *rd)
{
	uint32_t instruction = *address;
	*u = (instruction >> 29) & 0x1;
	*size = (instruction >> 22) & 0x3;
	*opcode = (instruction >> 12) & 0x1f;
	*rn = (instruction >> 5) & 0x1f;
	*rd = (instruction >> 0) & 0x1f;
}
void a64_simd_scalar_x_indexed_decode_fields (
	uint32_t *address,
	unsigned int *u,
	unsigned int *size,
	unsigned int *l,
	unsigned int *m,
	unsigned int *rm,
	unsigned int *opcode,
	unsigned int *H,
	unsigned int *rn,
	unsigned int *rd)
{
	uint32_t instruction = *address;
	*u = (instruction >> 29) & 0x1;
	*size = (instruction >> 22) & 0x3;
	*l = (instruction >> 21) & 0x1;
	*m = (instruction >> 20) & 0x1;
	*rm = (instruction >> 16) & 0xf;
	*opcode = (instruction >> 12) & 0xf;
	*H = (instruction >> 11) & 0x1;
	*rn = (instruction >> 5) & 0x1f;
	*rd = (instruction >> 0) & 0x1f;
}
void a64_simd_shift_immed_decode_fields (
	uint32_t *address,
	unsigned int *q,
	unsigned int *u,
	unsigned int *immh,
	unsigned int *immb,
	unsigned int *opcode,
	unsigned int *rn,
	unsigned int *rd)
{
	uint32_t instruction = *address;
	*q = (instruction >> 30) & 0x1;
	*u = (instruction >> 29) & 0x1;
	*immh = (instruction >> 19) & 0xf;
	*immb = (instruction >> 16) & 0x7;
	*opcode = (instruction >> 11) & 0x1f;
	*rn = (instruction >> 5) & 0x1f;
	*rd = (instruction >> 0) & 0x1f;
}
void a64_simd_table_lookup_decode_fields (
	uint32_t *address,
	unsigned int *q,
	unsigned int *rm,
	unsigned int *len,
	unsigned int *op,
	unsigned int *rn,
	unsigned int *rd)
{
	uint32_t instruction = *address;
	*q = (instruction >> 30) & 0x1;
	*rm = (instruction >> 16) & 0x1f;
	*len = (instruction >> 13) & 0x3;
	*op = (instruction >> 12) & 0x1;
	*rn = (instruction >> 5) & 0x1f;
	*rd = (instruction >> 0) & 0x1f;
}
void a64_simd_three_diff_decode_fields (
	uint32_t *address,
	unsigned int *q,
	unsigned int *u,
	unsigned int *size,
	unsigned int *rm,
	unsigned int *opcode,
	unsigned int *rn,
	unsigned int *rd)
{
	uint32_t instruction = *address;
	*q = (instruction >> 30) & 0x1;
	*u = (instruction >> 29) & 0x1;
	*size = (instruction >> 22) & 0x3;
	*rm = (instruction >> 16) & 0x1f;
	*opcode = (instruction >> 12) & 0xf;
	*rn = (instruction >> 5) & 0x1f;
	*rd = (instruction >> 0) & 0x1f;
}
void a64_simd_three_same_decode_fields (
	uint32_t *address,
	unsigned int *q,
	unsigned int *u,
	unsigned int *opcode,
	unsigned int *rn,
	unsigned int *rd)
{
	uint32_t instruction = *address;
	*q = (instruction >> 30) & 0x1;
	*u = (instruction >> 29) & 0x1;
	*opcode = (instruction >> 11) & 0x1fff;
	*rn = (instruction >> 5) & 0xffff;
	*rd = (instruction >> 0) & 0x1f;
}
void a64_simd_two_reg_decode_fields (
	uint32_t *address,
	unsigned int *q,
	unsigned int *u,
	unsigned int *size,
	unsigned int *opcode,
	unsigned int *rn,
	unsigned int *rd)
{
	uint32_t instruction = *address;
	*q = (instruction >> 30) & 0x1;
	*u = (instruction >> 29) & 0x1;
	*size = (instruction >> 22) & 0x3;
	*opcode = (instruction >> 12) & 0x1f;
	*rn = (instruction >> 5) & 0x1f;
	*rd = (instruction >> 0) & 0x1f;
}
void a64_simd_x_indexed_decode_fields (
	uint32_t *address,
	unsigned int *q,
	unsigned int *u,
	unsigned int *size,
	unsigned int *l,
	unsigned int *m,
	unsigned int *rm,
	unsigned int *opcode,
	unsigned int *H,
	unsigned int *rn,
	unsigned int *rd)
{
	uint32_t instruction = *address;
	*q = (instruction >> 30) & 0x1;
	*u = (instruction >> 29) & 0x1;
	*size = (instruction >> 22) & 0x3;
	*l = (instruction >> 21) & 0x1;
	*m = (instruction >> 20) & 0x1;
	*rm = (instruction >> 16) & 0xf;
	*opcode = (instruction >> 12) & 0xf;
	*H = (instruction >> 11) & 0x1;
	*rn = (instruction >> 5) & 0x1f;
	*rd = (instruction >> 0) & 0x1f;
}
void a64_crypto_aes_decode_fields (
	uint32_t *address,
	unsigned int *opcode,
	unsigned int *rn,
	unsigned int *rd)
{
	uint32_t instruction = *address;
	*opcode = (instruction >> 12) & 0x1f;
	*rn = (instruction >> 5) & 0x1f;
	*rd = (instruction >> 0) & 0x1f;
}
void a64_crypto_sha_reg3_decode_fields (
	uint32_t *address,
	unsigned int *rm,
	unsigned int *opcode,
	unsigned int *rn,
	unsigned int *rd)
{
	uint32_t instruction = *address;
	*rm = (instruction >> 16) & 0x1f;
	*opcode = (instruction >> 12) & 0x7;
	*rn = (instruction >> 5) & 0x1f;
	*rd = (instruction >> 0) & 0x1f;
}
void a64_crypto_sha_reg2_decode_fields (
	uint32_t *address,
	unsigned int *opcode,
	unsigned int *rn,
	unsigned int *rd)
{
	uint32_t instruction = *address;
	*opcode = (instruction >> 12) & 0x1f;
	*rn = (instruction >> 5) & 0x1f;
	*rd = (instruction >> 0) & 0x1f;
}
void a64_FCMP_decode_fields (
	uint32_t *address,
	unsigned int *type,
	unsigned int *rm,
	unsigned int *rn,
	unsigned int *opcode2)
{
	uint32_t instruction = *address;
	*type = (instruction >> 22) & 0x3;
	*rm = (instruction >> 16) & 0x1f;
	*rn = (instruction >> 5) & 0x1f;
	*opcode2 = (instruction >> 0) & 0x1f;
}
void a64_FCCMP_decode_fields (
	uint32_t *address,
	unsigned int *type,
	unsigned int *rm,
	unsigned int *cond,
	unsigned int *rn,
	unsigned int *op,
	unsigned int *nzcv)
{
	uint32_t instruction = *address;
	*type = (instruction >> 22) & 0x3;
	*rm = (instruction >> 16) & 0x1f;
	*cond = (instruction >> 12) & 0xf;
	*rn = (instruction >> 5) & 0x1f;
	*op = (instruction >> 4) & 0x1;
	*nzcv = (instruction >> 0) & 0xf;
}
void a64_FCSEL_decode_fields (
	uint32_t *address,
	unsigned int *type,
	unsigned int *rm,
	unsigned int *cond,
	unsigned int *rn,
	unsigned int *rd)
{
	uint32_t instruction = *address;
	*type = (instruction >> 22) & 0x3;
	*rm = (instruction >> 16) & 0x1f;
	*cond = (instruction >> 12) & 0xf;
	*rn = (instruction >> 5) & 0x1f;
	*rd = (instruction >> 0) & 0x1f;
}
void a64_float_reg1_decode_fields (
	uint32_t *address,
	unsigned int *type,
	unsigned int *opcode,
	unsigned int *rn,
	unsigned int *rd)
{
	uint32_t instruction = *address;
	*type = (instruction >> 22) & 0x3;
	*opcode = (instruction >> 15) & 0x3f;
	*rn = (instruction >> 5) & 0x1f;
	*rd = (instruction >> 0) & 0x1f;
}
void a64_float_reg2_decode_fields (
	uint32_t *address,
	unsigned int *type,
	unsigned int *rm,
	unsigned int *opcode,
	unsigned int *rn,
	unsigned int *rd)
{
	uint32_t instruction = *address;
	*type = (instruction >> 22) & 0x3;
	*rm = (instruction >> 16) & 0x1f;
	*opcode = (instruction >> 12) & 0xf;
	*rn = (instruction >> 5) & 0x1f;
	*rd = (instruction >> 0) & 0x1f;
}
void a64_float_reg3_decode_fields (
	uint32_t *address,
	unsigned int *type,
	unsigned int *o1,
	unsigned int *rm,
	unsigned int *o0,
	unsigned int *Ra,
	unsigned int *rn,
	unsigned int *rd)
{
	uint32_t instruction = *address;
	*type = (instruction >> 22) & 0x3;
	*o1 = (instruction >> 21) & 0x1;
	*rm = (instruction >> 16) & 0x1f;
	*o0 = (instruction >> 15) & 0x1;
	*Ra = (instruction >> 10) & 0x1f;
	*rn = (instruction >> 5) & 0x1f;
	*rd = (instruction >> 0) & 0x1f;
}
void a64_FMOV_immed_decode_fields (
	uint32_t *address,
	unsigned int *type,
	unsigned int *imm8,
	unsigned int *rd)
{
	uint32_t instruction = *address;
	*type = (instruction >> 22) & 0x3;
	*imm8 = (instruction >> 13) & 0xff;
	*rd = (instruction >> 0) & 0x1f;
}
void a64_float_cvt_fixed_decode_fields (
	uint32_t *address,
	unsigned int *sf,
	unsigned int *type,
	unsigned int *rmode,
	unsigned int *opcode,
	unsigned int *scale,
	unsigned int *rn,
	unsigned int *rd)
{
	uint32_t instruction = *address;
	*sf = (instruction >> 31) & 0x1;
	*type = (instruction >> 22) & 0x3;
	*rmode = (instruction >> 19) & 0x3;
	*opcode = (instruction >> 16) & 0x7;
	*scale = (instruction >> 10) & 0x3f;
	*rn = (instruction >> 5) & 0x1f;
	*rd = (instruction >> 0) & 0x1f;
}
void a64_float_cvt_int_decode_fields (
	uint32_t *address,
	unsigned int *sf,
	unsigned int *type,
	unsigned int *rmode,
	unsigned int *opcode,
	unsigned int *rn,
	unsigned int *rd)
{
	uint32_t instruction = *address;
	*sf = (instruction >> 31) & 0x1;
	*type = (instruction >> 22) & 0x3;
	*rmode = (instruction >> 19) & 0x3;
	*opcode = (instruction >> 16) & 0x7;
	*rn = (instruction >> 5) & 0x1f;
	*rd = (instruction >> 0) & 0x1f;
}
