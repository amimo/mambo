#include "pie-thumb-field-decoder.h"
void thumb_adc16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rdn)
{
	uint16_t instruction = *address;
	*rm = (instruction >> 3) & 0x7;
	*rdn = (instruction >> 0) & 0x7;
}
void thumb_add16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rn,
	unsigned int *rd)
{
	uint16_t instruction = *address;
	*rm = (instruction >> 6) & 0x7;
	*rn = (instruction >> 3) & 0x7;
	*rd = (instruction >> 0) & 0x7;
}
void thumb_add_from_pc16_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *imm8)
{
	uint16_t instruction = *address;
	*rd = (instruction >> 8) & 0x7;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_add_from_sp16_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *imm8)
{
	uint16_t instruction = *address;
	*rd = (instruction >> 8) & 0x7;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_addh16_decode_fields (
	uint16_t *address,
	unsigned int *dn,
	unsigned int *rm,
	unsigned int *rdn)
{
	uint16_t instruction = *address;
	*dn = (instruction >> 7) & 0x1;
	*rm = (instruction >> 3) & 0xf;
	*rdn = (instruction >> 0) & 0x7;
}
void thumb_addi16_decode_fields (
	uint16_t *address,
	unsigned int *imm3,
	unsigned int *rn,
	unsigned int *rd)
{
	uint16_t instruction = *address;
	*imm3 = (instruction >> 6) & 0x7;
	*rn = (instruction >> 3) & 0x7;
	*rd = (instruction >> 0) & 0x7;
}
void thumb_addri16_decode_fields (
	uint16_t *address,
	unsigned int *rdn,
	unsigned int *imm8)
{
	uint16_t instruction = *address;
	*rdn = (instruction >> 8) & 0x7;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_add_sp_i16_decode_fields (
	uint16_t *address,
	unsigned int *imm7)
{
	uint16_t instruction = *address;
	*imm7 = (instruction >> 0) & 0x7f;
}
void thumb_and16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rdn)
{
	uint16_t instruction = *address;
	*rm = (instruction >> 3) & 0x7;
	*rdn = (instruction >> 0) & 0x7;
}
void thumb_asr16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rdn)
{
	uint16_t instruction = *address;
	*rm = (instruction >> 3) & 0x7;
	*rdn = (instruction >> 0) & 0x7;
}
void thumb_asri16_decode_fields (
	uint16_t *address,
	unsigned int *imm5,
	unsigned int *rm,
	unsigned int *rd)
{
	uint16_t instruction = *address;
	*imm5 = (instruction >> 6) & 0x1f;
	*rm = (instruction >> 3) & 0x7;
	*rd = (instruction >> 0) & 0x7;
}
void thumb_b16_decode_fields (
	uint16_t *address,
	unsigned int *imm11)
{
	uint16_t instruction = *address;
	*imm11 = (instruction >> 0) & 0x7ff;
}
void thumb_bic16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rdn)
{
	uint16_t instruction = *address;
	*rm = (instruction >> 3) & 0x7;
	*rdn = (instruction >> 0) & 0x7;
}
void thumb_bkpt16_decode_fields (
	uint16_t *address,
	unsigned int *imm8)
{
	uint16_t instruction = *address;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_b_cond16_decode_fields (
	uint16_t *address,
	unsigned int *condition,
	unsigned int *imm8)
{
	uint16_t instruction = *address;
	*condition = (instruction >> 8) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_blx16_decode_fields (
	uint16_t *address,
	unsigned int *rm)
{
	uint16_t instruction = *address;
	*rm = (instruction >> 3) & 0xf;
}
void thumb_bx16_decode_fields (
	uint16_t *address,
	unsigned int *rm)
{
	uint16_t instruction = *address;
	*rm = (instruction >> 3) & 0xf;
}
void thumb_cbnz16_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *imm5,
	unsigned int *rn)
{
	uint16_t instruction = *address;
	*imm1 = (instruction >> 9) & 0x1;
	*imm5 = (instruction >> 3) & 0x1f;
	*rn = (instruction >> 0) & 0x7;
}
void thumb_cbz16_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *imm5,
	unsigned int *rn)
{
	uint16_t instruction = *address;
	*imm1 = (instruction >> 9) & 0x1;
	*imm5 = (instruction >> 3) & 0x1f;
	*rn = (instruction >> 0) & 0x7;
}
void thumb_cmn16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rdn)
{
	uint16_t instruction = *address;
	*rm = (instruction >> 3) & 0x7;
	*rdn = (instruction >> 0) & 0x7;
}
void thumb_cmp16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rdn)
{
	uint16_t instruction = *address;
	*rm = (instruction >> 3) & 0x7;
	*rdn = (instruction >> 0) & 0x7;
}
void thumb_cmph16_decode_fields (
	uint16_t *address,
	unsigned int *dn,
	unsigned int *rm,
	unsigned int *rdn)
{
	uint16_t instruction = *address;
	*dn = (instruction >> 7) & 0x1;
	*rm = (instruction >> 3) & 0xf;
	*rdn = (instruction >> 0) & 0x7;
}
void thumb_cmpri16_decode_fields (
	uint16_t *address,
	unsigned int *rdn,
	unsigned int *imm8)
{
	uint16_t instruction = *address;
	*rdn = (instruction >> 8) & 0x7;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_eor16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rdn)
{
	uint16_t instruction = *address;
	*rm = (instruction >> 3) & 0x7;
	*rdn = (instruction >> 0) & 0x7;
}
void thumb_it16_decode_fields (
	uint16_t *address,
	unsigned int *cond,
	unsigned int *mask)
{
	uint16_t instruction = *address;
	*cond = (instruction >> 4) & 0xf;
	*mask = (instruction >> 0) & 0xf;
}
void thumb_ldmfd16_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *reglist)
{
	uint16_t instruction = *address;
	*rn = (instruction >> 8) & 0x7;
	*reglist = (instruction >> 0) & 0xff;
}
void thumb_ldr16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rn,
	unsigned int *rd)
{
	uint16_t instruction = *address;
	*rm = (instruction >> 6) & 0x7;
	*rn = (instruction >> 3) & 0x7;
	*rd = (instruction >> 0) & 0x7;
}
void thumb_ldrb16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rn,
	unsigned int *rd)
{
	uint16_t instruction = *address;
	*rm = (instruction >> 6) & 0x7;
	*rn = (instruction >> 3) & 0x7;
	*rd = (instruction >> 0) & 0x7;
}
void thumb_ldrbi16_decode_fields (
	uint16_t *address,
	unsigned int *imm5,
	unsigned int *rn,
	unsigned int *rd)
{
	uint16_t instruction = *address;
	*imm5 = (instruction >> 6) & 0x1f;
	*rn = (instruction >> 3) & 0x7;
	*rd = (instruction >> 0) & 0x7;
}
void thumb_ldrh16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rn,
	unsigned int *rd)
{
	uint16_t instruction = *address;
	*rm = (instruction >> 6) & 0x7;
	*rn = (instruction >> 3) & 0x7;
	*rd = (instruction >> 0) & 0x7;
}
void thumb_ldrhi16_decode_fields (
	uint16_t *address,
	unsigned int *imm5,
	unsigned int *rn,
	unsigned int *rd)
{
	uint16_t instruction = *address;
	*imm5 = (instruction >> 6) & 0x1f;
	*rn = (instruction >> 3) & 0x7;
	*rd = (instruction >> 0) & 0x7;
}
void thumb_ldri16_decode_fields (
	uint16_t *address,
	unsigned int *imm5,
	unsigned int *rn,
	unsigned int *rd)
{
	uint16_t instruction = *address;
	*imm5 = (instruction >> 6) & 0x1f;
	*rn = (instruction >> 3) & 0x7;
	*rd = (instruction >> 0) & 0x7;
}
void thumb_ldr_pc_16_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *imm8)
{
	uint16_t instruction = *address;
	*rd = (instruction >> 8) & 0x7;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_ldrsb16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rn,
	unsigned int *rd)
{
	uint16_t instruction = *address;
	*rm = (instruction >> 6) & 0x7;
	*rn = (instruction >> 3) & 0x7;
	*rd = (instruction >> 0) & 0x7;
}
void thumb_ldrsh16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rn,
	unsigned int *rd)
{
	uint16_t instruction = *address;
	*rm = (instruction >> 6) & 0x7;
	*rn = (instruction >> 3) & 0x7;
	*rd = (instruction >> 0) & 0x7;
}
void thumb_ldr_sp16_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *imm8)
{
	uint16_t instruction = *address;
	*rd = (instruction >> 8) & 0x7;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_lsl16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rdn)
{
	uint16_t instruction = *address;
	*rm = (instruction >> 3) & 0x7;
	*rdn = (instruction >> 0) & 0x7;
}
void thumb_lsli16_decode_fields (
	uint16_t *address,
	unsigned int *imm5,
	unsigned int *rm,
	unsigned int *rd)
{
	uint16_t instruction = *address;
	*imm5 = (instruction >> 6) & 0x1f;
	*rm = (instruction >> 3) & 0x7;
	*rd = (instruction >> 0) & 0x7;
}
void thumb_lsr16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rdn)
{
	uint16_t instruction = *address;
	*rm = (instruction >> 3) & 0x7;
	*rdn = (instruction >> 0) & 0x7;
}
void thumb_lsri16_decode_fields (
	uint16_t *address,
	unsigned int *imm5,
	unsigned int *rm,
	unsigned int *rd)
{
	uint16_t instruction = *address;
	*imm5 = (instruction >> 6) & 0x1f;
	*rm = (instruction >> 3) & 0x7;
	*rd = (instruction >> 0) & 0x7;
}
void thumb_movh16_decode_fields (
	uint16_t *address,
	unsigned int *dn,
	unsigned int *rm,
	unsigned int *rdn)
{
	uint16_t instruction = *address;
	*dn = (instruction >> 7) & 0x1;
	*rm = (instruction >> 3) & 0xf;
	*rdn = (instruction >> 0) & 0x7;
}
void thumb_movi16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rd)
{
	uint16_t instruction = *address;
	*rm = (instruction >> 3) & 0x7;
	*rd = (instruction >> 0) & 0x7;
}
void thumb_movri16_decode_fields (
	uint16_t *address,
	unsigned int *rdn,
	unsigned int *imm8)
{
	uint16_t instruction = *address;
	*rdn = (instruction >> 8) & 0x7;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_mul16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rdn)
{
	uint16_t instruction = *address;
	*rm = (instruction >> 3) & 0x7;
	*rdn = (instruction >> 0) & 0x7;
}
void thumb_mvn16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rdn)
{
	uint16_t instruction = *address;
	*rm = (instruction >> 3) & 0x7;
	*rdn = (instruction >> 0) & 0x7;
}
void thumb_orr16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rdn)
{
	uint16_t instruction = *address;
	*rm = (instruction >> 3) & 0x7;
	*rdn = (instruction >> 0) & 0x7;
}
void thumb_pop16_decode_fields (
	uint16_t *address,
	unsigned int *reg)
{
	uint16_t instruction = *address;
	*reg = (instruction >> 0) & 0x1ff;
}
void thumb_push16_decode_fields (
	uint16_t *address,
	unsigned int *reg)
{
	uint16_t instruction = *address;
	*reg = (instruction >> 0) & 0x1ff;
}
void thumb_rev16_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd)
{
	uint16_t instruction = *address;
	*rn = (instruction >> 3) & 0x7;
	*rd = (instruction >> 0) & 0x7;
}
void thumb_rev1616_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd)
{
	uint16_t instruction = *address;
	*rn = (instruction >> 3) & 0x7;
	*rd = (instruction >> 0) & 0x7;
}
void thumb_revsh16_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd)
{
	uint16_t instruction = *address;
	*rn = (instruction >> 3) & 0x7;
	*rd = (instruction >> 0) & 0x7;
}
void thumb_ror16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rdn)
{
	uint16_t instruction = *address;
	*rm = (instruction >> 3) & 0x7;
	*rdn = (instruction >> 0) & 0x7;
}
void thumb_rsbi16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rdn)
{
	uint16_t instruction = *address;
	*rm = (instruction >> 3) & 0x7;
	*rdn = (instruction >> 0) & 0x7;
}
void thumb_sbc16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rdn)
{
	uint16_t instruction = *address;
	*rm = (instruction >> 3) & 0x7;
	*rdn = (instruction >> 0) & 0x7;
}
void thumb_setend16_decode_fields (
	uint16_t *address,
	unsigned int *is_bigend)
{
	uint16_t instruction = *address;
	*is_bigend = (instruction >> 3) & 0x1;
}
void thumb_stmea16_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *reglist)
{
	uint16_t instruction = *address;
	*rn = (instruction >> 8) & 0x7;
	*reglist = (instruction >> 0) & 0xff;
}
void thumb_str16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rn,
	unsigned int *rd)
{
	uint16_t instruction = *address;
	*rm = (instruction >> 6) & 0x7;
	*rn = (instruction >> 3) & 0x7;
	*rd = (instruction >> 0) & 0x7;
}
void thumb_strb16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rn,
	unsigned int *rd)
{
	uint16_t instruction = *address;
	*rm = (instruction >> 6) & 0x7;
	*rn = (instruction >> 3) & 0x7;
	*rd = (instruction >> 0) & 0x7;
}
void thumb_strbi16_decode_fields (
	uint16_t *address,
	unsigned int *imm5,
	unsigned int *rn,
	unsigned int *rd)
{
	uint16_t instruction = *address;
	*imm5 = (instruction >> 6) & 0x1f;
	*rn = (instruction >> 3) & 0x7;
	*rd = (instruction >> 0) & 0x7;
}
void thumb_strh16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rn,
	unsigned int *rd)
{
	uint16_t instruction = *address;
	*rm = (instruction >> 6) & 0x7;
	*rn = (instruction >> 3) & 0x7;
	*rd = (instruction >> 0) & 0x7;
}
void thumb_strhi16_decode_fields (
	uint16_t *address,
	unsigned int *imm5,
	unsigned int *rn,
	unsigned int *rd)
{
	uint16_t instruction = *address;
	*imm5 = (instruction >> 6) & 0x1f;
	*rn = (instruction >> 3) & 0x7;
	*rd = (instruction >> 0) & 0x7;
}
void thumb_stri16_decode_fields (
	uint16_t *address,
	unsigned int *imm5,
	unsigned int *rn,
	unsigned int *rd)
{
	uint16_t instruction = *address;
	*imm5 = (instruction >> 6) & 0x1f;
	*rn = (instruction >> 3) & 0x7;
	*rd = (instruction >> 0) & 0x7;
}
void thumb_str_sp16_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *imm8)
{
	uint16_t instruction = *address;
	*rd = (instruction >> 8) & 0x7;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_sub16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rn,
	unsigned int *rd)
{
	uint16_t instruction = *address;
	*rm = (instruction >> 6) & 0x7;
	*rn = (instruction >> 3) & 0x7;
	*rd = (instruction >> 0) & 0x7;
}
void thumb_subi16_decode_fields (
	uint16_t *address,
	unsigned int *imm3,
	unsigned int *rn,
	unsigned int *rd)
{
	uint16_t instruction = *address;
	*imm3 = (instruction >> 6) & 0x7;
	*rn = (instruction >> 3) & 0x7;
	*rd = (instruction >> 0) & 0x7;
}
void thumb_subri16_decode_fields (
	uint16_t *address,
	unsigned int *rdn,
	unsigned int *imm8)
{
	uint16_t instruction = *address;
	*rdn = (instruction >> 8) & 0x7;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_sub_sp_i16_decode_fields (
	uint16_t *address,
	unsigned int *imm7)
{
	uint16_t instruction = *address;
	*imm7 = (instruction >> 0) & 0x7f;
}
void thumb_svc16_decode_fields (
	uint16_t *address,
	unsigned int *imm8)
{
	uint16_t instruction = *address;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_sxtb16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rd)
{
	uint16_t instruction = *address;
	*rm = (instruction >> 3) & 0x7;
	*rd = (instruction >> 0) & 0x7;
}
void thumb_sxth16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rd)
{
	uint16_t instruction = *address;
	*rm = (instruction >> 3) & 0x7;
	*rd = (instruction >> 0) & 0x7;
}
void thumb_tst16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rdn)
{
	uint16_t instruction = *address;
	*rm = (instruction >> 3) & 0x7;
	*rdn = (instruction >> 0) & 0x7;
}
void thumb_udf16_decode_fields (
	uint16_t *address,
	unsigned int *imm8)
{
	uint16_t instruction = *address;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_uxtb16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rd)
{
	uint16_t instruction = *address;
	*rm = (instruction >> 3) & 0x7;
	*rd = (instruction >> 0) & 0x7;
}
void thumb_uxth16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rd)
{
	uint16_t instruction = *address;
	*rm = (instruction >> 3) & 0x7;
	*rd = (instruction >> 0) & 0x7;
}
void thumb_adc32_decode_fields (
	uint16_t *address,
	unsigned int *set_flags,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *shift_type,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*set_flags = (instruction >> 20) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm2 = (instruction >> 6) & 0x3;
	*shift_type = (instruction >> 4) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_adci32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *set_condition,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*imm1 = (instruction >> 26) & 0x1;
	*set_condition = (instruction >> 20) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_add32_decode_fields (
	uint16_t *address,
	unsigned int *set_flags,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *shift_type,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*set_flags = (instruction >> 20) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm2 = (instruction >> 6) & 0x3;
	*shift_type = (instruction >> 4) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_addi32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *set_condition,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*imm1 = (instruction >> 26) & 0x1;
	*set_condition = (instruction >> 20) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_addwi32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*imm1 = (instruction >> 26) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_adrwi_post32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*imm1 = (instruction >> 26) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_adrwi_pre32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*imm1 = (instruction >> 26) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_and32_decode_fields (
	uint16_t *address,
	unsigned int *set_flags,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *shift_type,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*set_flags = (instruction >> 20) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm2 = (instruction >> 6) & 0x3;
	*shift_type = (instruction >> 4) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_andi32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *set_condition,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*imm1 = (instruction >> 26) & 0x1;
	*set_condition = (instruction >> 20) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_asr32_decode_fields (
	uint16_t *address,
	unsigned int *set_flags,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*set_flags = (instruction >> 20) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*rd = (instruction >> 8) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_asri32_decode_fields (
	uint16_t *address,
	unsigned int *set_flags,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*set_flags = (instruction >> 20) & 0x1;
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm2 = (instruction >> 6) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_b32_decode_fields (
	uint16_t *address,
	unsigned int *sign_bit,
	unsigned int *offset_high,
	unsigned int *j1,
	unsigned int *j2,
	unsigned int *offset_low)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*sign_bit = (instruction >> 26) & 0x1;
	*offset_high = (instruction >> 16) & 0x3ff;
	*j1 = (instruction >> 13) & 0x1;
	*j2 = (instruction >> 11) & 0x1;
	*offset_low = (instruction >> 0) & 0x7ff;
}
void thumb_b_cond32_decode_fields (
	uint16_t *address,
	unsigned int *sign_bit,
	unsigned int *condition,
	unsigned int *offset_high,
	unsigned int *j1,
	unsigned int *j2,
	unsigned int *offset_low)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*sign_bit = (instruction >> 26) & 0x1;
	*condition = (instruction >> 22) & 0xf;
	*offset_high = (instruction >> 16) & 0x3f;
	*j1 = (instruction >> 13) & 0x1;
	*j2 = (instruction >> 11) & 0x1;
	*offset_low = (instruction >> 0) & 0x7ff;
}
void thumb_bfc32_decode_fields (
	uint16_t *address,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *imm5)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm2 = (instruction >> 6) & 0x3;
	*imm5 = (instruction >> 0) & 0x1f;
}
void thumb_bfi32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *imm5)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0x1f;
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm2 = (instruction >> 6) & 0x3;
	*imm5 = (instruction >> 0) & 0x1f;
}
void thumb_bic32_decode_fields (
	uint16_t *address,
	unsigned int *set_flags,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *shift_type,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*set_flags = (instruction >> 20) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm2 = (instruction >> 6) & 0x3;
	*shift_type = (instruction >> 4) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_bici32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *set_condition,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*imm1 = (instruction >> 26) & 0x1;
	*set_condition = (instruction >> 20) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_bl32_decode_fields (
	uint16_t *address,
	unsigned int *sign_bit,
	unsigned int *offset_high,
	unsigned int *j1,
	unsigned int *j2,
	unsigned int *offset_low)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*sign_bit = (instruction >> 26) & 0x1;
	*offset_high = (instruction >> 16) & 0x3ff;
	*j1 = (instruction >> 13) & 0x1;
	*j2 = (instruction >> 11) & 0x1;
	*offset_low = (instruction >> 0) & 0x7ff;
}
void thumb_bl_arm32_decode_fields (
	uint16_t *address,
	unsigned int *sign_bit,
	unsigned int *offset_high,
	unsigned int *j1,
	unsigned int *j2,
	unsigned int *offset_low)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*sign_bit = (instruction >> 26) & 0x1;
	*offset_high = (instruction >> 16) & 0x3ff;
	*j1 = (instruction >> 13) & 0x1;
	*j2 = (instruction >> 11) & 0x1;
	*offset_low = (instruction >> 0) & 0x7ff;
}
void thumb_cdp32_decode_fields (
	uint16_t *address,
	unsigned int *coproc,
	unsigned int *opc1,
	unsigned int *crd,
	unsigned int *crn,
	unsigned int *crm,
	unsigned int *opc2)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*coproc = (instruction >> 8) & 0xf;
	*opc1 = (instruction >> 20) & 0xf;
	*crd = (instruction >> 12) & 0xf;
	*crn = (instruction >> 16) & 0xf;
	*crm = (instruction >> 0) & 0xf;
	*opc2 = (instruction >> 5) & 0x7;
}
void thumb_cdp232_decode_fields (
	uint16_t *address,
	unsigned int *coproc,
	unsigned int *opc1,
	unsigned int *crd,
	unsigned int *crn,
	unsigned int *crm,
	unsigned int *opc2)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*coproc = (instruction >> 8) & 0xf;
	*opc1 = (instruction >> 20) & 0xf;
	*crd = (instruction >> 12) & 0xf;
	*crn = (instruction >> 16) & 0xf;
	*crm = (instruction >> 0) & 0xf;
	*opc2 = (instruction >> 5) & 0x7;
}
void thumb_clrex32_decode_fields (
	uint16_t *address,
	unsigned int *option)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*option = (instruction >> 0) & 0xf;
}
void thumb_clz32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rd = (instruction >> 8) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_cmn32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *imm2,
	unsigned int *shift_type,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*imm3 = (instruction >> 12) & 0x7;
	*imm2 = (instruction >> 6) & 0x3;
	*shift_type = (instruction >> 4) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_cmni32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*imm1 = (instruction >> 26) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*imm3 = (instruction >> 12) & 0x7;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_cmp32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *imm2,
	unsigned int *shift_type,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*imm3 = (instruction >> 12) & 0x7;
	*imm2 = (instruction >> 6) & 0x3;
	*shift_type = (instruction >> 4) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_cmpi32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*imm1 = (instruction >> 26) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*imm3 = (instruction >> 12) & 0x7;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_dbg32_decode_fields (
	uint16_t *address,
	unsigned int *option)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*option = (instruction >> 0) & 0xf;
}
void thumb_dmb32_decode_fields (
	uint16_t *address,
	unsigned int *option)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*option = (instruction >> 0) & 0xf;
}
void thumb_dsb32_decode_fields (
	uint16_t *address,
	unsigned int *option)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*option = (instruction >> 0) & 0xf;
}
void thumb_eor32_decode_fields (
	uint16_t *address,
	unsigned int *set_flags,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *shift_type,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*set_flags = (instruction >> 20) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm2 = (instruction >> 6) & 0x3;
	*shift_type = (instruction >> 4) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_eori32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *set_condition,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*imm1 = (instruction >> 26) & 0x1;
	*set_condition = (instruction >> 20) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_isb32_decode_fields (
	uint16_t *address,
	unsigned int *option)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*option = (instruction >> 0) & 0xf;
}
void thumb_ldc32_decode_fields (
	uint16_t *address,
	unsigned int *coproc,
	unsigned int *d,
	unsigned int *crd,
	unsigned int *rn,
	unsigned int *pre_index,
	unsigned int *upwards,
	unsigned int *writeback,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*coproc = (instruction >> 8) & 0xf;
	*d = (instruction >> 22) & 0x1;
	*crd = (instruction >> 12) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*pre_index = (instruction >> 24) & 0x1;
	*upwards = (instruction >> 23) & 0x1;
	*writeback = (instruction >> 21) & 0x1;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_ldc232_decode_fields (
	uint16_t *address,
	unsigned int *coproc,
	unsigned int *d,
	unsigned int *crd,
	unsigned int *rn,
	unsigned int *pre_index,
	unsigned int *upwards,
	unsigned int *writeback,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*coproc = (instruction >> 8) & 0xf;
	*d = (instruction >> 22) & 0x1;
	*crd = (instruction >> 12) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*pre_index = (instruction >> 24) & 0x1;
	*upwards = (instruction >> 23) & 0x1;
	*writeback = (instruction >> 21) & 0x1;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_ldmea32_decode_fields (
	uint16_t *address,
	unsigned int *writeback,
	unsigned int *rn,
	unsigned int *reglist)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*writeback = (instruction >> 21) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*reglist = (instruction >> 0) & 0xffff;
}
void thumb_ldmfd32_decode_fields (
	uint16_t *address,
	unsigned int *writeback,
	unsigned int *rn,
	unsigned int *reglist)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*writeback = (instruction >> 21) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*reglist = (instruction >> 0) & 0xffff;
}
void thumb_ldr32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rt,
	unsigned int *shift,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rt = (instruction >> 12) & 0xf;
	*shift = (instruction >> 4) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_ldrb32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rt,
	unsigned int *shift,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rt = (instruction >> 12) & 0xf;
	*shift = (instruction >> 4) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_ldrbi32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm8,
	unsigned int *pre_index,
	unsigned int *upwards,
	unsigned int *writeback)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rt = (instruction >> 12) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
	*pre_index = (instruction >> 10) & 0x1;
	*upwards = (instruction >> 9) & 0x1;
	*writeback = (instruction >> 8) & 0x1;
}
void thumb_ldrbl32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *imm12,
	unsigned int *upwards)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rt = (instruction >> 12) & 0xf;
	*imm12 = (instruction >> 0) & 0xfff;
	*upwards = (instruction >> 23) & 0x1;
}
void thumb_ldrbwi32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm12)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rt = (instruction >> 12) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*imm12 = (instruction >> 0) & 0xfff;
}
void thumb_ldrbt32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rt = (instruction >> 12) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_ldrd32_decode_fields (
	uint16_t *address,
	unsigned int *pre_index,
	unsigned int *upwards,
	unsigned int *writeback,
	unsigned int *rn,
	unsigned int *rt,
	unsigned int *rd,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*pre_index = (instruction >> 24) & 0x1;
	*upwards = (instruction >> 23) & 0x1;
	*writeback = (instruction >> 21) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*rt = (instruction >> 12) & 0xf;
	*rd = (instruction >> 8) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_ldrex32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rt,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rt = (instruction >> 12) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_ldrexb32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rt)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rt = (instruction >> 12) & 0xf;
}
void thumb_ldrexd32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rt,
	unsigned int *rt2)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rt = (instruction >> 12) & 0xf;
	*rt2 = (instruction >> 8) & 0xf;
}
void thumb_ldrexh32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rt)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rt = (instruction >> 12) & 0xf;
}
void thumb_ldrh32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rt,
	unsigned int *shift,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rt = (instruction >> 12) & 0xf;
	*shift = (instruction >> 4) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_ldrhi32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm8,
	unsigned int *pre_index,
	unsigned int *upwards,
	unsigned int *writeback)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rt = (instruction >> 12) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
	*pre_index = (instruction >> 10) & 0x1;
	*upwards = (instruction >> 9) & 0x1;
	*writeback = (instruction >> 8) & 0x1;
}
void thumb_ldrhl32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *imm12,
	unsigned int *upwards)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rt = (instruction >> 12) & 0xf;
	*imm12 = (instruction >> 0) & 0xfff;
	*upwards = (instruction >> 23) & 0x1;
}
void thumb_ldrhwi32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm12)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rt = (instruction >> 12) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*imm12 = (instruction >> 0) & 0xfff;
}
void thumb_ldrht32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rt = (instruction >> 12) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_ldri32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm8,
	unsigned int *pre_index,
	unsigned int *upwards,
	unsigned int *writeback)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rt = (instruction >> 12) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
	*pre_index = (instruction >> 10) & 0x1;
	*upwards = (instruction >> 9) & 0x1;
	*writeback = (instruction >> 8) & 0x1;
}
void thumb_ldrl32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *imm12,
	unsigned int *upwards)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rt = (instruction >> 12) & 0xf;
	*imm12 = (instruction >> 0) & 0xfff;
	*upwards = (instruction >> 23) & 0x1;
}
void thumb_ldrsb32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rt,
	unsigned int *shift,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rt = (instruction >> 12) & 0xf;
	*shift = (instruction >> 4) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_ldrsbi32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm8,
	unsigned int *pre_index,
	unsigned int *upwards,
	unsigned int *writeback)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rt = (instruction >> 12) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
	*pre_index = (instruction >> 10) & 0x1;
	*upwards = (instruction >> 9) & 0x1;
	*writeback = (instruction >> 8) & 0x1;
}
void thumb_ldrsbl32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *imm12,
	unsigned int *upwards)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rt = (instruction >> 12) & 0xf;
	*imm12 = (instruction >> 0) & 0xfff;
	*upwards = (instruction >> 23) & 0x1;
}
void thumb_ldrsbwi32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm12)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rt = (instruction >> 12) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*imm12 = (instruction >> 0) & 0xfff;
}
void thumb_ldrsbt32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rt = (instruction >> 12) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_ldrsh32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rt,
	unsigned int *shift,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rt = (instruction >> 12) & 0xf;
	*shift = (instruction >> 4) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_ldrshi32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm8,
	unsigned int *pre_index,
	unsigned int *upwards,
	unsigned int *writeback)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rt = (instruction >> 12) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
	*pre_index = (instruction >> 10) & 0x1;
	*upwards = (instruction >> 9) & 0x1;
	*writeback = (instruction >> 8) & 0x1;
}
void thumb_ldrshl32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *imm12,
	unsigned int *upwards)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rt = (instruction >> 12) & 0xf;
	*imm12 = (instruction >> 0) & 0xfff;
	*upwards = (instruction >> 23) & 0x1;
}
void thumb_ldrshwi32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm12)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rt = (instruction >> 12) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*imm12 = (instruction >> 0) & 0xfff;
}
void thumb_ldrsht32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rt = (instruction >> 12) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_ldrt32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rt = (instruction >> 12) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_ldrwi32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm12)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rt = (instruction >> 12) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*imm12 = (instruction >> 0) & 0xfff;
}
void thumb_lsl32_decode_fields (
	uint16_t *address,
	unsigned int *set_flags,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*set_flags = (instruction >> 20) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*rd = (instruction >> 8) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_lsli32_decode_fields (
	uint16_t *address,
	unsigned int *set_flags,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*set_flags = (instruction >> 20) & 0x1;
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm2 = (instruction >> 6) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_lsr32_decode_fields (
	uint16_t *address,
	unsigned int *set_flags,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*set_flags = (instruction >> 20) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*rd = (instruction >> 8) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_lsri32_decode_fields (
	uint16_t *address,
	unsigned int *set_flags,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*set_flags = (instruction >> 20) & 0x1;
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm2 = (instruction >> 6) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_mcr32_decode_fields (
	uint16_t *address,
	unsigned int *opc1,
	unsigned int *crn,
	unsigned int *rt,
	unsigned int *coproc,
	unsigned int *opc2,
	unsigned int *crm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*opc1 = (instruction >> 21) & 0x7;
	*crn = (instruction >> 16) & 0xf;
	*rt = (instruction >> 12) & 0xf;
	*coproc = (instruction >> 8) & 0xf;
	*opc2 = (instruction >> 5) & 0x7;
	*crm = (instruction >> 0) & 0xf;
}
void thumb_mcr232_decode_fields (
	uint16_t *address,
	unsigned int *opc1,
	unsigned int *crn,
	unsigned int *rt,
	unsigned int *coproc,
	unsigned int *opc2,
	unsigned int *crm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*opc1 = (instruction >> 21) & 0x7;
	*crn = (instruction >> 16) & 0xf;
	*rt = (instruction >> 12) & 0xf;
	*coproc = (instruction >> 8) & 0xf;
	*opc2 = (instruction >> 5) & 0x7;
	*crm = (instruction >> 0) & 0xf;
}
void thumb_mcrr32_decode_fields (
	uint16_t *address,
	unsigned int *coproc,
	unsigned int *opc1,
	unsigned int *rt,
	unsigned int *rt2,
	unsigned int *crm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*coproc = (instruction >> 8) & 0xf;
	*opc1 = (instruction >> 4) & 0xf;
	*rt = (instruction >> 12) & 0xf;
	*rt2 = (instruction >> 16) & 0xf;
	*crm = (instruction >> 0) & 0xf;
}
void thumb_mcrr232_decode_fields (
	uint16_t *address,
	unsigned int *coproc,
	unsigned int *opc1,
	unsigned int *rt,
	unsigned int *rt2,
	unsigned int *crm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*coproc = (instruction >> 8) & 0xf;
	*opc1 = (instruction >> 4) & 0xf;
	*rt = (instruction >> 12) & 0xf;
	*rt2 = (instruction >> 16) & 0xf;
	*crm = (instruction >> 0) & 0xf;
}
void thumb_mla32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *racc,
	unsigned int *rd,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*racc = (instruction >> 12) & 0xf;
	*rd = (instruction >> 8) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_mls32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *racc,
	unsigned int *rd,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*racc = (instruction >> 12) & 0xf;
	*rd = (instruction >> 8) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_mov32_decode_fields (
	uint16_t *address,
	unsigned int *set_flags,
	unsigned int *rd,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*set_flags = (instruction >> 20) & 0x1;
	*rd = (instruction >> 8) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_movi32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *set_condition,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*imm1 = (instruction >> 26) & 0x1;
	*set_condition = (instruction >> 20) & 0x1;
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_movwi32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *imm4,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*imm1 = (instruction >> 26) & 0x1;
	*imm4 = (instruction >> 16) & 0xf;
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_movti32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *imm4,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*imm1 = (instruction >> 26) & 0x1;
	*imm4 = (instruction >> 16) & 0xf;
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_mrc32_decode_fields (
	uint16_t *address,
	unsigned int *opc1,
	unsigned int *crn,
	unsigned int *rt,
	unsigned int *coproc,
	unsigned int *opc2,
	unsigned int *crm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*opc1 = (instruction >> 21) & 0x7;
	*crn = (instruction >> 16) & 0xf;
	*rt = (instruction >> 12) & 0xf;
	*coproc = (instruction >> 8) & 0xf;
	*opc2 = (instruction >> 5) & 0x7;
	*crm = (instruction >> 0) & 0xf;
}
void thumb_mrc232_decode_fields (
	uint16_t *address,
	unsigned int *opc1,
	unsigned int *crn,
	unsigned int *rt,
	unsigned int *coproc,
	unsigned int *opc2,
	unsigned int *crm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*opc1 = (instruction >> 21) & 0x7;
	*crn = (instruction >> 16) & 0xf;
	*rt = (instruction >> 12) & 0xf;
	*coproc = (instruction >> 8) & 0xf;
	*opc2 = (instruction >> 5) & 0x7;
	*crm = (instruction >> 0) & 0xf;
}
void thumb_mrrc32_decode_fields (
	uint16_t *address,
	unsigned int *coproc,
	unsigned int *opc,
	unsigned int *rt,
	unsigned int *rt2,
	unsigned int *crm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*coproc = (instruction >> 8) & 0xf;
	*opc = (instruction >> 4) & 0xf;
	*rt = (instruction >> 12) & 0xf;
	*rt2 = (instruction >> 16) & 0xf;
	*crm = (instruction >> 0) & 0xf;
}
void thumb_mrrc232_decode_fields (
	uint16_t *address,
	unsigned int *coproc,
	unsigned int *opc,
	unsigned int *rt,
	unsigned int *rt2,
	unsigned int *crm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*coproc = (instruction >> 8) & 0xf;
	*opc = (instruction >> 4) & 0xf;
	*rt = (instruction >> 12) & 0xf;
	*rt2 = (instruction >> 16) & 0xf;
	*crm = (instruction >> 0) & 0xf;
}
void thumb_mrs32_decode_fields (
	uint16_t *address,
	unsigned int *rd)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
}
void thumb_msr32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *mask)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*mask = (instruction >> 10) & 0x3;
}
void thumb_mul32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rd = (instruction >> 8) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_mvn32_decode_fields (
	uint16_t *address,
	unsigned int *set_flags,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *shift_type,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*set_flags = (instruction >> 20) & 0x1;
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm2 = (instruction >> 6) & 0x3;
	*shift_type = (instruction >> 4) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_mvni32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *set_condition,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*imm1 = (instruction >> 26) & 0x1;
	*set_condition = (instruction >> 20) & 0x1;
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_orn32_decode_fields (
	uint16_t *address,
	unsigned int *set_flags,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *shift_type,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*set_flags = (instruction >> 20) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm2 = (instruction >> 6) & 0x3;
	*shift_type = (instruction >> 4) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_orni32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *set_condition,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*imm1 = (instruction >> 26) & 0x1;
	*set_condition = (instruction >> 20) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_orr32_decode_fields (
	uint16_t *address,
	unsigned int *set_flags,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *shift_type,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*set_flags = (instruction >> 20) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm2 = (instruction >> 6) & 0x3;
	*shift_type = (instruction >> 4) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_orri32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *set_condition,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*imm1 = (instruction >> 26) & 0x1;
	*set_condition = (instruction >> 20) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_pkh32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *shift_type,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm2 = (instruction >> 6) & 0x3;
	*shift_type = (instruction >> 4) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_pld32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *shift,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*shift = (instruction >> 4) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_pldi32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *imm12)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*imm12 = (instruction >> 0) & 0xfff;
}
void thumb_pldim32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_pld_lit32_decode_fields (
	uint16_t *address,
	unsigned int *upwards,
	unsigned int *imm12)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*upwards = (instruction >> 23) & 0x1;
	*imm12 = (instruction >> 0) & 0xfff;
}
void thumb_pldw32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *shift,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*shift = (instruction >> 4) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_pldwi32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *imm12)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*imm12 = (instruction >> 0) & 0xfff;
}
void thumb_pldwim32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_pli32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rm,
	unsigned int *shift)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
	*shift = (instruction >> 4) & 0x3;
}
void thumb_plii32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *imm12)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*imm12 = (instruction >> 0) & 0xfff;
}
void thumb_pliim32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_pli_lit32_decode_fields (
	uint16_t *address,
	unsigned int *upwards,
	unsigned int *imm12)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*upwards = (instruction >> 23) & 0x1;
	*imm12 = (instruction >> 0) & 0xfff;
}
void thumb_qadd32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rd = (instruction >> 8) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_qadd1632_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_qadd832_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_qasx32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_qdadd32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rd = (instruction >> 8) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_qdsub32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rd = (instruction >> 8) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_qsax32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_qsub32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rd = (instruction >> 8) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_qsub1632_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_qsub832_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_rbit32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rd = (instruction >> 8) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_rev32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rd = (instruction >> 8) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_rev1632_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rd = (instruction >> 8) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_revsh32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rd = (instruction >> 8) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_ror32_decode_fields (
	uint16_t *address,
	unsigned int *set_flags,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*set_flags = (instruction >> 20) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*rd = (instruction >> 8) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_rori32_decode_fields (
	uint16_t *address,
	unsigned int *set_flags,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*set_flags = (instruction >> 20) & 0x1;
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm2 = (instruction >> 6) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_rrx32_decode_fields (
	uint16_t *address,
	unsigned int *set_flags,
	unsigned int *rd,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*set_flags = (instruction >> 20) & 0x1;
	*rd = (instruction >> 8) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_rsb32_decode_fields (
	uint16_t *address,
	unsigned int *set_flags,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *shift_type,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*set_flags = (instruction >> 20) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm2 = (instruction >> 6) & 0x3;
	*shift_type = (instruction >> 4) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_rsbi32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *set_condition,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*imm1 = (instruction >> 26) & 0x1;
	*set_condition = (instruction >> 20) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_sadd1632_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_sadd832_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_sasx32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_sbc32_decode_fields (
	uint16_t *address,
	unsigned int *set_flags,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *shift_type,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*set_flags = (instruction >> 20) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm2 = (instruction >> 6) & 0x3;
	*shift_type = (instruction >> 4) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_sbci32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *set_condition,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*imm1 = (instruction >> 26) & 0x1;
	*set_condition = (instruction >> 20) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_sbfx32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *imm5)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0x1f;
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm2 = (instruction >> 6) & 0x3;
	*imm5 = (instruction >> 0) & 0x1f;
}
void thumb_sdiv32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rdhi,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rdhi = (instruction >> 8) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_sel32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rd = (instruction >> 8) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_shadd1632_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_shadd832_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_shasx32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_shsax32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_shsub1632_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_shsub832_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_simd_add_sub32_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *pref,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*opcode = (instruction >> 20) & 0x7;
	*rn = (instruction >> 16) & 0xf;
	*rd = (instruction >> 8) & 0xf;
	*pref = (instruction >> 4) & 0x7;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_smlabb32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm,
	unsigned int *ra)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
	*ra = (instruction >> 12) & 0xf;
}
void thumb_smlabt32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm,
	unsigned int *ra)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
	*ra = (instruction >> 12) & 0xf;
}
void thumb_smlatb32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm,
	unsigned int *ra)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
	*ra = (instruction >> 12) & 0xf;
}
void thumb_smlatt32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm,
	unsigned int *ra)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
	*ra = (instruction >> 12) & 0xf;
}
void thumb_smlad32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *racc,
	unsigned int *rd,
	unsigned int *opcode2,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*racc = (instruction >> 12) & 0xf;
	*rd = (instruction >> 8) & 0xf;
	*opcode2 = (instruction >> 4) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_smlal32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rdlo,
	unsigned int *rdhi,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rdlo = (instruction >> 12) & 0xf;
	*rdhi = (instruction >> 8) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_smlalbb32_decode_fields (
	uint16_t *address,
	unsigned int *rdlo,
	unsigned int *rdhi,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rdlo = (instruction >> 12) & 0xf;
	*rdhi = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_smlalbt32_decode_fields (
	uint16_t *address,
	unsigned int *rdlo,
	unsigned int *rdhi,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rdlo = (instruction >> 12) & 0xf;
	*rdhi = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_smlaltb32_decode_fields (
	uint16_t *address,
	unsigned int *rdlo,
	unsigned int *rdhi,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rdlo = (instruction >> 12) & 0xf;
	*rdhi = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_smlaltt32_decode_fields (
	uint16_t *address,
	unsigned int *rdlo,
	unsigned int *rdhi,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rdlo = (instruction >> 12) & 0xf;
	*rdhi = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_smlald32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rdlo,
	unsigned int *rdhi,
	unsigned int *m_swap,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rdlo = (instruction >> 12) & 0xf;
	*rdhi = (instruction >> 8) & 0xf;
	*m_swap = (instruction >> 4) & 0x1;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_smlawb32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm,
	unsigned int *ra)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
	*ra = (instruction >> 12) & 0xf;
}
void thumb_smlawt32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm,
	unsigned int *ra)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
	*ra = (instruction >> 12) & 0xf;
}
void thumb_smlsd32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *racc,
	unsigned int *rd,
	unsigned int *opcode2,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*racc = (instruction >> 12) & 0xf;
	*rd = (instruction >> 8) & 0xf;
	*opcode2 = (instruction >> 4) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_smlsld32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rdlo,
	unsigned int *rdhi,
	unsigned int *m_swap,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rdlo = (instruction >> 12) & 0xf;
	*rdhi = (instruction >> 8) & 0xf;
	*m_swap = (instruction >> 4) & 0x1;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_smmla32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *racc,
	unsigned int *rd,
	unsigned int *opcode2,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*racc = (instruction >> 12) & 0xf;
	*rd = (instruction >> 8) & 0xf;
	*opcode2 = (instruction >> 4) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_smmls32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *racc,
	unsigned int *rd,
	unsigned int *opcode2,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*racc = (instruction >> 12) & 0xf;
	*rd = (instruction >> 8) & 0xf;
	*opcode2 = (instruction >> 4) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_smmul32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *opcode2,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rd = (instruction >> 8) & 0xf;
	*opcode2 = (instruction >> 4) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_smuad32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *opcode2,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rd = (instruction >> 8) & 0xf;
	*opcode2 = (instruction >> 4) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_smulbb32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_smulbt32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_smultb32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_smultt32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_smull32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rdlo,
	unsigned int *rdhi,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rdlo = (instruction >> 12) & 0xf;
	*rdhi = (instruction >> 8) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_smulwb32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rd = (instruction >> 8) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_smulwt32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rd = (instruction >> 8) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_smusd32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *opcode2,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rd = (instruction >> 8) & 0xf;
	*opcode2 = (instruction >> 4) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_ssat1632_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0x1f;
	*rd = (instruction >> 8) & 0xf;
}
void thumb_ssat_asr32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *imm5)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0x1f;
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm2 = (instruction >> 6) & 0x3;
	*imm5 = (instruction >> 0) & 0x1f;
}
void thumb_ssat_lsl32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *imm5)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0x1f;
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm2 = (instruction >> 6) & 0x3;
	*imm5 = (instruction >> 0) & 0x1f;
}
void thumb_ssax32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_ssub1632_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_ssub832_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_stc32_decode_fields (
	uint16_t *address,
	unsigned int *coproc,
	unsigned int *d,
	unsigned int *crd,
	unsigned int *rn,
	unsigned int *pre_index,
	unsigned int *upwards,
	unsigned int *writeback,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*coproc = (instruction >> 8) & 0xf;
	*d = (instruction >> 22) & 0x1;
	*crd = (instruction >> 12) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*pre_index = (instruction >> 24) & 0x1;
	*upwards = (instruction >> 23) & 0x1;
	*writeback = (instruction >> 21) & 0x1;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_stc232_decode_fields (
	uint16_t *address,
	unsigned int *coproc,
	unsigned int *d,
	unsigned int *crd,
	unsigned int *rn,
	unsigned int *pre_index,
	unsigned int *upwards,
	unsigned int *writeback,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*coproc = (instruction >> 8) & 0xf;
	*d = (instruction >> 22) & 0x1;
	*crd = (instruction >> 12) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*pre_index = (instruction >> 24) & 0x1;
	*upwards = (instruction >> 23) & 0x1;
	*writeback = (instruction >> 21) & 0x1;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_stmea32_decode_fields (
	uint16_t *address,
	unsigned int *writeback,
	unsigned int *rn,
	unsigned int *reglist)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*writeback = (instruction >> 21) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*reglist = (instruction >> 0) & 0xffff;
}
void thumb_stmfd32_decode_fields (
	uint16_t *address,
	unsigned int *writeback,
	unsigned int *rn,
	unsigned int *reglist)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*writeback = (instruction >> 21) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*reglist = (instruction >> 0) & 0xffff;
}
void thumb_str32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rt,
	unsigned int *shift,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rt = (instruction >> 12) & 0xf;
	*shift = (instruction >> 4) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_strb32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rt,
	unsigned int *shift,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rt = (instruction >> 12) & 0xf;
	*shift = (instruction >> 4) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_strbi32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm8,
	unsigned int *pre_index,
	unsigned int *upwards,
	unsigned int *writeback)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rt = (instruction >> 12) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
	*pre_index = (instruction >> 10) & 0x1;
	*upwards = (instruction >> 9) & 0x1;
	*writeback = (instruction >> 8) & 0x1;
}
void thumb_strbwi32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm12)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rt = (instruction >> 12) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*imm12 = (instruction >> 0) & 0xfff;
}
void thumb_strbt32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rt = (instruction >> 12) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_strd32_decode_fields (
	uint16_t *address,
	unsigned int *pre_index,
	unsigned int *upwards,
	unsigned int *writeback,
	unsigned int *rn,
	unsigned int *rt,
	unsigned int *rd,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*pre_index = (instruction >> 24) & 0x1;
	*upwards = (instruction >> 23) & 0x1;
	*writeback = (instruction >> 21) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*rt = (instruction >> 12) & 0xf;
	*rd = (instruction >> 8) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_strex32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rt,
	unsigned int *rd,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rt = (instruction >> 12) & 0xf;
	*rd = (instruction >> 8) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_strexb32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rt,
	unsigned int *rd)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rt = (instruction >> 12) & 0xf;
	*rd = (instruction >> 0) & 0xf;
}
void thumb_strexd32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rt,
	unsigned int *rt2,
	unsigned int *rd)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rt = (instruction >> 12) & 0xf;
	*rt2 = (instruction >> 8) & 0xf;
	*rd = (instruction >> 0) & 0xf;
}
void thumb_strexh32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rt,
	unsigned int *rd)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rt = (instruction >> 12) & 0xf;
	*rd = (instruction >> 0) & 0xf;
}
void thumb_strh32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rt,
	unsigned int *shift,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rt = (instruction >> 12) & 0xf;
	*shift = (instruction >> 4) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_strhi32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm8,
	unsigned int *pre_index,
	unsigned int *upwards,
	unsigned int *writeback)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rt = (instruction >> 12) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
	*pre_index = (instruction >> 10) & 0x1;
	*upwards = (instruction >> 9) & 0x1;
	*writeback = (instruction >> 8) & 0x1;
}
void thumb_strhwi32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm12)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rt = (instruction >> 12) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*imm12 = (instruction >> 0) & 0xfff;
}
void thumb_strht32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rt = (instruction >> 12) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_stri32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm8,
	unsigned int *pre_index,
	unsigned int *upwards,
	unsigned int *writeback)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rt = (instruction >> 12) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
	*pre_index = (instruction >> 10) & 0x1;
	*upwards = (instruction >> 9) & 0x1;
	*writeback = (instruction >> 8) & 0x1;
}
void thumb_strt32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rt = (instruction >> 12) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_strwi32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm12)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rt = (instruction >> 12) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*imm12 = (instruction >> 0) & 0xfff;
}
void thumb_sub32_decode_fields (
	uint16_t *address,
	unsigned int *set_flags,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *shift_type,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*set_flags = (instruction >> 20) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm2 = (instruction >> 6) & 0x3;
	*shift_type = (instruction >> 4) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_subi32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *set_condition,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*imm1 = (instruction >> 26) & 0x1;
	*set_condition = (instruction >> 20) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_subwi32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*imm1 = (instruction >> 26) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_sxtab1632_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rotate,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rd = (instruction >> 8) & 0xf;
	*rotate = (instruction >> 4) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_sxtab32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rotate,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rd = (instruction >> 8) & 0xf;
	*rotate = (instruction >> 4) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_sxtah32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rotate,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rd = (instruction >> 8) & 0xf;
	*rotate = (instruction >> 4) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_sxtb1632_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rotate,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rotate = (instruction >> 4) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_sxtb32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rotate,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rotate = (instruction >> 4) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_sxth32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rotate,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rotate = (instruction >> 4) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_tbb32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_tbh32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_teq32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *imm2,
	unsigned int *shift_type,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*imm3 = (instruction >> 12) & 0x7;
	*imm2 = (instruction >> 6) & 0x3;
	*shift_type = (instruction >> 4) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_teqi32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*imm1 = (instruction >> 26) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*imm3 = (instruction >> 12) & 0x7;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_tst32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *imm2,
	unsigned int *shift_type,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*imm3 = (instruction >> 12) & 0x7;
	*imm2 = (instruction >> 6) & 0x3;
	*shift_type = (instruction >> 4) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_tsti32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*imm1 = (instruction >> 26) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*imm3 = (instruction >> 12) & 0x7;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_uadd1632_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_uadd832_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_uasx32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_ubfx32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *imm5)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0x1f;
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm2 = (instruction >> 6) & 0x3;
	*imm5 = (instruction >> 0) & 0x1f;
}
void thumb_udf32_decode_fields (
	uint16_t *address,
	unsigned int *imm4,
	unsigned int *imm12)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*imm4 = (instruction >> 16) & 0xf;
	*imm12 = (instruction >> 0) & 0xfff;
}
void thumb_udiv32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rdhi,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rdhi = (instruction >> 8) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_uhadd1632_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_uhadd832_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_uhasx32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_uhsax32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_uhsub1632_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_uhsub832_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_umaal32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rdlo,
	unsigned int *rdhi,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rdlo = (instruction >> 12) & 0xf;
	*rdhi = (instruction >> 8) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_umlal32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rdlo,
	unsigned int *rdhi,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rdlo = (instruction >> 12) & 0xf;
	*rdhi = (instruction >> 8) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_umull32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rdlo,
	unsigned int *rdhi,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rdlo = (instruction >> 12) & 0xf;
	*rdhi = (instruction >> 8) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_uqadd1632_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_uqadd832_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_uqasx32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_uqsax32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_uqsub1632_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_uqsub832_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_usad832_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *opcode2,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rd = (instruction >> 8) & 0xf;
	*opcode2 = (instruction >> 4) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_usada832_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *racc,
	unsigned int *rd,
	unsigned int *opcode2,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*racc = (instruction >> 12) & 0xf;
	*rd = (instruction >> 8) & 0xf;
	*opcode2 = (instruction >> 4) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_usat1632_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0x1f;
	*rd = (instruction >> 8) & 0xf;
}
void thumb_usat_asr32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *imm5)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0x1f;
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm2 = (instruction >> 6) & 0x3;
	*imm5 = (instruction >> 0) & 0x1f;
}
void thumb_usat_lsl32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *imm5)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0x1f;
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm2 = (instruction >> 6) & 0x3;
	*imm5 = (instruction >> 0) & 0x1f;
}
void thumb_usax32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_usub1632_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_usub832_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_uxtab1632_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rotate,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rd = (instruction >> 8) & 0xf;
	*rotate = (instruction >> 4) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_uxtab32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rotate,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rd = (instruction >> 8) & 0xf;
	*rotate = (instruction >> 4) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_uxtah32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rotate,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rn = (instruction >> 16) & 0xf;
	*rd = (instruction >> 8) & 0xf;
	*rotate = (instruction >> 4) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_uxtb1632_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rotate,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rotate = (instruction >> 4) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_uxtb32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rotate,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rotate = (instruction >> 4) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_uxth32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rotate,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rotate = (instruction >> 4) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_neon_vaba_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*unsign = (instruction >> 28) & 0x1;
	*size = (instruction >> 20) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vabal_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*unsign = (instruction >> 28) & 0x1;
	*size = (instruction >> 20) & 0x3;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vabd_i_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*unsign = (instruction >> 28) & 0x1;
	*size = (instruction >> 20) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vabd_f_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 20) & 0x1;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vabdl_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*unsign = (instruction >> 28) & 0x1;
	*size = (instruction >> 20) & 0x3;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vabs_decode_fields (
	uint16_t *address,
	unsigned int *is_float,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*is_float = (instruction >> 10) & 0x1;
	*size = (instruction >> 18) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_vfp_vabs_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 8) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vacge_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 20) & 0x1;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vacgt_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 20) & 0x1;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vadd_i_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 20) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vadd_f_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 20) & 0x1;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_vfp_vadd_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 8) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vaddhn_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *n,
	unsigned int *vd,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 20) & 0x3;
	*d = (instruction >> 22) & 0x1;
	*n = (instruction >> 7) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vaddl_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*unsign = (instruction >> 28) & 0x1;
	*size = (instruction >> 20) & 0x3;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vaddw_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*unsign = (instruction >> 28) & 0x1;
	*size = (instruction >> 20) & 0x3;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vand_decode_fields (
	uint16_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vbic_decode_fields (
	uint16_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vbici_decode_fields (
	uint16_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *cmode,
	unsigned int *i,
	unsigned int *imm3,
	unsigned int *imm4)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*cmode = (instruction >> 8) & 0xf;
	*i = (instruction >> 28) & 0x1;
	*imm3 = (instruction >> 16) & 0x7;
	*imm4 = (instruction >> 0) & 0xf;
}
void thumb_neon_vbif_decode_fields (
	uint16_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vbit_decode_fields (
	uint16_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vbsl_decode_fields (
	uint16_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vceq_i_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 20) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vceq_f_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 20) & 0x1;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vceqz_decode_fields (
	uint16_t *address,
	unsigned int *is_float,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*is_float = (instruction >> 10) & 0x1;
	*size = (instruction >> 18) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vcge_i_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*unsign = (instruction >> 28) & 0x1;
	*size = (instruction >> 20) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vcge_f_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 20) & 0x1;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vcgez_decode_fields (
	uint16_t *address,
	unsigned int *is_float,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*is_float = (instruction >> 10) & 0x1;
	*size = (instruction >> 18) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vcgt_i_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*unsign = (instruction >> 28) & 0x1;
	*size = (instruction >> 20) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vcgt_f_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 20) & 0x1;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vcgtz_decode_fields (
	uint16_t *address,
	unsigned int *is_float,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*is_float = (instruction >> 10) & 0x1;
	*size = (instruction >> 18) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vclez_decode_fields (
	uint16_t *address,
	unsigned int *is_float,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*is_float = (instruction >> 10) & 0x1;
	*size = (instruction >> 18) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vcls_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 18) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vcltz_decode_fields (
	uint16_t *address,
	unsigned int *is_float,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*is_float = (instruction >> 10) & 0x1;
	*size = (instruction >> 18) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vclz_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 18) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_vfp_vcmp_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 8) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_vfp_vcmpz_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 8) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
}
void thumb_vfp_vcmpe_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 8) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_vfp_vcmpez_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 8) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
}
void thumb_neon_vcnt_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 18) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vcvt_f_i_decode_fields (
	uint16_t *address,
	unsigned int *op,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*op = (instruction >> 7) & 0x3;
	*size = (instruction >> 18) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vcvt_f_fp_decode_fields (
	uint16_t *address,
	unsigned int *op,
	unsigned int *unsign,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vm,
	unsigned int *m,
	unsigned int *imm6)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*op = (instruction >> 8) & 0x1;
	*unsign = (instruction >> 28) & 0x1;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vm = (instruction >> 0) & 0xffff;
	*m = (instruction >> 5) & 0x1;
	*imm6 = (instruction >> 16) & 0x3f;
}
void thumb_neon_vcvt_hp_sp_decode_fields (
	uint16_t *address,
	unsigned int *op,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*op = (instruction >> 8) & 0x1;
	*size = (instruction >> 18) & 0x3;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_vfp_vcvt_f_i_decode_fields (
	uint16_t *address,
	unsigned int *op,
	unsigned int *op2,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*op = (instruction >> 7) & 0x1;
	*op2 = (instruction >> 16) & 0x7;
	*size = (instruction >> 8) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_vfp_vcvt_f_fp_decode_fields (
	uint16_t *address,
	unsigned int *op,
	unsigned int *unsign,
	unsigned int *sf,
	unsigned int *sx,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *imm4,
	unsigned int *i)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*op = (instruction >> 18) & 0x1;
	*unsign = (instruction >> 16) & 0x1;
	*sf = (instruction >> 8) & 0x1;
	*sx = (instruction >> 7) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*imm4 = (instruction >> 0) & 0xf;
	*i = (instruction >> 5) & 0x1;
}
void thumb_vfp_vcvt_dp_sp_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 8) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_vfp_vcvtb_decode_fields (
	uint16_t *address,
	unsigned int *op,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*op = (instruction >> 16) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_vfp_vcvtt_decode_fields (
	uint16_t *address,
	unsigned int *op,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*op = (instruction >> 16) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_vfp_vdiv_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 8) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vdup_scal_decode_fields (
	uint16_t *address,
	unsigned int *q,
	unsigned int *imm4,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*q = (instruction >> 6) & 0x1;
	*imm4 = (instruction >> 16) & 0xf;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vdup_core_decode_fields (
	uint16_t *address,
	unsigned int *b,
	unsigned int *e,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *rt)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*b = (instruction >> 22) & 0x1;
	*e = (instruction >> 5) & 0x1;
	*q = (instruction >> 21) & 0x1;
	*d = (instruction >> 7) & 0x1;
	*vd = (instruction >> 16) & 0xf;
	*rt = (instruction >> 12) & 0xf;
}
void thumb_neon_veor_decode_fields (
	uint16_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vext_decode_fields (
	uint16_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *imm4)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
	*imm4 = (instruction >> 8) & 0xf;
}
void thumb_neon_vfma_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 20) & 0x1;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vfms_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 20) & 0x1;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_vfp_vfma_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 8) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_vfp_vfms_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 8) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_vfp_vfnma_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 8) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_vfp_vfnms_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 8) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vhadd_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*unsign = (instruction >> 28) & 0x1;
	*size = (instruction >> 20) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vhsub_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*unsign = (instruction >> 28) & 0x1;
	*size = (instruction >> 20) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vldx_m_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *rn,
	unsigned int *align,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*opcode = (instruction >> 8) & 0xf;
	*size = (instruction >> 6) & 0x3;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*align = (instruction >> 4) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_neon_vldx_s_o_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *rn,
	unsigned int *index_align,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*opcode = (instruction >> 8) & 0x3;
	*size = (instruction >> 10) & 0x3;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*index_align = (instruction >> 4) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_neon_vldx_s_a_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *inc,
	unsigned int *rn,
	unsigned int *align,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*opcode = (instruction >> 8) & 0x3;
	*size = (instruction >> 6) & 0x3;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*inc = (instruction >> 5) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*align = (instruction >> 4) & 0x1;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_vfp_vldm_dp_decode_fields (
	uint16_t *address,
	unsigned int *p,
	unsigned int *upwards,
	unsigned int *writeback,
	unsigned int *rn,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*p = (instruction >> 24) & 0x1;
	*upwards = (instruction >> 23) & 0x1;
	*writeback = (instruction >> 21) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_vfp_vldm_sp_decode_fields (
	uint16_t *address,
	unsigned int *p,
	unsigned int *upwards,
	unsigned int *writeback,
	unsigned int *rn,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*p = (instruction >> 24) & 0x1;
	*upwards = (instruction >> 23) & 0x1;
	*writeback = (instruction >> 21) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_vfp_vldr_dp_decode_fields (
	uint16_t *address,
	unsigned int *upwards,
	unsigned int *rn,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*upwards = (instruction >> 23) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_vfp_vldr_sp_decode_fields (
	uint16_t *address,
	unsigned int *upwards,
	unsigned int *rn,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*upwards = (instruction >> 23) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_neon_vmax_i_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*unsign = (instruction >> 28) & 0x1;
	*size = (instruction >> 20) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vmin_i_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*unsign = (instruction >> 28) & 0x1;
	*size = (instruction >> 20) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vmax_f_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 20) & 0x1;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vmin_f_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 20) & 0x1;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vmla_i_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 20) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vmls_i_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 20) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vmlal_i_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*unsign = (instruction >> 28) & 0x1;
	*size = (instruction >> 20) & 0x3;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vmlsl_i_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*unsign = (instruction >> 28) & 0x1;
	*size = (instruction >> 20) & 0x3;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vmla_f_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 20) & 0x1;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vmls_f_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 20) & 0x1;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_vfp_vmla_f_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 8) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_vfp_vmls_f_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 8) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vmla_scal_decode_fields (
	uint16_t *address,
	unsigned int *is_float,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*is_float = (instruction >> 8) & 0x1;
	*size = (instruction >> 20) & 0x3;
	*q = (instruction >> 28) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vmls_scal_decode_fields (
	uint16_t *address,
	unsigned int *is_float,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*is_float = (instruction >> 8) & 0x1;
	*size = (instruction >> 20) & 0x3;
	*q = (instruction >> 28) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vmlal_scal_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*unsign = (instruction >> 28) & 0x1;
	*size = (instruction >> 20) & 0x3;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vmlsl_scal_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*unsign = (instruction >> 28) & 0x1;
	*size = (instruction >> 20) & 0x3;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vmovi_decode_fields (
	uint16_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *op,
	unsigned int *cmode,
	unsigned int *i,
	unsigned int *imm3,
	unsigned int *imm4)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*op = (instruction >> 5) & 0x1;
	*cmode = (instruction >> 8) & 0xf;
	*i = (instruction >> 28) & 0x1;
	*imm3 = (instruction >> 16) & 0x7;
	*imm4 = (instruction >> 0) & 0xf;
}
void thumb_vfp_vmovi_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *imm4h,
	unsigned int *imm4l)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 8) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*imm4h = (instruction >> 16) & 0xf;
	*imm4l = (instruction >> 0) & 0xf;
}
void thumb_vfp_vmov_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 8) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_vfp_vmov_core_scal_decode_fields (
	uint16_t *address,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *opc1,
	unsigned int *opc2,
	unsigned int *rt)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*d = (instruction >> 7) & 0x1;
	*vd = (instruction >> 16) & 0x1f;
	*opc1 = (instruction >> 21) & 0x3;
	*opc2 = (instruction >> 5) & 0x3;
	*rt = (instruction >> 12) & 0xf;
}
void thumb_vfp_vmov_scal_core_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *rt,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *opc1,
	unsigned int *opc2)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*unsign = (instruction >> 23) & 0x1;
	*rt = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*opc1 = (instruction >> 21) & 0x3;
	*opc2 = (instruction >> 5) & 0x3;
}
void thumb_vfp_vmov_core_sp_decode_fields (
	uint16_t *address,
	unsigned int *op,
	unsigned int *rt,
	unsigned int *n,
	unsigned int *vn)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*op = (instruction >> 20) & 0x1;
	*rt = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
}
void thumb_vfp_vmov_2core_2sp_decode_fields (
	uint16_t *address,
	unsigned int *to_arm,
	unsigned int *rt,
	unsigned int *rt2,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*to_arm = (instruction >> 20) & 0x1;
	*rt = (instruction >> 12) & 0xf;
	*rt2 = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_vfp_vmov_2core_dp_decode_fields (
	uint16_t *address,
	unsigned int *to_arm,
	unsigned int *rt,
	unsigned int *rt2,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*to_arm = (instruction >> 20) & 0x1;
	*rt = (instruction >> 12) & 0xf;
	*rt2 = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vmovl_decode_fields (
	uint16_t *address,
	unsigned int *op,
	unsigned int *unsign,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*op = (instruction >> 19) & 0x7;
	*unsign = (instruction >> 28) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vmovn_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 18) & 0x3;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_vfp_vmrs_decode_fields (
	uint16_t *address,
	unsigned int *rt)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rt = (instruction >> 12) & 0xf;
}
void thumb_vfp_vmsr_decode_fields (
	uint16_t *address,
	unsigned int *rt)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rt = (instruction >> 12) & 0xf;
}
void thumb_neon_vmul_i_decode_fields (
	uint16_t *address,
	unsigned int *op,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*op = (instruction >> 28) & 0x1;
	*size = (instruction >> 20) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vmull_i_decode_fields (
	uint16_t *address,
	unsigned int *op,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*op = (instruction >> 9) & 0x1;
	*unsign = (instruction >> 28) & 0x1;
	*size = (instruction >> 20) & 0x3;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vmul_f_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 20) & 0x1;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_vfp_vmul_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 8) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vmul_scal_decode_fields (
	uint16_t *address,
	unsigned int *is_float,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*is_float = (instruction >> 8) & 0x1;
	*size = (instruction >> 20) & 0x3;
	*q = (instruction >> 28) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vmull_scal_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*unsign = (instruction >> 28) & 0x1;
	*size = (instruction >> 20) & 0x3;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vmvni_decode_fields (
	uint16_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *cmode,
	unsigned int *i,
	unsigned int *imm3,
	unsigned int *imm4)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*cmode = (instruction >> 8) & 0xf;
	*i = (instruction >> 28) & 0x1;
	*imm3 = (instruction >> 16) & 0x7;
	*imm4 = (instruction >> 0) & 0xf;
}
void thumb_neon_vmvn_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 18) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vneg_decode_fields (
	uint16_t *address,
	unsigned int *is_float,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*is_float = (instruction >> 10) & 0x1;
	*size = (instruction >> 18) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_vfp_vneg_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 8) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_vfp_vnmla_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 8) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_vfp_vnmls_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 8) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_vfp_vnmul_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 8) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vorn_decode_fields (
	uint16_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vorri_decode_fields (
	uint16_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *cmode,
	unsigned int *i,
	unsigned int *imm3,
	unsigned int *imm4)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*cmode = (instruction >> 8) & 0xf;
	*i = (instruction >> 28) & 0x1;
	*imm3 = (instruction >> 16) & 0x7;
	*imm4 = (instruction >> 0) & 0xf;
}
void thumb_neon_vorr_decode_fields (
	uint16_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vpadal_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*unsign = (instruction >> 7) & 0x1;
	*size = (instruction >> 18) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vpadd_i_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 20) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vpadd_f_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 20) & 0x1;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vpaddl_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*unsign = (instruction >> 7) & 0x1;
	*size = (instruction >> 18) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vpmax_i_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*unsign = (instruction >> 28) & 0x1;
	*size = (instruction >> 20) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vpmin_i_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*unsign = (instruction >> 28) & 0x1;
	*size = (instruction >> 20) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vpmax_f_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 20) & 0x1;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vpmin_f_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 20) & 0x1;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_vfp_vpop_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *regs)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 8) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*regs = (instruction >> 0) & 0xff;
}
void thumb_vfp_vpush_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *regs)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 8) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*regs = (instruction >> 0) & 0xff;
}
void thumb_neon_vqabs_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 18) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vqadd_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*unsign = (instruction >> 28) & 0x1;
	*size = (instruction >> 20) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vqdmlal_i_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 20) & 0x3;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vqdmlsl_i_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 20) & 0x3;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vqdmlal_scal_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 20) & 0x3;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vqdmlsl_scal_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 20) & 0x3;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vqdmulh_i_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 20) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vqdmulh_scal_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 20) & 0x3;
	*q = (instruction >> 28) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vqdmull_i_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 20) & 0x3;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vqdmull_scal_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 20) & 0x3;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vqmovn_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*unsign = (instruction >> 6) & 0x1;
	*size = (instruction >> 18) & 0x3;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vqmovun_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 18) & 0x3;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vqneg_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 18) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vqrdmulh_i_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 20) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vqrdmulh_scal_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 20) & 0x3;
	*q = (instruction >> 28) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vqrshl_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*unsign = (instruction >> 28) & 0x1;
	*size = (instruction >> 20) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vqrshrn_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *imm6)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*unsign = (instruction >> 28) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
	*imm6 = (instruction >> 16) & 0x3f;
}
void thumb_neon_vqrshrun_decode_fields (
	uint16_t *address,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *imm6)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
	*imm6 = (instruction >> 16) & 0x3f;
}
void thumb_neon_vqshl_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *n,
	unsigned int *vn)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*unsign = (instruction >> 28) & 0x1;
	*size = (instruction >> 20) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
}
void thumb_neon_vqshli_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *l,
	unsigned int *imm6)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*unsign = (instruction >> 28) & 0x1;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
	*l = (instruction >> 7) & 0x1;
	*imm6 = (instruction >> 16) & 0x3f;
}
void thumb_neon_vqshlui_decode_fields (
	uint16_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *l,
	unsigned int *imm6)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
	*l = (instruction >> 7) & 0x1;
	*imm6 = (instruction >> 16) & 0x3f;
}
void thumb_neon_vqshrn_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *imm6)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*unsign = (instruction >> 28) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
	*imm6 = (instruction >> 16) & 0x3f;
}
void thumb_neon_vqshrun_decode_fields (
	uint16_t *address,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *imm6)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
	*imm6 = (instruction >> 16) & 0x3f;
}
void thumb_neon_vqsub_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*unsign = (instruction >> 28) & 0x1;
	*size = (instruction >> 20) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vraddhn_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 20) & 0x3;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vrecpe_decode_fields (
	uint16_t *address,
	unsigned int *is_float,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*is_float = (instruction >> 8) & 0x1;
	*size = (instruction >> 18) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vrecps_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 20) & 0x1;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vrev16_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 18) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vrev32_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 18) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vrev64_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 18) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vrhadd_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*unsign = (instruction >> 28) & 0x1;
	*size = (instruction >> 20) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vrshl_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*unsign = (instruction >> 28) & 0x1;
	*size = (instruction >> 20) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vrshr_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *l,
	unsigned int *imm6)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*unsign = (instruction >> 28) & 0x1;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
	*l = (instruction >> 7) & 0x1;
	*imm6 = (instruction >> 16) & 0x3f;
}
void thumb_neon_vrshrn_decode_fields (
	uint16_t *address,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *imm6)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
	*imm6 = (instruction >> 16) & 0x3f;
}
void thumb_neon_vrsqrte_decode_fields (
	uint16_t *address,
	unsigned int *is_float,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*is_float = (instruction >> 8) & 0x1;
	*size = (instruction >> 18) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vrsqrts_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 20) & 0x1;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vrsra_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *l,
	unsigned int *imm6)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*unsign = (instruction >> 28) & 0x1;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
	*l = (instruction >> 7) & 0x1;
	*imm6 = (instruction >> 16) & 0x3f;
}
void thumb_neon_vrsubhn_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 20) & 0x3;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vshl_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*unsign = (instruction >> 28) & 0x1;
	*size = (instruction >> 20) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vshli_decode_fields (
	uint16_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *l,
	unsigned int *imm6)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
	*l = (instruction >> 7) & 0x1;
	*imm6 = (instruction >> 16) & 0x3f;
}
void thumb_neon_vshll_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *imm6)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*unsign = (instruction >> 28) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
	*imm6 = (instruction >> 16) & 0x3f;
}
void thumb_neon_vshll2_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 18) & 0x3;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vshr_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *l,
	unsigned int *imm6)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*unsign = (instruction >> 28) & 0x1;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
	*l = (instruction >> 7) & 0x1;
	*imm6 = (instruction >> 16) & 0x3f;
}
void thumb_neon_vshrn_decode_fields (
	uint16_t *address,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *imm6)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
	*imm6 = (instruction >> 16) & 0x3f;
}
void thumb_neon_vsli_decode_fields (
	uint16_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *l,
	unsigned int *imm6)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
	*l = (instruction >> 7) & 0x1;
	*imm6 = (instruction >> 16) & 0x3f;
}
void thumb_vfp_vsqrt_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 8) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vsra_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *l,
	unsigned int *imm6)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*unsign = (instruction >> 28) & 0x1;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
	*l = (instruction >> 7) & 0x1;
	*imm6 = (instruction >> 16) & 0x3f;
}
void thumb_neon_vsri_decode_fields (
	uint16_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *l,
	unsigned int *imm6)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
	*l = (instruction >> 7) & 0x1;
	*imm6 = (instruction >> 16) & 0x3f;
}
void thumb_neon_vstx_m_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *rn,
	unsigned int *align,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*opcode = (instruction >> 8) & 0xf;
	*size = (instruction >> 6) & 0x3;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*align = (instruction >> 4) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_neon_vstx_s_o_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *rn,
	unsigned int *index_align,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*opcode = (instruction >> 8) & 0x3;
	*size = (instruction >> 10) & 0x3;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*index_align = (instruction >> 4) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_vfp_vstm_dp_decode_fields (
	uint16_t *address,
	unsigned int *p,
	unsigned int *upwards,
	unsigned int *writeback,
	unsigned int *rn,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*p = (instruction >> 24) & 0x1;
	*upwards = (instruction >> 23) & 0x1;
	*writeback = (instruction >> 21) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_vfp_vstm_sp_decode_fields (
	uint16_t *address,
	unsigned int *p,
	unsigned int *upwards,
	unsigned int *writeback,
	unsigned int *rn,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*p = (instruction >> 24) & 0x1;
	*upwards = (instruction >> 23) & 0x1;
	*writeback = (instruction >> 21) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_vfp_vstr_dp_decode_fields (
	uint16_t *address,
	unsigned int *upwards,
	unsigned int *rn,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*upwards = (instruction >> 23) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_vfp_vstr_sp_decode_fields (
	uint16_t *address,
	unsigned int *upwards,
	unsigned int *rn,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*upwards = (instruction >> 23) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_neon_vsub_i_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 20) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vsub_f_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 20) & 0x1;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_vfp_vsub_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 8) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vsubhn_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 20) & 0x3;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vsubl_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*unsign = (instruction >> 28) & 0x1;
	*size = (instruction >> 20) & 0x3;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vsubw_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*unsign = (instruction >> 28) & 0x1;
	*size = (instruction >> 20) & 0x3;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vswp_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 18) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vtbl_decode_fields (
	uint16_t *address,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *len,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*len = (instruction >> 8) & 0x3;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vtbx_decode_fields (
	uint16_t *address,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *len,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*len = (instruction >> 8) & 0x3;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vtrn_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 18) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vtst_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 20) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vuzp_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 18) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_vzip_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 18) & 0x3;
	*q = (instruction >> 6) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_vfp_vsel_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *cond,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*size = (instruction >> 8) & 0x1;
	*cond = (instruction >> 20) & 0x3;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_shift_i_mov_16_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *imm5,
	unsigned int *rm,
	unsigned int *rd)
{
	uint16_t instruction = *address;
	*opcode = (instruction >> 11) & 0x3;
	*imm5 = (instruction >> 6) & 0x1f;
	*rm = (instruction >> 3) & 0x7;
	*rd = (instruction >> 0) & 0x7;
}
void thumb_add_sub_16_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *rm,
	unsigned int *rn,
	unsigned int *rd)
{
	uint16_t instruction = *address;
	*opcode = (instruction >> 9) & 0x1;
	*rm = (instruction >> 6) & 0x7;
	*rn = (instruction >> 3) & 0x7;
	*rd = (instruction >> 0) & 0x7;
}
void thumb_add_sub_i_16_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *imm3,
	unsigned int *rn,
	unsigned int *rd)
{
	uint16_t instruction = *address;
	*opcode = (instruction >> 9) & 0x1;
	*imm3 = (instruction >> 6) & 0x7;
	*rn = (instruction >> 3) & 0x7;
	*rd = (instruction >> 0) & 0x7;
}
void thumb_add_sub_comp_mov_i_16_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *rdn,
	unsigned int *imm8)
{
	uint16_t instruction = *address;
	*opcode = (instruction >> 11) & 0x3;
	*rdn = (instruction >> 8) & 0x7;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_data_proc_16_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *rm,
	unsigned int *rdn)
{
	uint16_t instruction = *address;
	*opcode = (instruction >> 6) & 0xf;
	*rm = (instruction >> 3) & 0x7;
	*rdn = (instruction >> 0) & 0x7;
}
void thumb_special_data_proc_16_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *dn,
	unsigned int *rm,
	unsigned int *rdn)
{
	uint16_t instruction = *address;
	*opcode = (instruction >> 8) & 0x3;
	*dn = (instruction >> 7) & 0x1;
	*rm = (instruction >> 3) & 0xf;
	*rdn = (instruction >> 0) & 0x7;
}
void thumb_bx_16_decode_fields (
	uint16_t *address,
	unsigned int *link,
	unsigned int *rm)
{
	uint16_t instruction = *address;
	*link = (instruction >> 7) & 0x1;
	*rm = (instruction >> 3) & 0xf;
}
void thumb_load_lit_16_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *imm8)
{
	uint16_t instruction = *address;
	*rd = (instruction >> 8) & 0x7;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_load_store_reg_offset_16_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *rm,
	unsigned int *rn,
	unsigned int *rd)
{
	uint16_t instruction = *address;
	*opcode = (instruction >> 9) & 0x7;
	*rm = (instruction >> 6) & 0x7;
	*rn = (instruction >> 3) & 0x7;
	*rd = (instruction >> 0) & 0x7;
}
void thumb_load_store_byte_word_i_16_decode_fields (
	uint16_t *address,
	unsigned int *byte,
	unsigned int *load,
	unsigned int *imm5,
	unsigned int *rn,
	unsigned int *rd)
{
	uint16_t instruction = *address;
	*byte = (instruction >> 12) & 0x1;
	*load = (instruction >> 11) & 0x1;
	*imm5 = (instruction >> 6) & 0x1f;
	*rn = (instruction >> 3) & 0x7;
	*rd = (instruction >> 0) & 0x7;
}
void thumb_load_store_halfword_i_16_decode_fields (
	uint16_t *address,
	unsigned int *load,
	unsigned int *imm5,
	unsigned int *rn,
	unsigned int *rd)
{
	uint16_t instruction = *address;
	*load = (instruction >> 11) & 0x1;
	*imm5 = (instruction >> 6) & 0x1f;
	*rn = (instruction >> 3) & 0x7;
	*rd = (instruction >> 0) & 0x7;
}
void thumb_load_store_stack_16_decode_fields (
	uint16_t *address,
	unsigned int *load,
	unsigned int *rd,
	unsigned int *imm8)
{
	uint16_t instruction = *address;
	*load = (instruction >> 11) & 0x1;
	*rd = (instruction >> 8) & 0x7;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_add_sp_pc_16_decode_fields (
	uint16_t *address,
	unsigned int *sp,
	unsigned int *rd,
	unsigned int *imm8)
{
	uint16_t instruction = *address;
	*sp = (instruction >> 11) & 0x1;
	*rd = (instruction >> 8) & 0x7;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_misc_add_sub_sp_i_16_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *imm7)
{
	uint16_t instruction = *address;
	*opcode = (instruction >> 7) & 0x1;
	*imm7 = (instruction >> 0) & 0x7f;
}
void thumb_misc_sign_zero_extend_16_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *rm,
	unsigned int *rd)
{
	uint16_t instruction = *address;
	*opcode = (instruction >> 6) & 0x3;
	*rm = (instruction >> 3) & 0x7;
	*rd = (instruction >> 0) & 0x7;
}
void thumb_misc_cbz_16_decode_fields (
	uint16_t *address,
	unsigned int *n,
	unsigned int *imm1,
	unsigned int *imm5,
	unsigned int *rn)
{
	uint16_t instruction = *address;
	*n = (instruction >> 11) & 0x1;
	*imm1 = (instruction >> 9) & 0x1;
	*imm5 = (instruction >> 3) & 0x1f;
	*rn = (instruction >> 0) & 0x7;
}
void thumb_misc_push_pop_16_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *reg)
{
	uint16_t instruction = *address;
	*opcode = (instruction >> 9) & 0x7;
	*reg = (instruction >> 0) & 0x1ff;
}
void thumb_misc_rev_16_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *rn,
	unsigned int *rd)
{
	uint16_t instruction = *address;
	*opcode = (instruction >> 6) & 0x3;
	*rn = (instruction >> 3) & 0x7;
	*rd = (instruction >> 0) & 0x7;
}
void thumb_misc_if_then_16_decode_fields (
	uint16_t *address,
	unsigned int *cond,
	unsigned int *mask)
{
	uint16_t instruction = *address;
	*cond = (instruction >> 4) & 0xf;
	*mask = (instruction >> 0) & 0xf;
}
void thumb_misc_nop_16_decode_fields (
	uint16_t *address,
	unsigned int *hint)
{
	uint16_t instruction = *address;
	*hint = (instruction >> 4) & 0xf;
}
void thumb_load_store_multiple_16_decode_fields (
	uint16_t *address,
	unsigned int *load,
	unsigned int *rn,
	unsigned int *reglist)
{
	uint16_t instruction = *address;
	*load = (instruction >> 11) & 0x1;
	*rn = (instruction >> 8) & 0x7;
	*reglist = (instruction >> 0) & 0xff;
}
void thumb_cond_branch_16_decode_fields (
	uint16_t *address,
	unsigned int *condition,
	unsigned int *imm8)
{
	uint16_t instruction = *address;
	*condition = (instruction >> 8) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_svc_16_decode_fields (
	uint16_t *address,
	unsigned int *imm8)
{
	uint16_t instruction = *address;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_uncond_branch_16_decode_fields (
	uint16_t *address,
	unsigned int *imm11)
{
	uint16_t instruction = *address;
	*imm11 = (instruction >> 0) & 0x7ff;
}
void thumb_data_proc_12bit_i_32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *opcode,
	unsigned int *set_condition,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*imm1 = (instruction >> 26) & 0x1;
	*opcode = (instruction >> 21) & 0x1f;
	*set_condition = (instruction >> 20) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_data_proc_12bit_i_plain_32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *opcode,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*imm1 = (instruction >> 26) & 0x1;
	*opcode = (instruction >> 20) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_data_proc_16bit_i_32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *opcode,
	unsigned int *imm4,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*imm1 = (instruction >> 26) & 0x1;
	*opcode = (instruction >> 20) & 0x3f;
	*imm4 = (instruction >> 16) & 0xf;
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_data_proc_bit_field_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *imm5)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*opcode = (instruction >> 21) & 0x7;
	*rn = (instruction >> 16) & 0x1f;
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm2 = (instruction >> 6) & 0x3;
	*imm5 = (instruction >> 0) & 0x1f;
}
void thumb_data_proc_const_shift_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *set_flags,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *shift_type,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*opcode = (instruction >> 21) & 0xf;
	*set_flags = (instruction >> 20) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*imm3 = (instruction >> 12) & 0x7;
	*rd = (instruction >> 8) & 0xf;
	*imm2 = (instruction >> 6) & 0x3;
	*shift_type = (instruction >> 4) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_data_proc_reg_shift_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *set_flags,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *opcode2,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*opcode = (instruction >> 21) & 0x3;
	*set_flags = (instruction >> 20) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*rd = (instruction >> 8) & 0xf;
	*opcode2 = (instruction >> 4) & 0x7;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_data_proc_sign_zero_ext_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rotate,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*opcode = (instruction >> 20) & 0x7;
	*rn = (instruction >> 16) & 0xf;
	*rd = (instruction >> 8) & 0xf;
	*rotate = (instruction >> 4) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_data_proc_simd_add_sub_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *pref,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*opcode = (instruction >> 20) & 0x7;
	*rn = (instruction >> 16) & 0xf;
	*rd = (instruction >> 8) & 0xf;
	*pref = (instruction >> 4) & 0x7;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_data_proc_other_3reg_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *opcode2,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*opcode = (instruction >> 20) & 0x7;
	*rn = (instruction >> 16) & 0xf;
	*rd = (instruction >> 8) & 0xf;
	*opcode2 = (instruction >> 4) & 0x7;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_data_proc_32_mult_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *rn,
	unsigned int *racc,
	unsigned int *rd,
	unsigned int *opcode2,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*opcode = (instruction >> 20) & 0x7;
	*rn = (instruction >> 16) & 0xf;
	*racc = (instruction >> 12) & 0xf;
	*rd = (instruction >> 8) & 0xf;
	*opcode2 = (instruction >> 4) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_data_proc_64_mult_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *rn,
	unsigned int *rdlo,
	unsigned int *rdhi,
	unsigned int *opcode2,
	unsigned int *n_high,
	unsigned int *m_swap,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*opcode = (instruction >> 20) & 0x7;
	*rn = (instruction >> 16) & 0xf;
	*rdlo = (instruction >> 12) & 0xf;
	*rdhi = (instruction >> 8) & 0xf;
	*opcode2 = (instruction >> 6) & 0x3;
	*n_high = (instruction >> 5) & 0x1;
	*m_swap = (instruction >> 4) & 0x1;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_load_store_single_reg_imm12_32_decode_fields (
	uint16_t *address,
	unsigned int *sign_ext,
	unsigned int *upwards,
	unsigned int *size,
	unsigned int *load_store,
	unsigned int *rn,
	unsigned int *rt,
	unsigned int *imm12)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*sign_ext = (instruction >> 24) & 0x1;
	*upwards = (instruction >> 23) & 0x1;
	*size = (instruction >> 21) & 0x3;
	*load_store = (instruction >> 20) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*rt = (instruction >> 12) & 0xf;
	*imm12 = (instruction >> 0) & 0xfff;
}
void thumb_load_store_single_reg_off_32_decode_fields (
	uint16_t *address,
	unsigned int *sign_ext,
	unsigned int *size,
	unsigned int *load_store,
	unsigned int *rn,
	unsigned int *rt,
	unsigned int *shift,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*sign_ext = (instruction >> 24) & 0x1;
	*size = (instruction >> 21) & 0x3;
	*load_store = (instruction >> 20) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*rt = (instruction >> 12) & 0xf;
	*shift = (instruction >> 4) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_pld_t2_32_decode_fields (
	uint16_t *address,
	unsigned int *sign_ext,
	unsigned int *size,
	unsigned int *load_store,
	unsigned int *rn,
	unsigned int *rt,
	unsigned int *opcode,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*sign_ext = (instruction >> 24) & 0x1;
	*size = (instruction >> 21) & 0x3;
	*load_store = (instruction >> 20) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*rt = (instruction >> 12) & 0xf;
	*opcode = (instruction >> 8) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_load_store_double_ex_decode_fields (
	uint16_t *address,
	unsigned int *pre_index,
	unsigned int *upwards,
	unsigned int *writeback,
	unsigned int *load_store,
	unsigned int *rn,
	unsigned int *rt,
	unsigned int *rd,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*pre_index = (instruction >> 24) & 0x1;
	*upwards = (instruction >> 23) & 0x1;
	*writeback = (instruction >> 21) & 0x1;
	*load_store = (instruction >> 20) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*rt = (instruction >> 12) & 0xf;
	*rd = (instruction >> 8) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_load_store_ex_tb_branch_decode_fields (
	uint16_t *address,
	unsigned int *pre_index,
	unsigned int *upwards,
	unsigned int *writeback,
	unsigned int *load_store,
	unsigned int *rn,
	unsigned int *rt,
	unsigned int *rd,
	unsigned int *opcode,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*pre_index = (instruction >> 24) & 0x1;
	*upwards = (instruction >> 23) & 0x1;
	*writeback = (instruction >> 21) & 0x1;
	*load_store = (instruction >> 20) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*rt = (instruction >> 12) & 0xf;
	*rd = (instruction >> 8) & 0xf;
	*opcode = (instruction >> 4) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_load_store_multiple32_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *writeback,
	unsigned int *load,
	unsigned int *rn,
	unsigned int *reglist)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*opcode = (instruction >> 22) & 0x7;
	*writeback = (instruction >> 21) & 0x1;
	*load = (instruction >> 20) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*reglist = (instruction >> 0) & 0xffff;
}
void thumb_branch32_decode_fields (
	uint16_t *address,
	unsigned int *sign_bit,
	unsigned int *offset_high,
	unsigned int *link,
	unsigned int *j1,
	unsigned int *thumb_mode,
	unsigned int *j2,
	unsigned int *offset_low)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*sign_bit = (instruction >> 26) & 0x1;
	*offset_high = (instruction >> 16) & 0x3ff;
	*link = (instruction >> 14) & 0x1;
	*j1 = (instruction >> 13) & 0x1;
	*thumb_mode = (instruction >> 12) & 0x1;
	*j2 = (instruction >> 11) & 0x1;
	*offset_low = (instruction >> 0) & 0x7ff;
}
void thumb_branch_cond32_decode_fields (
	uint16_t *address,
	unsigned int *sign_bit,
	unsigned int *condition,
	unsigned int *offset_high,
	unsigned int *j1,
	unsigned int *j2,
	unsigned int *offset_low)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*sign_bit = (instruction >> 26) & 0x1;
	*condition = (instruction >> 22) & 0xf;
	*offset_high = (instruction >> 16) & 0x3f;
	*j1 = (instruction >> 13) & 0x1;
	*j2 = (instruction >> 11) & 0x1;
	*offset_low = (instruction >> 0) & 0x7ff;
}
void thumb_special_control_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *option)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*opcode = (instruction >> 4) & 0xf;
	*option = (instruction >> 0) & 0xf;
}
void thumb_status_reg_access_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *s_or_c,
	unsigned int *rn,
	unsigned int *rd)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*opcode = (instruction >> 21) & 0x3;
	*s_or_c = (instruction >> 20) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*rd = (instruction >> 8) & 0xf;
}
void thumb_coproc_proc_decode_fields (
	uint16_t *address,
	unsigned int *opc1,
	unsigned int *crn,
	unsigned int *crd,
	unsigned int *coproc,
	unsigned int *opc2,
	unsigned int *crm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*opc1 = (instruction >> 20) & 0xf;
	*crn = (instruction >> 16) & 0xf;
	*crd = (instruction >> 12) & 0xf;
	*coproc = (instruction >> 8) & 0xf;
	*opc2 = (instruction >> 5) & 0x7;
	*crm = (instruction >> 0) & 0xf;
}
void thumb_coproc_trans_decode_fields (
	uint16_t *address,
	unsigned int *opc1,
	unsigned int *load,
	unsigned int *crn,
	unsigned int *rt,
	unsigned int *coproc,
	unsigned int *opc2,
	unsigned int *crm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*opc1 = (instruction >> 21) & 0x7;
	*load = (instruction >> 20) & 0x1;
	*crn = (instruction >> 16) & 0xf;
	*rt = (instruction >> 12) & 0xf;
	*coproc = (instruction >> 8) & 0xf;
	*opc2 = (instruction >> 5) & 0x7;
	*crm = (instruction >> 0) & 0xf;
}
void thumb_vmov_arm_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *to_arm,
	unsigned int *rt2,
	unsigned int *rt,
	unsigned int *double_single,
	unsigned int *n,
	unsigned int *f2,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*opcode = (instruction >> 21) & 0x1f;
	*to_arm = (instruction >> 20) & 0x1;
	*rt2 = (instruction >> 16) & 0xf;
	*rt = (instruction >> 12) & 0xf;
	*double_single = (instruction >> 8) & 0x1;
	*n = (instruction >> 7) & 0x1;
	*f2 = (instruction >> 6) & 0x1;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_vmov_decode_fields (
	uint16_t *address,
	unsigned int *type,
	unsigned int *d,
	unsigned int *opcode,
	unsigned int *vm2,
	unsigned int *vd,
	unsigned int *opcode2,
	unsigned int *m2,
	unsigned int *q,
	unsigned int *m,
	unsigned int *opcode3,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*type = (instruction >> 23) & 0x3;
	*d = (instruction >> 22) & 0x1;
	*opcode = (instruction >> 20) & 0x3;
	*vm2 = (instruction >> 16) & 0xf;
	*vd = (instruction >> 12) & 0xf;
	*opcode2 = (instruction >> 8) & 0xf;
	*m2 = (instruction >> 7) & 0x1;
	*q = (instruction >> 6) & 0x1;
	*m = (instruction >> 5) & 0x1;
	*opcode3 = (instruction >> 4) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_vmovi_neon_decode_fields (
	uint16_t *address,
	unsigned int *i,
	unsigned int *d,
	unsigned int *imm3,
	unsigned int *vd,
	unsigned int *cmode,
	unsigned int *q,
	unsigned int *op,
	unsigned int *imm4)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*i = (instruction >> 28) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*imm3 = (instruction >> 16) & 0x7;
	*vd = (instruction >> 12) & 0xf;
	*cmode = (instruction >> 8) & 0xf;
	*q = (instruction >> 6) & 0x1;
	*op = (instruction >> 5) & 0x1;
	*imm4 = (instruction >> 0) & 0xf;
}
void thumb_vmovi_decode_fields (
	uint16_t *address,
	unsigned int *d,
	unsigned int *immh,
	unsigned int *vd,
	unsigned int *sz,
	unsigned int *imml)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*d = (instruction >> 22) & 0x1;
	*immh = (instruction >> 16) & 0xf;
	*vd = (instruction >> 12) & 0xf;
	*sz = (instruction >> 8) & 0x1;
	*imml = (instruction >> 0) & 0xf;
}
void thumb_vfp_ldr_str_decode_fields (
	uint16_t *address,
	unsigned int *upwards,
	unsigned int *d,
	unsigned int *load_store,
	unsigned int *rn,
	unsigned int *vd,
	unsigned int *double_reg,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*upwards = (instruction >> 23) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*load_store = (instruction >> 20) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*vd = (instruction >> 12) & 0xf;
	*double_reg = (instruction >> 8) & 0x1;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_vcmp_decode_fields (
	uint16_t *address,
	unsigned int *d,
	unsigned int *empty,
	unsigned int *vd,
	unsigned int *sz,
	unsigned int *e,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*d = (instruction >> 22) & 0x1;
	*empty = (instruction >> 16) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*sz = (instruction >> 8) & 0x1;
	*e = (instruction >> 7) & 0x1;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_v_s_ldm_decode_fields (
	uint16_t *address,
	unsigned int *p,
	unsigned int *upwards,
	unsigned int *d,
	unsigned int *writeback,
	unsigned int *load_store,
	unsigned int *rn,
	unsigned int *vd,
	unsigned int *double_prec,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*p = (instruction >> 24) & 0x1;
	*upwards = (instruction >> 23) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*writeback = (instruction >> 21) & 0x1;
	*load_store = (instruction >> 20) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*vd = (instruction >> 12) & 0xf;
	*double_prec = (instruction >> 8) & 0x1;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_vadd_decode_fields (
	uint16_t *address,
	unsigned int *sub_add,
	unsigned int *single_prec,
	unsigned int *d,
	unsigned int *sz,
	unsigned int *vn,
	unsigned int *vd,
	unsigned int *opcode,
	unsigned int *n,
	unsigned int *q,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*sub_add = (instruction >> 28) & 0x1;
	*single_prec = (instruction >> 24) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*sz = (instruction >> 20) & 0x3;
	*vn = (instruction >> 16) & 0xf;
	*vd = (instruction >> 12) & 0xf;
	*opcode = (instruction >> 8) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*q = (instruction >> 6) & 0x1;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_vneg_decode_fields (
	uint16_t *address,
	unsigned int *single_prec,
	unsigned int *d,
	unsigned int *size,
	unsigned int *vd,
	unsigned int *double_prec,
	unsigned int *f,
	unsigned int *f5,
	unsigned int *sz,
	unsigned int *q,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*single_prec = (instruction >> 24) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*size = (instruction >> 18) & 0x3;
	*vd = (instruction >> 12) & 0xf;
	*double_prec = (instruction >> 11) & 0x1;
	*f = (instruction >> 10) & 0x1;
	*f5 = (instruction >> 8) & 0x1;
	*sz = (instruction >> 7) & 0x1;
	*q = (instruction >> 6) & 0x1;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_vml_decode_fields (
	uint16_t *address,
	unsigned int *op,
	unsigned int *opcode2,
	unsigned int *scalar,
	unsigned int *d,
	unsigned int *size,
	unsigned int *vn,
	unsigned int *vd,
	unsigned int *f2,
	unsigned int *opcode3,
	unsigned int *f3,
	unsigned int *f,
	unsigned int *n,
	unsigned int *q,
	unsigned int *m,
	unsigned int *f4,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*op = (instruction >> 28) & 0x1;
	*opcode2 = (instruction >> 24) & 0x1;
	*scalar = (instruction >> 23) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*size = (instruction >> 20) & 0x3;
	*vn = (instruction >> 16) & 0xf;
	*vd = (instruction >> 12) & 0xf;
	*f2 = (instruction >> 11) & 0x1;
	*opcode3 = (instruction >> 10) & 0x1;
	*f3 = (instruction >> 9) & 0x1;
	*f = (instruction >> 8) & 0x1;
	*n = (instruction >> 7) & 0x1;
	*q = (instruction >> 6) & 0x1;
	*m = (instruction >> 5) & 0x1;
	*f4 = (instruction >> 4) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_vcvt_decode_fields (
	uint16_t *address,
	unsigned int *u,
	unsigned int *opcode2,
	unsigned int *d,
	unsigned int *opcode3,
	unsigned int *vd,
	unsigned int *opcode4,
	unsigned int *op,
	unsigned int *q,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*u = (instruction >> 28) & 0x1;
	*opcode2 = (instruction >> 24) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*opcode3 = (instruction >> 16) & 0xf;
	*vd = (instruction >> 12) & 0xf;
	*opcode4 = (instruction >> 8) & 0xf;
	*op = (instruction >> 7) & 0x1;
	*q = (instruction >> 6) & 0x1;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_vdiv_decode_fields (
	uint16_t *address,
	unsigned int *d,
	unsigned int *vn,
	unsigned int *vd,
	unsigned int *sz,
	unsigned int *n,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*d = (instruction >> 22) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*vd = (instruction >> 12) & 0xf;
	*sz = (instruction >> 8) & 0x1;
	*n = (instruction >> 7) & 0x1;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_fpv_op_decode_fields (
	uint16_t *address,
	unsigned int *d,
	unsigned int *opcode,
	unsigned int *vn,
	unsigned int *vd,
	unsigned int *opcode2,
	unsigned int *sz,
	unsigned int *n,
	unsigned int *q,
	unsigned int *m,
	unsigned int *z,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*d = (instruction >> 22) & 0x1;
	*opcode = (instruction >> 20) & 0x3;
	*vn = (instruction >> 16) & 0xf;
	*vd = (instruction >> 12) & 0xf;
	*opcode2 = (instruction >> 9) & 0x7;
	*sz = (instruction >> 8) & 0x1;
	*n = (instruction >> 7) & 0x1;
	*q = (instruction >> 6) & 0x1;
	*m = (instruction >> 5) & 0x1;
	*z = (instruction >> 4) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_simd_op_decode_fields (
	uint16_t *address,
	unsigned int *d,
	unsigned int *sz,
	unsigned int *vn,
	unsigned int *vd,
	unsigned int *opcode,
	unsigned int *n,
	unsigned int *q,
	unsigned int *m,
	unsigned int *z,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*d = (instruction >> 22) & 0x1;
	*sz = (instruction >> 20) & 0x3;
	*vn = (instruction >> 16) & 0xf;
	*vd = (instruction >> 12) & 0xf;
	*opcode = (instruction >> 8) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*q = (instruction >> 6) & 0x1;
	*m = (instruction >> 5) & 0x1;
	*z = (instruction >> 4) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_imm6_decode_fields (
	uint16_t *address,
	unsigned int *u,
	unsigned int *d,
	unsigned int *imm6,
	unsigned int *vd,
	unsigned int *opcode3,
	unsigned int *opcode4,
	unsigned int *l,
	unsigned int *q,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*u = (instruction >> 28) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*imm6 = (instruction >> 16) & 0x3f;
	*vd = (instruction >> 12) & 0xf;
	*opcode3 = (instruction >> 9) & 0x7;
	*opcode4 = (instruction >> 8) & 0x1;
	*l = (instruction >> 7) & 0x1;
	*q = (instruction >> 6) & 0x1;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_trans_mult_lane_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *d,
	unsigned int *opcode2,
	unsigned int *rn,
	unsigned int *vd,
	unsigned int *size,
	unsigned int *element_size,
	unsigned int *sz,
	unsigned int *align,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*opcode = (instruction >> 23) & 0x1;
	*d = (instruction >> 22) & 0x1;
	*opcode2 = (instruction >> 20) & 0x3;
	*rn = (instruction >> 16) & 0xf;
	*vd = (instruction >> 12) & 0xf;
	*size = (instruction >> 10) & 0x3;
	*element_size = (instruction >> 8) & 0x3;
	*sz = (instruction >> 6) & 0x3;
	*align = (instruction >> 4) & 0x3;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_neon_imm4_2reg_decode_fields (
	uint16_t *address,
	unsigned int *d,
	unsigned int *imm4,
	unsigned int *vd,
	unsigned int *opcode,
	unsigned int *opcode2,
	unsigned int *q,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*d = (instruction >> 22) & 0x1;
	*imm4 = (instruction >> 16) & 0xf;
	*vd = (instruction >> 12) & 0xf;
	*opcode = (instruction >> 8) & 0xf;
	*opcode2 = (instruction >> 7) & 0x1;
	*q = (instruction >> 6) & 0x1;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_neon_imm4_3reg_decode_fields (
	uint16_t *address,
	unsigned int *d,
	unsigned int *vn,
	unsigned int *vd,
	unsigned int *imm4,
	unsigned int *n,
	unsigned int *q,
	unsigned int *m,
	unsigned int *vm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*d = (instruction >> 22) & 0x1;
	*vn = (instruction >> 16) & 0xf;
	*vd = (instruction >> 12) & 0xf;
	*imm4 = (instruction >> 8) & 0xf;
	*n = (instruction >> 7) & 0x1;
	*q = (instruction >> 6) & 0x1;
	*m = (instruction >> 5) & 0x1;
	*vm = (instruction >> 0) & 0xf;
}
void thumb_data_proc_rd_rn_rm_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
}
void thumb_data_proc_rd_rn_rm_ra_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm,
	unsigned int *ra)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*rd = (instruction >> 8) & 0xf;
	*rn = (instruction >> 16) & 0xf;
	*rm = (instruction >> 0) & 0xf;
	*ra = (instruction >> 12) & 0xf;
}
void thumb_vfp_ld_st_m_decode_fields (
	uint16_t *address,
	unsigned int *p,
	unsigned int *upwards,
	unsigned int *writeback,
	unsigned int *rn,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*p = (instruction >> 24) & 0x1;
	*upwards = (instruction >> 23) & 0x1;
	*writeback = (instruction >> 21) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
void thumb_vfp_vldr_vstr_decode_fields (
	uint16_t *address,
	unsigned int *upwards,
	unsigned int *rn,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *imm8)
{
	uint32_t instruction = ((*address) << 16) | *(address + 1);
	*upwards = (instruction >> 23) & 0x1;
	*rn = (instruction >> 16) & 0xf;
	*d = (instruction >> 22) & 0x1;
	*vd = (instruction >> 12) & 0xf;
	*imm8 = (instruction >> 0) & 0xff;
}
