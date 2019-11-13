#ifndef __THUMB_PIE_FIELD_DECODER_H__
#define __THUMB_PIE_FIELD_DECODER_H__
#include <stdint.h>
void thumb_adc16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rdn);
void thumb_add16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rn,
	unsigned int *rd);
void thumb_add_from_pc16_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *imm8);
void thumb_add_from_sp16_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *imm8);
void thumb_addh16_decode_fields (
	uint16_t *address,
	unsigned int *dn,
	unsigned int *rm,
	unsigned int *rdn);
void thumb_addi16_decode_fields (
	uint16_t *address,
	unsigned int *imm3,
	unsigned int *rn,
	unsigned int *rd);
void thumb_addri16_decode_fields (
	uint16_t *address,
	unsigned int *rdn,
	unsigned int *imm8);
void thumb_add_sp_i16_decode_fields (
	uint16_t *address,
	unsigned int *imm7);
void thumb_and16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rdn);
void thumb_asr16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rdn);
void thumb_asri16_decode_fields (
	uint16_t *address,
	unsigned int *imm5,
	unsigned int *rm,
	unsigned int *rd);
void thumb_b16_decode_fields (
	uint16_t *address,
	unsigned int *imm11);
void thumb_bic16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rdn);
void thumb_bkpt16_decode_fields (
	uint16_t *address,
	unsigned int *imm8);
void thumb_b_cond16_decode_fields (
	uint16_t *address,
	unsigned int *condition,
	unsigned int *imm8);
void thumb_blx16_decode_fields (
	uint16_t *address,
	unsigned int *rm);
void thumb_bx16_decode_fields (
	uint16_t *address,
	unsigned int *rm);
void thumb_cbnz16_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *imm5,
	unsigned int *rn);
void thumb_cbz16_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *imm5,
	unsigned int *rn);
void thumb_cmn16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rdn);
void thumb_cmp16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rdn);
void thumb_cmph16_decode_fields (
	uint16_t *address,
	unsigned int *dn,
	unsigned int *rm,
	unsigned int *rdn);
void thumb_cmpri16_decode_fields (
	uint16_t *address,
	unsigned int *rdn,
	unsigned int *imm8);
void thumb_eor16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rdn);
void thumb_it16_decode_fields (
	uint16_t *address,
	unsigned int *cond,
	unsigned int *mask);
void thumb_ldmfd16_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *reglist);
void thumb_ldr16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rn,
	unsigned int *rd);
void thumb_ldrb16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rn,
	unsigned int *rd);
void thumb_ldrbi16_decode_fields (
	uint16_t *address,
	unsigned int *imm5,
	unsigned int *rn,
	unsigned int *rd);
void thumb_ldrh16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rn,
	unsigned int *rd);
void thumb_ldrhi16_decode_fields (
	uint16_t *address,
	unsigned int *imm5,
	unsigned int *rn,
	unsigned int *rd);
void thumb_ldri16_decode_fields (
	uint16_t *address,
	unsigned int *imm5,
	unsigned int *rn,
	unsigned int *rd);
void thumb_ldr_pc_16_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *imm8);
void thumb_ldrsb16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rn,
	unsigned int *rd);
void thumb_ldrsh16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rn,
	unsigned int *rd);
void thumb_ldr_sp16_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *imm8);
void thumb_lsl16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rdn);
void thumb_lsli16_decode_fields (
	uint16_t *address,
	unsigned int *imm5,
	unsigned int *rm,
	unsigned int *rd);
void thumb_lsr16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rdn);
void thumb_lsri16_decode_fields (
	uint16_t *address,
	unsigned int *imm5,
	unsigned int *rm,
	unsigned int *rd);
void thumb_movh16_decode_fields (
	uint16_t *address,
	unsigned int *dn,
	unsigned int *rm,
	unsigned int *rdn);
void thumb_movi16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rd);
void thumb_movri16_decode_fields (
	uint16_t *address,
	unsigned int *rdn,
	unsigned int *imm8);
void thumb_mul16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rdn);
void thumb_mvn16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rdn);
void thumb_orr16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rdn);
void thumb_pop16_decode_fields (
	uint16_t *address,
	unsigned int *reg);
void thumb_push16_decode_fields (
	uint16_t *address,
	unsigned int *reg);
void thumb_rev16_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd);
void thumb_rev1616_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd);
void thumb_revsh16_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd);
void thumb_ror16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rdn);
void thumb_rsbi16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rdn);
void thumb_sbc16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rdn);
void thumb_setend16_decode_fields (
	uint16_t *address,
	unsigned int *is_bigend);
void thumb_stmea16_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *reglist);
void thumb_str16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rn,
	unsigned int *rd);
void thumb_strb16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rn,
	unsigned int *rd);
void thumb_strbi16_decode_fields (
	uint16_t *address,
	unsigned int *imm5,
	unsigned int *rn,
	unsigned int *rd);
void thumb_strh16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rn,
	unsigned int *rd);
void thumb_strhi16_decode_fields (
	uint16_t *address,
	unsigned int *imm5,
	unsigned int *rn,
	unsigned int *rd);
void thumb_stri16_decode_fields (
	uint16_t *address,
	unsigned int *imm5,
	unsigned int *rn,
	unsigned int *rd);
void thumb_str_sp16_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *imm8);
void thumb_sub16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rn,
	unsigned int *rd);
void thumb_subi16_decode_fields (
	uint16_t *address,
	unsigned int *imm3,
	unsigned int *rn,
	unsigned int *rd);
void thumb_subri16_decode_fields (
	uint16_t *address,
	unsigned int *rdn,
	unsigned int *imm8);
void thumb_sub_sp_i16_decode_fields (
	uint16_t *address,
	unsigned int *imm7);
void thumb_svc16_decode_fields (
	uint16_t *address,
	unsigned int *imm8);
void thumb_sxtb16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rd);
void thumb_sxth16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rd);
void thumb_tst16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rdn);
void thumb_udf16_decode_fields (
	uint16_t *address,
	unsigned int *imm8);
void thumb_uxtb16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rd);
void thumb_uxth16_decode_fields (
	uint16_t *address,
	unsigned int *rm,
	unsigned int *rd);
void thumb_adc32_decode_fields (
	uint16_t *address,
	unsigned int *set_flags,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *shift_type,
	unsigned int *rm);
void thumb_adci32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *set_condition,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm8);
void thumb_add32_decode_fields (
	uint16_t *address,
	unsigned int *set_flags,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *shift_type,
	unsigned int *rm);
void thumb_addi32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *set_condition,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm8);
void thumb_addwi32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm8);
void thumb_adrwi_post32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm8);
void thumb_adrwi_pre32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm8);
void thumb_and32_decode_fields (
	uint16_t *address,
	unsigned int *set_flags,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *shift_type,
	unsigned int *rm);
void thumb_andi32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *set_condition,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm8);
void thumb_asr32_decode_fields (
	uint16_t *address,
	unsigned int *set_flags,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rm);
void thumb_asri32_decode_fields (
	uint16_t *address,
	unsigned int *set_flags,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *rm);
void thumb_b32_decode_fields (
	uint16_t *address,
	unsigned int *sign_bit,
	unsigned int *offset_high,
	unsigned int *j1,
	unsigned int *j2,
	unsigned int *offset_low);
void thumb_b_cond32_decode_fields (
	uint16_t *address,
	unsigned int *sign_bit,
	unsigned int *condition,
	unsigned int *offset_high,
	unsigned int *j1,
	unsigned int *j2,
	unsigned int *offset_low);
void thumb_bfc32_decode_fields (
	uint16_t *address,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *imm5);
void thumb_bfi32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *imm5);
void thumb_bic32_decode_fields (
	uint16_t *address,
	unsigned int *set_flags,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *shift_type,
	unsigned int *rm);
void thumb_bici32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *set_condition,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm8);
void thumb_bl32_decode_fields (
	uint16_t *address,
	unsigned int *sign_bit,
	unsigned int *offset_high,
	unsigned int *j1,
	unsigned int *j2,
	unsigned int *offset_low);
void thumb_bl_arm32_decode_fields (
	uint16_t *address,
	unsigned int *sign_bit,
	unsigned int *offset_high,
	unsigned int *j1,
	unsigned int *j2,
	unsigned int *offset_low);
void thumb_cdp32_decode_fields (
	uint16_t *address,
	unsigned int *coproc,
	unsigned int *opc1,
	unsigned int *crd,
	unsigned int *crn,
	unsigned int *crm,
	unsigned int *opc2);
void thumb_cdp232_decode_fields (
	uint16_t *address,
	unsigned int *coproc,
	unsigned int *opc1,
	unsigned int *crd,
	unsigned int *crn,
	unsigned int *crm,
	unsigned int *opc2);
void thumb_clrex32_decode_fields (
	uint16_t *address,
	unsigned int *option);
void thumb_clz32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rm);
void thumb_cmn32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *imm2,
	unsigned int *shift_type,
	unsigned int *rm);
void thumb_cmni32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *imm8);
void thumb_cmp32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *imm2,
	unsigned int *shift_type,
	unsigned int *rm);
void thumb_cmpi32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *imm8);
void thumb_dbg32_decode_fields (
	uint16_t *address,
	unsigned int *option);
void thumb_dmb32_decode_fields (
	uint16_t *address,
	unsigned int *option);
void thumb_dsb32_decode_fields (
	uint16_t *address,
	unsigned int *option);
void thumb_eor32_decode_fields (
	uint16_t *address,
	unsigned int *set_flags,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *shift_type,
	unsigned int *rm);
void thumb_eori32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *set_condition,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm8);
void thumb_isb32_decode_fields (
	uint16_t *address,
	unsigned int *option);
void thumb_ldc32_decode_fields (
	uint16_t *address,
	unsigned int *coproc,
	unsigned int *d,
	unsigned int *crd,
	unsigned int *rn,
	unsigned int *pre_index,
	unsigned int *upwards,
	unsigned int *writeback,
	unsigned int *imm8);
void thumb_ldc232_decode_fields (
	uint16_t *address,
	unsigned int *coproc,
	unsigned int *d,
	unsigned int *crd,
	unsigned int *rn,
	unsigned int *pre_index,
	unsigned int *upwards,
	unsigned int *writeback,
	unsigned int *imm8);
void thumb_ldmea32_decode_fields (
	uint16_t *address,
	unsigned int *writeback,
	unsigned int *rn,
	unsigned int *reglist);
void thumb_ldmfd32_decode_fields (
	uint16_t *address,
	unsigned int *writeback,
	unsigned int *rn,
	unsigned int *reglist);
void thumb_ldr32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rt,
	unsigned int *shift,
	unsigned int *rm);
void thumb_ldrb32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rt,
	unsigned int *shift,
	unsigned int *rm);
void thumb_ldrbi32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm8,
	unsigned int *pre_index,
	unsigned int *upwards,
	unsigned int *writeback);
void thumb_ldrbl32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *imm12,
	unsigned int *upwards);
void thumb_ldrbwi32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm12);
void thumb_ldrbt32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm8);
void thumb_ldrd32_decode_fields (
	uint16_t *address,
	unsigned int *pre_index,
	unsigned int *upwards,
	unsigned int *writeback,
	unsigned int *rn,
	unsigned int *rt,
	unsigned int *rd,
	unsigned int *imm8);
void thumb_ldrex32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rt,
	unsigned int *imm8);
void thumb_ldrexb32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rt);
void thumb_ldrexd32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rt,
	unsigned int *rt2);
void thumb_ldrexh32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rt);
void thumb_ldrh32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rt,
	unsigned int *shift,
	unsigned int *rm);
void thumb_ldrhi32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm8,
	unsigned int *pre_index,
	unsigned int *upwards,
	unsigned int *writeback);
void thumb_ldrhl32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *imm12,
	unsigned int *upwards);
void thumb_ldrhwi32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm12);
void thumb_ldrht32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm8);
void thumb_ldri32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm8,
	unsigned int *pre_index,
	unsigned int *upwards,
	unsigned int *writeback);
void thumb_ldrl32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *imm12,
	unsigned int *upwards);
void thumb_ldrsb32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rt,
	unsigned int *shift,
	unsigned int *rm);
void thumb_ldrsbi32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm8,
	unsigned int *pre_index,
	unsigned int *upwards,
	unsigned int *writeback);
void thumb_ldrsbl32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *imm12,
	unsigned int *upwards);
void thumb_ldrsbwi32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm12);
void thumb_ldrsbt32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm8);
void thumb_ldrsh32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rt,
	unsigned int *shift,
	unsigned int *rm);
void thumb_ldrshi32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm8,
	unsigned int *pre_index,
	unsigned int *upwards,
	unsigned int *writeback);
void thumb_ldrshl32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *imm12,
	unsigned int *upwards);
void thumb_ldrshwi32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm12);
void thumb_ldrsht32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm8);
void thumb_ldrt32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm8);
void thumb_ldrwi32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm12);
void thumb_lsl32_decode_fields (
	uint16_t *address,
	unsigned int *set_flags,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rm);
void thumb_lsli32_decode_fields (
	uint16_t *address,
	unsigned int *set_flags,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *rm);
void thumb_lsr32_decode_fields (
	uint16_t *address,
	unsigned int *set_flags,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rm);
void thumb_lsri32_decode_fields (
	uint16_t *address,
	unsigned int *set_flags,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *rm);
void thumb_mcr32_decode_fields (
	uint16_t *address,
	unsigned int *opc1,
	unsigned int *crn,
	unsigned int *rt,
	unsigned int *coproc,
	unsigned int *opc2,
	unsigned int *crm);
void thumb_mcr232_decode_fields (
	uint16_t *address,
	unsigned int *opc1,
	unsigned int *crn,
	unsigned int *rt,
	unsigned int *coproc,
	unsigned int *opc2,
	unsigned int *crm);
void thumb_mcrr32_decode_fields (
	uint16_t *address,
	unsigned int *coproc,
	unsigned int *opc1,
	unsigned int *rt,
	unsigned int *rt2,
	unsigned int *crm);
void thumb_mcrr232_decode_fields (
	uint16_t *address,
	unsigned int *coproc,
	unsigned int *opc1,
	unsigned int *rt,
	unsigned int *rt2,
	unsigned int *crm);
void thumb_mla32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *racc,
	unsigned int *rd,
	unsigned int *rm);
void thumb_mls32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *racc,
	unsigned int *rd,
	unsigned int *rm);
void thumb_mov32_decode_fields (
	uint16_t *address,
	unsigned int *set_flags,
	unsigned int *rd,
	unsigned int *rm);
void thumb_movi32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *set_condition,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm8);
void thumb_movwi32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *imm4,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm8);
void thumb_movti32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *imm4,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm8);
void thumb_mrc32_decode_fields (
	uint16_t *address,
	unsigned int *opc1,
	unsigned int *crn,
	unsigned int *rt,
	unsigned int *coproc,
	unsigned int *opc2,
	unsigned int *crm);
void thumb_mrc232_decode_fields (
	uint16_t *address,
	unsigned int *opc1,
	unsigned int *crn,
	unsigned int *rt,
	unsigned int *coproc,
	unsigned int *opc2,
	unsigned int *crm);
void thumb_mrrc32_decode_fields (
	uint16_t *address,
	unsigned int *coproc,
	unsigned int *opc,
	unsigned int *rt,
	unsigned int *rt2,
	unsigned int *crm);
void thumb_mrrc232_decode_fields (
	uint16_t *address,
	unsigned int *coproc,
	unsigned int *opc,
	unsigned int *rt,
	unsigned int *rt2,
	unsigned int *crm);
void thumb_mrs32_decode_fields (
	uint16_t *address,
	unsigned int *rd);
void thumb_msr32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *mask);
void thumb_mul32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rm);
void thumb_mvn32_decode_fields (
	uint16_t *address,
	unsigned int *set_flags,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *shift_type,
	unsigned int *rm);
void thumb_mvni32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *set_condition,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm8);
void thumb_orn32_decode_fields (
	uint16_t *address,
	unsigned int *set_flags,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *shift_type,
	unsigned int *rm);
void thumb_orni32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *set_condition,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm8);
void thumb_orr32_decode_fields (
	uint16_t *address,
	unsigned int *set_flags,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *shift_type,
	unsigned int *rm);
void thumb_orri32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *set_condition,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm8);
void thumb_pkh32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *shift_type,
	unsigned int *rm);
void thumb_pld32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *shift,
	unsigned int *rm);
void thumb_pldi32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *imm12);
void thumb_pldim32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *imm8);
void thumb_pld_lit32_decode_fields (
	uint16_t *address,
	unsigned int *upwards,
	unsigned int *imm12);
void thumb_pldw32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *shift,
	unsigned int *rm);
void thumb_pldwi32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *imm12);
void thumb_pldwim32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *imm8);
void thumb_pli32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rm,
	unsigned int *shift);
void thumb_plii32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *imm12);
void thumb_pliim32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *imm8);
void thumb_pli_lit32_decode_fields (
	uint16_t *address,
	unsigned int *upwards,
	unsigned int *imm12);
void thumb_qadd32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rm);
void thumb_qadd1632_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void thumb_qadd832_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void thumb_qasx32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void thumb_qdadd32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rm);
void thumb_qdsub32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rm);
void thumb_qsax32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void thumb_qsub32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rm);
void thumb_qsub1632_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void thumb_qsub832_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void thumb_rbit32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rm);
void thumb_rev32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rm);
void thumb_rev1632_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rm);
void thumb_revsh32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rm);
void thumb_ror32_decode_fields (
	uint16_t *address,
	unsigned int *set_flags,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rm);
void thumb_rori32_decode_fields (
	uint16_t *address,
	unsigned int *set_flags,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *rm);
void thumb_rrx32_decode_fields (
	uint16_t *address,
	unsigned int *set_flags,
	unsigned int *rd,
	unsigned int *rm);
void thumb_rsb32_decode_fields (
	uint16_t *address,
	unsigned int *set_flags,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *shift_type,
	unsigned int *rm);
void thumb_rsbi32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *set_condition,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm8);
void thumb_sadd1632_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void thumb_sadd832_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void thumb_sasx32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void thumb_sbc32_decode_fields (
	uint16_t *address,
	unsigned int *set_flags,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *shift_type,
	unsigned int *rm);
void thumb_sbci32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *set_condition,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm8);
void thumb_sbfx32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *imm5);
void thumb_sdiv32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rdhi,
	unsigned int *rm);
void thumb_sel32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rm);
void thumb_shadd1632_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void thumb_shadd832_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void thumb_shasx32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void thumb_shsax32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void thumb_shsub1632_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void thumb_shsub832_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void thumb_simd_add_sub32_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *pref,
	unsigned int *rm);
void thumb_smlabb32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm,
	unsigned int *ra);
void thumb_smlabt32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm,
	unsigned int *ra);
void thumb_smlatb32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm,
	unsigned int *ra);
void thumb_smlatt32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm,
	unsigned int *ra);
void thumb_smlad32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *racc,
	unsigned int *rd,
	unsigned int *opcode2,
	unsigned int *rm);
void thumb_smlal32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rdlo,
	unsigned int *rdhi,
	unsigned int *rm);
void thumb_smlalbb32_decode_fields (
	uint16_t *address,
	unsigned int *rdlo,
	unsigned int *rdhi,
	unsigned int *rn,
	unsigned int *rm);
void thumb_smlalbt32_decode_fields (
	uint16_t *address,
	unsigned int *rdlo,
	unsigned int *rdhi,
	unsigned int *rn,
	unsigned int *rm);
void thumb_smlaltb32_decode_fields (
	uint16_t *address,
	unsigned int *rdlo,
	unsigned int *rdhi,
	unsigned int *rn,
	unsigned int *rm);
void thumb_smlaltt32_decode_fields (
	uint16_t *address,
	unsigned int *rdlo,
	unsigned int *rdhi,
	unsigned int *rn,
	unsigned int *rm);
void thumb_smlald32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rdlo,
	unsigned int *rdhi,
	unsigned int *m_swap,
	unsigned int *rm);
void thumb_smlawb32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm,
	unsigned int *ra);
void thumb_smlawt32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm,
	unsigned int *ra);
void thumb_smlsd32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *racc,
	unsigned int *rd,
	unsigned int *opcode2,
	unsigned int *rm);
void thumb_smlsld32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rdlo,
	unsigned int *rdhi,
	unsigned int *m_swap,
	unsigned int *rm);
void thumb_smmla32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *racc,
	unsigned int *rd,
	unsigned int *opcode2,
	unsigned int *rm);
void thumb_smmls32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *racc,
	unsigned int *rd,
	unsigned int *opcode2,
	unsigned int *rm);
void thumb_smmul32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *opcode2,
	unsigned int *rm);
void thumb_smuad32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *opcode2,
	unsigned int *rm);
void thumb_smulbb32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void thumb_smulbt32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void thumb_smultb32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void thumb_smultt32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void thumb_smull32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rdlo,
	unsigned int *rdhi,
	unsigned int *rm);
void thumb_smulwb32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rm);
void thumb_smulwt32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rm);
void thumb_smusd32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *opcode2,
	unsigned int *rm);
void thumb_ssat1632_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd);
void thumb_ssat_asr32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *imm5);
void thumb_ssat_lsl32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *imm5);
void thumb_ssax32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void thumb_ssub1632_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void thumb_ssub832_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void thumb_stc32_decode_fields (
	uint16_t *address,
	unsigned int *coproc,
	unsigned int *d,
	unsigned int *crd,
	unsigned int *rn,
	unsigned int *pre_index,
	unsigned int *upwards,
	unsigned int *writeback,
	unsigned int *imm8);
void thumb_stc232_decode_fields (
	uint16_t *address,
	unsigned int *coproc,
	unsigned int *d,
	unsigned int *crd,
	unsigned int *rn,
	unsigned int *pre_index,
	unsigned int *upwards,
	unsigned int *writeback,
	unsigned int *imm8);
void thumb_stmea32_decode_fields (
	uint16_t *address,
	unsigned int *writeback,
	unsigned int *rn,
	unsigned int *reglist);
void thumb_stmfd32_decode_fields (
	uint16_t *address,
	unsigned int *writeback,
	unsigned int *rn,
	unsigned int *reglist);
void thumb_str32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rt,
	unsigned int *shift,
	unsigned int *rm);
void thumb_strb32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rt,
	unsigned int *shift,
	unsigned int *rm);
void thumb_strbi32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm8,
	unsigned int *pre_index,
	unsigned int *upwards,
	unsigned int *writeback);
void thumb_strbwi32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm12);
void thumb_strbt32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm8);
void thumb_strd32_decode_fields (
	uint16_t *address,
	unsigned int *pre_index,
	unsigned int *upwards,
	unsigned int *writeback,
	unsigned int *rn,
	unsigned int *rt,
	unsigned int *rd,
	unsigned int *imm8);
void thumb_strex32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rt,
	unsigned int *rd,
	unsigned int *imm8);
void thumb_strexb32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rt,
	unsigned int *rd);
void thumb_strexd32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rt,
	unsigned int *rt2,
	unsigned int *rd);
void thumb_strexh32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rt,
	unsigned int *rd);
void thumb_strh32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rt,
	unsigned int *shift,
	unsigned int *rm);
void thumb_strhi32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm8,
	unsigned int *pre_index,
	unsigned int *upwards,
	unsigned int *writeback);
void thumb_strhwi32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm12);
void thumb_strht32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm8);
void thumb_stri32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm8,
	unsigned int *pre_index,
	unsigned int *upwards,
	unsigned int *writeback);
void thumb_strt32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm8);
void thumb_strwi32_decode_fields (
	uint16_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *imm12);
void thumb_sub32_decode_fields (
	uint16_t *address,
	unsigned int *set_flags,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *shift_type,
	unsigned int *rm);
void thumb_subi32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *set_condition,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm8);
void thumb_subwi32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm8);
void thumb_sxtab1632_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rotate,
	unsigned int *rm);
void thumb_sxtab32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rotate,
	unsigned int *rm);
void thumb_sxtah32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rotate,
	unsigned int *rm);
void thumb_sxtb1632_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rotate,
	unsigned int *rm);
void thumb_sxtb32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rotate,
	unsigned int *rm);
void thumb_sxth32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rotate,
	unsigned int *rm);
void thumb_tbb32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rm);
void thumb_tbh32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rm);
void thumb_teq32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *imm2,
	unsigned int *shift_type,
	unsigned int *rm);
void thumb_teqi32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *imm8);
void thumb_tst32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *imm2,
	unsigned int *shift_type,
	unsigned int *rm);
void thumb_tsti32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *imm8);
void thumb_uadd1632_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void thumb_uadd832_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void thumb_uasx32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void thumb_ubfx32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *imm5);
void thumb_udf32_decode_fields (
	uint16_t *address,
	unsigned int *imm4,
	unsigned int *imm12);
void thumb_udiv32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rdhi,
	unsigned int *rm);
void thumb_uhadd1632_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void thumb_uhadd832_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void thumb_uhasx32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void thumb_uhsax32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void thumb_uhsub1632_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void thumb_uhsub832_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void thumb_umaal32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rdlo,
	unsigned int *rdhi,
	unsigned int *rm);
void thumb_umlal32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rdlo,
	unsigned int *rdhi,
	unsigned int *rm);
void thumb_umull32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rdlo,
	unsigned int *rdhi,
	unsigned int *rm);
void thumb_uqadd1632_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void thumb_uqadd832_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void thumb_uqasx32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void thumb_uqsax32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void thumb_uqsub1632_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void thumb_uqsub832_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void thumb_usad832_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *opcode2,
	unsigned int *rm);
void thumb_usada832_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *racc,
	unsigned int *rd,
	unsigned int *opcode2,
	unsigned int *rm);
void thumb_usat1632_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd);
void thumb_usat_asr32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *imm5);
void thumb_usat_lsl32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *imm5);
void thumb_usax32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void thumb_usub1632_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void thumb_usub832_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void thumb_uxtab1632_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rotate,
	unsigned int *rm);
void thumb_uxtab32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rotate,
	unsigned int *rm);
void thumb_uxtah32_decode_fields (
	uint16_t *address,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rotate,
	unsigned int *rm);
void thumb_uxtb1632_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rotate,
	unsigned int *rm);
void thumb_uxtb32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rotate,
	unsigned int *rm);
void thumb_uxth32_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rotate,
	unsigned int *rm);
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
	unsigned int *vm);
void thumb_neon_vabal_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
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
	unsigned int *vm);
void thumb_neon_vabd_f_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vabdl_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vabs_decode_fields (
	uint16_t *address,
	unsigned int *is_float,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void thumb_vfp_vabs_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vacge_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vacgt_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vadd_i_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vadd_f_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_vfp_vadd_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vaddhn_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *n,
	unsigned int *vd,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vaddl_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vaddw_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vand_decode_fields (
	uint16_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vbic_decode_fields (
	uint16_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vbici_decode_fields (
	uint16_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *cmode,
	unsigned int *i,
	unsigned int *imm3,
	unsigned int *imm4);
void thumb_neon_vbif_decode_fields (
	uint16_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vbit_decode_fields (
	uint16_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vbsl_decode_fields (
	uint16_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vceq_i_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vceq_f_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vceqz_decode_fields (
	uint16_t *address,
	unsigned int *is_float,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
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
	unsigned int *vm);
void thumb_neon_vcge_f_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vcgez_decode_fields (
	uint16_t *address,
	unsigned int *is_float,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
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
	unsigned int *vm);
void thumb_neon_vcgt_f_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vcgtz_decode_fields (
	uint16_t *address,
	unsigned int *is_float,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vclez_decode_fields (
	uint16_t *address,
	unsigned int *is_float,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vcls_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vcltz_decode_fields (
	uint16_t *address,
	unsigned int *is_float,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vclz_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void thumb_vfp_vcmp_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void thumb_vfp_vcmpz_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd);
void thumb_vfp_vcmpe_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void thumb_vfp_vcmpez_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd);
void thumb_neon_vcnt_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vcvt_f_i_decode_fields (
	uint16_t *address,
	unsigned int *op,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vcvt_f_fp_decode_fields (
	uint16_t *address,
	unsigned int *op,
	unsigned int *unsign,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vm,
	unsigned int *m,
	unsigned int *imm6);
void thumb_neon_vcvt_hp_sp_decode_fields (
	uint16_t *address,
	unsigned int *op,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void thumb_vfp_vcvt_f_i_decode_fields (
	uint16_t *address,
	unsigned int *op,
	unsigned int *op2,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void thumb_vfp_vcvt_f_fp_decode_fields (
	uint16_t *address,
	unsigned int *op,
	unsigned int *unsign,
	unsigned int *sf,
	unsigned int *sx,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *imm4,
	unsigned int *i);
void thumb_vfp_vcvt_dp_sp_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void thumb_vfp_vcvtb_decode_fields (
	uint16_t *address,
	unsigned int *op,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void thumb_vfp_vcvtt_decode_fields (
	uint16_t *address,
	unsigned int *op,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void thumb_vfp_vdiv_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vdup_scal_decode_fields (
	uint16_t *address,
	unsigned int *q,
	unsigned int *imm4,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vdup_core_decode_fields (
	uint16_t *address,
	unsigned int *b,
	unsigned int *e,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *rt);
void thumb_neon_veor_decode_fields (
	uint16_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vext_decode_fields (
	uint16_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *imm4);
void thumb_neon_vfma_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vfms_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_vfp_vfma_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_vfp_vfms_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_vfp_vfnma_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_vfp_vfnms_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
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
	unsigned int *vm);
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
	unsigned int *vm);
void thumb_neon_vldx_m_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *rn,
	unsigned int *align,
	unsigned int *rm);
void thumb_neon_vldx_s_o_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *rn,
	unsigned int *index_align,
	unsigned int *rm);
void thumb_neon_vldx_s_a_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *inc,
	unsigned int *rn,
	unsigned int *align,
	unsigned int *rm);
void thumb_vfp_vldm_dp_decode_fields (
	uint16_t *address,
	unsigned int *p,
	unsigned int *upwards,
	unsigned int *writeback,
	unsigned int *rn,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *imm8);
void thumb_vfp_vldm_sp_decode_fields (
	uint16_t *address,
	unsigned int *p,
	unsigned int *upwards,
	unsigned int *writeback,
	unsigned int *rn,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *imm8);
void thumb_vfp_vldr_dp_decode_fields (
	uint16_t *address,
	unsigned int *upwards,
	unsigned int *rn,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *imm8);
void thumb_vfp_vldr_sp_decode_fields (
	uint16_t *address,
	unsigned int *upwards,
	unsigned int *rn,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *imm8);
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
	unsigned int *vm);
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
	unsigned int *vm);
void thumb_neon_vmax_f_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vmin_f_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vmla_i_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vmls_i_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vmlal_i_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vmlsl_i_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vmla_f_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vmls_f_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_vfp_vmla_f_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_vfp_vmls_f_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
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
	unsigned int *vm);
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
	unsigned int *vm);
void thumb_neon_vmlal_scal_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vmlsl_scal_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vmovi_decode_fields (
	uint16_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *op,
	unsigned int *cmode,
	unsigned int *i,
	unsigned int *imm3,
	unsigned int *imm4);
void thumb_vfp_vmovi_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *imm4h,
	unsigned int *imm4l);
void thumb_vfp_vmov_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void thumb_vfp_vmov_core_scal_decode_fields (
	uint16_t *address,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *opc1,
	unsigned int *opc2,
	unsigned int *rt);
void thumb_vfp_vmov_scal_core_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *rt,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *opc1,
	unsigned int *opc2);
void thumb_vfp_vmov_core_sp_decode_fields (
	uint16_t *address,
	unsigned int *op,
	unsigned int *rt,
	unsigned int *n,
	unsigned int *vn);
void thumb_vfp_vmov_2core_2sp_decode_fields (
	uint16_t *address,
	unsigned int *to_arm,
	unsigned int *rt,
	unsigned int *rt2,
	unsigned int *m,
	unsigned int *vm);
void thumb_vfp_vmov_2core_dp_decode_fields (
	uint16_t *address,
	unsigned int *to_arm,
	unsigned int *rt,
	unsigned int *rt2,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vmovl_decode_fields (
	uint16_t *address,
	unsigned int *op,
	unsigned int *unsign,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vmovn_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void thumb_vfp_vmrs_decode_fields (
	uint16_t *address,
	unsigned int *rt);
void thumb_vfp_vmsr_decode_fields (
	uint16_t *address,
	unsigned int *rt);
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
	unsigned int *vm);
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
	unsigned int *vm);
void thumb_neon_vmul_f_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_vfp_vmul_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
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
	unsigned int *vm);
void thumb_neon_vmull_scal_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vmvni_decode_fields (
	uint16_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *cmode,
	unsigned int *i,
	unsigned int *imm3,
	unsigned int *imm4);
void thumb_neon_vmvn_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vneg_decode_fields (
	uint16_t *address,
	unsigned int *is_float,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void thumb_vfp_vneg_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void thumb_vfp_vnmla_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_vfp_vnmls_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_vfp_vnmul_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vorn_decode_fields (
	uint16_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vorri_decode_fields (
	uint16_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *cmode,
	unsigned int *i,
	unsigned int *imm3,
	unsigned int *imm4);
void thumb_neon_vorr_decode_fields (
	uint16_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vpadal_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vpadd_i_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vpadd_f_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vpaddl_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
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
	unsigned int *vm);
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
	unsigned int *vm);
void thumb_neon_vpmax_f_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vpmin_f_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_vfp_vpop_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *regs);
void thumb_vfp_vpush_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *regs);
void thumb_neon_vqabs_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
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
	unsigned int *vm);
void thumb_neon_vqdmlal_i_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vqdmlsl_i_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vqdmlal_scal_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vqdmlsl_scal_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vqdmulh_i_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vqdmulh_scal_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vqdmull_i_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vqdmull_scal_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vqmovn_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vqmovun_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vqneg_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vqrdmulh_i_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vqrdmulh_scal_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
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
	unsigned int *vm);
void thumb_neon_vqrshrn_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *imm6);
void thumb_neon_vqrshrun_decode_fields (
	uint16_t *address,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *imm6);
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
	unsigned int *vn);
void thumb_neon_vqshli_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *l,
	unsigned int *imm6);
void thumb_neon_vqshlui_decode_fields (
	uint16_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *l,
	unsigned int *imm6);
void thumb_neon_vqshrn_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *imm6);
void thumb_neon_vqshrun_decode_fields (
	uint16_t *address,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *imm6);
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
	unsigned int *vm);
void thumb_neon_vraddhn_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vrecpe_decode_fields (
	uint16_t *address,
	unsigned int *is_float,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vrecps_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vrev16_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vrev32_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vrev64_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
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
	unsigned int *vm);
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
	unsigned int *vm);
void thumb_neon_vrshr_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *l,
	unsigned int *imm6);
void thumb_neon_vrshrn_decode_fields (
	uint16_t *address,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *imm6);
void thumb_neon_vrsqrte_decode_fields (
	uint16_t *address,
	unsigned int *is_float,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vrsqrts_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vrsra_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *l,
	unsigned int *imm6);
void thumb_neon_vrsubhn_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
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
	unsigned int *vm);
void thumb_neon_vshli_decode_fields (
	uint16_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *l,
	unsigned int *imm6);
void thumb_neon_vshll_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *imm6);
void thumb_neon_vshll2_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vshr_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *l,
	unsigned int *imm6);
void thumb_neon_vshrn_decode_fields (
	uint16_t *address,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *imm6);
void thumb_neon_vsli_decode_fields (
	uint16_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *l,
	unsigned int *imm6);
void thumb_vfp_vsqrt_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vsra_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *l,
	unsigned int *imm6);
void thumb_neon_vsri_decode_fields (
	uint16_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *l,
	unsigned int *imm6);
void thumb_neon_vstx_m_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *rn,
	unsigned int *align,
	unsigned int *rm);
void thumb_neon_vstx_s_o_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *rn,
	unsigned int *index_align,
	unsigned int *rm);
void thumb_vfp_vstm_dp_decode_fields (
	uint16_t *address,
	unsigned int *p,
	unsigned int *upwards,
	unsigned int *writeback,
	unsigned int *rn,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *imm8);
void thumb_vfp_vstm_sp_decode_fields (
	uint16_t *address,
	unsigned int *p,
	unsigned int *upwards,
	unsigned int *writeback,
	unsigned int *rn,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *imm8);
void thumb_vfp_vstr_dp_decode_fields (
	uint16_t *address,
	unsigned int *upwards,
	unsigned int *rn,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *imm8);
void thumb_vfp_vstr_sp_decode_fields (
	uint16_t *address,
	unsigned int *upwards,
	unsigned int *rn,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *imm8);
void thumb_neon_vsub_i_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vsub_f_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_vfp_vsub_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vsubhn_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vsubl_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vsubw_decode_fields (
	uint16_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vswp_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vtbl_decode_fields (
	uint16_t *address,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *len,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vtbx_decode_fields (
	uint16_t *address,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *len,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vtrn_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vtst_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vuzp_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_vzip_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void thumb_vfp_vsel_decode_fields (
	uint16_t *address,
	unsigned int *size,
	unsigned int *cond,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void thumb_shift_i_mov_16_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *imm5,
	unsigned int *rm,
	unsigned int *rd);
void thumb_add_sub_16_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *rm,
	unsigned int *rn,
	unsigned int *rd);
void thumb_add_sub_i_16_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *imm3,
	unsigned int *rn,
	unsigned int *rd);
void thumb_add_sub_comp_mov_i_16_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *rdn,
	unsigned int *imm8);
void thumb_data_proc_16_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *rm,
	unsigned int *rdn);
void thumb_special_data_proc_16_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *dn,
	unsigned int *rm,
	unsigned int *rdn);
void thumb_bx_16_decode_fields (
	uint16_t *address,
	unsigned int *link,
	unsigned int *rm);
void thumb_load_lit_16_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *imm8);
void thumb_load_store_reg_offset_16_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *rm,
	unsigned int *rn,
	unsigned int *rd);
void thumb_load_store_byte_word_i_16_decode_fields (
	uint16_t *address,
	unsigned int *byte,
	unsigned int *load,
	unsigned int *imm5,
	unsigned int *rn,
	unsigned int *rd);
void thumb_load_store_halfword_i_16_decode_fields (
	uint16_t *address,
	unsigned int *load,
	unsigned int *imm5,
	unsigned int *rn,
	unsigned int *rd);
void thumb_load_store_stack_16_decode_fields (
	uint16_t *address,
	unsigned int *load,
	unsigned int *rd,
	unsigned int *imm8);
void thumb_add_sp_pc_16_decode_fields (
	uint16_t *address,
	unsigned int *sp,
	unsigned int *rd,
	unsigned int *imm8);
void thumb_misc_add_sub_sp_i_16_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *imm7);
void thumb_misc_sign_zero_extend_16_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *rm,
	unsigned int *rd);
void thumb_misc_cbz_16_decode_fields (
	uint16_t *address,
	unsigned int *n,
	unsigned int *imm1,
	unsigned int *imm5,
	unsigned int *rn);
void thumb_misc_push_pop_16_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *reg);
void thumb_misc_rev_16_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *rn,
	unsigned int *rd);
void thumb_misc_if_then_16_decode_fields (
	uint16_t *address,
	unsigned int *cond,
	unsigned int *mask);
void thumb_misc_nop_16_decode_fields (
	uint16_t *address,
	unsigned int *hint);
void thumb_load_store_multiple_16_decode_fields (
	uint16_t *address,
	unsigned int *load,
	unsigned int *rn,
	unsigned int *reglist);
void thumb_cond_branch_16_decode_fields (
	uint16_t *address,
	unsigned int *condition,
	unsigned int *imm8);
void thumb_svc_16_decode_fields (
	uint16_t *address,
	unsigned int *imm8);
void thumb_uncond_branch_16_decode_fields (
	uint16_t *address,
	unsigned int *imm11);
void thumb_data_proc_12bit_i_32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *opcode,
	unsigned int *set_condition,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm8);
void thumb_data_proc_12bit_i_plain_32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *opcode,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm8);
void thumb_data_proc_16bit_i_32_decode_fields (
	uint16_t *address,
	unsigned int *imm1,
	unsigned int *opcode,
	unsigned int *imm4,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm8);
void thumb_data_proc_bit_field_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *imm5);
void thumb_data_proc_const_shift_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *set_flags,
	unsigned int *rn,
	unsigned int *imm3,
	unsigned int *rd,
	unsigned int *imm2,
	unsigned int *shift_type,
	unsigned int *rm);
void thumb_data_proc_reg_shift_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *set_flags,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *opcode2,
	unsigned int *rm);
void thumb_data_proc_sign_zero_ext_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *rotate,
	unsigned int *rm);
void thumb_data_proc_simd_add_sub_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *pref,
	unsigned int *rm);
void thumb_data_proc_other_3reg_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *rn,
	unsigned int *rd,
	unsigned int *opcode2,
	unsigned int *rm);
void thumb_data_proc_32_mult_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *rn,
	unsigned int *racc,
	unsigned int *rd,
	unsigned int *opcode2,
	unsigned int *rm);
void thumb_data_proc_64_mult_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *rn,
	unsigned int *rdlo,
	unsigned int *rdhi,
	unsigned int *opcode2,
	unsigned int *n_high,
	unsigned int *m_swap,
	unsigned int *rm);
void thumb_load_store_single_reg_imm12_32_decode_fields (
	uint16_t *address,
	unsigned int *sign_ext,
	unsigned int *upwards,
	unsigned int *size,
	unsigned int *load_store,
	unsigned int *rn,
	unsigned int *rt,
	unsigned int *imm12);
void thumb_load_store_single_reg_off_32_decode_fields (
	uint16_t *address,
	unsigned int *sign_ext,
	unsigned int *size,
	unsigned int *load_store,
	unsigned int *rn,
	unsigned int *rt,
	unsigned int *shift,
	unsigned int *rm);
void thumb_pld_t2_32_decode_fields (
	uint16_t *address,
	unsigned int *sign_ext,
	unsigned int *size,
	unsigned int *load_store,
	unsigned int *rn,
	unsigned int *rt,
	unsigned int *opcode,
	unsigned int *imm8);
void thumb_load_store_double_ex_decode_fields (
	uint16_t *address,
	unsigned int *pre_index,
	unsigned int *upwards,
	unsigned int *writeback,
	unsigned int *load_store,
	unsigned int *rn,
	unsigned int *rt,
	unsigned int *rd,
	unsigned int *imm8);
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
	unsigned int *rm);
void thumb_load_store_multiple32_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *writeback,
	unsigned int *load,
	unsigned int *rn,
	unsigned int *reglist);
void thumb_branch32_decode_fields (
	uint16_t *address,
	unsigned int *sign_bit,
	unsigned int *offset_high,
	unsigned int *link,
	unsigned int *j1,
	unsigned int *thumb_mode,
	unsigned int *j2,
	unsigned int *offset_low);
void thumb_branch_cond32_decode_fields (
	uint16_t *address,
	unsigned int *sign_bit,
	unsigned int *condition,
	unsigned int *offset_high,
	unsigned int *j1,
	unsigned int *j2,
	unsigned int *offset_low);
void thumb_special_control_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *option);
void thumb_status_reg_access_decode_fields (
	uint16_t *address,
	unsigned int *opcode,
	unsigned int *s_or_c,
	unsigned int *rn,
	unsigned int *rd);
void thumb_coproc_proc_decode_fields (
	uint16_t *address,
	unsigned int *opc1,
	unsigned int *crn,
	unsigned int *crd,
	unsigned int *coproc,
	unsigned int *opc2,
	unsigned int *crm);
void thumb_coproc_trans_decode_fields (
	uint16_t *address,
	unsigned int *opc1,
	unsigned int *load,
	unsigned int *crn,
	unsigned int *rt,
	unsigned int *coproc,
	unsigned int *opc2,
	unsigned int *crm);
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
	unsigned int *vm);
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
	unsigned int *vm);
void thumb_vmovi_neon_decode_fields (
	uint16_t *address,
	unsigned int *i,
	unsigned int *d,
	unsigned int *imm3,
	unsigned int *vd,
	unsigned int *cmode,
	unsigned int *q,
	unsigned int *op,
	unsigned int *imm4);
void thumb_vmovi_decode_fields (
	uint16_t *address,
	unsigned int *d,
	unsigned int *immh,
	unsigned int *vd,
	unsigned int *sz,
	unsigned int *imml);
void thumb_vfp_ldr_str_decode_fields (
	uint16_t *address,
	unsigned int *upwards,
	unsigned int *d,
	unsigned int *load_store,
	unsigned int *rn,
	unsigned int *vd,
	unsigned int *double_reg,
	unsigned int *imm8);
void thumb_vcmp_decode_fields (
	uint16_t *address,
	unsigned int *d,
	unsigned int *empty,
	unsigned int *vd,
	unsigned int *sz,
	unsigned int *e,
	unsigned int *m,
	unsigned int *vm);
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
	unsigned int *imm8);
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
	unsigned int *vm);
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
	unsigned int *vm);
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
	unsigned int *vm);
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
	unsigned int *vm);
void thumb_vdiv_decode_fields (
	uint16_t *address,
	unsigned int *d,
	unsigned int *vn,
	unsigned int *vd,
	unsigned int *sz,
	unsigned int *n,
	unsigned int *m,
	unsigned int *vm);
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
	unsigned int *vm);
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
	unsigned int *vm);
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
	unsigned int *vm);
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
	unsigned int *rm);
void thumb_neon_imm4_2reg_decode_fields (
	uint16_t *address,
	unsigned int *d,
	unsigned int *imm4,
	unsigned int *vd,
	unsigned int *opcode,
	unsigned int *opcode2,
	unsigned int *q,
	unsigned int *m,
	unsigned int *vm);
void thumb_neon_imm4_3reg_decode_fields (
	uint16_t *address,
	unsigned int *d,
	unsigned int *vn,
	unsigned int *vd,
	unsigned int *imm4,
	unsigned int *n,
	unsigned int *q,
	unsigned int *m,
	unsigned int *vm);
void thumb_data_proc_rd_rn_rm_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void thumb_data_proc_rd_rn_rm_ra_decode_fields (
	uint16_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm,
	unsigned int *ra);
void thumb_vfp_ld_st_m_decode_fields (
	uint16_t *address,
	unsigned int *p,
	unsigned int *upwards,
	unsigned int *writeback,
	unsigned int *rn,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *imm8);
void thumb_vfp_vldr_vstr_decode_fields (
	uint16_t *address,
	unsigned int *upwards,
	unsigned int *rn,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *imm8);
#endif
