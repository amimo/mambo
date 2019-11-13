#ifdef PLUGINS_NEW
#ifndef __EMIT_PIE_PIE_THUMB_ENCODER_C__
#define __EMIT_PIE_PIE_THUMB_ENCODER_C__
#include "../dbm.h"
#include "../pie/pie-thumb-encoder.h"
#include "plugin_support.h"
void emit_thumb_adc16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rdn
);
void emit_thumb_add16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
);
void emit_thumb_add_from_pc16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int imm8
);
void emit_thumb_add_from_sp16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int imm8
);
void emit_thumb_addh16 (
	mambo_context *ctx,
	unsigned int dn,
	unsigned int rm,
	unsigned int rdn
);
void emit_thumb_addi16 (
	mambo_context *ctx,
	unsigned int imm3,
	unsigned int rn,
	unsigned int rd
);
void emit_thumb_addri16 (
	mambo_context *ctx,
	unsigned int rdn,
	unsigned int imm8
);
void emit_thumb_add_sp_i16 (
	mambo_context *ctx,
	unsigned int imm7
);
void emit_thumb_and16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rdn
);
void emit_thumb_asr16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rdn
);
void emit_thumb_asri16 (
	mambo_context *ctx,
	unsigned int imm5,
	unsigned int rm,
	unsigned int rd
);
void emit_thumb_b16 (
	mambo_context *ctx,
	unsigned int imm11
);
void emit_thumb_bic16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rdn
);
void emit_thumb_bkpt16 (
	mambo_context *ctx,
	unsigned int imm8
);
void emit_thumb_b_cond16 (
	mambo_context *ctx,
	unsigned int condition,
	unsigned int imm8
);
void emit_thumb_blx16 (
	mambo_context *ctx,
	unsigned int rm
);
void emit_thumb_bx16 (
	mambo_context *ctx,
	unsigned int rm
);
void emit_thumb_cbnz16 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int imm5,
	unsigned int rn
);
void emit_thumb_cbz16 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int imm5,
	unsigned int rn
);
void emit_thumb_cmn16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rdn
);
void emit_thumb_cmp16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rdn
);
void emit_thumb_cmph16 (
	mambo_context *ctx,
	unsigned int dn,
	unsigned int rm,
	unsigned int rdn
);
void emit_thumb_cmpri16 (
	mambo_context *ctx,
	unsigned int rdn,
	unsigned int imm8
);
void emit_thumb_eor16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rdn
);
void emit_thumb_it16 (
	mambo_context *ctx,
	unsigned int cond,
	unsigned int mask
);
void emit_thumb_ldmfd16 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int reglist
);
void emit_thumb_ldr16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
);
void emit_thumb_ldrb16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
);
void emit_thumb_ldrbi16 (
	mambo_context *ctx,
	unsigned int imm5,
	unsigned int rn,
	unsigned int rd
);
void emit_thumb_ldrh16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
);
void emit_thumb_ldrhi16 (
	mambo_context *ctx,
	unsigned int imm5,
	unsigned int rn,
	unsigned int rd
);
void emit_thumb_ldri16 (
	mambo_context *ctx,
	unsigned int imm5,
	unsigned int rn,
	unsigned int rd
);
void emit_thumb_ldr_pc_16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int imm8
);
void emit_thumb_ldrsb16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
);
void emit_thumb_ldrsh16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
);
void emit_thumb_ldr_sp16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int imm8
);
void emit_thumb_lsl16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rdn
);
void emit_thumb_lsli16 (
	mambo_context *ctx,
	unsigned int imm5,
	unsigned int rm,
	unsigned int rd
);
void emit_thumb_lsr16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rdn
);
void emit_thumb_lsri16 (
	mambo_context *ctx,
	unsigned int imm5,
	unsigned int rm,
	unsigned int rd
);
void emit_thumb_movh16 (
	mambo_context *ctx,
	unsigned int dn,
	unsigned int rm,
	unsigned int rdn
);
void emit_thumb_movi16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rd
);
void emit_thumb_movri16 (
	mambo_context *ctx,
	unsigned int rdn,
	unsigned int imm8
);
void emit_thumb_mul16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rdn
);
void emit_thumb_mvn16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rdn
);
void emit_thumb_nop16 (
	mambo_context *ctx
);
void emit_thumb_orr16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rdn
);
void emit_thumb_pop16 (
	mambo_context *ctx,
	unsigned int reg
);
void emit_thumb_push16 (
	mambo_context *ctx,
	unsigned int reg
);
void emit_thumb_rev16 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd
);
void emit_thumb_rev1616 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd
);
void emit_thumb_revsh16 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd
);
void emit_thumb_ror16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rdn
);
void emit_thumb_rsbi16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rdn
);
void emit_thumb_sbc16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rdn
);
void emit_thumb_setend16 (
	mambo_context *ctx,
	unsigned int is_bigend
);
void emit_thumb_sev16 (
	mambo_context *ctx
);
void emit_thumb_stmea16 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int reglist
);
void emit_thumb_str16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
);
void emit_thumb_strb16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
);
void emit_thumb_strbi16 (
	mambo_context *ctx,
	unsigned int imm5,
	unsigned int rn,
	unsigned int rd
);
void emit_thumb_strh16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
);
void emit_thumb_strhi16 (
	mambo_context *ctx,
	unsigned int imm5,
	unsigned int rn,
	unsigned int rd
);
void emit_thumb_stri16 (
	mambo_context *ctx,
	unsigned int imm5,
	unsigned int rn,
	unsigned int rd
);
void emit_thumb_str_sp16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int imm8
);
void emit_thumb_sub16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
);
void emit_thumb_subi16 (
	mambo_context *ctx,
	unsigned int imm3,
	unsigned int rn,
	unsigned int rd
);
void emit_thumb_subri16 (
	mambo_context *ctx,
	unsigned int rdn,
	unsigned int imm8
);
void emit_thumb_sub_sp_i16 (
	mambo_context *ctx,
	unsigned int imm7
);
void emit_thumb_svc16 (
	mambo_context *ctx,
	unsigned int imm8
);
void emit_thumb_sxtb16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rd
);
void emit_thumb_sxth16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rd
);
void emit_thumb_tst16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rdn
);
void emit_thumb_udf16 (
	mambo_context *ctx,
	unsigned int imm8
);
void emit_thumb_uxtb16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rd
);
void emit_thumb_uxth16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rd
);
void emit_thumb_wfe16 (
	mambo_context *ctx
);
void emit_thumb_wfi16 (
	mambo_context *ctx
);
void emit_thumb_yield16 (
	mambo_context *ctx
);
void emit_thumb_adc32 (
	mambo_context *ctx,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
);
void emit_thumb_adci32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
);
void emit_thumb_add32 (
	mambo_context *ctx,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
);
void emit_thumb_addi32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
);
void emit_thumb_addwi32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
);
void emit_thumb_adrwi_post32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
);
void emit_thumb_adrwi_pre32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
);
void emit_thumb_and32 (
	mambo_context *ctx,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
);
void emit_thumb_andi32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
);
void emit_thumb_asr32 (
	mambo_context *ctx,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
);
void emit_thumb_asri32 (
	mambo_context *ctx,
	unsigned int set_flags,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int rm
);
void emit_thumb_b32 (
	mambo_context *ctx,
	unsigned int sign_bit,
	unsigned int offset_high,
	unsigned int j1,
	unsigned int j2,
	unsigned int offset_low
);
void emit_thumb_b_cond32 (
	mambo_context *ctx,
	unsigned int sign_bit,
	unsigned int condition,
	unsigned int offset_high,
	unsigned int j1,
	unsigned int j2,
	unsigned int offset_low
);
void emit_thumb_bfc32 (
	mambo_context *ctx,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int imm5
);
void emit_thumb_bfi32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int imm5
);
void emit_thumb_bic32 (
	mambo_context *ctx,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
);
void emit_thumb_bici32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
);
void emit_thumb_bl32 (
	mambo_context *ctx,
	unsigned int sign_bit,
	unsigned int offset_high,
	unsigned int j1,
	unsigned int j2,
	unsigned int offset_low
);
void emit_thumb_bl_arm32 (
	mambo_context *ctx,
	unsigned int sign_bit,
	unsigned int offset_high,
	unsigned int j1,
	unsigned int j2,
	unsigned int offset_low
);
void emit_thumb_cdp32 (
	mambo_context *ctx,
	unsigned int coproc,
	unsigned int opc1,
	unsigned int crd,
	unsigned int crn,
	unsigned int crm,
	unsigned int opc2
);
void emit_thumb_cdp232 (
	mambo_context *ctx,
	unsigned int coproc,
	unsigned int opc1,
	unsigned int crd,
	unsigned int crn,
	unsigned int crm,
	unsigned int opc2
);
void emit_thumb_clrex32 (
	mambo_context *ctx,
	unsigned int option
);
void emit_thumb_clz32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
);
void emit_thumb_cmn32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int imm3,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
);
void emit_thumb_cmni32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int rn,
	unsigned int imm3,
	unsigned int imm8
);
void emit_thumb_cmp32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int imm3,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
);
void emit_thumb_cmpi32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int rn,
	unsigned int imm3,
	unsigned int imm8
);
void emit_thumb_dbg32 (
	mambo_context *ctx,
	unsigned int option
);
void emit_thumb_dmb32 (
	mambo_context *ctx,
	unsigned int option
);
void emit_thumb_dsb32 (
	mambo_context *ctx,
	unsigned int option
);
void emit_thumb_eor32 (
	mambo_context *ctx,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
);
void emit_thumb_eori32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
);
void emit_thumb_isb32 (
	mambo_context *ctx,
	unsigned int option
);
void emit_thumb_ldc32 (
	mambo_context *ctx,
	unsigned int coproc,
	unsigned int d,
	unsigned int crd,
	unsigned int rn,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback,
	unsigned int imm8
);
void emit_thumb_ldc232 (
	mambo_context *ctx,
	unsigned int coproc,
	unsigned int d,
	unsigned int crd,
	unsigned int rn,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback,
	unsigned int imm8
);
void emit_thumb_ldmea32 (
	mambo_context *ctx,
	unsigned int writeback,
	unsigned int rn,
	unsigned int reglist
);
void emit_thumb_ldmfd32 (
	mambo_context *ctx,
	unsigned int writeback,
	unsigned int rn,
	unsigned int reglist
);
void emit_thumb_ldr32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rt,
	unsigned int shift,
	unsigned int rm
);
void emit_thumb_ldrb32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rt,
	unsigned int shift,
	unsigned int rm
);
void emit_thumb_ldrbi32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback
);
void emit_thumb_ldrbl32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int imm12,
	unsigned int upwards
);
void emit_thumb_ldrbwi32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm12
);
void emit_thumb_ldrbt32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8
);
void emit_thumb_ldrd32 (
	mambo_context *ctx,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback,
	unsigned int rn,
	unsigned int rt,
	unsigned int rd,
	unsigned int imm8
);
void emit_thumb_ldrex32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rt,
	unsigned int imm8
);
void emit_thumb_ldrexb32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rt
);
void emit_thumb_ldrexd32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rt,
	unsigned int rt2
);
void emit_thumb_ldrexh32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rt
);
void emit_thumb_ldrh32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rt,
	unsigned int shift,
	unsigned int rm
);
void emit_thumb_ldrhi32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback
);
void emit_thumb_ldrhl32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int imm12,
	unsigned int upwards
);
void emit_thumb_ldrhwi32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm12
);
void emit_thumb_ldrht32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8
);
void emit_thumb_ldri32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback
);
void emit_thumb_ldrl32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int imm12,
	unsigned int upwards
);
void emit_thumb_ldrsb32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rt,
	unsigned int shift,
	unsigned int rm
);
void emit_thumb_ldrsbi32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback
);
void emit_thumb_ldrsbl32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int imm12,
	unsigned int upwards
);
void emit_thumb_ldrsbwi32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm12
);
void emit_thumb_ldrsbt32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8
);
void emit_thumb_ldrsh32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rt,
	unsigned int shift,
	unsigned int rm
);
void emit_thumb_ldrshi32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback
);
void emit_thumb_ldrshl32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int imm12,
	unsigned int upwards
);
void emit_thumb_ldrshwi32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm12
);
void emit_thumb_ldrsht32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8
);
void emit_thumb_ldrt32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8
);
void emit_thumb_ldrwi32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm12
);
void emit_thumb_lsl32 (
	mambo_context *ctx,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
);
void emit_thumb_lsli32 (
	mambo_context *ctx,
	unsigned int set_flags,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int rm
);
void emit_thumb_lsr32 (
	mambo_context *ctx,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
);
void emit_thumb_lsri32 (
	mambo_context *ctx,
	unsigned int set_flags,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int rm
);
void emit_thumb_mcr32 (
	mambo_context *ctx,
	unsigned int opc1,
	unsigned int crn,
	unsigned int rt,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
);
void emit_thumb_mcr232 (
	mambo_context *ctx,
	unsigned int opc1,
	unsigned int crn,
	unsigned int rt,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
);
void emit_thumb_mcrr32 (
	mambo_context *ctx,
	unsigned int coproc,
	unsigned int opc1,
	unsigned int rt,
	unsigned int rt2,
	unsigned int crm
);
void emit_thumb_mcrr232 (
	mambo_context *ctx,
	unsigned int coproc,
	unsigned int opc1,
	unsigned int rt,
	unsigned int rt2,
	unsigned int crm
);
void emit_thumb_mla32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int racc,
	unsigned int rd,
	unsigned int rm
);
void emit_thumb_mls32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int racc,
	unsigned int rd,
	unsigned int rm
);
void emit_thumb_mov32 (
	mambo_context *ctx,
	unsigned int set_flags,
	unsigned int rd,
	unsigned int rm
);
void emit_thumb_movi32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
);
void emit_thumb_movwi32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int imm4,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
);
void emit_thumb_movti32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int imm4,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
);
void emit_thumb_mrc32 (
	mambo_context *ctx,
	unsigned int opc1,
	unsigned int crn,
	unsigned int rt,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
);
void emit_thumb_mrc232 (
	mambo_context *ctx,
	unsigned int opc1,
	unsigned int crn,
	unsigned int rt,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
);
void emit_thumb_mrrc32 (
	mambo_context *ctx,
	unsigned int coproc,
	unsigned int opc,
	unsigned int rt,
	unsigned int rt2,
	unsigned int crm
);
void emit_thumb_mrrc232 (
	mambo_context *ctx,
	unsigned int coproc,
	unsigned int opc,
	unsigned int rt,
	unsigned int rt2,
	unsigned int crm
);
void emit_thumb_mrs32 (
	mambo_context *ctx,
	unsigned int rd
);
void emit_thumb_msr32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int mask
);
void emit_thumb_mul32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
);
void emit_thumb_mvn32 (
	mambo_context *ctx,
	unsigned int set_flags,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
);
void emit_thumb_mvni32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
);
void emit_thumb_nop32 (
	mambo_context *ctx
);
void emit_thumb_orn32 (
	mambo_context *ctx,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
);
void emit_thumb_orni32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
);
void emit_thumb_orr32 (
	mambo_context *ctx,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
);
void emit_thumb_orri32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
);
void emit_thumb_pkh32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
);
void emit_thumb_pld32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int shift,
	unsigned int rm
);
void emit_thumb_pldi32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int imm12
);
void emit_thumb_pldim32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int imm8
);
void emit_thumb_pld_lit32 (
	mambo_context *ctx,
	unsigned int upwards,
	unsigned int imm12
);
void emit_thumb_pldw32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int shift,
	unsigned int rm
);
void emit_thumb_pldwi32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int imm12
);
void emit_thumb_pldwim32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int imm8
);
void emit_thumb_pli32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rm,
	unsigned int shift
);
void emit_thumb_plii32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int imm12
);
void emit_thumb_pliim32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int imm8
);
void emit_thumb_pli_lit32 (
	mambo_context *ctx,
	unsigned int upwards,
	unsigned int imm12
);
void emit_thumb_qadd32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
);
void emit_thumb_qadd1632 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_qadd832 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_qasx32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_qdadd32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
);
void emit_thumb_qdsub32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
);
void emit_thumb_qsax32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_qsub32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
);
void emit_thumb_qsub1632 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_qsub832 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_rbit32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
);
void emit_thumb_rev32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
);
void emit_thumb_rev1632 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
);
void emit_thumb_revsh32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
);
void emit_thumb_ror32 (
	mambo_context *ctx,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
);
void emit_thumb_rori32 (
	mambo_context *ctx,
	unsigned int set_flags,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int rm
);
void emit_thumb_rrx32 (
	mambo_context *ctx,
	unsigned int set_flags,
	unsigned int rd,
	unsigned int rm
);
void emit_thumb_rsb32 (
	mambo_context *ctx,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
);
void emit_thumb_rsbi32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
);
void emit_thumb_sadd1632 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_sadd832 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_sasx32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_sbc32 (
	mambo_context *ctx,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
);
void emit_thumb_sbci32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
);
void emit_thumb_sbfx32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int imm5
);
void emit_thumb_sdiv32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rdhi,
	unsigned int rm
);
void emit_thumb_sel32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
);
void emit_thumb_sev32 (
	mambo_context *ctx
);
void emit_thumb_shadd1632 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_shadd832 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_shasx32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_shsax32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_shsub1632 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_shsub832 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_simd_add_sub32 (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd,
	unsigned int pref,
	unsigned int rm
);
void emit_thumb_smlabb32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void emit_thumb_smlabt32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void emit_thumb_smlatb32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void emit_thumb_smlatt32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void emit_thumb_smlad32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int racc,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
);
void emit_thumb_smlal32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rdlo,
	unsigned int rdhi,
	unsigned int rm
);
void emit_thumb_smlalbb32 (
	mambo_context *ctx,
	unsigned int rdlo,
	unsigned int rdhi,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_smlalbt32 (
	mambo_context *ctx,
	unsigned int rdlo,
	unsigned int rdhi,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_smlaltb32 (
	mambo_context *ctx,
	unsigned int rdlo,
	unsigned int rdhi,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_smlaltt32 (
	mambo_context *ctx,
	unsigned int rdlo,
	unsigned int rdhi,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_smlald32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rdlo,
	unsigned int rdhi,
	unsigned int m_swap,
	unsigned int rm
);
void emit_thumb_smlawb32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void emit_thumb_smlawt32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void emit_thumb_smlsd32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int racc,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
);
void emit_thumb_smlsld32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rdlo,
	unsigned int rdhi,
	unsigned int m_swap,
	unsigned int rm
);
void emit_thumb_smmla32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int racc,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
);
void emit_thumb_smmls32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int racc,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
);
void emit_thumb_smmul32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
);
void emit_thumb_smuad32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
);
void emit_thumb_smulbb32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_smulbt32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_smultb32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_smultt32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_smull32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rdlo,
	unsigned int rdhi,
	unsigned int rm
);
void emit_thumb_smulwb32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
);
void emit_thumb_smulwt32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
);
void emit_thumb_smusd32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
);
void emit_thumb_ssat1632 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd
);
void emit_thumb_ssat_asr32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int imm5
);
void emit_thumb_ssat_lsl32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int imm5
);
void emit_thumb_ssax32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_ssub1632 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_ssub832 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_stc32 (
	mambo_context *ctx,
	unsigned int coproc,
	unsigned int d,
	unsigned int crd,
	unsigned int rn,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback,
	unsigned int imm8
);
void emit_thumb_stc232 (
	mambo_context *ctx,
	unsigned int coproc,
	unsigned int d,
	unsigned int crd,
	unsigned int rn,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback,
	unsigned int imm8
);
void emit_thumb_stmea32 (
	mambo_context *ctx,
	unsigned int writeback,
	unsigned int rn,
	unsigned int reglist
);
void emit_thumb_stmfd32 (
	mambo_context *ctx,
	unsigned int writeback,
	unsigned int rn,
	unsigned int reglist
);
void emit_thumb_str32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rt,
	unsigned int shift,
	unsigned int rm
);
void emit_thumb_strb32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rt,
	unsigned int shift,
	unsigned int rm
);
void emit_thumb_strbi32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback
);
void emit_thumb_strbwi32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm12
);
void emit_thumb_strbt32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8
);
void emit_thumb_strd32 (
	mambo_context *ctx,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback,
	unsigned int rn,
	unsigned int rt,
	unsigned int rd,
	unsigned int imm8
);
void emit_thumb_strex32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rt,
	unsigned int rd,
	unsigned int imm8
);
void emit_thumb_strexb32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rt,
	unsigned int rd
);
void emit_thumb_strexd32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rt,
	unsigned int rt2,
	unsigned int rd
);
void emit_thumb_strexh32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rt,
	unsigned int rd
);
void emit_thumb_strh32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rt,
	unsigned int shift,
	unsigned int rm
);
void emit_thumb_strhi32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback
);
void emit_thumb_strhwi32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm12
);
void emit_thumb_strht32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8
);
void emit_thumb_stri32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback
);
void emit_thumb_strt32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8
);
void emit_thumb_strwi32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm12
);
void emit_thumb_sub32 (
	mambo_context *ctx,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
);
void emit_thumb_subi32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
);
void emit_thumb_subwi32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
);
void emit_thumb_sxtab1632 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
);
void emit_thumb_sxtab32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
);
void emit_thumb_sxtah32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
);
void emit_thumb_sxtb1632 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
);
void emit_thumb_sxtb32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
);
void emit_thumb_sxth32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
);
void emit_thumb_tbb32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_tbh32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_teq32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int imm3,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
);
void emit_thumb_teqi32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int rn,
	unsigned int imm3,
	unsigned int imm8
);
void emit_thumb_tst32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int imm3,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
);
void emit_thumb_tsti32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int rn,
	unsigned int imm3,
	unsigned int imm8
);
void emit_thumb_uadd1632 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_uadd832 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_uasx32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_ubfx32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int imm5
);
void emit_thumb_udf32 (
	mambo_context *ctx,
	unsigned int imm4,
	unsigned int imm12
);
void emit_thumb_udiv32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rdhi,
	unsigned int rm
);
void emit_thumb_uhadd1632 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_uhadd832 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_uhasx32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_uhsax32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_uhsub1632 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_uhsub832 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_umaal32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rdlo,
	unsigned int rdhi,
	unsigned int rm
);
void emit_thumb_umlal32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rdlo,
	unsigned int rdhi,
	unsigned int rm
);
void emit_thumb_umull32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rdlo,
	unsigned int rdhi,
	unsigned int rm
);
void emit_thumb_uqadd1632 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_uqadd832 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_uqasx32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_uqsax32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_uqsub1632 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_uqsub832 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_usad832 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
);
void emit_thumb_usada832 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int racc,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
);
void emit_thumb_usat1632 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd
);
void emit_thumb_usat_asr32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int imm5
);
void emit_thumb_usat_lsl32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int imm5
);
void emit_thumb_usax32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_usub1632 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_usub832 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_uxtab1632 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
);
void emit_thumb_uxtab32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
);
void emit_thumb_uxtah32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
);
void emit_thumb_uxtb1632 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
);
void emit_thumb_uxtb32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
);
void emit_thumb_uxth32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
);
void emit_thumb_wfe32 (
	mambo_context *ctx
);
void emit_thumb_wfi32 (
	mambo_context *ctx
);
void emit_thumb_yield32 (
	mambo_context *ctx
);
void emit_thumb_neon_vaba (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vabal (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vabd_i (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vabd_f (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vabdl (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vabs (
	mambo_context *ctx,
	unsigned int is_float,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_vfp_vabs (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vacge (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vacgt (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vadd_i (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vadd_f (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_vfp_vadd (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vaddhn (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int n,
	unsigned int vd,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vaddl (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vaddw (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vand (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vbic (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vbici (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int cmode,
	unsigned int i,
	unsigned int imm3,
	unsigned int imm4
);
void emit_thumb_neon_vbif (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vbit (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vbsl (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vceq_i (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vceq_f (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vceqz (
	mambo_context *ctx,
	unsigned int is_float,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vcge_i (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vcge_f (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vcgez (
	mambo_context *ctx,
	unsigned int is_float,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vcgt_i (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vcgt_f (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vcgtz (
	mambo_context *ctx,
	unsigned int is_float,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vclez (
	mambo_context *ctx,
	unsigned int is_float,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vcls (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vcltz (
	mambo_context *ctx,
	unsigned int is_float,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vclz (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_vfp_vcmp (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_vfp_vcmpz (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd
);
void emit_thumb_vfp_vcmpe (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_vfp_vcmpez (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd
);
void emit_thumb_neon_vcnt (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vcvt_f_i (
	mambo_context *ctx,
	unsigned int op,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vcvt_f_fp (
	mambo_context *ctx,
	unsigned int op,
	unsigned int unsign,
	unsigned int q,
	unsigned int d,
	unsigned int vm,
	unsigned int m,
	unsigned int imm6
);
void emit_thumb_neon_vcvt_hp_sp (
	mambo_context *ctx,
	unsigned int op,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_vfp_vcvt_f_i (
	mambo_context *ctx,
	unsigned int op,
	unsigned int op2,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_vfp_vcvt_f_fp (
	mambo_context *ctx,
	unsigned int op,
	unsigned int unsign,
	unsigned int sf,
	unsigned int sx,
	unsigned int d,
	unsigned int vd,
	unsigned int imm4,
	unsigned int i
);
void emit_thumb_vfp_vcvt_dp_sp (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_vfp_vcvtb (
	mambo_context *ctx,
	unsigned int op,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_vfp_vcvtt (
	mambo_context *ctx,
	unsigned int op,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_vfp_vdiv (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vdup_scal (
	mambo_context *ctx,
	unsigned int q,
	unsigned int imm4,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vdup_core (
	mambo_context *ctx,
	unsigned int b,
	unsigned int e,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int rt
);
void emit_thumb_neon_veor (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vext (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm,
	unsigned int imm4
);
void emit_thumb_neon_vfma (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vfms (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_vfp_vfma (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_vfp_vfms (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_vfp_vfnma (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_vfp_vfnms (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vhadd (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vhsub (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vldx_m (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int rn,
	unsigned int align,
	unsigned int rm
);
void emit_thumb_neon_vldx_s_o (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int rn,
	unsigned int index_align,
	unsigned int rm
);
void emit_thumb_neon_vldx_s_a (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int inc,
	unsigned int rn,
	unsigned int align,
	unsigned int rm
);
void emit_thumb_vfp_vldm_dp (
	mambo_context *ctx,
	unsigned int p,
	unsigned int upwards,
	unsigned int writeback,
	unsigned int rn,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
);
void emit_thumb_vfp_vldm_sp (
	mambo_context *ctx,
	unsigned int p,
	unsigned int upwards,
	unsigned int writeback,
	unsigned int rn,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
);
void emit_thumb_vfp_vldr_dp (
	mambo_context *ctx,
	unsigned int upwards,
	unsigned int rn,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
);
void emit_thumb_vfp_vldr_sp (
	mambo_context *ctx,
	unsigned int upwards,
	unsigned int rn,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
);
void emit_thumb_neon_vmax_i (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vmin_i (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vmax_f (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vmin_f (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vmla_i (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vmls_i (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vmlal_i (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vmlsl_i (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vmla_f (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vmls_f (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_vfp_vmla_f (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_vfp_vmls_f (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vmla_scal (
	mambo_context *ctx,
	unsigned int is_float,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vmls_scal (
	mambo_context *ctx,
	unsigned int is_float,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vmlal_scal (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vmlsl_scal (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vmovi (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int op,
	unsigned int cmode,
	unsigned int i,
	unsigned int imm3,
	unsigned int imm4
);
void emit_thumb_vfp_vmovi (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int imm4h,
	unsigned int imm4l
);
void emit_thumb_vfp_vmov (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_vfp_vmov_core_scal (
	mambo_context *ctx,
	unsigned int d,
	unsigned int vd,
	unsigned int opc1,
	unsigned int opc2,
	unsigned int rt
);
void emit_thumb_vfp_vmov_scal_core (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int rt,
	unsigned int n,
	unsigned int vn,
	unsigned int opc1,
	unsigned int opc2
);
void emit_thumb_vfp_vmov_core_sp (
	mambo_context *ctx,
	unsigned int op,
	unsigned int rt,
	unsigned int n,
	unsigned int vn
);
void emit_thumb_vfp_vmov_2core_2sp (
	mambo_context *ctx,
	unsigned int to_arm,
	unsigned int rt,
	unsigned int rt2,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_vfp_vmov_2core_dp (
	mambo_context *ctx,
	unsigned int to_arm,
	unsigned int rt,
	unsigned int rt2,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vmovl (
	mambo_context *ctx,
	unsigned int op,
	unsigned int unsign,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vmovn (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_vfp_vmrs (
	mambo_context *ctx,
	unsigned int rt
);
void emit_thumb_vfp_vmsr (
	mambo_context *ctx,
	unsigned int rt
);
void emit_thumb_neon_vmul_i (
	mambo_context *ctx,
	unsigned int op,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vmull_i (
	mambo_context *ctx,
	unsigned int op,
	unsigned int unsign,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vmul_f (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_vfp_vmul (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vmul_scal (
	mambo_context *ctx,
	unsigned int is_float,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vmull_scal (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vmvni (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int cmode,
	unsigned int i,
	unsigned int imm3,
	unsigned int imm4
);
void emit_thumb_neon_vmvn (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vneg (
	mambo_context *ctx,
	unsigned int is_float,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_vfp_vneg (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_vfp_vnmla (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_vfp_vnmls (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_vfp_vnmul (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vorn (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vorri (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int cmode,
	unsigned int i,
	unsigned int imm3,
	unsigned int imm4
);
void emit_thumb_neon_vorr (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vpadal (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vpadd_i (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vpadd_f (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vpaddl (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vpmax_i (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vpmin_i (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vpmax_f (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vpmin_f (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_vfp_vpop (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int regs
);
void emit_thumb_vfp_vpush (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int regs
);
void emit_thumb_neon_vqabs (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vqadd (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vqdmlal_i (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vqdmlsl_i (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vqdmlal_scal (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vqdmlsl_scal (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vqdmulh_i (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vqdmulh_scal (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vqdmull_i (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vqdmull_scal (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vqmovn (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vqmovun (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vqneg (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vqrdmulh_i (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vqrdmulh_scal (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vqrshl (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vqrshrn (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
);
void emit_thumb_neon_vqrshrun (
	mambo_context *ctx,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
);
void emit_thumb_neon_vqshl (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int n,
	unsigned int vn
);
void emit_thumb_neon_vqshli (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int l,
	unsigned int imm6
);
void emit_thumb_neon_vqshlui (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int l,
	unsigned int imm6
);
void emit_thumb_neon_vqshrn (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
);
void emit_thumb_neon_vqshrun (
	mambo_context *ctx,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
);
void emit_thumb_neon_vqsub (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vraddhn (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vrecpe (
	mambo_context *ctx,
	unsigned int is_float,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vrecps (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vrev16 (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vrev32 (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vrev64 (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vrhadd (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vrshl (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vrshr (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int l,
	unsigned int imm6
);
void emit_thumb_neon_vrshrn (
	mambo_context *ctx,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
);
void emit_thumb_neon_vrsqrte (
	mambo_context *ctx,
	unsigned int is_float,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vrsqrts (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vrsra (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int l,
	unsigned int imm6
);
void emit_thumb_neon_vrsubhn (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vshl (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vshli (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int l,
	unsigned int imm6
);
void emit_thumb_neon_vshll (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
);
void emit_thumb_neon_vshll2 (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vshr (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int l,
	unsigned int imm6
);
void emit_thumb_neon_vshrn (
	mambo_context *ctx,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
);
void emit_thumb_neon_vsli (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int l,
	unsigned int imm6
);
void emit_thumb_vfp_vsqrt (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vsra (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int l,
	unsigned int imm6
);
void emit_thumb_neon_vsri (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int l,
	unsigned int imm6
);
void emit_thumb_neon_vstx_m (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int rn,
	unsigned int align,
	unsigned int rm
);
void emit_thumb_neon_vstx_s_o (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int rn,
	unsigned int index_align,
	unsigned int rm
);
void emit_thumb_vfp_vstm_dp (
	mambo_context *ctx,
	unsigned int p,
	unsigned int upwards,
	unsigned int writeback,
	unsigned int rn,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
);
void emit_thumb_vfp_vstm_sp (
	mambo_context *ctx,
	unsigned int p,
	unsigned int upwards,
	unsigned int writeback,
	unsigned int rn,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
);
void emit_thumb_vfp_vstr_dp (
	mambo_context *ctx,
	unsigned int upwards,
	unsigned int rn,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
);
void emit_thumb_vfp_vstr_sp (
	mambo_context *ctx,
	unsigned int upwards,
	unsigned int rn,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
);
void emit_thumb_neon_vsub_i (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vsub_f (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_vfp_vsub (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vsubhn (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vsubl (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vsubw (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vswp (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vtbl (
	mambo_context *ctx,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int len,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vtbx (
	mambo_context *ctx,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int len,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vtrn (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vtst (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vuzp (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_vzip (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_vfp_vsel (
	mambo_context *ctx,
	unsigned int size,
	unsigned int cond,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_shift_i_mov_16 (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int imm5,
	unsigned int rm,
	unsigned int rd
);
void emit_thumb_add_sub_16 (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
);
void emit_thumb_add_sub_i_16 (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int imm3,
	unsigned int rn,
	unsigned int rd
);
void emit_thumb_add_sub_comp_mov_i_16 (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int rdn,
	unsigned int imm8
);
void emit_thumb_data_proc_16 (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int rm,
	unsigned int rdn
);
void emit_thumb_special_data_proc_16 (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int dn,
	unsigned int rm,
	unsigned int rdn
);
void emit_thumb_bx_16 (
	mambo_context *ctx,
	unsigned int link,
	unsigned int rm
);
void emit_thumb_load_lit_16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int imm8
);
void emit_thumb_load_store_reg_offset_16 (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
);
void emit_thumb_load_store_byte_word_i_16 (
	mambo_context *ctx,
	unsigned int byte,
	unsigned int load,
	unsigned int imm5,
	unsigned int rn,
	unsigned int rd
);
void emit_thumb_load_store_halfword_i_16 (
	mambo_context *ctx,
	unsigned int load,
	unsigned int imm5,
	unsigned int rn,
	unsigned int rd
);
void emit_thumb_load_store_stack_16 (
	mambo_context *ctx,
	unsigned int load,
	unsigned int rd,
	unsigned int imm8
);
void emit_thumb_add_sp_pc_16 (
	mambo_context *ctx,
	unsigned int sp,
	unsigned int rd,
	unsigned int imm8
);
void emit_thumb_misc_add_sub_sp_i_16 (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int imm7
);
void emit_thumb_misc_sign_zero_extend_16 (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int rm,
	unsigned int rd
);
void emit_thumb_misc_cbz_16 (
	mambo_context *ctx,
	unsigned int n,
	unsigned int imm1,
	unsigned int imm5,
	unsigned int rn
);
void emit_thumb_misc_push_pop_16 (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int reg
);
void emit_thumb_misc_rev_16 (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
);
void emit_thumb_misc_if_then_16 (
	mambo_context *ctx,
	unsigned int cond,
	unsigned int mask
);
void emit_thumb_misc_nop_16 (
	mambo_context *ctx,
	unsigned int hint
);
void emit_thumb_load_store_multiple_16 (
	mambo_context *ctx,
	unsigned int load,
	unsigned int rn,
	unsigned int reglist
);
void emit_thumb_cond_branch_16 (
	mambo_context *ctx,
	unsigned int condition,
	unsigned int imm8
);
void emit_thumb_svc_16 (
	mambo_context *ctx,
	unsigned int imm8
);
void emit_thumb_uncond_branch_16 (
	mambo_context *ctx,
	unsigned int imm11
);
void emit_thumb_data_proc_12bit_i_32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int opcode,
	unsigned int set_condition,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
);
void emit_thumb_data_proc_12bit_i_plain_32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int opcode,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
);
void emit_thumb_data_proc_16bit_i_32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int opcode,
	unsigned int imm4,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
);
void emit_thumb_data_proc_bit_field (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int imm5
);
void emit_thumb_data_proc_const_shift (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
);
void emit_thumb_data_proc_reg_shift (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
);
void emit_thumb_data_proc_sign_zero_ext (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
);
void emit_thumb_data_proc_simd_add_sub (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd,
	unsigned int pref,
	unsigned int rm
);
void emit_thumb_data_proc_other_3reg (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
);
void emit_thumb_data_proc_32_mult (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int rn,
	unsigned int racc,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
);
void emit_thumb_data_proc_64_mult (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rdlo,
	unsigned int rdhi,
	unsigned int opcode2,
	unsigned int n_high,
	unsigned int m_swap,
	unsigned int rm
);
void emit_thumb_load_store_single_reg_imm12_32 (
	mambo_context *ctx,
	unsigned int sign_ext,
	unsigned int upwards,
	unsigned int size,
	unsigned int load_store,
	unsigned int rn,
	unsigned int rt,
	unsigned int imm12
);
void emit_thumb_load_store_single_reg_off_32 (
	mambo_context *ctx,
	unsigned int sign_ext,
	unsigned int size,
	unsigned int load_store,
	unsigned int rn,
	unsigned int rt,
	unsigned int shift,
	unsigned int rm
);
void emit_thumb_pld_t2_32 (
	mambo_context *ctx,
	unsigned int sign_ext,
	unsigned int size,
	unsigned int load_store,
	unsigned int rn,
	unsigned int rt,
	unsigned int opcode,
	unsigned int imm8
);
void emit_thumb_load_store_double_ex (
	mambo_context *ctx,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback,
	unsigned int load_store,
	unsigned int rn,
	unsigned int rt,
	unsigned int rd,
	unsigned int imm8
);
void emit_thumb_load_store_ex_tb_branch (
	mambo_context *ctx,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback,
	unsigned int load_store,
	unsigned int rn,
	unsigned int rt,
	unsigned int rd,
	unsigned int opcode,
	unsigned int rm
);
void emit_thumb_load_store_multiple32 (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int writeback,
	unsigned int load,
	unsigned int rn,
	unsigned int reglist
);
void emit_thumb_branch32 (
	mambo_context *ctx,
	unsigned int sign_bit,
	unsigned int offset_high,
	unsigned int link,
	unsigned int j1,
	unsigned int thumb_mode,
	unsigned int j2,
	unsigned int offset_low
);
void emit_thumb_branch_cond32 (
	mambo_context *ctx,
	unsigned int sign_bit,
	unsigned int condition,
	unsigned int offset_high,
	unsigned int j1,
	unsigned int j2,
	unsigned int offset_low
);
void emit_thumb_special_control (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int option
);
void emit_thumb_status_reg_access (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int s_or_c,
	unsigned int rn,
	unsigned int rd
);
void emit_thumb_coproc_proc (
	mambo_context *ctx,
	unsigned int opc1,
	unsigned int crn,
	unsigned int crd,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
);
void emit_thumb_coproc_trans (
	mambo_context *ctx,
	unsigned int opc1,
	unsigned int load,
	unsigned int crn,
	unsigned int rt,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
);
void emit_thumb_vmov_arm (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int to_arm,
	unsigned int rt2,
	unsigned int rt,
	unsigned int double_single,
	unsigned int n,
	unsigned int f2,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_vmov (
	mambo_context *ctx,
	unsigned int type,
	unsigned int d,
	unsigned int opcode,
	unsigned int vm2,
	unsigned int vd,
	unsigned int opcode2,
	unsigned int m2,
	unsigned int q,
	unsigned int m,
	unsigned int opcode3,
	unsigned int vm
);
void emit_thumb_vmovi_neon (
	mambo_context *ctx,
	unsigned int i,
	unsigned int d,
	unsigned int imm3,
	unsigned int vd,
	unsigned int cmode,
	unsigned int q,
	unsigned int op,
	unsigned int imm4
);
void emit_thumb_vmovi (
	mambo_context *ctx,
	unsigned int d,
	unsigned int immh,
	unsigned int vd,
	unsigned int sz,
	unsigned int imml
);
void emit_thumb_vfp_ldr_str (
	mambo_context *ctx,
	unsigned int upwards,
	unsigned int d,
	unsigned int load_store,
	unsigned int rn,
	unsigned int vd,
	unsigned int double_reg,
	unsigned int imm8
);
void emit_thumb_vcmp (
	mambo_context *ctx,
	unsigned int d,
	unsigned int empty,
	unsigned int vd,
	unsigned int sz,
	unsigned int e,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_v_s_ldm (
	mambo_context *ctx,
	unsigned int p,
	unsigned int upwards,
	unsigned int d,
	unsigned int writeback,
	unsigned int load_store,
	unsigned int rn,
	unsigned int vd,
	unsigned int double_prec,
	unsigned int imm8
);
void emit_thumb_vadd (
	mambo_context *ctx,
	unsigned int sub_add,
	unsigned int single_prec,
	unsigned int d,
	unsigned int sz,
	unsigned int vn,
	unsigned int vd,
	unsigned int opcode,
	unsigned int n,
	unsigned int q,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_vneg (
	mambo_context *ctx,
	unsigned int single_prec,
	unsigned int d,
	unsigned int size,
	unsigned int vd,
	unsigned int double_prec,
	unsigned int f,
	unsigned int f5,
	unsigned int sz,
	unsigned int q,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_vml (
	mambo_context *ctx,
	unsigned int op,
	unsigned int opcode2,
	unsigned int scalar,
	unsigned int d,
	unsigned int size,
	unsigned int vn,
	unsigned int vd,
	unsigned int f2,
	unsigned int opcode3,
	unsigned int f3,
	unsigned int f,
	unsigned int n,
	unsigned int q,
	unsigned int m,
	unsigned int f4,
	unsigned int vm
);
void emit_thumb_vcvt (
	mambo_context *ctx,
	unsigned int u,
	unsigned int opcode2,
	unsigned int d,
	unsigned int opcode3,
	unsigned int vd,
	unsigned int opcode4,
	unsigned int op,
	unsigned int q,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_vdiv (
	mambo_context *ctx,
	unsigned int d,
	unsigned int vn,
	unsigned int vd,
	unsigned int sz,
	unsigned int n,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_fpv_op (
	mambo_context *ctx,
	unsigned int d,
	unsigned int opcode,
	unsigned int vn,
	unsigned int vd,
	unsigned int opcode2,
	unsigned int sz,
	unsigned int n,
	unsigned int q,
	unsigned int m,
	unsigned int z,
	unsigned int vm
);
void emit_thumb_simd_op (
	mambo_context *ctx,
	unsigned int d,
	unsigned int sz,
	unsigned int vn,
	unsigned int vd,
	unsigned int opcode,
	unsigned int n,
	unsigned int q,
	unsigned int m,
	unsigned int z,
	unsigned int vm
);
void emit_thumb_neon_imm6 (
	mambo_context *ctx,
	unsigned int u,
	unsigned int d,
	unsigned int imm6,
	unsigned int vd,
	unsigned int opcode3,
	unsigned int opcode4,
	unsigned int l,
	unsigned int q,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_trans_mult_lane (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int d,
	unsigned int opcode2,
	unsigned int rn,
	unsigned int vd,
	unsigned int size,
	unsigned int element_size,
	unsigned int sz,
	unsigned int align,
	unsigned int rm
);
void emit_thumb_neon_imm4_2reg (
	mambo_context *ctx,
	unsigned int d,
	unsigned int imm4,
	unsigned int vd,
	unsigned int opcode,
	unsigned int opcode2,
	unsigned int q,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_neon_imm4_3reg (
	mambo_context *ctx,
	unsigned int d,
	unsigned int vn,
	unsigned int vd,
	unsigned int imm4,
	unsigned int n,
	unsigned int q,
	unsigned int m,
	unsigned int vm
);
void emit_thumb_data_proc_rd_rn_rm (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_thumb_data_proc_rd_rn_rm_ra (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void emit_thumb_vfp_ld_st_m (
	mambo_context *ctx,
	unsigned int p,
	unsigned int upwards,
	unsigned int writeback,
	unsigned int rn,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
);
void emit_thumb_vfp_vldr_vstr (
	mambo_context *ctx,
	unsigned int upwards,
	unsigned int rn,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
);
#endif
#endif
