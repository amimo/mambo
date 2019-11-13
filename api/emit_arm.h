#ifdef PLUGINS_NEW
#ifndef __EMIT_PIE_PIE_ARM_ENCODER_C__
#define __EMIT_PIE_PIE_ARM_ENCODER_C__
#include "../dbm.h"
#include "../pie/pie-arm-encoder.h"
#include "plugin_support.h"
void emit_arm_adc_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void emit_arm_adc (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void emit_arm_add_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void emit_arm_add (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void emit_arm_and_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void emit_arm_and (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void emit_arm_b_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int offset_branch
);
void emit_arm_b (
	mambo_context *ctx,
	unsigned int offset_branch
);
void emit_arm_bfc_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rt,
	unsigned int lsb,
	unsigned int msb
);
void emit_arm_bfc (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int lsb,
	unsigned int msb
);
void emit_arm_bfi_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rt,
	unsigned int rn,
	unsigned int lsb,
	unsigned int msb
);
void emit_arm_bfi (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int lsb,
	unsigned int msb
);
void emit_arm_bic_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void emit_arm_bic (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void emit_arm_bkpt_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int imm12,
	unsigned int imm4
);
void emit_arm_bkpt (
	mambo_context *ctx,
	unsigned int imm12,
	unsigned int imm4
);
void emit_arm_bl_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int offset_branch
);
void emit_arm_bl (
	mambo_context *ctx,
	unsigned int offset_branch
);
void emit_arm_blx_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rn
);
void emit_arm_blx (
	mambo_context *ctx,
	unsigned int rn
);
void emit_arm_blxi (
	mambo_context *ctx,
	unsigned int h,
	unsigned int imm24
);
void emit_arm_bx_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rn
);
void emit_arm_bx (
	mambo_context *ctx,
	unsigned int rn
);
void emit_arm_cdp_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int opc1,
	unsigned int crn,
	unsigned int crd,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
);
void emit_arm_cdp (
	mambo_context *ctx,
	unsigned int opc1,
	unsigned int crn,
	unsigned int crd,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
);
void emit_arm_cdp2 (
	mambo_context *ctx,
	unsigned int opc1,
	unsigned int crn,
	unsigned int crd,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
);
void emit_arm_clrex (
	mambo_context *ctx
);
void emit_arm_clz_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm
);
void emit_arm_clz (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rm
);
void emit_arm_cmn_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rn,
	unsigned int operand2
);
void emit_arm_cmn (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int rn,
	unsigned int operand2
);
void emit_arm_cmp_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rn,
	unsigned int operand2
);
void emit_arm_cmp (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int rn,
	unsigned int operand2
);
void emit_arm_dbg_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int option
);
void emit_arm_dbg (
	mambo_context *ctx,
	unsigned int option
);
void emit_arm_dmb (
	mambo_context *ctx,
	unsigned int option
);
void emit_arm_dsb (
	mambo_context *ctx,
	unsigned int option
);
void emit_arm_eor_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void emit_arm_eor (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void emit_arm_isb (
	mambo_context *ctx,
	unsigned int option
);
void emit_arm_ldc_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int p,
	unsigned int u,
	unsigned int coproc,
	unsigned int w,
	unsigned int rn,
	unsigned int crd,
	unsigned int imm8
);
void emit_arm_ldc (
	mambo_context *ctx,
	unsigned int p,
	unsigned int u,
	unsigned int coproc,
	unsigned int w,
	unsigned int rn,
	unsigned int crd,
	unsigned int imm8
);
void emit_arm_ldm_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
);
void emit_arm_ldm (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
);
void emit_arm_ldr_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void emit_arm_ldr (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void emit_arm_ldrb_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void emit_arm_ldrb (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void emit_arm_ldrbt_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int updown,
	unsigned int operand2
);
void emit_arm_ldrbt (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int updown,
	unsigned int operand2
);
void emit_arm_ldrd_cond (
	mambo_context *ctx,
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
void emit_arm_ldrd (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm_imm4l,
	unsigned int imm4h,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void emit_arm_ldrex_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn
);
void emit_arm_ldrex (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn
);
void emit_arm_ldrexb_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn
);
void emit_arm_ldrexb (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn
);
void emit_arm_ldrexd_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn
);
void emit_arm_ldrexd (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn
);
void emit_arm_ldrexh_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn
);
void emit_arm_ldrexh (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn
);
void emit_arm_ldrh_cond (
	mambo_context *ctx,
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
void emit_arm_ldrh (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm_imm4l,
	unsigned int imm4h,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void emit_arm_ldrht_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm_imm4l,
	unsigned int imm4h,
	unsigned int updown
);
void emit_arm_ldrht (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm_imm4l,
	unsigned int imm4h,
	unsigned int updown
);
void emit_arm_ldrsb_cond (
	mambo_context *ctx,
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
void emit_arm_ldrsb (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm_imm4l,
	unsigned int imm4h,
	unsigned int index,
	unsigned int updown,
	unsigned int writeback
);
void emit_arm_ldrsbt_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int imm4h,
	unsigned int updown
);
void emit_arm_ldrsbt (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int imm4h,
	unsigned int updown
);
void emit_arm_ldrsh_cond (
	mambo_context *ctx,
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
void emit_arm_ldrsh (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm_imm4l,
	unsigned int imm4h,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void emit_arm_ldrsht_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int imm4h,
	unsigned int updown
);
void emit_arm_ldrsht (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int imm4h,
	unsigned int updown
);
void emit_arm_ldrt_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int updown,
	unsigned int operand2
);
void emit_arm_ldrt (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int updown,
	unsigned int operand2
);
void emit_arm_mcr_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int opc1,
	unsigned int crn,
	unsigned int rd,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
);
void emit_arm_mcr (
	mambo_context *ctx,
	unsigned int opc1,
	unsigned int crn,
	unsigned int rd,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
);
void emit_arm_mcrr_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int coproc,
	unsigned int opc1,
	unsigned int rt,
	unsigned int rt2,
	unsigned int crm
);
void emit_arm_mcrr (
	mambo_context *ctx,
	unsigned int coproc,
	unsigned int opc1,
	unsigned int rt,
	unsigned int rt2,
	unsigned int crm
);
void emit_arm_mla_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs,
	unsigned int rn
);
void emit_arm_mla (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs,
	unsigned int rn
);
void emit_arm_mls_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void emit_arm_mls (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void emit_arm_mov_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int operand2
);
void emit_arm_mov (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int operand2
);
void emit_arm_movt_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void emit_arm_movt (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void emit_arm_movw_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void emit_arm_movw (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void emit_arm_mrc_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int opc1,
	unsigned int crn,
	unsigned int rd,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
);
void emit_arm_mrc (
	mambo_context *ctx,
	unsigned int opc1,
	unsigned int crn,
	unsigned int rd,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
);
void emit_arm_mrrc_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int coproc,
	unsigned int opc1,
	unsigned int rt,
	unsigned int rt2,
	unsigned int crm
);
void emit_arm_mrrc (
	mambo_context *ctx,
	unsigned int coproc,
	unsigned int opc1,
	unsigned int rt,
	unsigned int rt2,
	unsigned int crm
);
void emit_arm_mrs_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd
);
void emit_arm_mrs (
	mambo_context *ctx,
	unsigned int rd
);
void emit_arm_msr_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rn,
	unsigned int mask
);
void emit_arm_msr (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int mask
);
void emit_arm_msri_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int mask,
	unsigned int imm12
);
void emit_arm_msri (
	mambo_context *ctx,
	unsigned int mask,
	unsigned int imm12
);
void emit_arm_mul_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs
);
void emit_arm_mul (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs
);
void emit_arm_mvn_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int operand2
);
void emit_arm_mvn (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int operand2
);
void emit_arm_nop_cond (
	mambo_context *ctx,
	unsigned int auto_cond
);
void emit_arm_nop (
	mambo_context *ctx
);
void emit_arm_orr_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void emit_arm_orr (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void emit_arm_pkh_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int tb,
	unsigned int imm5
);
void emit_arm_pkh (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int tb,
	unsigned int imm5
);
void emit_arm_pld (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int updown,
	unsigned int is_read,
	unsigned int rn,
	unsigned int operand2
);
void emit_arm_pli (
	mambo_context *ctx,
	unsigned int updown,
	unsigned int rn,
	unsigned int imm5,
	unsigned int type,
	unsigned int rm
);
void emit_arm_plii (
	mambo_context *ctx,
	unsigned int updown,
	unsigned int rn,
	unsigned int imm12
);
void emit_arm_qadd_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rn
);
void emit_arm_qadd (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rm,
	unsigned int rn
);
void emit_arm_qadd16_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_qadd16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_qadd8_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_qadd8 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_qasx_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_qasx (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_qdadd_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rn
);
void emit_arm_qdadd (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rm,
	unsigned int rn
);
void emit_arm_qdsub_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rn
);
void emit_arm_qdsub (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rm,
	unsigned int rn
);
void emit_arm_qsax_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_qsax (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_qsub_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rn
);
void emit_arm_qsub (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rm,
	unsigned int rn
);
void emit_arm_qsub16_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_qsub16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_qsub8_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_qsub8 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_rbit_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm
);
void emit_arm_rbit (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rm
);
void emit_arm_rev_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm
);
void emit_arm_rev (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rm
);
void emit_arm_rev16_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm
);
void emit_arm_rev16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rm
);
void emit_arm_revsh_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm
);
void emit_arm_revsh (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rm
);
void emit_arm_rrx_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rm
);
void emit_arm_rrx (
	mambo_context *ctx,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rm
);
void emit_arm_rsb_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void emit_arm_rsb (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void emit_arm_rsc_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void emit_arm_rsc (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void emit_arm_sadd16_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_sadd16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_sadd8_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_sadd8 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_sasx_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_sasx (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_sbc_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void emit_arm_sbc (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void emit_arm_sbfx_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int lsb,
	unsigned int widthm1
);
void emit_arm_sbfx (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int lsb,
	unsigned int widthm1
);
void emit_arm_sdiv_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_sdiv (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_sel_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_sel (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_setend (
	mambo_context *ctx,
	unsigned int set_bigend
);
void emit_arm_sev_cond (
	mambo_context *ctx,
	unsigned int auto_cond
);
void emit_arm_sev (
	mambo_context *ctx
);
void emit_arm_shadd16_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_shadd16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_shadd8_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_shadd8 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_shasx_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_shasx (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_shsax_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_shsax (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_shsub16_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_shsub16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_shsub8_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_shsub8 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_smlabb_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void emit_arm_smlabb (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void emit_arm_smlabt_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void emit_arm_smlabt (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void emit_arm_smlatb_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void emit_arm_smlatb (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void emit_arm_smlatt_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void emit_arm_smlatt (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void emit_arm_smlad_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int swap,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void emit_arm_smlad (
	mambo_context *ctx,
	unsigned int swap,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void emit_arm_smlal_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int set_condition,
	unsigned int rdhi,
	unsigned int rdlo,
	unsigned int rm,
	unsigned int rn
);
void emit_arm_smlal (
	mambo_context *ctx,
	unsigned int set_condition,
	unsigned int rdhi,
	unsigned int rdlo,
	unsigned int rm,
	unsigned int rn
);
void emit_arm_smlalbb_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_smlalbb (
	mambo_context *ctx,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_smlalbt_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_smlalbt (
	mambo_context *ctx,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_smlaltb_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_smlaltb (
	mambo_context *ctx,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_smlaltt_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_smlaltt (
	mambo_context *ctx,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_smlald_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_smlald (
	mambo_context *ctx,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_smlaldx_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_smlaldx (
	mambo_context *ctx,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_smlawb_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void emit_arm_smlawb (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void emit_arm_smlawt_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void emit_arm_smlawt (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void emit_arm_smlsd_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void emit_arm_smlsd (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void emit_arm_smlsdx_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void emit_arm_smlsdx (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void emit_arm_smlsld_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_smlsld (
	mambo_context *ctx,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_smlsldx_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_smlsldx (
	mambo_context *ctx,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_smmla_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void emit_arm_smmla (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void emit_arm_smmlar_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void emit_arm_smmlar (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void emit_arm_smmls_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void emit_arm_smmls (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void emit_arm_smmlsr_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void emit_arm_smmlsr (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void emit_arm_smmul_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_smmul (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_smmulr_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_smmulr (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_smuad_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_smuad (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_smuadx_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_smuadx (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_smulbb_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_smulbb (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_smulbt_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_smulbt (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_smultb_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_smultb (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_smultt_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_smultt (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_smull_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int set_condition,
	unsigned int rdhi,
	unsigned int rdlo,
	unsigned int rm,
	unsigned int rn
);
void emit_arm_smull (
	mambo_context *ctx,
	unsigned int set_condition,
	unsigned int rdhi,
	unsigned int rdlo,
	unsigned int rm,
	unsigned int rn
);
void emit_arm_smulwb_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_smulwb (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_smulwt_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_smulwt (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_smusd_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_smusd (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_smusdx_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_smusdx (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_ssat_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int sat_imm,
	unsigned int rn,
	unsigned int sh,
	unsigned int imm5
);
void emit_arm_ssat (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int sat_imm,
	unsigned int rn,
	unsigned int sh,
	unsigned int imm5
);
void emit_arm_ssat16_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int sat_imm,
	unsigned int rn
);
void emit_arm_ssat16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int sat_imm,
	unsigned int rn
);
void emit_arm_ssax_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_ssax (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_ssub16_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_ssub16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_ssub8_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_ssub8 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_stc_cond (
	mambo_context *ctx,
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
void emit_arm_stc (
	mambo_context *ctx,
	unsigned int p,
	unsigned int upwards,
	unsigned int d,
	unsigned int writeback,
	unsigned int rn,
	unsigned int vd,
	unsigned int opcode,
	unsigned int imm8
);
void emit_arm_stm_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
);
void emit_arm_stm (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
);
void emit_arm_str_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void emit_arm_str (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void emit_arm_strb_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void emit_arm_strb (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void emit_arm_strbt_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int updown
);
void emit_arm_strbt (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int updown
);
void emit_arm_strd_cond (
	mambo_context *ctx,
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
void emit_arm_strd (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm_imm4l,
	unsigned int imm4h,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void emit_arm_strex_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_strex (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_strexb_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rt,
	unsigned int rn
);
void emit_arm_strexb (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rt,
	unsigned int rn
);
void emit_arm_strexd_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rt,
	unsigned int rn
);
void emit_arm_strexd (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rt,
	unsigned int rn
);
void emit_arm_strexh_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rt,
	unsigned int rn
);
void emit_arm_strexh (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rt,
	unsigned int rn
);
void emit_arm_strh_cond (
	mambo_context *ctx,
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
void emit_arm_strh (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm_imm4l,
	unsigned int imm4h,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
);
void emit_arm_strht_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm_imm4l,
	unsigned int imm4h,
	unsigned int updown
);
void emit_arm_strht (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm_imm4l,
	unsigned int imm4h,
	unsigned int updown
);
void emit_arm_strt_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2,
	unsigned int updown
);
void emit_arm_strt (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2,
	unsigned int updown
);
void emit_arm_sub_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void emit_arm_sub (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void emit_arm_svc_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int comment
);
void emit_arm_svc (
	mambo_context *ctx,
	unsigned int comment
);
void emit_arm_swp_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rt,
	unsigned int rt2,
	unsigned int rn
);
void emit_arm_swp (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rt2,
	unsigned int rn
);
void emit_arm_swpb_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rt,
	unsigned int rt2,
	unsigned int rn
);
void emit_arm_swpb (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rt2,
	unsigned int rn
);
void emit_arm_sxtab_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
);
void emit_arm_sxtab (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
);
void emit_arm_sxtab16_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
);
void emit_arm_sxtab16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
);
void emit_arm_sxtah_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
);
void emit_arm_sxtah (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
);
void emit_arm_sxtb_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
);
void emit_arm_sxtb (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
);
void emit_arm_sxtb16_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
);
void emit_arm_sxtb16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
);
void emit_arm_sxth_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
);
void emit_arm_sxth (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
);
void emit_arm_teq_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rn,
	unsigned int operand2
);
void emit_arm_teq (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int rn,
	unsigned int operand2
);
void emit_arm_tst_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rn,
	unsigned int operand2
);
void emit_arm_tst (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int rn,
	unsigned int operand2
);
void emit_arm_uadd16_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_uadd16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_uadd8_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_uadd8 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_uasx_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_uasx (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_ubfx_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int lsb,
	unsigned int widthm1
);
void emit_arm_ubfx (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int lsb,
	unsigned int widthm1
);
void emit_arm_udf (
	mambo_context *ctx,
	unsigned int imm12,
	unsigned int imm4
);
void emit_arm_udiv_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_udiv (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_uhadd16_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_uhadd16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_uhadd8_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_uhadd8 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_uhasx_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_uhasx (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_uhsax_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_uhsax (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_uhsub16_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_uhsub16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_uhsub8_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_uhsub8 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_umaal (
	mambo_context *ctx,
	unsigned int rd_hi,
	unsigned int rd_lo,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_umlal_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int set_condition,
	unsigned int rdhi,
	unsigned int rdlo,
	unsigned int rm,
	unsigned int rn
);
void emit_arm_umlal (
	mambo_context *ctx,
	unsigned int set_condition,
	unsigned int rdhi,
	unsigned int rdlo,
	unsigned int rm,
	unsigned int rn
);
void emit_arm_umull_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int set_condition,
	unsigned int rdhi,
	unsigned int rdlo,
	unsigned int rm,
	unsigned int rn
);
void emit_arm_umull (
	mambo_context *ctx,
	unsigned int set_condition,
	unsigned int rdhi,
	unsigned int rdlo,
	unsigned int rm,
	unsigned int rn
);
void emit_arm_uqadd16_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_uqadd16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_uqadd8_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_uqadd8 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_uqasx_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_uqasx (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_uqsax_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_uqsax (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_uqsub16_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_uqsub16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_uqsub8_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_uqsub8 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_usad8_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_usad8 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_usada8_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void emit_arm_usada8 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
);
void emit_arm_usat_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int sat_imm,
	unsigned int rn,
	unsigned int sh,
	unsigned int imm5
);
void emit_arm_usat (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int sat_imm,
	unsigned int rn,
	unsigned int sh,
	unsigned int imm5
);
void emit_arm_usat16_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int sat_imm,
	unsigned int rn
);
void emit_arm_usat16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int sat_imm,
	unsigned int rn
);
void emit_arm_usax_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_usax (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_usub16_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_usub16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_usub8_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_usub8 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_uxtab_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
);
void emit_arm_uxtab (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
);
void emit_arm_uxtab16_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
);
void emit_arm_uxtab16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
);
void emit_arm_uxtah_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
);
void emit_arm_uxtah (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
);
void emit_arm_uxtb_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
);
void emit_arm_uxtb (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
);
void emit_arm_uxtb16_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
);
void emit_arm_uxtb16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
);
void emit_arm_uxth_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
);
void emit_arm_uxth (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
);
void emit_arm_wfe_cond (
	mambo_context *ctx,
	unsigned int auto_cond
);
void emit_arm_wfe (
	mambo_context *ctx
);
void emit_arm_wfi_cond (
	mambo_context *ctx,
	unsigned int auto_cond
);
void emit_arm_wfi (
	mambo_context *ctx
);
void emit_arm_yield_cond (
	mambo_context *ctx,
	unsigned int auto_cond
);
void emit_arm_yield (
	mambo_context *ctx
);
void emit_arm_neon_vaba (
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
void emit_arm_neon_vabal (
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
void emit_arm_neon_vabd_i (
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
void emit_arm_neon_vabd_f (
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
void emit_arm_neon_vabdl (
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
void emit_arm_neon_vabs (
	mambo_context *ctx,
	unsigned int float_p,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_vabs_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_vabs (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vacge (
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
void emit_arm_neon_vacgt (
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
void emit_arm_neon_vadd_i (
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
void emit_arm_neon_vadd_f (
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
void emit_arm_vfp_vadd_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_vadd (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vaddhn (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vaddl (
	mambo_context *ctx,
	unsigned int size,
	unsigned int unsign,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vaddw (
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
void emit_arm_neon_vand (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vbici (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int cmode,
	unsigned int i,
	unsigned int imm3,
	unsigned int imm4
);
void emit_arm_neon_vbic (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vbif (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vbit (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vbsl (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vceq_i (
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
void emit_arm_neon_vceq_f (
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
void emit_arm_neon_vceqz (
	mambo_context *ctx,
	unsigned int float_p,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vcge_i (
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
void emit_arm_neon_vcge_f (
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
void emit_arm_neon_vcgez (
	mambo_context *ctx,
	unsigned int float_p,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vcgt_i (
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
void emit_arm_neon_vcgt_f (
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
void emit_arm_neon_vcgtz (
	mambo_context *ctx,
	unsigned int float_p,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vclez (
	mambo_context *ctx,
	unsigned int float_p,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vcls (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vcltz (
	mambo_context *ctx,
	unsigned int float_p,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vclz (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_vcmp_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int d,
	unsigned int vd,
	unsigned int sz,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_vcmp (
	mambo_context *ctx,
	unsigned int d,
	unsigned int vd,
	unsigned int sz,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_vcmpz_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int d,
	unsigned int vd,
	unsigned int sz
);
void emit_arm_vfp_vcmpz (
	mambo_context *ctx,
	unsigned int d,
	unsigned int vd,
	unsigned int sz
);
void emit_arm_vfp_vcmpe_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int d,
	unsigned int vd,
	unsigned int sz,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_vcmpe (
	mambo_context *ctx,
	unsigned int d,
	unsigned int vd,
	unsigned int sz,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_vcmpez_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int d,
	unsigned int vd,
	unsigned int sz
);
void emit_arm_vfp_vcmpez (
	mambo_context *ctx,
	unsigned int d,
	unsigned int vd,
	unsigned int sz
);
void emit_arm_neon_vcnt (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vcvt_f_i (
	mambo_context *ctx,
	unsigned int op,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vcvt_f_fp (
	mambo_context *ctx,
	unsigned int op,
	unsigned int unsign,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
);
void emit_arm_neon_vcvt_hp_sp (
	mambo_context *ctx,
	unsigned int op,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_vcvt_f_i_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int op,
	unsigned int opcode2,
	unsigned int sz,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_vcvt_f_i (
	mambo_context *ctx,
	unsigned int op,
	unsigned int opcode2,
	unsigned int sz,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_vcvt_f_fp_cond (
	mambo_context *ctx,
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
void emit_arm_vfp_vcvt_f_fp (
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
void emit_arm_vfp_vcvt_dp_sp_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_vcvt_dp_sp (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_vcvtb_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int op,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_vcvtb (
	mambo_context *ctx,
	unsigned int op,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_vcvtt_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int op,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_vcvtt (
	mambo_context *ctx,
	unsigned int op,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_vdiv_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_vdiv (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vdup_scal (
	mambo_context *ctx,
	unsigned int imm4,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vdup_core_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int b,
	unsigned int e,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int rt
);
void emit_arm_neon_vdup_core (
	mambo_context *ctx,
	unsigned int b,
	unsigned int e,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int rt
);
void emit_arm_neon_veor (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vext (
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
void emit_arm_neon_vfma (
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
void emit_arm_neon_vfms (
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
void emit_arm_vfp_vfma_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_vfma (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_vfms_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_vfms (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_vfnma_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_vfnma (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_vfnms_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_vfnms (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vhadd (
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
void emit_arm_neon_vhsub (
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
void emit_arm_neon_vldx_m (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int rn,
	unsigned int align,
	unsigned int rm
);
void emit_arm_neon_vldx_s_o (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int rn,
	unsigned int index_align,
	unsigned int rm
);
void emit_arm_neon_vldx_s_a (
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
void emit_arm_vfp_vldm_dp_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int p,
	unsigned int upwards,
	unsigned int d,
	unsigned int writeback,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
);
void emit_arm_vfp_vldm_dp (
	mambo_context *ctx,
	unsigned int p,
	unsigned int upwards,
	unsigned int d,
	unsigned int writeback,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
);
void emit_arm_vfp_vldm_sp_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int p,
	unsigned int upwards,
	unsigned int d,
	unsigned int writeback,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
);
void emit_arm_vfp_vldm_sp (
	mambo_context *ctx,
	unsigned int p,
	unsigned int upwards,
	unsigned int d,
	unsigned int writeback,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
);
void emit_arm_vfp_vldr_dp_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int upwards,
	unsigned int d,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
);
void emit_arm_vfp_vldr_dp (
	mambo_context *ctx,
	unsigned int upwards,
	unsigned int d,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
);
void emit_arm_vfp_vldr_sp_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int upwards,
	unsigned int d,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
);
void emit_arm_vfp_vldr_sp (
	mambo_context *ctx,
	unsigned int upwards,
	unsigned int d,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
);
void emit_arm_neon_vmax_i (
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
void emit_arm_neon_vmin_i (
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
void emit_arm_neon_vmax_f (
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
void emit_arm_neon_vmin_f (
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
void emit_arm_neon_vmla_i (
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
void emit_arm_neon_vmls_i (
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
void emit_arm_neon_vmlal_i (
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
void emit_arm_neon_vmlsl_i (
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
void emit_arm_neon_vmla_f (
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
void emit_arm_neon_vmls_f (
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
void emit_arm_vfp_vmla_f_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vn,
	unsigned int vd,
	unsigned int n,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_vmla_f (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vn,
	unsigned int vd,
	unsigned int n,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_vmls_f_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vn,
	unsigned int vd,
	unsigned int n,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_vmls_f (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vn,
	unsigned int vd,
	unsigned int n,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vmla_scal (
	mambo_context *ctx,
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
void emit_arm_neon_vmls_scal (
	mambo_context *ctx,
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
void emit_arm_neon_vmlal_scal (
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
void emit_arm_neon_vmlsl_scal (
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
void emit_arm_neon_vmovi (
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
void emit_arm_vfp_vmovi_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int imm4h,
	unsigned int imm4l
);
void emit_arm_vfp_vmovi (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int imm4h,
	unsigned int imm4l
);
void emit_arm_vfp_vmov_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_vmov (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_vmov_core_scal_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int d,
	unsigned int vd,
	unsigned int opc1,
	unsigned int opc2,
	unsigned int rt
);
void emit_arm_vfp_vmov_core_scal (
	mambo_context *ctx,
	unsigned int d,
	unsigned int vd,
	unsigned int opc1,
	unsigned int opc2,
	unsigned int rt
);
void emit_arm_vfp_vmov_scal_core_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int unsign,
	unsigned int rt,
	unsigned int n,
	unsigned int vn,
	unsigned int opc1,
	unsigned int opc2
);
void emit_arm_vfp_vmov_scal_core (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int rt,
	unsigned int n,
	unsigned int vn,
	unsigned int opc1,
	unsigned int opc2
);
void emit_arm_vfp_vmov_core_sp_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int op,
	unsigned int rt,
	unsigned int n,
	unsigned int vn
);
void emit_arm_vfp_vmov_core_sp (
	mambo_context *ctx,
	unsigned int op,
	unsigned int rt,
	unsigned int n,
	unsigned int vn
);
void emit_arm_vfp_vmov_2core_2sp_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int op,
	unsigned int rt,
	unsigned int rt2,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_vmov_2core_2sp (
	mambo_context *ctx,
	unsigned int op,
	unsigned int rt,
	unsigned int rt2,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_vmov_2core_dp_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int op,
	unsigned int rt,
	unsigned int rt2,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_vmov_2core_dp (
	mambo_context *ctx,
	unsigned int op,
	unsigned int rt,
	unsigned int rt2,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vmovl (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm3
);
void emit_arm_neon_vmovn (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_vmrs_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rt
);
void emit_arm_vfp_vmrs (
	mambo_context *ctx,
	unsigned int rt
);
void emit_arm_vfp_vmsr_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rt
);
void emit_arm_vfp_vmsr (
	mambo_context *ctx,
	unsigned int rt
);
void emit_arm_neon_vmul_i (
	mambo_context *ctx,
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
void emit_arm_neon_vmull_i (
	mambo_context *ctx,
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
void emit_arm_neon_vmul_f (
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
void emit_arm_vfp_vmul_f_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vn,
	unsigned int vd,
	unsigned int n,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_vmul_f (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vn,
	unsigned int vd,
	unsigned int n,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vmul_scal (
	mambo_context *ctx,
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
void emit_arm_neon_vmull_scal (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vmvni (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int cmode,
	unsigned int i,
	unsigned int imm3,
	unsigned int imm4
);
void emit_arm_neon_vmvn (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vneg (
	mambo_context *ctx,
	unsigned int float_p,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_vneg_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_vneg (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_vnmla_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_vnmla (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_vnmls_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_vnmls (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_vnmul_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_vnmul (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vorn (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vorri (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int cmode,
	unsigned int i,
	unsigned int imm3,
	unsigned int imm4
);
void emit_arm_neon_vorr (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vpadal (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vpadd_i (
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
void emit_arm_neon_vpadd_f (
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
void emit_arm_neon_vpaddl (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vpmax_i (
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
void emit_arm_neon_vpmin_i (
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
void emit_arm_neon_vpmax_f (
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
void emit_arm_neon_vpmin_f (
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
void emit_arm_vfp_vpop_dp_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
);
void emit_arm_vfp_vpop_dp (
	mambo_context *ctx,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
);
void emit_arm_vfp_vpop_sp_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
);
void emit_arm_vfp_vpop_sp (
	mambo_context *ctx,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
);
void emit_arm_vfp_vpush_dp_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
);
void emit_arm_vfp_vpush_dp (
	mambo_context *ctx,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
);
void emit_arm_vfp_vpush_sp_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
);
void emit_arm_vfp_vpush_sp (
	mambo_context *ctx,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
);
void emit_arm_neon_vqabs (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vqadd (
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
void emit_arm_neon_vqdmlal_i (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vqdmlsl_i (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vqdmlal_scal (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vqdmlsl_scal (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vqdmulh_i (
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
void emit_arm_neon_vqdmulh_scal (
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
void emit_arm_neon_vqdmull_i (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vqdmull_scal (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vqmovn (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vqmovun (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vqneg (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vqrdmulh_i (
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
void emit_arm_neon_vqrdmulh_scal (
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
void emit_arm_neon_vqrshl (
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
void emit_arm_neon_vqrshrn (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
);
void emit_arm_neon_vqrshrun (
	mambo_context *ctx,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
);
void emit_arm_neon_vqshl (
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
void emit_arm_neon_vqshli (
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
void emit_arm_neon_vqshlui (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int l,
	unsigned int imm6
);
void emit_arm_neon_vqshrn (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
);
void emit_arm_neon_vqshrun (
	mambo_context *ctx,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
);
void emit_arm_neon_vqsub (
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
void emit_arm_neon_vraddhn (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vrecpe (
	mambo_context *ctx,
	unsigned int float_p,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vrecps (
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
void emit_arm_neon_vrev16 (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vrev32 (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vrev64 (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vrhadd (
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
void emit_arm_neon_vrshl (
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
void emit_arm_neon_vrshr (
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
void emit_arm_neon_vrshrn (
	mambo_context *ctx,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
);
void emit_arm_neon_vrsqrte (
	mambo_context *ctx,
	unsigned int floating_point,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vrsqrts (
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
void emit_arm_neon_vrsra (
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
void emit_arm_neon_vrsubhn (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vshl (
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
void emit_arm_neon_vshli (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int l,
	unsigned int imm6
);
void emit_arm_neon_vshll (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
);
void emit_arm_neon_vshll2 (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vshr (
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
void emit_arm_neon_vshrn (
	mambo_context *ctx,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
);
void emit_arm_neon_vsli (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int l,
	unsigned int imm6
);
void emit_arm_vfp_vsqrt_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_vsqrt (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vsra (
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
void emit_arm_neon_vsri (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int l,
	unsigned int imm6
);
void emit_arm_neon_vstx_m (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int rn,
	unsigned int align,
	unsigned int rm
);
void emit_arm_neon_vstx_s_o (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int rn,
	unsigned int index_align,
	unsigned int rm
);
void emit_arm_vfp_vstm_dp_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int p,
	unsigned int upwards,
	unsigned int d,
	unsigned int writeback,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
);
void emit_arm_vfp_vstm_dp (
	mambo_context *ctx,
	unsigned int p,
	unsigned int upwards,
	unsigned int d,
	unsigned int writeback,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
);
void emit_arm_vfp_vstm_sp_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int p,
	unsigned int upwards,
	unsigned int d,
	unsigned int writeback,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
);
void emit_arm_vfp_vstm_sp (
	mambo_context *ctx,
	unsigned int p,
	unsigned int upwards,
	unsigned int d,
	unsigned int writeback,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
);
void emit_arm_vfp_vstr_dp_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int upwards,
	unsigned int d,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
);
void emit_arm_vfp_vstr_dp (
	mambo_context *ctx,
	unsigned int upwards,
	unsigned int d,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
);
void emit_arm_vfp_vstr_sp_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int upwards,
	unsigned int d,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
);
void emit_arm_vfp_vstr_sp (
	mambo_context *ctx,
	unsigned int upwards,
	unsigned int d,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
);
void emit_arm_neon_vsub_i (
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
void emit_arm_neon_vsub_f (
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
void emit_arm_vfp_vsub_f_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_vsub_f (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vsubhn (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vsubl (
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
void emit_arm_neon_vsubw (
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
void emit_arm_neon_vswp (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vtbl (
	mambo_context *ctx,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int len,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vtbx (
	mambo_context *ctx,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int len,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vtrn (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vtst (
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
void emit_arm_neon_vuzp (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_neon_vzip (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
);
void emit_arm_br_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int link,
	unsigned int offset_branch
);
void emit_arm_br (
	mambo_context *ctx,
	unsigned int link,
	unsigned int offset_branch
);
void emit_arm_bx_t_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int link,
	unsigned int rn
);
void emit_arm_bx_t (
	mambo_context *ctx,
	unsigned int link,
	unsigned int rn
);
void emit_arm_blxi_t (
	mambo_context *ctx,
	unsigned int h,
	unsigned int imm24
);
void emit_arm_data_proc_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int opcode,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void emit_arm_data_proc (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int opcode,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
);
void emit_arm_multiply_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int accumulate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs,
	unsigned int rn
);
void emit_arm_multiply (
	mambo_context *ctx,
	unsigned int accumulate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs,
	unsigned int rn
);
void emit_arm_s_data_transfer_cond (
	mambo_context *ctx,
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
void emit_arm_s_data_transfer (
	mambo_context *ctx,
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
void emit_arm_h_data_transfer_cond (
	mambo_context *ctx,
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
void emit_arm_h_data_transfer (
	mambo_context *ctx,
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
void emit_arm_b_data_transfer_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int loadstore,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
);
void emit_arm_b_data_transfer (
	mambo_context *ctx,
	unsigned int loadstore,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
);
void emit_arm_svc_t_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int comment
);
void emit_arm_svc_t (
	mambo_context *ctx,
	unsigned int comment
);
void emit_arm_mem_hints_pli (
	mambo_context *ctx,
	unsigned int opcode1,
	unsigned int updown,
	unsigned int opcode2,
	unsigned int rn,
	unsigned int imm5,
	unsigned int type,
	unsigned int rm
);
void emit_arm_mem_hints_pld (
	mambo_context *ctx,
	unsigned int opcode1,
	unsigned int updown,
	unsigned int read_only,
	unsigned int opcode2,
	unsigned int rn,
	unsigned int imm12
);
void emit_arm_vfp_ldm_stm_cond (
	mambo_context *ctx,
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
void emit_arm_vfp_ldm_stm (
	mambo_context *ctx,
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
void emit_arm_coproc_trans_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int opc1,
	unsigned int load_store,
	unsigned int crn,
	unsigned int rd,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
);
void emit_arm_coproc_trans (
	mambo_context *ctx,
	unsigned int opc1,
	unsigned int load_store,
	unsigned int crn,
	unsigned int rd,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
);
void emit_arm_coproc_dp_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int opc1,
	unsigned int crn,
	unsigned int crd,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
);
void emit_arm_coproc_dp (
	mambo_context *ctx,
	unsigned int opc1,
	unsigned int crn,
	unsigned int crd,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
);
void emit_arm_dsp_long_res_cond (
	mambo_context *ctx,
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
void emit_arm_dsp_long_res (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int set_condition,
	unsigned int rdhi,
	unsigned int rdlo,
	unsigned int rm,
	unsigned int opcode2,
	unsigned int setting,
	unsigned int rn
);
void emit_arm_vops (
	mambo_context *ctx,
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
void emit_arm_v_trans_mult (
	mambo_context *ctx,
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
void emit_arm_v_ops_2reg (
	mambo_context *ctx,
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
void emit_arm_v_ops_imm6 (
	mambo_context *ctx,
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
void emit_arm_v_ops_1reg_mod_imm (
	mambo_context *ctx,
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
void emit_arm_vfp_data_proc_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int d,
	unsigned int opc2,
	unsigned int vd,
	unsigned int sz,
	unsigned int op,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_data_proc (
	mambo_context *ctx,
	unsigned int d,
	unsigned int opc2,
	unsigned int vd,
	unsigned int sz,
	unsigned int op,
	unsigned int m,
	unsigned int vm
);
void emit_arm_cpsr_trans_reg_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int opcode,
	unsigned int mask,
	unsigned int f2,
	unsigned int rd,
	unsigned int rn
);
void emit_arm_cpsr_trans_reg (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int mask,
	unsigned int f2,
	unsigned int rd,
	unsigned int rn
);
void emit_arm_cpsr_trans_imm_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int mask,
	unsigned int imm12
);
void emit_arm_cpsr_trans_imm (
	mambo_context *ctx,
	unsigned int mask,
	unsigned int imm12
);
void emit_arm_divide_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int opcode,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_divide (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
);
void emit_arm_sync (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int option
);
void emit_arm_extend_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int opcode,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
);
void emit_arm_extend (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
);
void emit_arm_vfp_3reg_cond (
	mambo_context *ctx,
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
void emit_arm_vfp_3reg (
	mambo_context *ctx,
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
void emit_arm_trans_arm_vfp_cond (
	mambo_context *ctx,
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
void emit_arm_trans_arm_vfp (
	mambo_context *ctx,
	unsigned int op,
	unsigned int vn,
	unsigned int rd,
	unsigned int opcode,
	unsigned int n,
	unsigned int f3,
	unsigned int m,
	unsigned int f5
);
void emit_arm_vfp_imm8_1reg_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int opcode,
	unsigned int d,
	unsigned int vd,
	unsigned int imm4h,
	unsigned int imm4l
);
void emit_arm_vfp_imm8_1reg (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int d,
	unsigned int vd,
	unsigned int imm4h,
	unsigned int imm4l
);
void emit_arm_vfp_trans_2arm_reg_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int opcode,
	unsigned int op,
	unsigned int rt2,
	unsigned int rt,
	unsigned int m,
	unsigned int vm
);
void emit_arm_vfp_trans_2arm_reg (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int op,
	unsigned int rt2,
	unsigned int rt,
	unsigned int m,
	unsigned int vm
);
#endif
#endif
