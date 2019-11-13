#ifndef __THUMB_PIE_ENCODER_H__
#define __THUMB_PIE_ENCODER_H__
#include <stdint.h>
void thumb_adc16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rdn
);
void thumb_add16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
);
void thumb_add_from_pc16 (
	uint16_t **address,
	unsigned int rd,
	unsigned int imm8
);
void thumb_add_from_sp16 (
	uint16_t **address,
	unsigned int rd,
	unsigned int imm8
);
void thumb_addh16 (
	uint16_t **address,
	unsigned int dn,
	unsigned int rm,
	unsigned int rdn
);
void thumb_addi16 (
	uint16_t **address,
	unsigned int imm3,
	unsigned int rn,
	unsigned int rd
);
void thumb_addri16 (
	uint16_t **address,
	unsigned int rdn,
	unsigned int imm8
);
void thumb_add_sp_i16 (
	uint16_t **address,
	unsigned int imm7
);
void thumb_and16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rdn
);
void thumb_asr16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rdn
);
void thumb_asri16 (
	uint16_t **address,
	unsigned int imm5,
	unsigned int rm,
	unsigned int rd
);
void thumb_b16 (
	uint16_t **address,
	unsigned int imm11
);
void thumb_bic16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rdn
);
void thumb_bkpt16 (
	uint16_t **address,
	unsigned int imm8
);
void thumb_b_cond16 (
	uint16_t **address,
	unsigned int condition,
	unsigned int imm8
);
void thumb_blx16 (
	uint16_t **address,
	unsigned int rm
);
void thumb_bx16 (
	uint16_t **address,
	unsigned int rm
);
void thumb_cbnz16 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int imm5,
	unsigned int rn
);
void thumb_cbz16 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int imm5,
	unsigned int rn
);
void thumb_cmn16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rdn
);
void thumb_cmp16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rdn
);
void thumb_cmph16 (
	uint16_t **address,
	unsigned int dn,
	unsigned int rm,
	unsigned int rdn
);
void thumb_cmpri16 (
	uint16_t **address,
	unsigned int rdn,
	unsigned int imm8
);
void thumb_eor16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rdn
);
void thumb_it16 (
	uint16_t **address,
	unsigned int cond,
	unsigned int mask
);
void thumb_ldmfd16 (
	uint16_t **address,
	unsigned int rn,
	unsigned int reglist
);
void thumb_ldr16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
);
void thumb_ldrb16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
);
void thumb_ldrbi16 (
	uint16_t **address,
	unsigned int imm5,
	unsigned int rn,
	unsigned int rd
);
void thumb_ldrh16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
);
void thumb_ldrhi16 (
	uint16_t **address,
	unsigned int imm5,
	unsigned int rn,
	unsigned int rd
);
void thumb_ldri16 (
	uint16_t **address,
	unsigned int imm5,
	unsigned int rn,
	unsigned int rd
);
void thumb_ldr_pc_16 (
	uint16_t **address,
	unsigned int rd,
	unsigned int imm8
);
void thumb_ldrsb16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
);
void thumb_ldrsh16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
);
void thumb_ldr_sp16 (
	uint16_t **address,
	unsigned int rd,
	unsigned int imm8
);
void thumb_lsl16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rdn
);
void thumb_lsli16 (
	uint16_t **address,
	unsigned int imm5,
	unsigned int rm,
	unsigned int rd
);
void thumb_lsr16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rdn
);
void thumb_lsri16 (
	uint16_t **address,
	unsigned int imm5,
	unsigned int rm,
	unsigned int rd
);
void thumb_movh16 (
	uint16_t **address,
	unsigned int dn,
	unsigned int rm,
	unsigned int rdn
);
void thumb_movi16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rd
);
void thumb_movri16 (
	uint16_t **address,
	unsigned int rdn,
	unsigned int imm8
);
void thumb_mul16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rdn
);
void thumb_mvn16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rdn
);
void thumb_nop16 (
	uint16_t **address
);
void thumb_orr16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rdn
);
void thumb_pop16 (
	uint16_t **address,
	unsigned int reg
);
void thumb_push16 (
	uint16_t **address,
	unsigned int reg
);
void thumb_rev16 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd
);
void thumb_rev1616 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd
);
void thumb_revsh16 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd
);
void thumb_ror16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rdn
);
void thumb_rsbi16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rdn
);
void thumb_sbc16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rdn
);
void thumb_setend16 (
	uint16_t **address,
	unsigned int is_bigend
);
void thumb_sev16 (
	uint16_t **address
);
void thumb_stmea16 (
	uint16_t **address,
	unsigned int rn,
	unsigned int reglist
);
void thumb_str16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
);
void thumb_strb16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
);
void thumb_strbi16 (
	uint16_t **address,
	unsigned int imm5,
	unsigned int rn,
	unsigned int rd
);
void thumb_strh16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
);
void thumb_strhi16 (
	uint16_t **address,
	unsigned int imm5,
	unsigned int rn,
	unsigned int rd
);
void thumb_stri16 (
	uint16_t **address,
	unsigned int imm5,
	unsigned int rn,
	unsigned int rd
);
void thumb_str_sp16 (
	uint16_t **address,
	unsigned int rd,
	unsigned int imm8
);
void thumb_sub16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
);
void thumb_subi16 (
	uint16_t **address,
	unsigned int imm3,
	unsigned int rn,
	unsigned int rd
);
void thumb_subri16 (
	uint16_t **address,
	unsigned int rdn,
	unsigned int imm8
);
void thumb_sub_sp_i16 (
	uint16_t **address,
	unsigned int imm7
);
void thumb_svc16 (
	uint16_t **address,
	unsigned int imm8
);
void thumb_sxtb16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rd
);
void thumb_sxth16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rd
);
void thumb_tst16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rdn
);
void thumb_udf16 (
	uint16_t **address,
	unsigned int imm8
);
void thumb_uxtb16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rd
);
void thumb_uxth16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rd
);
void thumb_wfe16 (
	uint16_t **address
);
void thumb_wfi16 (
	uint16_t **address
);
void thumb_yield16 (
	uint16_t **address
);
void thumb_adc32 (
	uint16_t **address,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
);
void thumb_adci32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
);
void thumb_add32 (
	uint16_t **address,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
);
void thumb_addi32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
);
void thumb_addwi32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
);
void thumb_adrwi_post32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
);
void thumb_adrwi_pre32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
);
void thumb_and32 (
	uint16_t **address,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
);
void thumb_andi32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
);
void thumb_asr32 (
	uint16_t **address,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
);
void thumb_asri32 (
	uint16_t **address,
	unsigned int set_flags,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int rm
);
void thumb_b32 (
	uint16_t **address,
	unsigned int sign_bit,
	unsigned int offset_high,
	unsigned int j1,
	unsigned int j2,
	unsigned int offset_low
);
void thumb_b_cond32 (
	uint16_t **address,
	unsigned int sign_bit,
	unsigned int condition,
	unsigned int offset_high,
	unsigned int j1,
	unsigned int j2,
	unsigned int offset_low
);
void thumb_bfc32 (
	uint16_t **address,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int imm5
);
void thumb_bfi32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int imm5
);
void thumb_bic32 (
	uint16_t **address,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
);
void thumb_bici32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
);
void thumb_bl32 (
	uint16_t **address,
	unsigned int sign_bit,
	unsigned int offset_high,
	unsigned int j1,
	unsigned int j2,
	unsigned int offset_low
);
void thumb_bl_arm32 (
	uint16_t **address,
	unsigned int sign_bit,
	unsigned int offset_high,
	unsigned int j1,
	unsigned int j2,
	unsigned int offset_low
);
void thumb_cdp32 (
	uint16_t **address,
	unsigned int coproc,
	unsigned int opc1,
	unsigned int crd,
	unsigned int crn,
	unsigned int crm,
	unsigned int opc2
);
void thumb_cdp232 (
	uint16_t **address,
	unsigned int coproc,
	unsigned int opc1,
	unsigned int crd,
	unsigned int crn,
	unsigned int crm,
	unsigned int opc2
);
void thumb_clrex32 (
	uint16_t **address,
	unsigned int option
);
void thumb_clz32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
);
void thumb_cmn32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int imm3,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
);
void thumb_cmni32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int rn,
	unsigned int imm3,
	unsigned int imm8
);
void thumb_cmp32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int imm3,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
);
void thumb_cmpi32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int rn,
	unsigned int imm3,
	unsigned int imm8
);
void thumb_dbg32 (
	uint16_t **address,
	unsigned int option
);
void thumb_dmb32 (
	uint16_t **address,
	unsigned int option
);
void thumb_dsb32 (
	uint16_t **address,
	unsigned int option
);
void thumb_eor32 (
	uint16_t **address,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
);
void thumb_eori32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
);
void thumb_isb32 (
	uint16_t **address,
	unsigned int option
);
void thumb_ldc32 (
	uint16_t **address,
	unsigned int coproc,
	unsigned int d,
	unsigned int crd,
	unsigned int rn,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback,
	unsigned int imm8
);
void thumb_ldc232 (
	uint16_t **address,
	unsigned int coproc,
	unsigned int d,
	unsigned int crd,
	unsigned int rn,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback,
	unsigned int imm8
);
void thumb_ldmea32 (
	uint16_t **address,
	unsigned int writeback,
	unsigned int rn,
	unsigned int reglist
);
void thumb_ldmfd32 (
	uint16_t **address,
	unsigned int writeback,
	unsigned int rn,
	unsigned int reglist
);
void thumb_ldr32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rt,
	unsigned int shift,
	unsigned int rm
);
void thumb_ldrb32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rt,
	unsigned int shift,
	unsigned int rm
);
void thumb_ldrbi32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback
);
void thumb_ldrbl32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int imm12,
	unsigned int upwards
);
void thumb_ldrbwi32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm12
);
void thumb_ldrbt32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8
);
void thumb_ldrd32 (
	uint16_t **address,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback,
	unsigned int rn,
	unsigned int rt,
	unsigned int rd,
	unsigned int imm8
);
void thumb_ldrex32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rt,
	unsigned int imm8
);
void thumb_ldrexb32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rt
);
void thumb_ldrexd32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rt,
	unsigned int rt2
);
void thumb_ldrexh32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rt
);
void thumb_ldrh32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rt,
	unsigned int shift,
	unsigned int rm
);
void thumb_ldrhi32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback
);
void thumb_ldrhl32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int imm12,
	unsigned int upwards
);
void thumb_ldrhwi32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm12
);
void thumb_ldrht32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8
);
void thumb_ldri32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback
);
void thumb_ldrl32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int imm12,
	unsigned int upwards
);
void thumb_ldrsb32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rt,
	unsigned int shift,
	unsigned int rm
);
void thumb_ldrsbi32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback
);
void thumb_ldrsbl32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int imm12,
	unsigned int upwards
);
void thumb_ldrsbwi32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm12
);
void thumb_ldrsbt32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8
);
void thumb_ldrsh32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rt,
	unsigned int shift,
	unsigned int rm
);
void thumb_ldrshi32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback
);
void thumb_ldrshl32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int imm12,
	unsigned int upwards
);
void thumb_ldrshwi32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm12
);
void thumb_ldrsht32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8
);
void thumb_ldrt32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8
);
void thumb_ldrwi32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm12
);
void thumb_lsl32 (
	uint16_t **address,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
);
void thumb_lsli32 (
	uint16_t **address,
	unsigned int set_flags,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int rm
);
void thumb_lsr32 (
	uint16_t **address,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
);
void thumb_lsri32 (
	uint16_t **address,
	unsigned int set_flags,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int rm
);
void thumb_mcr32 (
	uint16_t **address,
	unsigned int opc1,
	unsigned int crn,
	unsigned int rt,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
);
void thumb_mcr232 (
	uint16_t **address,
	unsigned int opc1,
	unsigned int crn,
	unsigned int rt,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
);
void thumb_mcrr32 (
	uint16_t **address,
	unsigned int coproc,
	unsigned int opc1,
	unsigned int rt,
	unsigned int rt2,
	unsigned int crm
);
void thumb_mcrr232 (
	uint16_t **address,
	unsigned int coproc,
	unsigned int opc1,
	unsigned int rt,
	unsigned int rt2,
	unsigned int crm
);
void thumb_mla32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int racc,
	unsigned int rd,
	unsigned int rm
);
void thumb_mls32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int racc,
	unsigned int rd,
	unsigned int rm
);
void thumb_mov32 (
	uint16_t **address,
	unsigned int set_flags,
	unsigned int rd,
	unsigned int rm
);
void thumb_movi32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
);
void thumb_movwi32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int imm4,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
);
void thumb_movti32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int imm4,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
);
void thumb_mrc32 (
	uint16_t **address,
	unsigned int opc1,
	unsigned int crn,
	unsigned int rt,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
);
void thumb_mrc232 (
	uint16_t **address,
	unsigned int opc1,
	unsigned int crn,
	unsigned int rt,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
);
void thumb_mrrc32 (
	uint16_t **address,
	unsigned int coproc,
	unsigned int opc,
	unsigned int rt,
	unsigned int rt2,
	unsigned int crm
);
void thumb_mrrc232 (
	uint16_t **address,
	unsigned int coproc,
	unsigned int opc,
	unsigned int rt,
	unsigned int rt2,
	unsigned int crm
);
void thumb_mrs32 (
	uint16_t **address,
	unsigned int rd
);
void thumb_msr32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int mask
);
void thumb_mul32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
);
void thumb_mvn32 (
	uint16_t **address,
	unsigned int set_flags,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
);
void thumb_mvni32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
);
void thumb_nop32 (
	uint16_t **address
);
void thumb_orn32 (
	uint16_t **address,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
);
void thumb_orni32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
);
void thumb_orr32 (
	uint16_t **address,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
);
void thumb_orri32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
);
void thumb_pkh32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
);
void thumb_pld32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int shift,
	unsigned int rm
);
void thumb_pldi32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int imm12
);
void thumb_pldim32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int imm8
);
void thumb_pld_lit32 (
	uint16_t **address,
	unsigned int upwards,
	unsigned int imm12
);
void thumb_pldw32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int shift,
	unsigned int rm
);
void thumb_pldwi32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int imm12
);
void thumb_pldwim32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int imm8
);
void thumb_pli32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rm,
	unsigned int shift
);
void thumb_plii32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int imm12
);
void thumb_pliim32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int imm8
);
void thumb_pli_lit32 (
	uint16_t **address,
	unsigned int upwards,
	unsigned int imm12
);
void thumb_qadd32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
);
void thumb_qadd1632 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void thumb_qadd832 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void thumb_qasx32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void thumb_qdadd32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
);
void thumb_qdsub32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
);
void thumb_qsax32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void thumb_qsub32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
);
void thumb_qsub1632 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void thumb_qsub832 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void thumb_rbit32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
);
void thumb_rev32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
);
void thumb_rev1632 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
);
void thumb_revsh32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
);
void thumb_ror32 (
	uint16_t **address,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
);
void thumb_rori32 (
	uint16_t **address,
	unsigned int set_flags,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int rm
);
void thumb_rrx32 (
	uint16_t **address,
	unsigned int set_flags,
	unsigned int rd,
	unsigned int rm
);
void thumb_rsb32 (
	uint16_t **address,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
);
void thumb_rsbi32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
);
void thumb_sadd1632 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void thumb_sadd832 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void thumb_sasx32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void thumb_sbc32 (
	uint16_t **address,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
);
void thumb_sbci32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
);
void thumb_sbfx32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int imm5
);
void thumb_sdiv32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rdhi,
	unsigned int rm
);
void thumb_sel32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
);
void thumb_sev32 (
	uint16_t **address
);
void thumb_shadd1632 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void thumb_shadd832 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void thumb_shasx32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void thumb_shsax32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void thumb_shsub1632 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void thumb_shsub832 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void thumb_simd_add_sub32 (
	uint16_t **address,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd,
	unsigned int pref,
	unsigned int rm
);
void thumb_smlabb32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void thumb_smlabt32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void thumb_smlatb32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void thumb_smlatt32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void thumb_smlad32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int racc,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
);
void thumb_smlal32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rdlo,
	unsigned int rdhi,
	unsigned int rm
);
void thumb_smlalbb32 (
	uint16_t **address,
	unsigned int rdlo,
	unsigned int rdhi,
	unsigned int rn,
	unsigned int rm
);
void thumb_smlalbt32 (
	uint16_t **address,
	unsigned int rdlo,
	unsigned int rdhi,
	unsigned int rn,
	unsigned int rm
);
void thumb_smlaltb32 (
	uint16_t **address,
	unsigned int rdlo,
	unsigned int rdhi,
	unsigned int rn,
	unsigned int rm
);
void thumb_smlaltt32 (
	uint16_t **address,
	unsigned int rdlo,
	unsigned int rdhi,
	unsigned int rn,
	unsigned int rm
);
void thumb_smlald32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rdlo,
	unsigned int rdhi,
	unsigned int m_swap,
	unsigned int rm
);
void thumb_smlawb32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void thumb_smlawt32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void thumb_smlsd32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int racc,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
);
void thumb_smlsld32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rdlo,
	unsigned int rdhi,
	unsigned int m_swap,
	unsigned int rm
);
void thumb_smmla32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int racc,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
);
void thumb_smmls32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int racc,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
);
void thumb_smmul32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
);
void thumb_smuad32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
);
void thumb_smulbb32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void thumb_smulbt32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void thumb_smultb32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void thumb_smultt32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void thumb_smull32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rdlo,
	unsigned int rdhi,
	unsigned int rm
);
void thumb_smulwb32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
);
void thumb_smulwt32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
);
void thumb_smusd32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
);
void thumb_ssat1632 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd
);
void thumb_ssat_asr32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int imm5
);
void thumb_ssat_lsl32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int imm5
);
void thumb_ssax32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void thumb_ssub1632 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void thumb_ssub832 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void thumb_stc32 (
	uint16_t **address,
	unsigned int coproc,
	unsigned int d,
	unsigned int crd,
	unsigned int rn,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback,
	unsigned int imm8
);
void thumb_stc232 (
	uint16_t **address,
	unsigned int coproc,
	unsigned int d,
	unsigned int crd,
	unsigned int rn,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback,
	unsigned int imm8
);
void thumb_stmea32 (
	uint16_t **address,
	unsigned int writeback,
	unsigned int rn,
	unsigned int reglist
);
void thumb_stmfd32 (
	uint16_t **address,
	unsigned int writeback,
	unsigned int rn,
	unsigned int reglist
);
void thumb_str32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rt,
	unsigned int shift,
	unsigned int rm
);
void thumb_strb32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rt,
	unsigned int shift,
	unsigned int rm
);
void thumb_strbi32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback
);
void thumb_strbwi32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm12
);
void thumb_strbt32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8
);
void thumb_strd32 (
	uint16_t **address,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback,
	unsigned int rn,
	unsigned int rt,
	unsigned int rd,
	unsigned int imm8
);
void thumb_strex32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rt,
	unsigned int rd,
	unsigned int imm8
);
void thumb_strexb32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rt,
	unsigned int rd
);
void thumb_strexd32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rt,
	unsigned int rt2,
	unsigned int rd
);
void thumb_strexh32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rt,
	unsigned int rd
);
void thumb_strh32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rt,
	unsigned int shift,
	unsigned int rm
);
void thumb_strhi32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback
);
void thumb_strhwi32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm12
);
void thumb_strht32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8
);
void thumb_stri32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback
);
void thumb_strt32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8
);
void thumb_strwi32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm12
);
void thumb_sub32 (
	uint16_t **address,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
);
void thumb_subi32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
);
void thumb_subwi32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
);
void thumb_sxtab1632 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
);
void thumb_sxtab32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
);
void thumb_sxtah32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
);
void thumb_sxtb1632 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
);
void thumb_sxtb32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
);
void thumb_sxth32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
);
void thumb_tbb32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rm
);
void thumb_tbh32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rm
);
void thumb_teq32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int imm3,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
);
void thumb_teqi32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int rn,
	unsigned int imm3,
	unsigned int imm8
);
void thumb_tst32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int imm3,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
);
void thumb_tsti32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int rn,
	unsigned int imm3,
	unsigned int imm8
);
void thumb_uadd1632 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void thumb_uadd832 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void thumb_uasx32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void thumb_ubfx32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int imm5
);
void thumb_udf32 (
	uint16_t **address,
	unsigned int imm4,
	unsigned int imm12
);
void thumb_udiv32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rdhi,
	unsigned int rm
);
void thumb_uhadd1632 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void thumb_uhadd832 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void thumb_uhasx32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void thumb_uhsax32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void thumb_uhsub1632 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void thumb_uhsub832 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void thumb_umaal32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rdlo,
	unsigned int rdhi,
	unsigned int rm
);
void thumb_umlal32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rdlo,
	unsigned int rdhi,
	unsigned int rm
);
void thumb_umull32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rdlo,
	unsigned int rdhi,
	unsigned int rm
);
void thumb_uqadd1632 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void thumb_uqadd832 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void thumb_uqasx32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void thumb_uqsax32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void thumb_uqsub1632 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void thumb_uqsub832 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void thumb_usad832 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
);
void thumb_usada832 (
	uint16_t **address,
	unsigned int rn,
	unsigned int racc,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
);
void thumb_usat1632 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd
);
void thumb_usat_asr32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int imm5
);
void thumb_usat_lsl32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int imm5
);
void thumb_usax32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void thumb_usub1632 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void thumb_usub832 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void thumb_uxtab1632 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
);
void thumb_uxtab32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
);
void thumb_uxtah32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
);
void thumb_uxtb1632 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
);
void thumb_uxtb32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
);
void thumb_uxth32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
);
void thumb_wfe32 (
	uint16_t **address
);
void thumb_wfi32 (
	uint16_t **address
);
void thumb_yield32 (
	uint16_t **address
);
void thumb_neon_vaba (
	uint16_t **address,
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
void thumb_neon_vabal (
	uint16_t **address,
	unsigned int unsign,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vabd_i (
	uint16_t **address,
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
void thumb_neon_vabd_f (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vabdl (
	uint16_t **address,
	unsigned int unsign,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vabs (
	uint16_t **address,
	unsigned int is_float,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void thumb_vfp_vabs (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vacge (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vacgt (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vadd_i (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vadd_f (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_vfp_vadd (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vaddhn (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int n,
	unsigned int vd,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vaddl (
	uint16_t **address,
	unsigned int unsign,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vaddw (
	uint16_t **address,
	unsigned int unsign,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vand (
	uint16_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vbic (
	uint16_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vbici (
	uint16_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int cmode,
	unsigned int i,
	unsigned int imm3,
	unsigned int imm4
);
void thumb_neon_vbif (
	uint16_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vbit (
	uint16_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vbsl (
	uint16_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vceq_i (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vceq_f (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vceqz (
	uint16_t **address,
	unsigned int is_float,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vcge_i (
	uint16_t **address,
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
void thumb_neon_vcge_f (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vcgez (
	uint16_t **address,
	unsigned int is_float,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vcgt_i (
	uint16_t **address,
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
void thumb_neon_vcgt_f (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vcgtz (
	uint16_t **address,
	unsigned int is_float,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vclez (
	uint16_t **address,
	unsigned int is_float,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vcls (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vcltz (
	uint16_t **address,
	unsigned int is_float,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vclz (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void thumb_vfp_vcmp (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void thumb_vfp_vcmpz (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd
);
void thumb_vfp_vcmpe (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void thumb_vfp_vcmpez (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd
);
void thumb_neon_vcnt (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vcvt_f_i (
	uint16_t **address,
	unsigned int op,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vcvt_f_fp (
	uint16_t **address,
	unsigned int op,
	unsigned int unsign,
	unsigned int q,
	unsigned int d,
	unsigned int vm,
	unsigned int m,
	unsigned int imm6
);
void thumb_neon_vcvt_hp_sp (
	uint16_t **address,
	unsigned int op,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void thumb_vfp_vcvt_f_i (
	uint16_t **address,
	unsigned int op,
	unsigned int op2,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void thumb_vfp_vcvt_f_fp (
	uint16_t **address,
	unsigned int op,
	unsigned int unsign,
	unsigned int sf,
	unsigned int sx,
	unsigned int d,
	unsigned int vd,
	unsigned int imm4,
	unsigned int i
);
void thumb_vfp_vcvt_dp_sp (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void thumb_vfp_vcvtb (
	uint16_t **address,
	unsigned int op,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void thumb_vfp_vcvtt (
	uint16_t **address,
	unsigned int op,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void thumb_vfp_vdiv (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vdup_scal (
	uint16_t **address,
	unsigned int q,
	unsigned int imm4,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vdup_core (
	uint16_t **address,
	unsigned int b,
	unsigned int e,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int rt
);
void thumb_neon_veor (
	uint16_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vext (
	uint16_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm,
	unsigned int imm4
);
void thumb_neon_vfma (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vfms (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_vfp_vfma (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_vfp_vfms (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_vfp_vfnma (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_vfp_vfnms (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vhadd (
	uint16_t **address,
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
void thumb_neon_vhsub (
	uint16_t **address,
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
void thumb_neon_vldx_m (
	uint16_t **address,
	unsigned int opcode,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int rn,
	unsigned int align,
	unsigned int rm
);
void thumb_neon_vldx_s_o (
	uint16_t **address,
	unsigned int opcode,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int rn,
	unsigned int index_align,
	unsigned int rm
);
void thumb_neon_vldx_s_a (
	uint16_t **address,
	unsigned int opcode,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int inc,
	unsigned int rn,
	unsigned int align,
	unsigned int rm
);
void thumb_vfp_vldm_dp (
	uint16_t **address,
	unsigned int p,
	unsigned int upwards,
	unsigned int writeback,
	unsigned int rn,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
);
void thumb_vfp_vldm_sp (
	uint16_t **address,
	unsigned int p,
	unsigned int upwards,
	unsigned int writeback,
	unsigned int rn,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
);
void thumb_vfp_vldr_dp (
	uint16_t **address,
	unsigned int upwards,
	unsigned int rn,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
);
void thumb_vfp_vldr_sp (
	uint16_t **address,
	unsigned int upwards,
	unsigned int rn,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
);
void thumb_neon_vmax_i (
	uint16_t **address,
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
void thumb_neon_vmin_i (
	uint16_t **address,
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
void thumb_neon_vmax_f (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vmin_f (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vmla_i (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vmls_i (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vmlal_i (
	uint16_t **address,
	unsigned int unsign,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vmlsl_i (
	uint16_t **address,
	unsigned int unsign,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vmla_f (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vmls_f (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_vfp_vmla_f (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_vfp_vmls_f (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vmla_scal (
	uint16_t **address,
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
void thumb_neon_vmls_scal (
	uint16_t **address,
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
void thumb_neon_vmlal_scal (
	uint16_t **address,
	unsigned int unsign,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vmlsl_scal (
	uint16_t **address,
	unsigned int unsign,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vmovi (
	uint16_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int op,
	unsigned int cmode,
	unsigned int i,
	unsigned int imm3,
	unsigned int imm4
);
void thumb_vfp_vmovi (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int imm4h,
	unsigned int imm4l
);
void thumb_vfp_vmov (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void thumb_vfp_vmov_core_scal (
	uint16_t **address,
	unsigned int d,
	unsigned int vd,
	unsigned int opc1,
	unsigned int opc2,
	unsigned int rt
);
void thumb_vfp_vmov_scal_core (
	uint16_t **address,
	unsigned int unsign,
	unsigned int rt,
	unsigned int n,
	unsigned int vn,
	unsigned int opc1,
	unsigned int opc2
);
void thumb_vfp_vmov_core_sp (
	uint16_t **address,
	unsigned int op,
	unsigned int rt,
	unsigned int n,
	unsigned int vn
);
void thumb_vfp_vmov_2core_2sp (
	uint16_t **address,
	unsigned int to_arm,
	unsigned int rt,
	unsigned int rt2,
	unsigned int m,
	unsigned int vm
);
void thumb_vfp_vmov_2core_dp (
	uint16_t **address,
	unsigned int to_arm,
	unsigned int rt,
	unsigned int rt2,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vmovl (
	uint16_t **address,
	unsigned int op,
	unsigned int unsign,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vmovn (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void thumb_vfp_vmrs (
	uint16_t **address,
	unsigned int rt
);
void thumb_vfp_vmsr (
	uint16_t **address,
	unsigned int rt
);
void thumb_neon_vmul_i (
	uint16_t **address,
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
void thumb_neon_vmull_i (
	uint16_t **address,
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
void thumb_neon_vmul_f (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_vfp_vmul (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vmul_scal (
	uint16_t **address,
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
void thumb_neon_vmull_scal (
	uint16_t **address,
	unsigned int unsign,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vmvni (
	uint16_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int cmode,
	unsigned int i,
	unsigned int imm3,
	unsigned int imm4
);
void thumb_neon_vmvn (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vneg (
	uint16_t **address,
	unsigned int is_float,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void thumb_vfp_vneg (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void thumb_vfp_vnmla (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_vfp_vnmls (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_vfp_vnmul (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vorn (
	uint16_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vorri (
	uint16_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int cmode,
	unsigned int i,
	unsigned int imm3,
	unsigned int imm4
);
void thumb_neon_vorr (
	uint16_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vpadal (
	uint16_t **address,
	unsigned int unsign,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vpadd_i (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vpadd_f (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vpaddl (
	uint16_t **address,
	unsigned int unsign,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vpmax_i (
	uint16_t **address,
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
void thumb_neon_vpmin_i (
	uint16_t **address,
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
void thumb_neon_vpmax_f (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vpmin_f (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_vfp_vpop (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int regs
);
void thumb_vfp_vpush (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int regs
);
void thumb_neon_vqabs (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vqadd (
	uint16_t **address,
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
void thumb_neon_vqdmlal_i (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vqdmlsl_i (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vqdmlal_scal (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vqdmlsl_scal (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vqdmulh_i (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vqdmulh_scal (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vqdmull_i (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vqdmull_scal (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vqmovn (
	uint16_t **address,
	unsigned int unsign,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vqmovun (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vqneg (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vqrdmulh_i (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vqrdmulh_scal (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vqrshl (
	uint16_t **address,
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
void thumb_neon_vqrshrn (
	uint16_t **address,
	unsigned int unsign,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
);
void thumb_neon_vqrshrun (
	uint16_t **address,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
);
void thumb_neon_vqshl (
	uint16_t **address,
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
void thumb_neon_vqshli (
	uint16_t **address,
	unsigned int unsign,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int l,
	unsigned int imm6
);
void thumb_neon_vqshlui (
	uint16_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int l,
	unsigned int imm6
);
void thumb_neon_vqshrn (
	uint16_t **address,
	unsigned int unsign,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
);
void thumb_neon_vqshrun (
	uint16_t **address,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
);
void thumb_neon_vqsub (
	uint16_t **address,
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
void thumb_neon_vraddhn (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vrecpe (
	uint16_t **address,
	unsigned int is_float,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vrecps (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vrev16 (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vrev32 (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vrev64 (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vrhadd (
	uint16_t **address,
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
void thumb_neon_vrshl (
	uint16_t **address,
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
void thumb_neon_vrshr (
	uint16_t **address,
	unsigned int unsign,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int l,
	unsigned int imm6
);
void thumb_neon_vrshrn (
	uint16_t **address,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
);
void thumb_neon_vrsqrte (
	uint16_t **address,
	unsigned int is_float,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vrsqrts (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vrsra (
	uint16_t **address,
	unsigned int unsign,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int l,
	unsigned int imm6
);
void thumb_neon_vrsubhn (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vshl (
	uint16_t **address,
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
void thumb_neon_vshli (
	uint16_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int l,
	unsigned int imm6
);
void thumb_neon_vshll (
	uint16_t **address,
	unsigned int unsign,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
);
void thumb_neon_vshll2 (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vshr (
	uint16_t **address,
	unsigned int unsign,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int l,
	unsigned int imm6
);
void thumb_neon_vshrn (
	uint16_t **address,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
);
void thumb_neon_vsli (
	uint16_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int l,
	unsigned int imm6
);
void thumb_vfp_vsqrt (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vsra (
	uint16_t **address,
	unsigned int unsign,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int l,
	unsigned int imm6
);
void thumb_neon_vsri (
	uint16_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int l,
	unsigned int imm6
);
void thumb_neon_vstx_m (
	uint16_t **address,
	unsigned int opcode,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int rn,
	unsigned int align,
	unsigned int rm
);
void thumb_neon_vstx_s_o (
	uint16_t **address,
	unsigned int opcode,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int rn,
	unsigned int index_align,
	unsigned int rm
);
void thumb_vfp_vstm_dp (
	uint16_t **address,
	unsigned int p,
	unsigned int upwards,
	unsigned int writeback,
	unsigned int rn,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
);
void thumb_vfp_vstm_sp (
	uint16_t **address,
	unsigned int p,
	unsigned int upwards,
	unsigned int writeback,
	unsigned int rn,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
);
void thumb_vfp_vstr_dp (
	uint16_t **address,
	unsigned int upwards,
	unsigned int rn,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
);
void thumb_vfp_vstr_sp (
	uint16_t **address,
	unsigned int upwards,
	unsigned int rn,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
);
void thumb_neon_vsub_i (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vsub_f (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_vfp_vsub (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vsubhn (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vsubl (
	uint16_t **address,
	unsigned int unsign,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vsubw (
	uint16_t **address,
	unsigned int unsign,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vswp (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vtbl (
	uint16_t **address,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int len,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vtbx (
	uint16_t **address,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int len,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vtrn (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vtst (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vuzp (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_vzip (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void thumb_vfp_vsel (
	uint16_t **address,
	unsigned int size,
	unsigned int cond,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void thumb_shift_i_mov_16 (
	uint16_t **address,
	unsigned int opcode,
	unsigned int imm5,
	unsigned int rm,
	unsigned int rd
);
void thumb_add_sub_16 (
	uint16_t **address,
	unsigned int opcode,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
);
void thumb_add_sub_i_16 (
	uint16_t **address,
	unsigned int opcode,
	unsigned int imm3,
	unsigned int rn,
	unsigned int rd
);
void thumb_add_sub_comp_mov_i_16 (
	uint16_t **address,
	unsigned int opcode,
	unsigned int rdn,
	unsigned int imm8
);
void thumb_data_proc_16 (
	uint16_t **address,
	unsigned int opcode,
	unsigned int rm,
	unsigned int rdn
);
void thumb_special_data_proc_16 (
	uint16_t **address,
	unsigned int opcode,
	unsigned int dn,
	unsigned int rm,
	unsigned int rdn
);
void thumb_bx_16 (
	uint16_t **address,
	unsigned int link,
	unsigned int rm
);
void thumb_load_lit_16 (
	uint16_t **address,
	unsigned int rd,
	unsigned int imm8
);
void thumb_load_store_reg_offset_16 (
	uint16_t **address,
	unsigned int opcode,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
);
void thumb_load_store_byte_word_i_16 (
	uint16_t **address,
	unsigned int byte,
	unsigned int load,
	unsigned int imm5,
	unsigned int rn,
	unsigned int rd
);
void thumb_load_store_halfword_i_16 (
	uint16_t **address,
	unsigned int load,
	unsigned int imm5,
	unsigned int rn,
	unsigned int rd
);
void thumb_load_store_stack_16 (
	uint16_t **address,
	unsigned int load,
	unsigned int rd,
	unsigned int imm8
);
void thumb_add_sp_pc_16 (
	uint16_t **address,
	unsigned int sp,
	unsigned int rd,
	unsigned int imm8
);
void thumb_misc_add_sub_sp_i_16 (
	uint16_t **address,
	unsigned int opcode,
	unsigned int imm7
);
void thumb_misc_sign_zero_extend_16 (
	uint16_t **address,
	unsigned int opcode,
	unsigned int rm,
	unsigned int rd
);
void thumb_misc_cbz_16 (
	uint16_t **address,
	unsigned int n,
	unsigned int imm1,
	unsigned int imm5,
	unsigned int rn
);
void thumb_misc_push_pop_16 (
	uint16_t **address,
	unsigned int opcode,
	unsigned int reg
);
void thumb_misc_rev_16 (
	uint16_t **address,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
);
void thumb_misc_if_then_16 (
	uint16_t **address,
	unsigned int cond,
	unsigned int mask
);
void thumb_misc_nop_16 (
	uint16_t **address,
	unsigned int hint
);
void thumb_load_store_multiple_16 (
	uint16_t **address,
	unsigned int load,
	unsigned int rn,
	unsigned int reglist
);
void thumb_cond_branch_16 (
	uint16_t **address,
	unsigned int condition,
	unsigned int imm8
);
void thumb_svc_16 (
	uint16_t **address,
	unsigned int imm8
);
void thumb_uncond_branch_16 (
	uint16_t **address,
	unsigned int imm11
);
void thumb_data_proc_12bit_i_32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int opcode,
	unsigned int set_condition,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
);
void thumb_data_proc_12bit_i_plain_32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int opcode,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
);
void thumb_data_proc_16bit_i_32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int opcode,
	unsigned int imm4,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
);
void thumb_data_proc_bit_field (
	uint16_t **address,
	unsigned int opcode,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int imm5
);
void thumb_data_proc_const_shift (
	uint16_t **address,
	unsigned int opcode,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
);
void thumb_data_proc_reg_shift (
	uint16_t **address,
	unsigned int opcode,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
);
void thumb_data_proc_sign_zero_ext (
	uint16_t **address,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
);
void thumb_data_proc_simd_add_sub (
	uint16_t **address,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd,
	unsigned int pref,
	unsigned int rm
);
void thumb_data_proc_other_3reg (
	uint16_t **address,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
);
void thumb_data_proc_32_mult (
	uint16_t **address,
	unsigned int opcode,
	unsigned int rn,
	unsigned int racc,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
);
void thumb_data_proc_64_mult (
	uint16_t **address,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rdlo,
	unsigned int rdhi,
	unsigned int opcode2,
	unsigned int n_high,
	unsigned int m_swap,
	unsigned int rm
);
void thumb_load_store_single_reg_imm12_32 (
	uint16_t **address,
	unsigned int sign_ext,
	unsigned int upwards,
	unsigned int size,
	unsigned int load_store,
	unsigned int rn,
	unsigned int rt,
	unsigned int imm12
);
void thumb_load_store_single_reg_off_32 (
	uint16_t **address,
	unsigned int sign_ext,
	unsigned int size,
	unsigned int load_store,
	unsigned int rn,
	unsigned int rt,
	unsigned int shift,
	unsigned int rm
);
void thumb_pld_t2_32 (
	uint16_t **address,
	unsigned int sign_ext,
	unsigned int size,
	unsigned int load_store,
	unsigned int rn,
	unsigned int rt,
	unsigned int opcode,
	unsigned int imm8
);
void thumb_load_store_double_ex (
	uint16_t **address,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback,
	unsigned int load_store,
	unsigned int rn,
	unsigned int rt,
	unsigned int rd,
	unsigned int imm8
);
void thumb_load_store_ex_tb_branch (
	uint16_t **address,
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
void thumb_load_store_multiple32 (
	uint16_t **address,
	unsigned int opcode,
	unsigned int writeback,
	unsigned int load,
	unsigned int rn,
	unsigned int reglist
);
void thumb_branch32 (
	uint16_t **address,
	unsigned int sign_bit,
	unsigned int offset_high,
	unsigned int link,
	unsigned int j1,
	unsigned int thumb_mode,
	unsigned int j2,
	unsigned int offset_low
);
void thumb_branch_cond32 (
	uint16_t **address,
	unsigned int sign_bit,
	unsigned int condition,
	unsigned int offset_high,
	unsigned int j1,
	unsigned int j2,
	unsigned int offset_low
);
void thumb_special_control (
	uint16_t **address,
	unsigned int opcode,
	unsigned int option
);
void thumb_status_reg_access (
	uint16_t **address,
	unsigned int opcode,
	unsigned int s_or_c,
	unsigned int rn,
	unsigned int rd
);
void thumb_coproc_proc (
	uint16_t **address,
	unsigned int opc1,
	unsigned int crn,
	unsigned int crd,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
);
void thumb_coproc_trans (
	uint16_t **address,
	unsigned int opc1,
	unsigned int load,
	unsigned int crn,
	unsigned int rt,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
);
void thumb_vmov_arm (
	uint16_t **address,
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
void thumb_vmov (
	uint16_t **address,
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
void thumb_vmovi_neon (
	uint16_t **address,
	unsigned int i,
	unsigned int d,
	unsigned int imm3,
	unsigned int vd,
	unsigned int cmode,
	unsigned int q,
	unsigned int op,
	unsigned int imm4
);
void thumb_vmovi (
	uint16_t **address,
	unsigned int d,
	unsigned int immh,
	unsigned int vd,
	unsigned int sz,
	unsigned int imml
);
void thumb_vfp_ldr_str (
	uint16_t **address,
	unsigned int upwards,
	unsigned int d,
	unsigned int load_store,
	unsigned int rn,
	unsigned int vd,
	unsigned int double_reg,
	unsigned int imm8
);
void thumb_vcmp (
	uint16_t **address,
	unsigned int d,
	unsigned int empty,
	unsigned int vd,
	unsigned int sz,
	unsigned int e,
	unsigned int m,
	unsigned int vm
);
void thumb_v_s_ldm (
	uint16_t **address,
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
void thumb_vadd (
	uint16_t **address,
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
void thumb_vneg (
	uint16_t **address,
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
void thumb_vml (
	uint16_t **address,
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
void thumb_vcvt (
	uint16_t **address,
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
void thumb_vdiv (
	uint16_t **address,
	unsigned int d,
	unsigned int vn,
	unsigned int vd,
	unsigned int sz,
	unsigned int n,
	unsigned int m,
	unsigned int vm
);
void thumb_fpv_op (
	uint16_t **address,
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
void thumb_simd_op (
	uint16_t **address,
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
void thumb_neon_imm6 (
	uint16_t **address,
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
void thumb_neon_trans_mult_lane (
	uint16_t **address,
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
void thumb_neon_imm4_2reg (
	uint16_t **address,
	unsigned int d,
	unsigned int imm4,
	unsigned int vd,
	unsigned int opcode,
	unsigned int opcode2,
	unsigned int q,
	unsigned int m,
	unsigned int vm
);
void thumb_neon_imm4_3reg (
	uint16_t **address,
	unsigned int d,
	unsigned int vn,
	unsigned int vd,
	unsigned int imm4,
	unsigned int n,
	unsigned int q,
	unsigned int m,
	unsigned int vm
);
void thumb_data_proc_rd_rn_rm (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void thumb_data_proc_rd_rn_rm_ra (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void thumb_vfp_ld_st_m (
	uint16_t **address,
	unsigned int p,
	unsigned int upwards,
	unsigned int writeback,
	unsigned int rn,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
);
void thumb_vfp_vldr_vstr (
	uint16_t **address,
	unsigned int upwards,
	unsigned int rn,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
);
#endif
