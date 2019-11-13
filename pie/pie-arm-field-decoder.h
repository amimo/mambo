#ifndef __ARM_PIE_FIELD_DECODER_H__
#define __ARM_PIE_FIELD_DECODER_H__
#include <stdint.h>
void arm_adc_decode_fields (
	uint32_t *address,
	unsigned int *immediate,
	unsigned int *set_condition,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *operand2);
void arm_add_decode_fields (
	uint32_t *address,
	unsigned int *immediate,
	unsigned int *set_condition,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *operand2);
void arm_and_decode_fields (
	uint32_t *address,
	unsigned int *immediate,
	unsigned int *set_condition,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *operand2);
void arm_b_decode_fields (
	uint32_t *address,
	unsigned int *offset_branch);
void arm_bfc_decode_fields (
	uint32_t *address,
	unsigned int *rt,
	unsigned int *lsb,
	unsigned int *msb);
void arm_bfi_decode_fields (
	uint32_t *address,
	unsigned int *rt,
	unsigned int *rn,
	unsigned int *lsb,
	unsigned int *msb);
void arm_bic_decode_fields (
	uint32_t *address,
	unsigned int *immediate,
	unsigned int *set_condition,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *operand2);
void arm_bkpt_decode_fields (
	uint32_t *address,
	unsigned int *imm12,
	unsigned int *imm4);
void arm_bl_decode_fields (
	uint32_t *address,
	unsigned int *offset_branch);
void arm_blx_decode_fields (
	uint32_t *address,
	unsigned int *rn);
void arm_blxi_decode_fields (
	uint32_t *address,
	unsigned int *h,
	unsigned int *imm24);
void arm_bx_decode_fields (
	uint32_t *address,
	unsigned int *rn);
void arm_cdp_decode_fields (
	uint32_t *address,
	unsigned int *opc1,
	unsigned int *crn,
	unsigned int *crd,
	unsigned int *coproc,
	unsigned int *opc2,
	unsigned int *crm);
void arm_cdp2_decode_fields (
	uint32_t *address,
	unsigned int *opc1,
	unsigned int *crn,
	unsigned int *crd,
	unsigned int *coproc,
	unsigned int *opc2,
	unsigned int *crm);
void arm_clz_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rm);
void arm_cmn_decode_fields (
	uint32_t *address,
	unsigned int *immediate,
	unsigned int *rn,
	unsigned int *operand2);
void arm_cmp_decode_fields (
	uint32_t *address,
	unsigned int *immediate,
	unsigned int *rn,
	unsigned int *operand2);
void arm_dbg_decode_fields (
	uint32_t *address,
	unsigned int *option);
void arm_dmb_decode_fields (
	uint32_t *address,
	unsigned int *option);
void arm_dsb_decode_fields (
	uint32_t *address,
	unsigned int *option);
void arm_eor_decode_fields (
	uint32_t *address,
	unsigned int *immediate,
	unsigned int *set_condition,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *operand2);
void arm_isb_decode_fields (
	uint32_t *address,
	unsigned int *option);
void arm_ldc_decode_fields (
	uint32_t *address,
	unsigned int *p,
	unsigned int *u,
	unsigned int *coproc,
	unsigned int *w,
	unsigned int *rn,
	unsigned int *crd,
	unsigned int *imm8);
void arm_ldm_decode_fields (
	uint32_t *address,
	unsigned int *rn,
	unsigned int *registers,
	unsigned int *prepostindex,
	unsigned int *updown,
	unsigned int *writeback,
	unsigned int *psr);
void arm_ldr_decode_fields (
	uint32_t *address,
	unsigned int *immediate,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *offset,
	unsigned int *prepostindex,
	unsigned int *updown,
	unsigned int *writeback);
void arm_ldrb_decode_fields (
	uint32_t *address,
	unsigned int *immediate,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *offset,
	unsigned int *prepostindex,
	unsigned int *updown,
	unsigned int *writeback);
void arm_ldrbt_decode_fields (
	uint32_t *address,
	unsigned int *immediate,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *updown,
	unsigned int *operand2);
void arm_ldrd_decode_fields (
	uint32_t *address,
	unsigned int *immediate,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm_imm4l,
	unsigned int *imm4h,
	unsigned int *prepostindex,
	unsigned int *updown,
	unsigned int *writeback);
void arm_ldrex_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn);
void arm_ldrexb_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn);
void arm_ldrexd_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn);
void arm_ldrexh_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn);
void arm_ldrh_decode_fields (
	uint32_t *address,
	unsigned int *immediate,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm_imm4l,
	unsigned int *imm4h,
	unsigned int *prepostindex,
	unsigned int *updown,
	unsigned int *writeback);
void arm_ldrht_decode_fields (
	uint32_t *address,
	unsigned int *immediate,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm_imm4l,
	unsigned int *imm4h,
	unsigned int *updown);
void arm_ldrsb_decode_fields (
	uint32_t *address,
	unsigned int *immediate,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm_imm4l,
	unsigned int *imm4h,
	unsigned int *index,
	unsigned int *updown,
	unsigned int *writeback);
void arm_ldrsbt_decode_fields (
	uint32_t *address,
	unsigned int *immediate,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm,
	unsigned int *imm4h,
	unsigned int *updown);
void arm_ldrsh_decode_fields (
	uint32_t *address,
	unsigned int *immediate,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm_imm4l,
	unsigned int *imm4h,
	unsigned int *prepostindex,
	unsigned int *updown,
	unsigned int *writeback);
void arm_ldrsht_decode_fields (
	uint32_t *address,
	unsigned int *immediate,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm,
	unsigned int *imm4h,
	unsigned int *updown);
void arm_ldrt_decode_fields (
	uint32_t *address,
	unsigned int *immediate,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *updown,
	unsigned int *operand2);
void arm_mcr_decode_fields (
	uint32_t *address,
	unsigned int *opc1,
	unsigned int *crn,
	unsigned int *rd,
	unsigned int *coproc,
	unsigned int *opc2,
	unsigned int *crm);
void arm_mcrr_decode_fields (
	uint32_t *address,
	unsigned int *coproc,
	unsigned int *opc1,
	unsigned int *rt,
	unsigned int *rt2,
	unsigned int *crm);
void arm_mla_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rm,
	unsigned int *rs,
	unsigned int *rn);
void arm_mls_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm,
	unsigned int *ra);
void arm_mov_decode_fields (
	uint32_t *address,
	unsigned int *immediate,
	unsigned int *set_condition,
	unsigned int *rd,
	unsigned int *operand2);
void arm_movt_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *operand2);
void arm_movw_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *operand2);
void arm_mrc_decode_fields (
	uint32_t *address,
	unsigned int *opc1,
	unsigned int *crn,
	unsigned int *rd,
	unsigned int *coproc,
	unsigned int *opc2,
	unsigned int *crm);
void arm_mrrc_decode_fields (
	uint32_t *address,
	unsigned int *coproc,
	unsigned int *opc1,
	unsigned int *rt,
	unsigned int *rt2,
	unsigned int *crm);
void arm_mrs_decode_fields (
	uint32_t *address,
	unsigned int *rd);
void arm_msr_decode_fields (
	uint32_t *address,
	unsigned int *rn,
	unsigned int *mask);
void arm_msri_decode_fields (
	uint32_t *address,
	unsigned int *mask,
	unsigned int *imm12);
void arm_mul_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rm,
	unsigned int *rs);
void arm_mvn_decode_fields (
	uint32_t *address,
	unsigned int *immediate,
	unsigned int *set_condition,
	unsigned int *rd,
	unsigned int *operand2);
void arm_orr_decode_fields (
	uint32_t *address,
	unsigned int *immediate,
	unsigned int *set_condition,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *operand2);
void arm_pkh_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm,
	unsigned int *tb,
	unsigned int *imm5);
void arm_pld_decode_fields (
	uint32_t *address,
	unsigned int *immediate,
	unsigned int *updown,
	unsigned int *is_read,
	unsigned int *rn,
	unsigned int *operand2);
void arm_pli_decode_fields (
	uint32_t *address,
	unsigned int *updown,
	unsigned int *rn,
	unsigned int *imm5,
	unsigned int *type,
	unsigned int *rm);
void arm_plii_decode_fields (
	uint32_t *address,
	unsigned int *updown,
	unsigned int *rn,
	unsigned int *imm12);
void arm_qadd_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rm,
	unsigned int *rn);
void arm_qadd16_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_qadd8_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_qasx_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_qdadd_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rm,
	unsigned int *rn);
void arm_qdsub_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rm,
	unsigned int *rn);
void arm_qsax_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_qsub_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rm,
	unsigned int *rn);
void arm_qsub16_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_qsub8_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_rbit_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rm);
void arm_rev_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rm);
void arm_rev16_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rm);
void arm_revsh_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rm);
void arm_rrx_decode_fields (
	uint32_t *address,
	unsigned int *set_condition,
	unsigned int *rd,
	unsigned int *rm);
void arm_rsb_decode_fields (
	uint32_t *address,
	unsigned int *immediate,
	unsigned int *set_condition,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *operand2);
void arm_rsc_decode_fields (
	uint32_t *address,
	unsigned int *immediate,
	unsigned int *set_condition,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *operand2);
void arm_sadd16_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_sadd8_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_sasx_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_sbc_decode_fields (
	uint32_t *address,
	unsigned int *immediate,
	unsigned int *set_condition,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *operand2);
void arm_sbfx_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *lsb,
	unsigned int *widthm1);
void arm_sdiv_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_sel_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_setend_decode_fields (
	uint32_t *address,
	unsigned int *set_bigend);
void arm_shadd16_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_shadd8_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_shasx_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_shsax_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_shsub16_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_shsub8_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_smlabb_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm,
	unsigned int *ra);
void arm_smlabt_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm,
	unsigned int *ra);
void arm_smlatb_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm,
	unsigned int *ra);
void arm_smlatt_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm,
	unsigned int *ra);
void arm_smlad_decode_fields (
	uint32_t *address,
	unsigned int *swap,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm,
	unsigned int *ra);
void arm_smlal_decode_fields (
	uint32_t *address,
	unsigned int *set_condition,
	unsigned int *rdhi,
	unsigned int *rdlo,
	unsigned int *rm,
	unsigned int *rn);
void arm_smlalbb_decode_fields (
	uint32_t *address,
	unsigned int *rd_lo,
	unsigned int *rd_hi,
	unsigned int *rn,
	unsigned int *rm);
void arm_smlalbt_decode_fields (
	uint32_t *address,
	unsigned int *rd_lo,
	unsigned int *rd_hi,
	unsigned int *rn,
	unsigned int *rm);
void arm_smlaltb_decode_fields (
	uint32_t *address,
	unsigned int *rd_lo,
	unsigned int *rd_hi,
	unsigned int *rn,
	unsigned int *rm);
void arm_smlaltt_decode_fields (
	uint32_t *address,
	unsigned int *rd_lo,
	unsigned int *rd_hi,
	unsigned int *rn,
	unsigned int *rm);
void arm_smlald_decode_fields (
	uint32_t *address,
	unsigned int *rd_lo,
	unsigned int *rd_hi,
	unsigned int *rn,
	unsigned int *rm);
void arm_smlaldx_decode_fields (
	uint32_t *address,
	unsigned int *rd_lo,
	unsigned int *rd_hi,
	unsigned int *rn,
	unsigned int *rm);
void arm_smlawb_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm,
	unsigned int *ra);
void arm_smlawt_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm,
	unsigned int *ra);
void arm_smlsd_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm,
	unsigned int *ra);
void arm_smlsdx_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm,
	unsigned int *ra);
void arm_smlsld_decode_fields (
	uint32_t *address,
	unsigned int *rd_lo,
	unsigned int *rd_hi,
	unsigned int *rn,
	unsigned int *rm);
void arm_smlsldx_decode_fields (
	uint32_t *address,
	unsigned int *rd_lo,
	unsigned int *rd_hi,
	unsigned int *rn,
	unsigned int *rm);
void arm_smmla_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm,
	unsigned int *ra);
void arm_smmlar_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm,
	unsigned int *ra);
void arm_smmls_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm,
	unsigned int *ra);
void arm_smmlsr_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm,
	unsigned int *ra);
void arm_smmul_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_smmulr_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_smuad_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_smuadx_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_smulbb_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_smulbt_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_smultb_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_smultt_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_smull_decode_fields (
	uint32_t *address,
	unsigned int *set_condition,
	unsigned int *rdhi,
	unsigned int *rdlo,
	unsigned int *rm,
	unsigned int *rn);
void arm_smulwb_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_smulwt_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_smusd_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_smusdx_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_ssat_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *sat_imm,
	unsigned int *rn,
	unsigned int *sh,
	unsigned int *imm5);
void arm_ssat16_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *sat_imm,
	unsigned int *rn);
void arm_ssax_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_ssub16_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_ssub8_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_stc_decode_fields (
	uint32_t *address,
	unsigned int *p,
	unsigned int *upwards,
	unsigned int *d,
	unsigned int *writeback,
	unsigned int *rn,
	unsigned int *vd,
	unsigned int *opcode,
	unsigned int *imm8);
void arm_stm_decode_fields (
	uint32_t *address,
	unsigned int *rn,
	unsigned int *registers,
	unsigned int *prepostindex,
	unsigned int *updown,
	unsigned int *writeback,
	unsigned int *psr);
void arm_str_decode_fields (
	uint32_t *address,
	unsigned int *immediate,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *offset,
	unsigned int *prepostindex,
	unsigned int *updown,
	unsigned int *writeback);
void arm_strb_decode_fields (
	uint32_t *address,
	unsigned int *immediate,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *offset,
	unsigned int *prepostindex,
	unsigned int *updown,
	unsigned int *writeback);
void arm_strbt_decode_fields (
	uint32_t *address,
	unsigned int *immediate,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *offset,
	unsigned int *updown);
void arm_strd_decode_fields (
	uint32_t *address,
	unsigned int *immediate,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm_imm4l,
	unsigned int *imm4h,
	unsigned int *prepostindex,
	unsigned int *updown,
	unsigned int *writeback);
void arm_strex_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_strexb_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rt,
	unsigned int *rn);
void arm_strexd_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rt,
	unsigned int *rn);
void arm_strexh_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rt,
	unsigned int *rn);
void arm_strh_decode_fields (
	uint32_t *address,
	unsigned int *immediate,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm_imm4l,
	unsigned int *imm4h,
	unsigned int *prepostindex,
	unsigned int *updown,
	unsigned int *writeback);
void arm_strht_decode_fields (
	uint32_t *address,
	unsigned int *immediate,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm_imm4l,
	unsigned int *imm4h,
	unsigned int *updown);
void arm_strt_decode_fields (
	uint32_t *address,
	unsigned int *immediate,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *operand2,
	unsigned int *updown);
void arm_sub_decode_fields (
	uint32_t *address,
	unsigned int *immediate,
	unsigned int *set_condition,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *operand2);
void arm_svc_decode_fields (
	uint32_t *address,
	unsigned int *comment);
void arm_swp_decode_fields (
	uint32_t *address,
	unsigned int *rt,
	unsigned int *rt2,
	unsigned int *rn);
void arm_swpb_decode_fields (
	uint32_t *address,
	unsigned int *rt,
	unsigned int *rt2,
	unsigned int *rn);
void arm_sxtab_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm,
	unsigned int *rotate);
void arm_sxtab16_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm,
	unsigned int *rotate);
void arm_sxtah_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm,
	unsigned int *rotate);
void arm_sxtb_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rm,
	unsigned int *rotate);
void arm_sxtb16_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rm,
	unsigned int *rotate);
void arm_sxth_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rm,
	unsigned int *rotate);
void arm_teq_decode_fields (
	uint32_t *address,
	unsigned int *immediate,
	unsigned int *rn,
	unsigned int *operand2);
void arm_tst_decode_fields (
	uint32_t *address,
	unsigned int *immediate,
	unsigned int *rn,
	unsigned int *operand2);
void arm_uadd16_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_uadd8_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_uasx_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_ubfx_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *lsb,
	unsigned int *widthm1);
void arm_udf_decode_fields (
	uint32_t *address,
	unsigned int *imm12,
	unsigned int *imm4);
void arm_udiv_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_uhadd16_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_uhadd8_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_uhasx_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_uhsax_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_uhsub16_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_uhsub8_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_umaal_decode_fields (
	uint32_t *address,
	unsigned int *rd_hi,
	unsigned int *rd_lo,
	unsigned int *rn,
	unsigned int *rm);
void arm_umlal_decode_fields (
	uint32_t *address,
	unsigned int *set_condition,
	unsigned int *rdhi,
	unsigned int *rdlo,
	unsigned int *rm,
	unsigned int *rn);
void arm_umull_decode_fields (
	uint32_t *address,
	unsigned int *set_condition,
	unsigned int *rdhi,
	unsigned int *rdlo,
	unsigned int *rm,
	unsigned int *rn);
void arm_uqadd16_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_uqadd8_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_uqasx_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_uqsax_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_uqsub16_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_uqsub8_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_usad8_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_usada8_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm,
	unsigned int *ra);
void arm_usat_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *sat_imm,
	unsigned int *rn,
	unsigned int *sh,
	unsigned int *imm5);
void arm_usat16_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *sat_imm,
	unsigned int *rn);
void arm_usax_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_usub16_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_usub8_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_uxtab_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm,
	unsigned int *rotate);
void arm_uxtab16_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm,
	unsigned int *rotate);
void arm_uxtah_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm,
	unsigned int *rotate);
void arm_uxtb_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rm,
	unsigned int *rotate);
void arm_uxtb16_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rm,
	unsigned int *rotate);
void arm_uxth_decode_fields (
	uint32_t *address,
	unsigned int *rd,
	unsigned int *rm,
	unsigned int *rotate);
void arm_neon_vaba_decode_fields (
	uint32_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vabal_decode_fields (
	uint32_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vabd_i_decode_fields (
	uint32_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vabd_f_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vabdl_decode_fields (
	uint32_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vabs_decode_fields (
	uint32_t *address,
	unsigned int *float_p,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void arm_vfp_vabs_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vacge_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vacgt_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vadd_i_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vadd_f_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_vfp_vadd_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vaddhn_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vaddl_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *unsign,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vaddw_decode_fields (
	uint32_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vand_decode_fields (
	uint32_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vbici_decode_fields (
	uint32_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *cmode,
	unsigned int *i,
	unsigned int *imm3,
	unsigned int *imm4);
void arm_neon_vbic_decode_fields (
	uint32_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vbif_decode_fields (
	uint32_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vbit_decode_fields (
	uint32_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vbsl_decode_fields (
	uint32_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vceq_i_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vceq_f_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vceqz_decode_fields (
	uint32_t *address,
	unsigned int *float_p,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vcge_i_decode_fields (
	uint32_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vcge_f_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vcgez_decode_fields (
	uint32_t *address,
	unsigned int *float_p,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vcgt_i_decode_fields (
	uint32_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vcgt_f_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vcgtz_decode_fields (
	uint32_t *address,
	unsigned int *float_p,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vclez_decode_fields (
	uint32_t *address,
	unsigned int *float_p,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vcls_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vcltz_decode_fields (
	uint32_t *address,
	unsigned int *float_p,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vclz_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void arm_vfp_vcmp_decode_fields (
	uint32_t *address,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *sz,
	unsigned int *m,
	unsigned int *vm);
void arm_vfp_vcmpz_decode_fields (
	uint32_t *address,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *sz);
void arm_vfp_vcmpe_decode_fields (
	uint32_t *address,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *sz,
	unsigned int *m,
	unsigned int *vm);
void arm_vfp_vcmpez_decode_fields (
	uint32_t *address,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *sz);
void arm_neon_vcnt_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vcvt_f_i_decode_fields (
	uint32_t *address,
	unsigned int *op,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vcvt_f_fp_decode_fields (
	uint32_t *address,
	unsigned int *op,
	unsigned int *unsign,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *imm6);
void arm_neon_vcvt_hp_sp_decode_fields (
	uint32_t *address,
	unsigned int *op,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void arm_vfp_vcvt_f_i_decode_fields (
	uint32_t *address,
	unsigned int *op,
	unsigned int *opcode2,
	unsigned int *sz,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void arm_vfp_vcvt_f_fp_decode_fields (
	uint32_t *address,
	unsigned int *op,
	unsigned int *unsign,
	unsigned int *sf,
	unsigned int *sx,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *imm4,
	unsigned int *i);
void arm_vfp_vcvt_dp_sp_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void arm_vfp_vcvtb_decode_fields (
	uint32_t *address,
	unsigned int *op,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void arm_vfp_vcvtt_decode_fields (
	uint32_t *address,
	unsigned int *op,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void arm_vfp_vdiv_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vdup_scal_decode_fields (
	uint32_t *address,
	unsigned int *imm4,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vdup_core_decode_fields (
	uint32_t *address,
	unsigned int *b,
	unsigned int *e,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *rt);
void arm_neon_veor_decode_fields (
	uint32_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vext_decode_fields (
	uint32_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *imm4);
void arm_neon_vfma_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vfms_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_vfp_vfma_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_vfp_vfms_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_vfp_vfnma_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_vfp_vfnms_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vhadd_decode_fields (
	uint32_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vhsub_decode_fields (
	uint32_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vldx_m_decode_fields (
	uint32_t *address,
	unsigned int *opcode,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *rn,
	unsigned int *align,
	unsigned int *rm);
void arm_neon_vldx_s_o_decode_fields (
	uint32_t *address,
	unsigned int *opcode,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *rn,
	unsigned int *index_align,
	unsigned int *rm);
void arm_neon_vldx_s_a_decode_fields (
	uint32_t *address,
	unsigned int *opcode,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *inc,
	unsigned int *rn,
	unsigned int *align,
	unsigned int *rm);
void arm_vfp_vldm_dp_decode_fields (
	uint32_t *address,
	unsigned int *p,
	unsigned int *upwards,
	unsigned int *d,
	unsigned int *writeback,
	unsigned int *rn,
	unsigned int *vd,
	unsigned int *imm8);
void arm_vfp_vldm_sp_decode_fields (
	uint32_t *address,
	unsigned int *p,
	unsigned int *upwards,
	unsigned int *d,
	unsigned int *writeback,
	unsigned int *rn,
	unsigned int *vd,
	unsigned int *imm8);
void arm_vfp_vldr_dp_decode_fields (
	uint32_t *address,
	unsigned int *upwards,
	unsigned int *d,
	unsigned int *rn,
	unsigned int *vd,
	unsigned int *imm8);
void arm_vfp_vldr_sp_decode_fields (
	uint32_t *address,
	unsigned int *upwards,
	unsigned int *d,
	unsigned int *rn,
	unsigned int *vd,
	unsigned int *imm8);
void arm_neon_vmax_i_decode_fields (
	uint32_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vmin_i_decode_fields (
	uint32_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vmax_f_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vmin_f_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vmla_i_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vmls_i_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vmlal_i_decode_fields (
	uint32_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vmlsl_i_decode_fields (
	uint32_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vmla_f_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vmls_f_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_vfp_vmla_f_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vn,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *m,
	unsigned int *vm);
void arm_vfp_vmls_f_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vn,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vmla_scal_decode_fields (
	uint32_t *address,
	unsigned int *float_p,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vmls_scal_decode_fields (
	uint32_t *address,
	unsigned int *float_p,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vmlal_scal_decode_fields (
	uint32_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vmlsl_scal_decode_fields (
	uint32_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vmovi_decode_fields (
	uint32_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *op,
	unsigned int *cmode,
	unsigned int *i,
	unsigned int *imm3,
	unsigned int *imm4);
void arm_vfp_vmovi_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *imm4h,
	unsigned int *imm4l);
void arm_vfp_vmov_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void arm_vfp_vmov_core_scal_decode_fields (
	uint32_t *address,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *opc1,
	unsigned int *opc2,
	unsigned int *rt);
void arm_vfp_vmov_scal_core_decode_fields (
	uint32_t *address,
	unsigned int *unsign,
	unsigned int *rt,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *opc1,
	unsigned int *opc2);
void arm_vfp_vmov_core_sp_decode_fields (
	uint32_t *address,
	unsigned int *op,
	unsigned int *rt,
	unsigned int *n,
	unsigned int *vn);
void arm_vfp_vmov_2core_2sp_decode_fields (
	uint32_t *address,
	unsigned int *op,
	unsigned int *rt,
	unsigned int *rt2,
	unsigned int *m,
	unsigned int *vm);
void arm_vfp_vmov_2core_dp_decode_fields (
	uint32_t *address,
	unsigned int *op,
	unsigned int *rt,
	unsigned int *rt2,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vmovl_decode_fields (
	uint32_t *address,
	unsigned int *unsign,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *imm3);
void arm_neon_vmovn_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void arm_vfp_vmrs_decode_fields (
	uint32_t *address,
	unsigned int *rt);
void arm_vfp_vmsr_decode_fields (
	uint32_t *address,
	unsigned int *rt);
void arm_neon_vmul_i_decode_fields (
	uint32_t *address,
	unsigned int *opcode,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vmull_i_decode_fields (
	uint32_t *address,
	unsigned int *opcode,
	unsigned int *opcode4,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vmul_f_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_vfp_vmul_f_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vn,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vmul_scal_decode_fields (
	uint32_t *address,
	unsigned int *opcode,
	unsigned int *opcode5,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vmull_scal_decode_fields (
	uint32_t *address,
	unsigned int *opcode,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vmvni_decode_fields (
	uint32_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *cmode,
	unsigned int *i,
	unsigned int *imm3,
	unsigned int *imm4);
void arm_neon_vmvn_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vneg_decode_fields (
	uint32_t *address,
	unsigned int *float_p,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void arm_vfp_vneg_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void arm_vfp_vnmla_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_vfp_vnmls_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_vfp_vnmul_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vorn_decode_fields (
	uint32_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vorri_decode_fields (
	uint32_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *cmode,
	unsigned int *i,
	unsigned int *imm3,
	unsigned int *imm4);
void arm_neon_vorr_decode_fields (
	uint32_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vpadal_decode_fields (
	uint32_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vpadd_i_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vpadd_f_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vpaddl_decode_fields (
	uint32_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vpmax_i_decode_fields (
	uint32_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vpmin_i_decode_fields (
	uint32_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vpmax_f_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vpmin_f_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_vfp_vpop_dp_decode_fields (
	uint32_t *address,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *imm8);
void arm_vfp_vpop_sp_decode_fields (
	uint32_t *address,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *imm8);
void arm_vfp_vpush_dp_decode_fields (
	uint32_t *address,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *imm8);
void arm_vfp_vpush_sp_decode_fields (
	uint32_t *address,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *imm8);
void arm_neon_vqabs_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vqadd_decode_fields (
	uint32_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vqdmlal_i_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vqdmlsl_i_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vqdmlal_scal_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vqdmlsl_scal_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vqdmulh_i_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vqdmulh_scal_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vqdmull_i_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vqdmull_scal_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vqmovn_decode_fields (
	uint32_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vqmovun_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vqneg_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vqrdmulh_i_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vqrdmulh_scal_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vqrshl_decode_fields (
	uint32_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vqrshrn_decode_fields (
	uint32_t *address,
	unsigned int *unsign,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *imm6);
void arm_neon_vqrshrun_decode_fields (
	uint32_t *address,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *imm6);
void arm_neon_vqshl_decode_fields (
	uint32_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *n,
	unsigned int *vn);
void arm_neon_vqshli_decode_fields (
	uint32_t *address,
	unsigned int *unsign,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *l,
	unsigned int *imm6);
void arm_neon_vqshlui_decode_fields (
	uint32_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *l,
	unsigned int *imm6);
void arm_neon_vqshrn_decode_fields (
	uint32_t *address,
	unsigned int *unsign,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *imm6);
void arm_neon_vqshrun_decode_fields (
	uint32_t *address,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *imm6);
void arm_neon_vqsub_decode_fields (
	uint32_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vraddhn_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vrecpe_decode_fields (
	uint32_t *address,
	unsigned int *float_p,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vrecps_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vrev16_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vrev32_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vrev64_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vrhadd_decode_fields (
	uint32_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vrshl_decode_fields (
	uint32_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vrshr_decode_fields (
	uint32_t *address,
	unsigned int *unsign,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *l,
	unsigned int *imm6);
void arm_neon_vrshrn_decode_fields (
	uint32_t *address,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *imm6);
void arm_neon_vrsqrte_decode_fields (
	uint32_t *address,
	unsigned int *floating_point,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vrsqrts_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vrsra_decode_fields (
	uint32_t *address,
	unsigned int *unsign,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *l,
	unsigned int *imm6);
void arm_neon_vrsubhn_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vshl_decode_fields (
	uint32_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vshli_decode_fields (
	uint32_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *l,
	unsigned int *imm6);
void arm_neon_vshll_decode_fields (
	uint32_t *address,
	unsigned int *unsign,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *imm6);
void arm_neon_vshll2_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vshr_decode_fields (
	uint32_t *address,
	unsigned int *unsign,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *l,
	unsigned int *imm6);
void arm_neon_vshrn_decode_fields (
	uint32_t *address,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *imm6);
void arm_neon_vsli_decode_fields (
	uint32_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *l,
	unsigned int *imm6);
void arm_vfp_vsqrt_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vsra_decode_fields (
	uint32_t *address,
	unsigned int *unsign,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *l,
	unsigned int *imm6);
void arm_neon_vsri_decode_fields (
	uint32_t *address,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *l,
	unsigned int *imm6);
void arm_neon_vstx_m_decode_fields (
	uint32_t *address,
	unsigned int *opcode,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *rn,
	unsigned int *align,
	unsigned int *rm);
void arm_neon_vstx_s_o_decode_fields (
	uint32_t *address,
	unsigned int *opcode,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *rn,
	unsigned int *index_align,
	unsigned int *rm);
void arm_vfp_vstm_dp_decode_fields (
	uint32_t *address,
	unsigned int *p,
	unsigned int *upwards,
	unsigned int *d,
	unsigned int *writeback,
	unsigned int *rn,
	unsigned int *vd,
	unsigned int *imm8);
void arm_vfp_vstm_sp_decode_fields (
	uint32_t *address,
	unsigned int *p,
	unsigned int *upwards,
	unsigned int *d,
	unsigned int *writeback,
	unsigned int *rn,
	unsigned int *vd,
	unsigned int *imm8);
void arm_vfp_vstr_dp_decode_fields (
	uint32_t *address,
	unsigned int *upwards,
	unsigned int *d,
	unsigned int *rn,
	unsigned int *vd,
	unsigned int *imm8);
void arm_vfp_vstr_sp_decode_fields (
	uint32_t *address,
	unsigned int *upwards,
	unsigned int *d,
	unsigned int *rn,
	unsigned int *vd,
	unsigned int *imm8);
void arm_neon_vsub_i_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vsub_f_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_vfp_vsub_f_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vsubhn_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vsubl_decode_fields (
	uint32_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vsubw_decode_fields (
	uint32_t *address,
	unsigned int *unsign,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vswp_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vtbl_decode_fields (
	uint32_t *address,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *len,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vtbx_decode_fields (
	uint32_t *address,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *len,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vtrn_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vtst_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vuzp_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void arm_neon_vzip_decode_fields (
	uint32_t *address,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *m,
	unsigned int *vm);
void arm_br_decode_fields (
	uint32_t *address,
	unsigned int *link,
	unsigned int *offset_branch);
void arm_bx_t_decode_fields (
	uint32_t *address,
	unsigned int *link,
	unsigned int *rn);
void arm_blxi_t_decode_fields (
	uint32_t *address,
	unsigned int *h,
	unsigned int *imm24);
void arm_data_proc_decode_fields (
	uint32_t *address,
	unsigned int *immediate,
	unsigned int *opcode,
	unsigned int *set_condition,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *operand2);
void arm_multiply_decode_fields (
	uint32_t *address,
	unsigned int *accumulate,
	unsigned int *set_condition,
	unsigned int *rd,
	unsigned int *rm,
	unsigned int *rs,
	unsigned int *rn);
void arm_s_data_transfer_decode_fields (
	uint32_t *address,
	unsigned int *loadstore,
	unsigned int *immediate,
	unsigned int *byteword,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *offset,
	unsigned int *prepostindex,
	unsigned int *updown,
	unsigned int *writeback);
void arm_h_data_transfer_decode_fields (
	uint32_t *address,
	unsigned int *opcode,
	unsigned int *size,
	unsigned int *opcode2,
	unsigned int *immediate,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm,
	unsigned int *imm4h,
	unsigned int *prepostindex,
	unsigned int *updown,
	unsigned int *writeback);
void arm_b_data_transfer_decode_fields (
	uint32_t *address,
	unsigned int *loadstore,
	unsigned int *rn,
	unsigned int *registers,
	unsigned int *prepostindex,
	unsigned int *updown,
	unsigned int *writeback,
	unsigned int *psr);
void arm_svc_t_decode_fields (
	uint32_t *address,
	unsigned int *comment);
void arm_mem_hints_pli_decode_fields (
	uint32_t *address,
	unsigned int *opcode1,
	unsigned int *updown,
	unsigned int *opcode2,
	unsigned int *rn,
	unsigned int *imm5,
	unsigned int *type,
	unsigned int *rm);
void arm_mem_hints_pld_decode_fields (
	uint32_t *address,
	unsigned int *opcode1,
	unsigned int *updown,
	unsigned int *read_only,
	unsigned int *opcode2,
	unsigned int *rn,
	unsigned int *imm12);
void arm_vfp_ldm_stm_decode_fields (
	uint32_t *address,
	unsigned int *p,
	unsigned int *upwards,
	unsigned int *d,
	unsigned int *writeback,
	unsigned int *load_store,
	unsigned int *rn,
	unsigned int *vd,
	unsigned int *opcode,
	unsigned int *imm8);
void arm_coproc_trans_decode_fields (
	uint32_t *address,
	unsigned int *opc1,
	unsigned int *load_store,
	unsigned int *crn,
	unsigned int *rd,
	unsigned int *coproc,
	unsigned int *opc2,
	unsigned int *crm);
void arm_coproc_dp_decode_fields (
	uint32_t *address,
	unsigned int *opc1,
	unsigned int *crn,
	unsigned int *crd,
	unsigned int *coproc,
	unsigned int *opc2,
	unsigned int *crm);
void arm_dsp_long_res_decode_fields (
	uint32_t *address,
	unsigned int *opcode,
	unsigned int *set_condition,
	unsigned int *rdhi,
	unsigned int *rdlo,
	unsigned int *rm,
	unsigned int *opcode2,
	unsigned int *setting,
	unsigned int *rn);
void arm_vops_decode_fields (
	uint32_t *address,
	unsigned int *opcode,
	unsigned int *opcode2,
	unsigned int *opcode3,
	unsigned int *opcode4,
	unsigned int *opcode5,
	unsigned int *opcode6,
	unsigned int *size,
	unsigned int *q,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *n,
	unsigned int *vn,
	unsigned int *m,
	unsigned int *vm);
void arm_v_trans_mult_decode_fields (
	uint32_t *address,
	unsigned int *opcode,
	unsigned int *opcode2,
	unsigned int *opcode3,
	unsigned int *opcode4,
	unsigned int *params,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *rn,
	unsigned int *rm);
void arm_v_ops_2reg_decode_fields (
	uint32_t *address,
	unsigned int *opcode,
	unsigned int *opcode2,
	unsigned int *opcode3,
	unsigned int *opcode4,
	unsigned int *opcode5,
	unsigned int *size,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *q,
	unsigned int *m,
	unsigned int *vm);
void arm_v_ops_imm6_decode_fields (
	uint32_t *address,
	unsigned int *opcode,
	unsigned int *u,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *q,
	unsigned int *m,
	unsigned int *vm,
	unsigned int *l,
	unsigned int *imm6,
	unsigned int *f3);
void arm_v_ops_1reg_mod_imm_decode_fields (
	uint32_t *address,
	unsigned int *opcode,
	unsigned int *opcode2,
	unsigned int *opcode3,
	unsigned int *cmode,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *q,
	unsigned int *i,
	unsigned int *imm3,
	unsigned int *imm4,
	unsigned int *op);
void arm_vfp_data_proc_decode_fields (
	uint32_t *address,
	unsigned int *d,
	unsigned int *opc2,
	unsigned int *vd,
	unsigned int *sz,
	unsigned int *op,
	unsigned int *m,
	unsigned int *vm);
void arm_cpsr_trans_reg_decode_fields (
	uint32_t *address,
	unsigned int *opcode,
	unsigned int *mask,
	unsigned int *f2,
	unsigned int *rd,
	unsigned int *rn);
void arm_cpsr_trans_imm_decode_fields (
	uint32_t *address,
	unsigned int *mask,
	unsigned int *imm12);
void arm_divide_decode_fields (
	uint32_t *address,
	unsigned int *opcode,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm);
void arm_sync_decode_fields (
	uint32_t *address,
	unsigned int *opcode,
	unsigned int *option);
void arm_extend_decode_fields (
	uint32_t *address,
	unsigned int *opcode,
	unsigned int *rd,
	unsigned int *rn,
	unsigned int *rm,
	unsigned int *rotate);
void arm_vfp_3reg_decode_fields (
	uint32_t *address,
	unsigned int *opcode,
	unsigned int *d,
	unsigned int *opcode2,
	unsigned int *vn,
	unsigned int *vd,
	unsigned int *opcode3,
	unsigned int *sz,
	unsigned int *n,
	unsigned int *m,
	unsigned int *vm);
void arm_trans_arm_vfp_decode_fields (
	uint32_t *address,
	unsigned int *op,
	unsigned int *vn,
	unsigned int *rd,
	unsigned int *opcode,
	unsigned int *n,
	unsigned int *f3,
	unsigned int *m,
	unsigned int *f5);
void arm_vfp_imm8_1reg_decode_fields (
	uint32_t *address,
	unsigned int *opcode,
	unsigned int *d,
	unsigned int *vd,
	unsigned int *imm4h,
	unsigned int *imm4l);
void arm_vfp_trans_2arm_reg_decode_fields (
	uint32_t *address,
	unsigned int *opcode,
	unsigned int *op,
	unsigned int *rt2,
	unsigned int *rt,
	unsigned int *m,
	unsigned int *vm);
#endif
