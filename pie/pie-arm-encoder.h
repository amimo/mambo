#ifndef __ARM_PIE_ENCODER_H__
#define __ARM_PIE_ENCODER_H__
#include <stdint.h>
void arm_adc_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void arm_adc (
	uint32_t **address,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void arm_add_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void arm_add (
	uint32_t **address,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void arm_and_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void arm_and (
	uint32_t **address,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void arm_b_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int offset_branch
);
void arm_b (
	uint32_t **address,
	unsigned int offset_branch
);
void arm_bfc_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rt,
	unsigned int lsb,
	unsigned int msb
);
void arm_bfc (
	uint32_t **address,
	unsigned int rt,
	unsigned int lsb,
	unsigned int msb
);
void arm_bfi_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rt,
	unsigned int rn,
	unsigned int lsb,
	unsigned int msb
);
void arm_bfi (
	uint32_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int lsb,
	unsigned int msb
);
void arm_bic_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void arm_bic (
	uint32_t **address,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void arm_bkpt_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int imm12,
	unsigned int imm4
);
void arm_bkpt (
	uint32_t **address,
	unsigned int imm12,
	unsigned int imm4
);
void arm_bl_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int offset_branch
);
void arm_bl (
	uint32_t **address,
	unsigned int offset_branch
);
void arm_blx_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rn
);
void arm_blx (
	uint32_t **address,
	unsigned int rn
);
void arm_blxi (
	uint32_t **address,
	unsigned int h,
	unsigned int imm24
);
void arm_bx_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rn
);
void arm_bx (
	uint32_t **address,
	unsigned int rn
);
void arm_cdp_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int opc1,
	unsigned int crn,
	unsigned int crd,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
);
void arm_cdp (
	uint32_t **address,
	unsigned int opc1,
	unsigned int crn,
	unsigned int crd,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
);
void arm_cdp2 (
	uint32_t **address,
	unsigned int opc1,
	unsigned int crn,
	unsigned int crd,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
);
void arm_clrex (
	uint32_t **address
);
void arm_clz_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm
);
void arm_clz (
	uint32_t **address,
	unsigned int rd,
	unsigned int rm
);
void arm_cmn_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rn,
	unsigned int operand2
);
void arm_cmn (
	uint32_t **address,
	unsigned int immediate,
	unsigned int rn,
	unsigned int operand2
);
void arm_cmp_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rn,
	unsigned int operand2
);
void arm_cmp (
	uint32_t **address,
	unsigned int immediate,
	unsigned int rn,
	unsigned int operand2
);
void arm_dbg_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int option
);
void arm_dbg (
	uint32_t **address,
	unsigned int option
);
void arm_dmb (
	uint32_t **address,
	unsigned int option
);
void arm_dsb (
	uint32_t **address,
	unsigned int option
);
void arm_eor_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void arm_eor (
	uint32_t **address,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void arm_isb (
	uint32_t **address,
	unsigned int option
);
void arm_ldc_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int p,
	unsigned int u,
	unsigned int coproc,
	unsigned int w,
	unsigned int rn,
	unsigned int crd,
	unsigned int imm8
);
void arm_ldc (
	uint32_t **address,
	unsigned int p,
	unsigned int u,
	unsigned int coproc,
	unsigned int w,
	unsigned int rn,
	unsigned int crd,
	unsigned int imm8
);
void arm_ldm_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
);
void arm_ldm (
	uint32_t **address,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
);
void arm_ldr_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void arm_ldr (
	uint32_t **address,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void arm_ldrb_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void arm_ldrb (
	uint32_t **address,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void arm_ldrbt_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int updown,
	unsigned int operand2
);
void arm_ldrbt (
	uint32_t **address,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int updown,
	unsigned int operand2
);
void arm_ldrd_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm_imm4l,
	unsigned int imm4h,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void arm_ldrd (
	uint32_t **address,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm_imm4l,
	unsigned int imm4h,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void arm_ldrex_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn
);
void arm_ldrex (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn
);
void arm_ldrexb_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn
);
void arm_ldrexb (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn
);
void arm_ldrexd_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn
);
void arm_ldrexd (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn
);
void arm_ldrexh_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn
);
void arm_ldrexh (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn
);
void arm_ldrh_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm_imm4l,
	unsigned int imm4h,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void arm_ldrh (
	uint32_t **address,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm_imm4l,
	unsigned int imm4h,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void arm_ldrht_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm_imm4l,
	unsigned int imm4h,
	unsigned int updown
);
void arm_ldrht (
	uint32_t **address,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm_imm4l,
	unsigned int imm4h,
	unsigned int updown
);
void arm_ldrsb_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm_imm4l,
	unsigned int imm4h,
	unsigned int index,
	unsigned int updown,
	unsigned int writeback
);
void arm_ldrsb (
	uint32_t **address,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm_imm4l,
	unsigned int imm4h,
	unsigned int index,
	unsigned int updown,
	unsigned int writeback
);
void arm_ldrsbt_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int imm4h,
	unsigned int updown
);
void arm_ldrsbt (
	uint32_t **address,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int imm4h,
	unsigned int updown
);
void arm_ldrsh_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm_imm4l,
	unsigned int imm4h,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void arm_ldrsh (
	uint32_t **address,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm_imm4l,
	unsigned int imm4h,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void arm_ldrsht_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int imm4h,
	unsigned int updown
);
void arm_ldrsht (
	uint32_t **address,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int imm4h,
	unsigned int updown
);
void arm_ldrt_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int updown,
	unsigned int operand2
);
void arm_ldrt (
	uint32_t **address,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int updown,
	unsigned int operand2
);
void arm_mcr_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int opc1,
	unsigned int crn,
	unsigned int rd,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
);
void arm_mcr (
	uint32_t **address,
	unsigned int opc1,
	unsigned int crn,
	unsigned int rd,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
);
void arm_mcrr_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int coproc,
	unsigned int opc1,
	unsigned int rt,
	unsigned int rt2,
	unsigned int crm
);
void arm_mcrr (
	uint32_t **address,
	unsigned int coproc,
	unsigned int opc1,
	unsigned int rt,
	unsigned int rt2,
	unsigned int crm
);
void arm_mla_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs,
	unsigned int rn
);
void arm_mla (
	uint32_t **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs,
	unsigned int rn
);
void arm_mls_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void arm_mls (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void arm_mov_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int operand2
);
void arm_mov (
	uint32_t **address,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int operand2
);
void arm_movt_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void arm_movt (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void arm_movw_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void arm_movw (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void arm_mrc_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int opc1,
	unsigned int crn,
	unsigned int rd,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
);
void arm_mrc (
	uint32_t **address,
	unsigned int opc1,
	unsigned int crn,
	unsigned int rd,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
);
void arm_mrrc_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int coproc,
	unsigned int opc1,
	unsigned int rt,
	unsigned int rt2,
	unsigned int crm
);
void arm_mrrc (
	uint32_t **address,
	unsigned int coproc,
	unsigned int opc1,
	unsigned int rt,
	unsigned int rt2,
	unsigned int crm
);
void arm_mrs_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd
);
void arm_mrs (
	uint32_t **address,
	unsigned int rd
);
void arm_msr_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rn,
	unsigned int mask
);
void arm_msr (
	uint32_t **address,
	unsigned int rn,
	unsigned int mask
);
void arm_msri_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int mask,
	unsigned int imm12
);
void arm_msri (
	uint32_t **address,
	unsigned int mask,
	unsigned int imm12
);
void arm_mul_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs
);
void arm_mul (
	uint32_t **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs
);
void arm_mvn_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int operand2
);
void arm_mvn (
	uint32_t **address,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int operand2
);
void arm_nop_cond (
	uint32_t **address,
	unsigned int auto_cond
);
void arm_nop (
	uint32_t **address
);
void arm_orr_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void arm_orr (
	uint32_t **address,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void arm_pkh_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int tb,
	unsigned int imm5
);
void arm_pkh (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int tb,
	unsigned int imm5
);
void arm_pld (
	uint32_t **address,
	unsigned int immediate,
	unsigned int updown,
	unsigned int is_read,
	unsigned int rn,
	unsigned int operand2
);
void arm_pli (
	uint32_t **address,
	unsigned int updown,
	unsigned int rn,
	unsigned int imm5,
	unsigned int type,
	unsigned int rm
);
void arm_plii (
	uint32_t **address,
	unsigned int updown,
	unsigned int rn,
	unsigned int imm12
);
void arm_qadd_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rn
);
void arm_qadd (
	uint32_t **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rn
);
void arm_qadd16_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_qadd16 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_qadd8_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_qadd8 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_qasx_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_qasx (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_qdadd_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rn
);
void arm_qdadd (
	uint32_t **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rn
);
void arm_qdsub_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rn
);
void arm_qdsub (
	uint32_t **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rn
);
void arm_qsax_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_qsax (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_qsub_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rn
);
void arm_qsub (
	uint32_t **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rn
);
void arm_qsub16_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_qsub16 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_qsub8_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_qsub8 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_rbit_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm
);
void arm_rbit (
	uint32_t **address,
	unsigned int rd,
	unsigned int rm
);
void arm_rev_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm
);
void arm_rev (
	uint32_t **address,
	unsigned int rd,
	unsigned int rm
);
void arm_rev16_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm
);
void arm_rev16 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rm
);
void arm_revsh_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm
);
void arm_revsh (
	uint32_t **address,
	unsigned int rd,
	unsigned int rm
);
void arm_rrx_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rm
);
void arm_rrx (
	uint32_t **address,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rm
);
void arm_rsb_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void arm_rsb (
	uint32_t **address,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void arm_rsc_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void arm_rsc (
	uint32_t **address,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void arm_sadd16_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_sadd16 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_sadd8_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_sadd8 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_sasx_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_sasx (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_sbc_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void arm_sbc (
	uint32_t **address,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void arm_sbfx_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int lsb,
	unsigned int widthm1
);
void arm_sbfx (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int lsb,
	unsigned int widthm1
);
void arm_sdiv_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_sdiv (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_sel_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_sel (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_setend (
	uint32_t **address,
	unsigned int set_bigend
);
void arm_sev_cond (
	uint32_t **address,
	unsigned int auto_cond
);
void arm_sev (
	uint32_t **address
);
void arm_shadd16_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_shadd16 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_shadd8_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_shadd8 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_shasx_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_shasx (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_shsax_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_shsax (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_shsub16_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_shsub16 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_shsub8_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_shsub8 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_smlabb_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void arm_smlabb (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void arm_smlabt_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void arm_smlabt (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void arm_smlatb_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void arm_smlatb (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void arm_smlatt_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void arm_smlatt (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void arm_smlad_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int swap,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void arm_smlad (
	uint32_t **address,
	unsigned int swap,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void arm_smlal_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int set_condition,
	unsigned int rdhi,
	unsigned int rdlo,
	unsigned int rm,
	unsigned int rn
);
void arm_smlal (
	uint32_t **address,
	unsigned int set_condition,
	unsigned int rdhi,
	unsigned int rdlo,
	unsigned int rm,
	unsigned int rn
);
void arm_smlalbb_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
);
void arm_smlalbb (
	uint32_t **address,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
);
void arm_smlalbt_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
);
void arm_smlalbt (
	uint32_t **address,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
);
void arm_smlaltb_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
);
void arm_smlaltb (
	uint32_t **address,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
);
void arm_smlaltt_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
);
void arm_smlaltt (
	uint32_t **address,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
);
void arm_smlald_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
);
void arm_smlald (
	uint32_t **address,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
);
void arm_smlaldx_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
);
void arm_smlaldx (
	uint32_t **address,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
);
void arm_smlawb_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void arm_smlawb (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void arm_smlawt_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void arm_smlawt (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void arm_smlsd_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void arm_smlsd (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void arm_smlsdx_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void arm_smlsdx (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void arm_smlsld_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
);
void arm_smlsld (
	uint32_t **address,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
);
void arm_smlsldx_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
);
void arm_smlsldx (
	uint32_t **address,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
);
void arm_smmla_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void arm_smmla (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void arm_smmlar_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void arm_smmlar (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void arm_smmls_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void arm_smmls (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void arm_smmlsr_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void arm_smmlsr (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void arm_smmul_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_smmul (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_smmulr_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_smmulr (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_smuad_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_smuad (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_smuadx_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_smuadx (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_smulbb_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_smulbb (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_smulbt_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_smulbt (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_smultb_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_smultb (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_smultt_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_smultt (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_smull_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int set_condition,
	unsigned int rdhi,
	unsigned int rdlo,
	unsigned int rm,
	unsigned int rn
);
void arm_smull (
	uint32_t **address,
	unsigned int set_condition,
	unsigned int rdhi,
	unsigned int rdlo,
	unsigned int rm,
	unsigned int rn
);
void arm_smulwb_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_smulwb (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_smulwt_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_smulwt (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_smusd_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_smusd (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_smusdx_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_smusdx (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_ssat_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int sat_imm,
	unsigned int rn,
	unsigned int sh,
	unsigned int imm5
);
void arm_ssat (
	uint32_t **address,
	unsigned int rd,
	unsigned int sat_imm,
	unsigned int rn,
	unsigned int sh,
	unsigned int imm5
);
void arm_ssat16_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int sat_imm,
	unsigned int rn
);
void arm_ssat16 (
	uint32_t **address,
	unsigned int rd,
	unsigned int sat_imm,
	unsigned int rn
);
void arm_ssax_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_ssax (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_ssub16_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_ssub16 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_ssub8_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_ssub8 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_stc_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int p,
	unsigned int upwards,
	unsigned int d,
	unsigned int writeback,
	unsigned int rn,
	unsigned int vd,
	unsigned int opcode,
	unsigned int imm8
);
void arm_stc (
	uint32_t **address,
	unsigned int p,
	unsigned int upwards,
	unsigned int d,
	unsigned int writeback,
	unsigned int rn,
	unsigned int vd,
	unsigned int opcode,
	unsigned int imm8
);
void arm_stm_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
);
void arm_stm (
	uint32_t **address,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
);
void arm_str_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void arm_str (
	uint32_t **address,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void arm_strb_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void arm_strb (
	uint32_t **address,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void arm_strbt_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int updown
);
void arm_strbt (
	uint32_t **address,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int updown
);
void arm_strd_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm_imm4l,
	unsigned int imm4h,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void arm_strd (
	uint32_t **address,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm_imm4l,
	unsigned int imm4h,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void arm_strex_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_strex (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_strexb_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rt,
	unsigned int rn
);
void arm_strexb (
	uint32_t **address,
	unsigned int rd,
	unsigned int rt,
	unsigned int rn
);
void arm_strexd_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rt,
	unsigned int rn
);
void arm_strexd (
	uint32_t **address,
	unsigned int rd,
	unsigned int rt,
	unsigned int rn
);
void arm_strexh_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rt,
	unsigned int rn
);
void arm_strexh (
	uint32_t **address,
	unsigned int rd,
	unsigned int rt,
	unsigned int rn
);
void arm_strh_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm_imm4l,
	unsigned int imm4h,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void arm_strh (
	uint32_t **address,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm_imm4l,
	unsigned int imm4h,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void arm_strht_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm_imm4l,
	unsigned int imm4h,
	unsigned int updown
);
void arm_strht (
	uint32_t **address,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm_imm4l,
	unsigned int imm4h,
	unsigned int updown
);
void arm_strt_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2,
	unsigned int updown
);
void arm_strt (
	uint32_t **address,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2,
	unsigned int updown
);
void arm_sub_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void arm_sub (
	uint32_t **address,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void arm_svc_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int comment
);
void arm_svc (
	uint32_t **address,
	unsigned int comment
);
void arm_swp_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rt,
	unsigned int rt2,
	unsigned int rn
);
void arm_swp (
	uint32_t **address,
	unsigned int rt,
	unsigned int rt2,
	unsigned int rn
);
void arm_swpb_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rt,
	unsigned int rt2,
	unsigned int rn
);
void arm_swpb (
	uint32_t **address,
	unsigned int rt,
	unsigned int rt2,
	unsigned int rn
);
void arm_sxtab_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
);
void arm_sxtab (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
);
void arm_sxtab16_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
);
void arm_sxtab16 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
);
void arm_sxtah_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
);
void arm_sxtah (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
);
void arm_sxtb_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
);
void arm_sxtb (
	uint32_t **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
);
void arm_sxtb16_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
);
void arm_sxtb16 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
);
void arm_sxth_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
);
void arm_sxth (
	uint32_t **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
);
void arm_teq_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rn,
	unsigned int operand2
);
void arm_teq (
	uint32_t **address,
	unsigned int immediate,
	unsigned int rn,
	unsigned int operand2
);
void arm_tst_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rn,
	unsigned int operand2
);
void arm_tst (
	uint32_t **address,
	unsigned int immediate,
	unsigned int rn,
	unsigned int operand2
);
void arm_uadd16_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_uadd16 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_uadd8_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_uadd8 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_uasx_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_uasx (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_ubfx_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int lsb,
	unsigned int widthm1
);
void arm_ubfx (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int lsb,
	unsigned int widthm1
);
void arm_udf (
	uint32_t **address,
	unsigned int imm12,
	unsigned int imm4
);
void arm_udiv_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_udiv (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_uhadd16_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_uhadd16 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_uhadd8_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_uhadd8 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_uhasx_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_uhasx (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_uhsax_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_uhsax (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_uhsub16_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_uhsub16 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_uhsub8_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_uhsub8 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_umaal (
	uint32_t **address,
	unsigned int rd_hi,
	unsigned int rd_lo,
	unsigned int rn,
	unsigned int rm
);
void arm_umlal_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int set_condition,
	unsigned int rdhi,
	unsigned int rdlo,
	unsigned int rm,
	unsigned int rn
);
void arm_umlal (
	uint32_t **address,
	unsigned int set_condition,
	unsigned int rdhi,
	unsigned int rdlo,
	unsigned int rm,
	unsigned int rn
);
void arm_umull_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int set_condition,
	unsigned int rdhi,
	unsigned int rdlo,
	unsigned int rm,
	unsigned int rn
);
void arm_umull (
	uint32_t **address,
	unsigned int set_condition,
	unsigned int rdhi,
	unsigned int rdlo,
	unsigned int rm,
	unsigned int rn
);
void arm_uqadd16_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_uqadd16 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_uqadd8_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_uqadd8 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_uqasx_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_uqasx (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_uqsax_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_uqsax (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_uqsub16_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_uqsub16 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_uqsub8_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_uqsub8 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_usad8_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_usad8 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_usada8_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void arm_usada8 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void arm_usat_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int sat_imm,
	unsigned int rn,
	unsigned int sh,
	unsigned int imm5
);
void arm_usat (
	uint32_t **address,
	unsigned int rd,
	unsigned int sat_imm,
	unsigned int rn,
	unsigned int sh,
	unsigned int imm5
);
void arm_usat16_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int sat_imm,
	unsigned int rn
);
void arm_usat16 (
	uint32_t **address,
	unsigned int rd,
	unsigned int sat_imm,
	unsigned int rn
);
void arm_usax_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_usax (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_usub16_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_usub16 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_usub8_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_usub8 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_uxtab_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
);
void arm_uxtab (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
);
void arm_uxtab16_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
);
void arm_uxtab16 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
);
void arm_uxtah_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
);
void arm_uxtah (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
);
void arm_uxtb_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
);
void arm_uxtb (
	uint32_t **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
);
void arm_uxtb16_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
);
void arm_uxtb16 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
);
void arm_uxth_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
);
void arm_uxth (
	uint32_t **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
);
void arm_wfe_cond (
	uint32_t **address,
	unsigned int auto_cond
);
void arm_wfe (
	uint32_t **address
);
void arm_wfi_cond (
	uint32_t **address,
	unsigned int auto_cond
);
void arm_wfi (
	uint32_t **address
);
void arm_yield_cond (
	uint32_t **address,
	unsigned int auto_cond
);
void arm_yield (
	uint32_t **address
);
void arm_neon_vaba (
	uint32_t **address,
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
void arm_neon_vabal (
	uint32_t **address,
	unsigned int unsign,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vabd_i (
	uint32_t **address,
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
void arm_neon_vabd_f (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vabdl (
	uint32_t **address,
	unsigned int unsign,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vabs (
	uint32_t **address,
	unsigned int float_p,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vabs_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vabs (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vacge (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vacgt (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vadd_i (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vadd_f (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vadd_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vadd (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vaddhn (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vaddl (
	uint32_t **address,
	unsigned int size,
	unsigned int unsign,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vaddw (
	uint32_t **address,
	unsigned int unsign,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vand (
	uint32_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vbici (
	uint32_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int cmode,
	unsigned int i,
	unsigned int imm3,
	unsigned int imm4
);
void arm_neon_vbic (
	uint32_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vbif (
	uint32_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vbit (
	uint32_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vbsl (
	uint32_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vceq_i (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vceq_f (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vceqz (
	uint32_t **address,
	unsigned int float_p,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vcge_i (
	uint32_t **address,
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
void arm_neon_vcge_f (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vcgez (
	uint32_t **address,
	unsigned int float_p,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vcgt_i (
	uint32_t **address,
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
void arm_neon_vcgt_f (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vcgtz (
	uint32_t **address,
	unsigned int float_p,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vclez (
	uint32_t **address,
	unsigned int float_p,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vcls (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vcltz (
	uint32_t **address,
	unsigned int float_p,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vclz (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vcmp_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int d,
	unsigned int vd,
	unsigned int sz,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vcmp (
	uint32_t **address,
	unsigned int d,
	unsigned int vd,
	unsigned int sz,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vcmpz_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int d,
	unsigned int vd,
	unsigned int sz
);
void arm_vfp_vcmpz (
	uint32_t **address,
	unsigned int d,
	unsigned int vd,
	unsigned int sz
);
void arm_vfp_vcmpe_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int d,
	unsigned int vd,
	unsigned int sz,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vcmpe (
	uint32_t **address,
	unsigned int d,
	unsigned int vd,
	unsigned int sz,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vcmpez_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int d,
	unsigned int vd,
	unsigned int sz
);
void arm_vfp_vcmpez (
	uint32_t **address,
	unsigned int d,
	unsigned int vd,
	unsigned int sz
);
void arm_neon_vcnt (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vcvt_f_i (
	uint32_t **address,
	unsigned int op,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vcvt_f_fp (
	uint32_t **address,
	unsigned int op,
	unsigned int unsign,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
);
void arm_neon_vcvt_hp_sp (
	uint32_t **address,
	unsigned int op,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vcvt_f_i_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int op,
	unsigned int opcode2,
	unsigned int sz,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vcvt_f_i (
	uint32_t **address,
	unsigned int op,
	unsigned int opcode2,
	unsigned int sz,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vcvt_f_fp_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int op,
	unsigned int unsign,
	unsigned int sf,
	unsigned int sx,
	unsigned int d,
	unsigned int vd,
	unsigned int imm4,
	unsigned int i
);
void arm_vfp_vcvt_f_fp (
	uint32_t **address,
	unsigned int op,
	unsigned int unsign,
	unsigned int sf,
	unsigned int sx,
	unsigned int d,
	unsigned int vd,
	unsigned int imm4,
	unsigned int i
);
void arm_vfp_vcvt_dp_sp_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vcvt_dp_sp (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vcvtb_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int op,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vcvtb (
	uint32_t **address,
	unsigned int op,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vcvtt_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int op,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vcvtt (
	uint32_t **address,
	unsigned int op,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vdiv_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vdiv (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vdup_scal (
	uint32_t **address,
	unsigned int imm4,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vdup_core_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int b,
	unsigned int e,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int rt
);
void arm_neon_vdup_core (
	uint32_t **address,
	unsigned int b,
	unsigned int e,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int rt
);
void arm_neon_veor (
	uint32_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vext (
	uint32_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm,
	unsigned int imm4
);
void arm_neon_vfma (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vfms (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vfma_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vfma (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vfms_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vfms (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vfnma_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vfnma (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vfnms_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vfnms (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vhadd (
	uint32_t **address,
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
void arm_neon_vhsub (
	uint32_t **address,
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
void arm_neon_vldx_m (
	uint32_t **address,
	unsigned int opcode,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int rn,
	unsigned int align,
	unsigned int rm
);
void arm_neon_vldx_s_o (
	uint32_t **address,
	unsigned int opcode,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int rn,
	unsigned int index_align,
	unsigned int rm
);
void arm_neon_vldx_s_a (
	uint32_t **address,
	unsigned int opcode,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int inc,
	unsigned int rn,
	unsigned int align,
	unsigned int rm
);
void arm_vfp_vldm_dp_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int p,
	unsigned int upwards,
	unsigned int d,
	unsigned int writeback,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
);
void arm_vfp_vldm_dp (
	uint32_t **address,
	unsigned int p,
	unsigned int upwards,
	unsigned int d,
	unsigned int writeback,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
);
void arm_vfp_vldm_sp_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int p,
	unsigned int upwards,
	unsigned int d,
	unsigned int writeback,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
);
void arm_vfp_vldm_sp (
	uint32_t **address,
	unsigned int p,
	unsigned int upwards,
	unsigned int d,
	unsigned int writeback,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
);
void arm_vfp_vldr_dp_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int upwards,
	unsigned int d,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
);
void arm_vfp_vldr_dp (
	uint32_t **address,
	unsigned int upwards,
	unsigned int d,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
);
void arm_vfp_vldr_sp_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int upwards,
	unsigned int d,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
);
void arm_vfp_vldr_sp (
	uint32_t **address,
	unsigned int upwards,
	unsigned int d,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
);
void arm_neon_vmax_i (
	uint32_t **address,
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
void arm_neon_vmin_i (
	uint32_t **address,
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
void arm_neon_vmax_f (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vmin_f (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vmla_i (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vmls_i (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vmlal_i (
	uint32_t **address,
	unsigned int unsign,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vmlsl_i (
	uint32_t **address,
	unsigned int unsign,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vmla_f (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vmls_f (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vmla_f_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vn,
	unsigned int vd,
	unsigned int n,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vmla_f (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vn,
	unsigned int vd,
	unsigned int n,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vmls_f_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vn,
	unsigned int vd,
	unsigned int n,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vmls_f (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vn,
	unsigned int vd,
	unsigned int n,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vmla_scal (
	uint32_t **address,
	unsigned int float_p,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vmls_scal (
	uint32_t **address,
	unsigned int float_p,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vmlal_scal (
	uint32_t **address,
	unsigned int unsign,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vmlsl_scal (
	uint32_t **address,
	unsigned int unsign,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vmovi (
	uint32_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int op,
	unsigned int cmode,
	unsigned int i,
	unsigned int imm3,
	unsigned int imm4
);
void arm_vfp_vmovi_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int imm4h,
	unsigned int imm4l
);
void arm_vfp_vmovi (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int imm4h,
	unsigned int imm4l
);
void arm_vfp_vmov_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vmov (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vmov_core_scal_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int d,
	unsigned int vd,
	unsigned int opc1,
	unsigned int opc2,
	unsigned int rt
);
void arm_vfp_vmov_core_scal (
	uint32_t **address,
	unsigned int d,
	unsigned int vd,
	unsigned int opc1,
	unsigned int opc2,
	unsigned int rt
);
void arm_vfp_vmov_scal_core_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int unsign,
	unsigned int rt,
	unsigned int n,
	unsigned int vn,
	unsigned int opc1,
	unsigned int opc2
);
void arm_vfp_vmov_scal_core (
	uint32_t **address,
	unsigned int unsign,
	unsigned int rt,
	unsigned int n,
	unsigned int vn,
	unsigned int opc1,
	unsigned int opc2
);
void arm_vfp_vmov_core_sp_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int op,
	unsigned int rt,
	unsigned int n,
	unsigned int vn
);
void arm_vfp_vmov_core_sp (
	uint32_t **address,
	unsigned int op,
	unsigned int rt,
	unsigned int n,
	unsigned int vn
);
void arm_vfp_vmov_2core_2sp_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int op,
	unsigned int rt,
	unsigned int rt2,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vmov_2core_2sp (
	uint32_t **address,
	unsigned int op,
	unsigned int rt,
	unsigned int rt2,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vmov_2core_dp_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int op,
	unsigned int rt,
	unsigned int rt2,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vmov_2core_dp (
	uint32_t **address,
	unsigned int op,
	unsigned int rt,
	unsigned int rt2,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vmovl (
	uint32_t **address,
	unsigned int unsign,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm3
);
void arm_neon_vmovn (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vmrs_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rt
);
void arm_vfp_vmrs (
	uint32_t **address,
	unsigned int rt
);
void arm_vfp_vmsr_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rt
);
void arm_vfp_vmsr (
	uint32_t **address,
	unsigned int rt
);
void arm_neon_vmul_i (
	uint32_t **address,
	unsigned int opcode,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vmull_i (
	uint32_t **address,
	unsigned int opcode,
	unsigned int opcode4,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vmul_f (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vmul_f_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vn,
	unsigned int vd,
	unsigned int n,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vmul_f (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vn,
	unsigned int vd,
	unsigned int n,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vmul_scal (
	uint32_t **address,
	unsigned int opcode,
	unsigned int opcode5,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vmull_scal (
	uint32_t **address,
	unsigned int opcode,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vmvni (
	uint32_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int cmode,
	unsigned int i,
	unsigned int imm3,
	unsigned int imm4
);
void arm_neon_vmvn (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vneg (
	uint32_t **address,
	unsigned int float_p,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vneg_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vneg (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vnmla_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vnmla (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vnmls_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vnmls (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vnmul_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vnmul (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vorn (
	uint32_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vorri (
	uint32_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int cmode,
	unsigned int i,
	unsigned int imm3,
	unsigned int imm4
);
void arm_neon_vorr (
	uint32_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vpadal (
	uint32_t **address,
	unsigned int unsign,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vpadd_i (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vpadd_f (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vpaddl (
	uint32_t **address,
	unsigned int unsign,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vpmax_i (
	uint32_t **address,
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
void arm_neon_vpmin_i (
	uint32_t **address,
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
void arm_neon_vpmax_f (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vpmin_f (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vpop_dp_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
);
void arm_vfp_vpop_dp (
	uint32_t **address,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
);
void arm_vfp_vpop_sp_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
);
void arm_vfp_vpop_sp (
	uint32_t **address,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
);
void arm_vfp_vpush_dp_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
);
void arm_vfp_vpush_dp (
	uint32_t **address,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
);
void arm_vfp_vpush_sp_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
);
void arm_vfp_vpush_sp (
	uint32_t **address,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
);
void arm_neon_vqabs (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vqadd (
	uint32_t **address,
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
void arm_neon_vqdmlal_i (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vqdmlsl_i (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vqdmlal_scal (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vqdmlsl_scal (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vqdmulh_i (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vqdmulh_scal (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vqdmull_i (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vqdmull_scal (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vqmovn (
	uint32_t **address,
	unsigned int unsign,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vqmovun (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vqneg (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vqrdmulh_i (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vqrdmulh_scal (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vqrshl (
	uint32_t **address,
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
void arm_neon_vqrshrn (
	uint32_t **address,
	unsigned int unsign,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
);
void arm_neon_vqrshrun (
	uint32_t **address,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
);
void arm_neon_vqshl (
	uint32_t **address,
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
void arm_neon_vqshli (
	uint32_t **address,
	unsigned int unsign,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int l,
	unsigned int imm6
);
void arm_neon_vqshlui (
	uint32_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int l,
	unsigned int imm6
);
void arm_neon_vqshrn (
	uint32_t **address,
	unsigned int unsign,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
);
void arm_neon_vqshrun (
	uint32_t **address,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
);
void arm_neon_vqsub (
	uint32_t **address,
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
void arm_neon_vraddhn (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vrecpe (
	uint32_t **address,
	unsigned int float_p,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vrecps (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vrev16 (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vrev32 (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vrev64 (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vrhadd (
	uint32_t **address,
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
void arm_neon_vrshl (
	uint32_t **address,
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
void arm_neon_vrshr (
	uint32_t **address,
	unsigned int unsign,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int l,
	unsigned int imm6
);
void arm_neon_vrshrn (
	uint32_t **address,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
);
void arm_neon_vrsqrte (
	uint32_t **address,
	unsigned int floating_point,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vrsqrts (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vrsra (
	uint32_t **address,
	unsigned int unsign,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int l,
	unsigned int imm6
);
void arm_neon_vrsubhn (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vshl (
	uint32_t **address,
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
void arm_neon_vshli (
	uint32_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int l,
	unsigned int imm6
);
void arm_neon_vshll (
	uint32_t **address,
	unsigned int unsign,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
);
void arm_neon_vshll2 (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vshr (
	uint32_t **address,
	unsigned int unsign,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int l,
	unsigned int imm6
);
void arm_neon_vshrn (
	uint32_t **address,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
);
void arm_neon_vsli (
	uint32_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int l,
	unsigned int imm6
);
void arm_vfp_vsqrt_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vsqrt (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vsra (
	uint32_t **address,
	unsigned int unsign,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int l,
	unsigned int imm6
);
void arm_neon_vsri (
	uint32_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int l,
	unsigned int imm6
);
void arm_neon_vstx_m (
	uint32_t **address,
	unsigned int opcode,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int rn,
	unsigned int align,
	unsigned int rm
);
void arm_neon_vstx_s_o (
	uint32_t **address,
	unsigned int opcode,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int rn,
	unsigned int index_align,
	unsigned int rm
);
void arm_vfp_vstm_dp_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int p,
	unsigned int upwards,
	unsigned int d,
	unsigned int writeback,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
);
void arm_vfp_vstm_dp (
	uint32_t **address,
	unsigned int p,
	unsigned int upwards,
	unsigned int d,
	unsigned int writeback,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
);
void arm_vfp_vstm_sp_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int p,
	unsigned int upwards,
	unsigned int d,
	unsigned int writeback,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
);
void arm_vfp_vstm_sp (
	uint32_t **address,
	unsigned int p,
	unsigned int upwards,
	unsigned int d,
	unsigned int writeback,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
);
void arm_vfp_vstr_dp_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int upwards,
	unsigned int d,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
);
void arm_vfp_vstr_dp (
	uint32_t **address,
	unsigned int upwards,
	unsigned int d,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
);
void arm_vfp_vstr_sp_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int upwards,
	unsigned int d,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
);
void arm_vfp_vstr_sp (
	uint32_t **address,
	unsigned int upwards,
	unsigned int d,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
);
void arm_neon_vsub_i (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vsub_f (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vsub_f_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_vsub_f (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vsubhn (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vsubl (
	uint32_t **address,
	unsigned int unsign,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vsubw (
	uint32_t **address,
	unsigned int unsign,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vswp (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vtbl (
	uint32_t **address,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int len,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vtbx (
	uint32_t **address,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int len,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vtrn (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vtst (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vuzp (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_neon_vzip (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void arm_br_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int link,
	unsigned int offset_branch
);
void arm_br (
	uint32_t **address,
	unsigned int link,
	unsigned int offset_branch
);
void arm_bx_t_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int link,
	unsigned int rn
);
void arm_bx_t (
	uint32_t **address,
	unsigned int link,
	unsigned int rn
);
void arm_blxi_t (
	uint32_t **address,
	unsigned int h,
	unsigned int imm24
);
void arm_data_proc_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int opcode,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void arm_data_proc (
	uint32_t **address,
	unsigned int immediate,
	unsigned int opcode,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void arm_multiply_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int accumulate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs,
	unsigned int rn
);
void arm_multiply (
	uint32_t **address,
	unsigned int accumulate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs,
	unsigned int rn
);
void arm_s_data_transfer_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int loadstore,
	unsigned int immediate,
	unsigned int byteword,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void arm_s_data_transfer (
	uint32_t **address,
	unsigned int loadstore,
	unsigned int immediate,
	unsigned int byteword,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void arm_h_data_transfer_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int opcode,
	unsigned int size,
	unsigned int opcode2,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int imm4h,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void arm_h_data_transfer (
	uint32_t **address,
	unsigned int opcode,
	unsigned int size,
	unsigned int opcode2,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int imm4h,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void arm_b_data_transfer_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int loadstore,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
);
void arm_b_data_transfer (
	uint32_t **address,
	unsigned int loadstore,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
);
void arm_svc_t_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int comment
);
void arm_svc_t (
	uint32_t **address,
	unsigned int comment
);
void arm_mem_hints_pli (
	uint32_t **address,
	unsigned int opcode1,
	unsigned int updown,
	unsigned int opcode2,
	unsigned int rn,
	unsigned int imm5,
	unsigned int type,
	unsigned int rm
);
void arm_mem_hints_pld (
	uint32_t **address,
	unsigned int opcode1,
	unsigned int updown,
	unsigned int read_only,
	unsigned int opcode2,
	unsigned int rn,
	unsigned int imm12
);
void arm_vfp_ldm_stm_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int p,
	unsigned int upwards,
	unsigned int d,
	unsigned int writeback,
	unsigned int load_store,
	unsigned int rn,
	unsigned int vd,
	unsigned int opcode,
	unsigned int imm8
);
void arm_vfp_ldm_stm (
	uint32_t **address,
	unsigned int p,
	unsigned int upwards,
	unsigned int d,
	unsigned int writeback,
	unsigned int load_store,
	unsigned int rn,
	unsigned int vd,
	unsigned int opcode,
	unsigned int imm8
);
void arm_coproc_trans_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int opc1,
	unsigned int load_store,
	unsigned int crn,
	unsigned int rd,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
);
void arm_coproc_trans (
	uint32_t **address,
	unsigned int opc1,
	unsigned int load_store,
	unsigned int crn,
	unsigned int rd,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
);
void arm_coproc_dp_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int opc1,
	unsigned int crn,
	unsigned int crd,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
);
void arm_coproc_dp (
	uint32_t **address,
	unsigned int opc1,
	unsigned int crn,
	unsigned int crd,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
);
void arm_dsp_long_res_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int opcode,
	unsigned int set_condition,
	unsigned int rdhi,
	unsigned int rdlo,
	unsigned int rm,
	unsigned int opcode2,
	unsigned int setting,
	unsigned int rn
);
void arm_dsp_long_res (
	uint32_t **address,
	unsigned int opcode,
	unsigned int set_condition,
	unsigned int rdhi,
	unsigned int rdlo,
	unsigned int rm,
	unsigned int opcode2,
	unsigned int setting,
	unsigned int rn
);
void arm_vops (
	uint32_t **address,
	unsigned int opcode,
	unsigned int opcode2,
	unsigned int opcode3,
	unsigned int opcode4,
	unsigned int opcode5,
	unsigned int opcode6,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void arm_v_trans_mult (
	uint32_t **address,
	unsigned int opcode,
	unsigned int opcode2,
	unsigned int opcode3,
	unsigned int opcode4,
	unsigned int params,
	unsigned int d,
	unsigned int vd,
	unsigned int rn,
	unsigned int rm
);
void arm_v_ops_2reg (
	uint32_t **address,
	unsigned int opcode,
	unsigned int opcode2,
	unsigned int opcode3,
	unsigned int opcode4,
	unsigned int opcode5,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int q,
	unsigned int m,
	unsigned int vm
);
void arm_v_ops_imm6 (
	uint32_t **address,
	unsigned int opcode,
	unsigned int u,
	unsigned int d,
	unsigned int vd,
	unsigned int q,
	unsigned int m,
	unsigned int vm,
	unsigned int l,
	unsigned int imm6,
	unsigned int f3
);
void arm_v_ops_1reg_mod_imm (
	uint32_t **address,
	unsigned int opcode,
	unsigned int opcode2,
	unsigned int opcode3,
	unsigned int cmode,
	unsigned int d,
	unsigned int vd,
	unsigned int q,
	unsigned int i,
	unsigned int imm3,
	unsigned int imm4,
	unsigned int op
);
void arm_vfp_data_proc_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int d,
	unsigned int opc2,
	unsigned int vd,
	unsigned int sz,
	unsigned int op,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_data_proc (
	uint32_t **address,
	unsigned int d,
	unsigned int opc2,
	unsigned int vd,
	unsigned int sz,
	unsigned int op,
	unsigned int m,
	unsigned int vm
);
void arm_cpsr_trans_reg_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int opcode,
	unsigned int mask,
	unsigned int f2,
	unsigned int rd,
	unsigned int rn
);
void arm_cpsr_trans_reg (
	uint32_t **address,
	unsigned int opcode,
	unsigned int mask,
	unsigned int f2,
	unsigned int rd,
	unsigned int rn
);
void arm_cpsr_trans_imm_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int mask,
	unsigned int imm12
);
void arm_cpsr_trans_imm (
	uint32_t **address,
	unsigned int mask,
	unsigned int imm12
);
void arm_divide_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int opcode,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_divide (
	uint32_t **address,
	unsigned int opcode,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void arm_sync (
	uint32_t **address,
	unsigned int opcode,
	unsigned int option
);
void arm_extend_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int opcode,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
);
void arm_extend (
	uint32_t **address,
	unsigned int opcode,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
);
void arm_vfp_3reg_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int opcode,
	unsigned int d,
	unsigned int opcode2,
	unsigned int vn,
	unsigned int vd,
	unsigned int opcode3,
	unsigned int sz,
	unsigned int n,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_3reg (
	uint32_t **address,
	unsigned int opcode,
	unsigned int d,
	unsigned int opcode2,
	unsigned int vn,
	unsigned int vd,
	unsigned int opcode3,
	unsigned int sz,
	unsigned int n,
	unsigned int m,
	unsigned int vm
);
void arm_trans_arm_vfp_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int op,
	unsigned int vn,
	unsigned int rd,
	unsigned int opcode,
	unsigned int n,
	unsigned int f3,
	unsigned int m,
	unsigned int f5
);
void arm_trans_arm_vfp (
	uint32_t **address,
	unsigned int op,
	unsigned int vn,
	unsigned int rd,
	unsigned int opcode,
	unsigned int n,
	unsigned int f3,
	unsigned int m,
	unsigned int f5
);
void arm_vfp_imm8_1reg_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int opcode,
	unsigned int d,
	unsigned int vd,
	unsigned int imm4h,
	unsigned int imm4l
);
void arm_vfp_imm8_1reg (
	uint32_t **address,
	unsigned int opcode,
	unsigned int d,
	unsigned int vd,
	unsigned int imm4h,
	unsigned int imm4l
);
void arm_vfp_trans_2arm_reg_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int opcode,
	unsigned int op,
	unsigned int rt2,
	unsigned int rt,
	unsigned int m,
	unsigned int vm
);
void arm_vfp_trans_2arm_reg (
	uint32_t **address,
	unsigned int opcode,
	unsigned int op,
	unsigned int rt2,
	unsigned int rt,
	unsigned int m,
	unsigned int vm
);
#endif
