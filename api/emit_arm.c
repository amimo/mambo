#ifdef PLUGINS_NEW
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
)
{
	arm_adc_cond((uint32_t **)(&ctx->code.write_p), auto_cond, immediate, set_condition, rd, rn, operand2);
	ctx->code.write_p += 4;
}
void emit_arm_adc (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
)
{
	arm_adc((uint32_t **)(&ctx->code.write_p), immediate, set_condition, rd, rn, operand2);
	ctx->code.write_p += 4;
}
void emit_arm_add_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
)
{
	arm_add_cond((uint32_t **)(&ctx->code.write_p), auto_cond, immediate, set_condition, rd, rn, operand2);
	ctx->code.write_p += 4;
}
void emit_arm_add (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
)
{
	arm_add((uint32_t **)(&ctx->code.write_p), immediate, set_condition, rd, rn, operand2);
	ctx->code.write_p += 4;
}
void emit_arm_and_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
)
{
	arm_and_cond((uint32_t **)(&ctx->code.write_p), auto_cond, immediate, set_condition, rd, rn, operand2);
	ctx->code.write_p += 4;
}
void emit_arm_and (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
)
{
	arm_and((uint32_t **)(&ctx->code.write_p), immediate, set_condition, rd, rn, operand2);
	ctx->code.write_p += 4;
}
void emit_arm_b_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int offset_branch
)
{
	arm_b_cond((uint32_t **)(&ctx->code.write_p), auto_cond, offset_branch);
	ctx->code.write_p += 4;
}
void emit_arm_b (
	mambo_context *ctx,
	unsigned int offset_branch
)
{
	arm_b((uint32_t **)(&ctx->code.write_p), offset_branch);
	ctx->code.write_p += 4;
}
void emit_arm_bfc_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rt,
	unsigned int lsb,
	unsigned int msb
)
{
	arm_bfc_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rt, lsb, msb);
	ctx->code.write_p += 4;
}
void emit_arm_bfc (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int lsb,
	unsigned int msb
)
{
	arm_bfc((uint32_t **)(&ctx->code.write_p), rt, lsb, msb);
	ctx->code.write_p += 4;
}
void emit_arm_bfi_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rt,
	unsigned int rn,
	unsigned int lsb,
	unsigned int msb
)
{
	arm_bfi_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rt, rn, lsb, msb);
	ctx->code.write_p += 4;
}
void emit_arm_bfi (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int lsb,
	unsigned int msb
)
{
	arm_bfi((uint32_t **)(&ctx->code.write_p), rt, rn, lsb, msb);
	ctx->code.write_p += 4;
}
void emit_arm_bic_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
)
{
	arm_bic_cond((uint32_t **)(&ctx->code.write_p), auto_cond, immediate, set_condition, rd, rn, operand2);
	ctx->code.write_p += 4;
}
void emit_arm_bic (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
)
{
	arm_bic((uint32_t **)(&ctx->code.write_p), immediate, set_condition, rd, rn, operand2);
	ctx->code.write_p += 4;
}
void emit_arm_bkpt_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int imm12,
	unsigned int imm4
)
{
	arm_bkpt_cond((uint32_t **)(&ctx->code.write_p), auto_cond, imm12, imm4);
	ctx->code.write_p += 4;
}
void emit_arm_bkpt (
	mambo_context *ctx,
	unsigned int imm12,
	unsigned int imm4
)
{
	arm_bkpt((uint32_t **)(&ctx->code.write_p), imm12, imm4);
	ctx->code.write_p += 4;
}
void emit_arm_bl_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int offset_branch
)
{
	arm_bl_cond((uint32_t **)(&ctx->code.write_p), auto_cond, offset_branch);
	ctx->code.write_p += 4;
}
void emit_arm_bl (
	mambo_context *ctx,
	unsigned int offset_branch
)
{
	arm_bl((uint32_t **)(&ctx->code.write_p), offset_branch);
	ctx->code.write_p += 4;
}
void emit_arm_blx_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rn
)
{
	arm_blx_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rn);
	ctx->code.write_p += 4;
}
void emit_arm_blx (
	mambo_context *ctx,
	unsigned int rn
)
{
	arm_blx((uint32_t **)(&ctx->code.write_p), rn);
	ctx->code.write_p += 4;
}
void emit_arm_blxi (
	mambo_context *ctx,
	unsigned int h,
	unsigned int imm24
)
{
	arm_blxi((uint32_t **)(&ctx->code.write_p), h, imm24);
	ctx->code.write_p += 4;
}
void emit_arm_bx_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rn
)
{
	arm_bx_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rn);
	ctx->code.write_p += 4;
}
void emit_arm_bx (
	mambo_context *ctx,
	unsigned int rn
)
{
	arm_bx((uint32_t **)(&ctx->code.write_p), rn);
	ctx->code.write_p += 4;
}
void emit_arm_cdp_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int opc1,
	unsigned int crn,
	unsigned int crd,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
)
{
	arm_cdp_cond((uint32_t **)(&ctx->code.write_p), auto_cond, opc1, crn, crd, coproc, opc2, crm);
	ctx->code.write_p += 4;
}
void emit_arm_cdp (
	mambo_context *ctx,
	unsigned int opc1,
	unsigned int crn,
	unsigned int crd,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
)
{
	arm_cdp((uint32_t **)(&ctx->code.write_p), opc1, crn, crd, coproc, opc2, crm);
	ctx->code.write_p += 4;
}
void emit_arm_cdp2 (
	mambo_context *ctx,
	unsigned int opc1,
	unsigned int crn,
	unsigned int crd,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
)
{
	arm_cdp2((uint32_t **)(&ctx->code.write_p), opc1, crn, crd, coproc, opc2, crm);
	ctx->code.write_p += 4;
}
void emit_arm_clrex (
	mambo_context *ctx
)
{
	arm_clrex((uint32_t **)(&ctx->code.write_p));
	ctx->code.write_p += 4;
}
void emit_arm_clz_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm
)
{
	arm_clz_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rm);
	ctx->code.write_p += 4;
}
void emit_arm_clz (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rm
)
{
	arm_clz((uint32_t **)(&ctx->code.write_p), rd, rm);
	ctx->code.write_p += 4;
}
void emit_arm_cmn_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rn,
	unsigned int operand2
)
{
	arm_cmn_cond((uint32_t **)(&ctx->code.write_p), auto_cond, immediate, rn, operand2);
	ctx->code.write_p += 4;
}
void emit_arm_cmn (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int rn,
	unsigned int operand2
)
{
	arm_cmn((uint32_t **)(&ctx->code.write_p), immediate, rn, operand2);
	ctx->code.write_p += 4;
}
void emit_arm_cmp_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rn,
	unsigned int operand2
)
{
	arm_cmp_cond((uint32_t **)(&ctx->code.write_p), auto_cond, immediate, rn, operand2);
	ctx->code.write_p += 4;
}
void emit_arm_cmp (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int rn,
	unsigned int operand2
)
{
	arm_cmp((uint32_t **)(&ctx->code.write_p), immediate, rn, operand2);
	ctx->code.write_p += 4;
}
void emit_arm_dbg_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int option
)
{
	arm_dbg_cond((uint32_t **)(&ctx->code.write_p), auto_cond, option);
	ctx->code.write_p += 4;
}
void emit_arm_dbg (
	mambo_context *ctx,
	unsigned int option
)
{
	arm_dbg((uint32_t **)(&ctx->code.write_p), option);
	ctx->code.write_p += 4;
}
void emit_arm_dmb (
	mambo_context *ctx,
	unsigned int option
)
{
	arm_dmb((uint32_t **)(&ctx->code.write_p), option);
	ctx->code.write_p += 4;
}
void emit_arm_dsb (
	mambo_context *ctx,
	unsigned int option
)
{
	arm_dsb((uint32_t **)(&ctx->code.write_p), option);
	ctx->code.write_p += 4;
}
void emit_arm_eor_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
)
{
	arm_eor_cond((uint32_t **)(&ctx->code.write_p), auto_cond, immediate, set_condition, rd, rn, operand2);
	ctx->code.write_p += 4;
}
void emit_arm_eor (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
)
{
	arm_eor((uint32_t **)(&ctx->code.write_p), immediate, set_condition, rd, rn, operand2);
	ctx->code.write_p += 4;
}
void emit_arm_isb (
	mambo_context *ctx,
	unsigned int option
)
{
	arm_isb((uint32_t **)(&ctx->code.write_p), option);
	ctx->code.write_p += 4;
}
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
)
{
	arm_ldc_cond((uint32_t **)(&ctx->code.write_p), auto_cond, p, u, coproc, w, rn, crd, imm8);
	ctx->code.write_p += 4;
}
void emit_arm_ldc (
	mambo_context *ctx,
	unsigned int p,
	unsigned int u,
	unsigned int coproc,
	unsigned int w,
	unsigned int rn,
	unsigned int crd,
	unsigned int imm8
)
{
	arm_ldc((uint32_t **)(&ctx->code.write_p), p, u, coproc, w, rn, crd, imm8);
	ctx->code.write_p += 4;
}
void emit_arm_ldm_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
)
{
	arm_ldm_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rn, registers, prepostindex, updown, writeback, psr);
	ctx->code.write_p += 4;
}
void emit_arm_ldm (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
)
{
	arm_ldm((uint32_t **)(&ctx->code.write_p), rn, registers, prepostindex, updown, writeback, psr);
	ctx->code.write_p += 4;
}
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
)
{
	arm_ldr_cond((uint32_t **)(&ctx->code.write_p), auto_cond, immediate, rd, rn, offset, prepostindex, updown, writeback);
	ctx->code.write_p += 4;
}
void emit_arm_ldr (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
)
{
	arm_ldr((uint32_t **)(&ctx->code.write_p), immediate, rd, rn, offset, prepostindex, updown, writeback);
	ctx->code.write_p += 4;
}
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
)
{
	arm_ldrb_cond((uint32_t **)(&ctx->code.write_p), auto_cond, immediate, rd, rn, offset, prepostindex, updown, writeback);
	ctx->code.write_p += 4;
}
void emit_arm_ldrb (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
)
{
	arm_ldrb((uint32_t **)(&ctx->code.write_p), immediate, rd, rn, offset, prepostindex, updown, writeback);
	ctx->code.write_p += 4;
}
void emit_arm_ldrbt_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int updown,
	unsigned int operand2
)
{
	arm_ldrbt_cond((uint32_t **)(&ctx->code.write_p), auto_cond, immediate, rd, rn, updown, operand2);
	ctx->code.write_p += 4;
}
void emit_arm_ldrbt (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int updown,
	unsigned int operand2
)
{
	arm_ldrbt((uint32_t **)(&ctx->code.write_p), immediate, rd, rn, updown, operand2);
	ctx->code.write_p += 4;
}
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
)
{
	arm_ldrd_cond((uint32_t **)(&ctx->code.write_p), auto_cond, immediate, rd, rn, rm_imm4l, imm4h, prepostindex, updown, writeback);
	ctx->code.write_p += 4;
}
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
)
{
	arm_ldrd((uint32_t **)(&ctx->code.write_p), immediate, rd, rn, rm_imm4l, imm4h, prepostindex, updown, writeback);
	ctx->code.write_p += 4;
}
void emit_arm_ldrex_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn
)
{
	arm_ldrex_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn);
	ctx->code.write_p += 4;
}
void emit_arm_ldrex (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn
)
{
	arm_ldrex((uint32_t **)(&ctx->code.write_p), rd, rn);
	ctx->code.write_p += 4;
}
void emit_arm_ldrexb_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn
)
{
	arm_ldrexb_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn);
	ctx->code.write_p += 4;
}
void emit_arm_ldrexb (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn
)
{
	arm_ldrexb((uint32_t **)(&ctx->code.write_p), rd, rn);
	ctx->code.write_p += 4;
}
void emit_arm_ldrexd_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn
)
{
	arm_ldrexd_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn);
	ctx->code.write_p += 4;
}
void emit_arm_ldrexd (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn
)
{
	arm_ldrexd((uint32_t **)(&ctx->code.write_p), rd, rn);
	ctx->code.write_p += 4;
}
void emit_arm_ldrexh_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn
)
{
	arm_ldrexh_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn);
	ctx->code.write_p += 4;
}
void emit_arm_ldrexh (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn
)
{
	arm_ldrexh((uint32_t **)(&ctx->code.write_p), rd, rn);
	ctx->code.write_p += 4;
}
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
)
{
	arm_ldrh_cond((uint32_t **)(&ctx->code.write_p), auto_cond, immediate, rd, rn, rm_imm4l, imm4h, prepostindex, updown, writeback);
	ctx->code.write_p += 4;
}
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
)
{
	arm_ldrh((uint32_t **)(&ctx->code.write_p), immediate, rd, rn, rm_imm4l, imm4h, prepostindex, updown, writeback);
	ctx->code.write_p += 4;
}
void emit_arm_ldrht_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm_imm4l,
	unsigned int imm4h,
	unsigned int updown
)
{
	arm_ldrht_cond((uint32_t **)(&ctx->code.write_p), auto_cond, immediate, rd, rn, rm_imm4l, imm4h, updown);
	ctx->code.write_p += 4;
}
void emit_arm_ldrht (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm_imm4l,
	unsigned int imm4h,
	unsigned int updown
)
{
	arm_ldrht((uint32_t **)(&ctx->code.write_p), immediate, rd, rn, rm_imm4l, imm4h, updown);
	ctx->code.write_p += 4;
}
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
)
{
	arm_ldrsb_cond((uint32_t **)(&ctx->code.write_p), auto_cond, immediate, rd, rn, rm_imm4l, imm4h, index, updown, writeback);
	ctx->code.write_p += 4;
}
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
)
{
	arm_ldrsb((uint32_t **)(&ctx->code.write_p), immediate, rd, rn, rm_imm4l, imm4h, index, updown, writeback);
	ctx->code.write_p += 4;
}
void emit_arm_ldrsbt_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int imm4h,
	unsigned int updown
)
{
	arm_ldrsbt_cond((uint32_t **)(&ctx->code.write_p), auto_cond, immediate, rd, rn, rm, imm4h, updown);
	ctx->code.write_p += 4;
}
void emit_arm_ldrsbt (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int imm4h,
	unsigned int updown
)
{
	arm_ldrsbt((uint32_t **)(&ctx->code.write_p), immediate, rd, rn, rm, imm4h, updown);
	ctx->code.write_p += 4;
}
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
)
{
	arm_ldrsh_cond((uint32_t **)(&ctx->code.write_p), auto_cond, immediate, rd, rn, rm_imm4l, imm4h, prepostindex, updown, writeback);
	ctx->code.write_p += 4;
}
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
)
{
	arm_ldrsh((uint32_t **)(&ctx->code.write_p), immediate, rd, rn, rm_imm4l, imm4h, prepostindex, updown, writeback);
	ctx->code.write_p += 4;
}
void emit_arm_ldrsht_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int imm4h,
	unsigned int updown
)
{
	arm_ldrsht_cond((uint32_t **)(&ctx->code.write_p), auto_cond, immediate, rd, rn, rm, imm4h, updown);
	ctx->code.write_p += 4;
}
void emit_arm_ldrsht (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int imm4h,
	unsigned int updown
)
{
	arm_ldrsht((uint32_t **)(&ctx->code.write_p), immediate, rd, rn, rm, imm4h, updown);
	ctx->code.write_p += 4;
}
void emit_arm_ldrt_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int updown,
	unsigned int operand2
)
{
	arm_ldrt_cond((uint32_t **)(&ctx->code.write_p), auto_cond, immediate, rd, rn, updown, operand2);
	ctx->code.write_p += 4;
}
void emit_arm_ldrt (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int updown,
	unsigned int operand2
)
{
	arm_ldrt((uint32_t **)(&ctx->code.write_p), immediate, rd, rn, updown, operand2);
	ctx->code.write_p += 4;
}
void emit_arm_mcr_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int opc1,
	unsigned int crn,
	unsigned int rd,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
)
{
	arm_mcr_cond((uint32_t **)(&ctx->code.write_p), auto_cond, opc1, crn, rd, coproc, opc2, crm);
	ctx->code.write_p += 4;
}
void emit_arm_mcr (
	mambo_context *ctx,
	unsigned int opc1,
	unsigned int crn,
	unsigned int rd,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
)
{
	arm_mcr((uint32_t **)(&ctx->code.write_p), opc1, crn, rd, coproc, opc2, crm);
	ctx->code.write_p += 4;
}
void emit_arm_mcrr_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int coproc,
	unsigned int opc1,
	unsigned int rt,
	unsigned int rt2,
	unsigned int crm
)
{
	arm_mcrr_cond((uint32_t **)(&ctx->code.write_p), auto_cond, coproc, opc1, rt, rt2, crm);
	ctx->code.write_p += 4;
}
void emit_arm_mcrr (
	mambo_context *ctx,
	unsigned int coproc,
	unsigned int opc1,
	unsigned int rt,
	unsigned int rt2,
	unsigned int crm
)
{
	arm_mcrr((uint32_t **)(&ctx->code.write_p), coproc, opc1, rt, rt2, crm);
	ctx->code.write_p += 4;
}
void emit_arm_mla_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs,
	unsigned int rn
)
{
	arm_mla_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rm, rs, rn);
	ctx->code.write_p += 4;
}
void emit_arm_mla (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs,
	unsigned int rn
)
{
	arm_mla((uint32_t **)(&ctx->code.write_p), rd, rm, rs, rn);
	ctx->code.write_p += 4;
}
void emit_arm_mls_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
)
{
	arm_mls_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm, ra);
	ctx->code.write_p += 4;
}
void emit_arm_mls (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
)
{
	arm_mls((uint32_t **)(&ctx->code.write_p), rd, rn, rm, ra);
	ctx->code.write_p += 4;
}
void emit_arm_mov_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int operand2
)
{
	arm_mov_cond((uint32_t **)(&ctx->code.write_p), auto_cond, immediate, set_condition, rd, operand2);
	ctx->code.write_p += 4;
}
void emit_arm_mov (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int operand2
)
{
	arm_mov((uint32_t **)(&ctx->code.write_p), immediate, set_condition, rd, operand2);
	ctx->code.write_p += 4;
}
void emit_arm_movt_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
)
{
	arm_movt_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, operand2);
	ctx->code.write_p += 4;
}
void emit_arm_movt (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
)
{
	arm_movt((uint32_t **)(&ctx->code.write_p), rd, rn, operand2);
	ctx->code.write_p += 4;
}
void emit_arm_movw_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
)
{
	arm_movw_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, operand2);
	ctx->code.write_p += 4;
}
void emit_arm_movw (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
)
{
	arm_movw((uint32_t **)(&ctx->code.write_p), rd, rn, operand2);
	ctx->code.write_p += 4;
}
void emit_arm_mrc_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int opc1,
	unsigned int crn,
	unsigned int rd,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
)
{
	arm_mrc_cond((uint32_t **)(&ctx->code.write_p), auto_cond, opc1, crn, rd, coproc, opc2, crm);
	ctx->code.write_p += 4;
}
void emit_arm_mrc (
	mambo_context *ctx,
	unsigned int opc1,
	unsigned int crn,
	unsigned int rd,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
)
{
	arm_mrc((uint32_t **)(&ctx->code.write_p), opc1, crn, rd, coproc, opc2, crm);
	ctx->code.write_p += 4;
}
void emit_arm_mrrc_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int coproc,
	unsigned int opc1,
	unsigned int rt,
	unsigned int rt2,
	unsigned int crm
)
{
	arm_mrrc_cond((uint32_t **)(&ctx->code.write_p), auto_cond, coproc, opc1, rt, rt2, crm);
	ctx->code.write_p += 4;
}
void emit_arm_mrrc (
	mambo_context *ctx,
	unsigned int coproc,
	unsigned int opc1,
	unsigned int rt,
	unsigned int rt2,
	unsigned int crm
)
{
	arm_mrrc((uint32_t **)(&ctx->code.write_p), coproc, opc1, rt, rt2, crm);
	ctx->code.write_p += 4;
}
void emit_arm_mrs_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd
)
{
	arm_mrs_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd);
	ctx->code.write_p += 4;
}
void emit_arm_mrs (
	mambo_context *ctx,
	unsigned int rd
)
{
	arm_mrs((uint32_t **)(&ctx->code.write_p), rd);
	ctx->code.write_p += 4;
}
void emit_arm_msr_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rn,
	unsigned int mask
)
{
	arm_msr_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rn, mask);
	ctx->code.write_p += 4;
}
void emit_arm_msr (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int mask
)
{
	arm_msr((uint32_t **)(&ctx->code.write_p), rn, mask);
	ctx->code.write_p += 4;
}
void emit_arm_msri_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int mask,
	unsigned int imm12
)
{
	arm_msri_cond((uint32_t **)(&ctx->code.write_p), auto_cond, mask, imm12);
	ctx->code.write_p += 4;
}
void emit_arm_msri (
	mambo_context *ctx,
	unsigned int mask,
	unsigned int imm12
)
{
	arm_msri((uint32_t **)(&ctx->code.write_p), mask, imm12);
	ctx->code.write_p += 4;
}
void emit_arm_mul_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs
)
{
	arm_mul_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rm, rs);
	ctx->code.write_p += 4;
}
void emit_arm_mul (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs
)
{
	arm_mul((uint32_t **)(&ctx->code.write_p), rd, rm, rs);
	ctx->code.write_p += 4;
}
void emit_arm_mvn_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int operand2
)
{
	arm_mvn_cond((uint32_t **)(&ctx->code.write_p), auto_cond, immediate, set_condition, rd, operand2);
	ctx->code.write_p += 4;
}
void emit_arm_mvn (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int operand2
)
{
	arm_mvn((uint32_t **)(&ctx->code.write_p), immediate, set_condition, rd, operand2);
	ctx->code.write_p += 4;
}
void emit_arm_nop_cond (
	mambo_context *ctx,
	unsigned int auto_cond
)
{
	arm_nop_cond((uint32_t **)(&ctx->code.write_p), auto_cond);
	ctx->code.write_p += 4;
}
void emit_arm_nop (
	mambo_context *ctx
)
{
	arm_nop((uint32_t **)(&ctx->code.write_p));
	ctx->code.write_p += 4;
}
void emit_arm_orr_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
)
{
	arm_orr_cond((uint32_t **)(&ctx->code.write_p), auto_cond, immediate, set_condition, rd, rn, operand2);
	ctx->code.write_p += 4;
}
void emit_arm_orr (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
)
{
	arm_orr((uint32_t **)(&ctx->code.write_p), immediate, set_condition, rd, rn, operand2);
	ctx->code.write_p += 4;
}
void emit_arm_pkh_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int tb,
	unsigned int imm5
)
{
	arm_pkh_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm, tb, imm5);
	ctx->code.write_p += 4;
}
void emit_arm_pkh (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int tb,
	unsigned int imm5
)
{
	arm_pkh((uint32_t **)(&ctx->code.write_p), rd, rn, rm, tb, imm5);
	ctx->code.write_p += 4;
}
void emit_arm_pld (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int updown,
	unsigned int is_read,
	unsigned int rn,
	unsigned int operand2
)
{
	arm_pld((uint32_t **)(&ctx->code.write_p), immediate, updown, is_read, rn, operand2);
	ctx->code.write_p += 4;
}
void emit_arm_pli (
	mambo_context *ctx,
	unsigned int updown,
	unsigned int rn,
	unsigned int imm5,
	unsigned int type,
	unsigned int rm
)
{
	arm_pli((uint32_t **)(&ctx->code.write_p), updown, rn, imm5, type, rm);
	ctx->code.write_p += 4;
}
void emit_arm_plii (
	mambo_context *ctx,
	unsigned int updown,
	unsigned int rn,
	unsigned int imm12
)
{
	arm_plii((uint32_t **)(&ctx->code.write_p), updown, rn, imm12);
	ctx->code.write_p += 4;
}
void emit_arm_qadd_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rn
)
{
	arm_qadd_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rm, rn);
	ctx->code.write_p += 4;
}
void emit_arm_qadd (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rm,
	unsigned int rn
)
{
	arm_qadd((uint32_t **)(&ctx->code.write_p), rd, rm, rn);
	ctx->code.write_p += 4;
}
void emit_arm_qadd16_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_qadd16_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_qadd16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_qadd16((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_qadd8_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_qadd8_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_qadd8 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_qadd8((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_qasx_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_qasx_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_qasx (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_qasx((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_qdadd_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rn
)
{
	arm_qdadd_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rm, rn);
	ctx->code.write_p += 4;
}
void emit_arm_qdadd (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rm,
	unsigned int rn
)
{
	arm_qdadd((uint32_t **)(&ctx->code.write_p), rd, rm, rn);
	ctx->code.write_p += 4;
}
void emit_arm_qdsub_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rn
)
{
	arm_qdsub_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rm, rn);
	ctx->code.write_p += 4;
}
void emit_arm_qdsub (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rm,
	unsigned int rn
)
{
	arm_qdsub((uint32_t **)(&ctx->code.write_p), rd, rm, rn);
	ctx->code.write_p += 4;
}
void emit_arm_qsax_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_qsax_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_qsax (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_qsax((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_qsub_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rn
)
{
	arm_qsub_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rm, rn);
	ctx->code.write_p += 4;
}
void emit_arm_qsub (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rm,
	unsigned int rn
)
{
	arm_qsub((uint32_t **)(&ctx->code.write_p), rd, rm, rn);
	ctx->code.write_p += 4;
}
void emit_arm_qsub16_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_qsub16_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_qsub16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_qsub16((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_qsub8_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_qsub8_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_qsub8 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_qsub8((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_rbit_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm
)
{
	arm_rbit_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rm);
	ctx->code.write_p += 4;
}
void emit_arm_rbit (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rm
)
{
	arm_rbit((uint32_t **)(&ctx->code.write_p), rd, rm);
	ctx->code.write_p += 4;
}
void emit_arm_rev_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm
)
{
	arm_rev_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rm);
	ctx->code.write_p += 4;
}
void emit_arm_rev (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rm
)
{
	arm_rev((uint32_t **)(&ctx->code.write_p), rd, rm);
	ctx->code.write_p += 4;
}
void emit_arm_rev16_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm
)
{
	arm_rev16_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rm);
	ctx->code.write_p += 4;
}
void emit_arm_rev16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rm
)
{
	arm_rev16((uint32_t **)(&ctx->code.write_p), rd, rm);
	ctx->code.write_p += 4;
}
void emit_arm_revsh_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm
)
{
	arm_revsh_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rm);
	ctx->code.write_p += 4;
}
void emit_arm_revsh (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rm
)
{
	arm_revsh((uint32_t **)(&ctx->code.write_p), rd, rm);
	ctx->code.write_p += 4;
}
void emit_arm_rrx_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rm
)
{
	arm_rrx_cond((uint32_t **)(&ctx->code.write_p), auto_cond, set_condition, rd, rm);
	ctx->code.write_p += 4;
}
void emit_arm_rrx (
	mambo_context *ctx,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rm
)
{
	arm_rrx((uint32_t **)(&ctx->code.write_p), set_condition, rd, rm);
	ctx->code.write_p += 4;
}
void emit_arm_rsb_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
)
{
	arm_rsb_cond((uint32_t **)(&ctx->code.write_p), auto_cond, immediate, set_condition, rd, rn, operand2);
	ctx->code.write_p += 4;
}
void emit_arm_rsb (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
)
{
	arm_rsb((uint32_t **)(&ctx->code.write_p), immediate, set_condition, rd, rn, operand2);
	ctx->code.write_p += 4;
}
void emit_arm_rsc_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
)
{
	arm_rsc_cond((uint32_t **)(&ctx->code.write_p), auto_cond, immediate, set_condition, rd, rn, operand2);
	ctx->code.write_p += 4;
}
void emit_arm_rsc (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
)
{
	arm_rsc((uint32_t **)(&ctx->code.write_p), immediate, set_condition, rd, rn, operand2);
	ctx->code.write_p += 4;
}
void emit_arm_sadd16_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_sadd16_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_sadd16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_sadd16((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_sadd8_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_sadd8_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_sadd8 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_sadd8((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_sasx_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_sasx_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_sasx (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_sasx((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_sbc_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
)
{
	arm_sbc_cond((uint32_t **)(&ctx->code.write_p), auto_cond, immediate, set_condition, rd, rn, operand2);
	ctx->code.write_p += 4;
}
void emit_arm_sbc (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
)
{
	arm_sbc((uint32_t **)(&ctx->code.write_p), immediate, set_condition, rd, rn, operand2);
	ctx->code.write_p += 4;
}
void emit_arm_sbfx_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int lsb,
	unsigned int widthm1
)
{
	arm_sbfx_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, lsb, widthm1);
	ctx->code.write_p += 4;
}
void emit_arm_sbfx (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int lsb,
	unsigned int widthm1
)
{
	arm_sbfx((uint32_t **)(&ctx->code.write_p), rd, rn, lsb, widthm1);
	ctx->code.write_p += 4;
}
void emit_arm_sdiv_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_sdiv_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_sdiv (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_sdiv((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_sel_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_sel_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_sel (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_sel((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_setend (
	mambo_context *ctx,
	unsigned int set_bigend
)
{
	arm_setend((uint32_t **)(&ctx->code.write_p), set_bigend);
	ctx->code.write_p += 4;
}
void emit_arm_sev_cond (
	mambo_context *ctx,
	unsigned int auto_cond
)
{
	arm_sev_cond((uint32_t **)(&ctx->code.write_p), auto_cond);
	ctx->code.write_p += 4;
}
void emit_arm_sev (
	mambo_context *ctx
)
{
	arm_sev((uint32_t **)(&ctx->code.write_p));
	ctx->code.write_p += 4;
}
void emit_arm_shadd16_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_shadd16_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_shadd16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_shadd16((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_shadd8_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_shadd8_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_shadd8 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_shadd8((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_shasx_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_shasx_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_shasx (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_shasx((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_shsax_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_shsax_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_shsax (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_shsax((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_shsub16_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_shsub16_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_shsub16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_shsub16((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_shsub8_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_shsub8_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_shsub8 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_shsub8((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_smlabb_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
)
{
	arm_smlabb_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm, ra);
	ctx->code.write_p += 4;
}
void emit_arm_smlabb (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
)
{
	arm_smlabb((uint32_t **)(&ctx->code.write_p), rd, rn, rm, ra);
	ctx->code.write_p += 4;
}
void emit_arm_smlabt_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
)
{
	arm_smlabt_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm, ra);
	ctx->code.write_p += 4;
}
void emit_arm_smlabt (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
)
{
	arm_smlabt((uint32_t **)(&ctx->code.write_p), rd, rn, rm, ra);
	ctx->code.write_p += 4;
}
void emit_arm_smlatb_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
)
{
	arm_smlatb_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm, ra);
	ctx->code.write_p += 4;
}
void emit_arm_smlatb (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
)
{
	arm_smlatb((uint32_t **)(&ctx->code.write_p), rd, rn, rm, ra);
	ctx->code.write_p += 4;
}
void emit_arm_smlatt_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
)
{
	arm_smlatt_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm, ra);
	ctx->code.write_p += 4;
}
void emit_arm_smlatt (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
)
{
	arm_smlatt((uint32_t **)(&ctx->code.write_p), rd, rn, rm, ra);
	ctx->code.write_p += 4;
}
void emit_arm_smlad_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int swap,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
)
{
	arm_smlad_cond((uint32_t **)(&ctx->code.write_p), auto_cond, swap, rd, rn, rm, ra);
	ctx->code.write_p += 4;
}
void emit_arm_smlad (
	mambo_context *ctx,
	unsigned int swap,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
)
{
	arm_smlad((uint32_t **)(&ctx->code.write_p), swap, rd, rn, rm, ra);
	ctx->code.write_p += 4;
}
void emit_arm_smlal_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int set_condition,
	unsigned int rdhi,
	unsigned int rdlo,
	unsigned int rm,
	unsigned int rn
)
{
	arm_smlal_cond((uint32_t **)(&ctx->code.write_p), auto_cond, set_condition, rdhi, rdlo, rm, rn);
	ctx->code.write_p += 4;
}
void emit_arm_smlal (
	mambo_context *ctx,
	unsigned int set_condition,
	unsigned int rdhi,
	unsigned int rdlo,
	unsigned int rm,
	unsigned int rn
)
{
	arm_smlal((uint32_t **)(&ctx->code.write_p), set_condition, rdhi, rdlo, rm, rn);
	ctx->code.write_p += 4;
}
void emit_arm_smlalbb_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
)
{
	arm_smlalbb_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd_lo, rd_hi, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_smlalbb (
	mambo_context *ctx,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
)
{
	arm_smlalbb((uint32_t **)(&ctx->code.write_p), rd_lo, rd_hi, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_smlalbt_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
)
{
	arm_smlalbt_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd_lo, rd_hi, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_smlalbt (
	mambo_context *ctx,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
)
{
	arm_smlalbt((uint32_t **)(&ctx->code.write_p), rd_lo, rd_hi, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_smlaltb_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
)
{
	arm_smlaltb_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd_lo, rd_hi, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_smlaltb (
	mambo_context *ctx,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
)
{
	arm_smlaltb((uint32_t **)(&ctx->code.write_p), rd_lo, rd_hi, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_smlaltt_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
)
{
	arm_smlaltt_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd_lo, rd_hi, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_smlaltt (
	mambo_context *ctx,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
)
{
	arm_smlaltt((uint32_t **)(&ctx->code.write_p), rd_lo, rd_hi, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_smlald_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
)
{
	arm_smlald_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd_lo, rd_hi, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_smlald (
	mambo_context *ctx,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
)
{
	arm_smlald((uint32_t **)(&ctx->code.write_p), rd_lo, rd_hi, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_smlaldx_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
)
{
	arm_smlaldx_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd_lo, rd_hi, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_smlaldx (
	mambo_context *ctx,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
)
{
	arm_smlaldx((uint32_t **)(&ctx->code.write_p), rd_lo, rd_hi, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_smlawb_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
)
{
	arm_smlawb_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm, ra);
	ctx->code.write_p += 4;
}
void emit_arm_smlawb (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
)
{
	arm_smlawb((uint32_t **)(&ctx->code.write_p), rd, rn, rm, ra);
	ctx->code.write_p += 4;
}
void emit_arm_smlawt_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
)
{
	arm_smlawt_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm, ra);
	ctx->code.write_p += 4;
}
void emit_arm_smlawt (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
)
{
	arm_smlawt((uint32_t **)(&ctx->code.write_p), rd, rn, rm, ra);
	ctx->code.write_p += 4;
}
void emit_arm_smlsd_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
)
{
	arm_smlsd_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm, ra);
	ctx->code.write_p += 4;
}
void emit_arm_smlsd (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
)
{
	arm_smlsd((uint32_t **)(&ctx->code.write_p), rd, rn, rm, ra);
	ctx->code.write_p += 4;
}
void emit_arm_smlsdx_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
)
{
	arm_smlsdx_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm, ra);
	ctx->code.write_p += 4;
}
void emit_arm_smlsdx (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
)
{
	arm_smlsdx((uint32_t **)(&ctx->code.write_p), rd, rn, rm, ra);
	ctx->code.write_p += 4;
}
void emit_arm_smlsld_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
)
{
	arm_smlsld_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd_lo, rd_hi, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_smlsld (
	mambo_context *ctx,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
)
{
	arm_smlsld((uint32_t **)(&ctx->code.write_p), rd_lo, rd_hi, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_smlsldx_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
)
{
	arm_smlsldx_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd_lo, rd_hi, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_smlsldx (
	mambo_context *ctx,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
)
{
	arm_smlsldx((uint32_t **)(&ctx->code.write_p), rd_lo, rd_hi, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_smmla_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
)
{
	arm_smmla_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm, ra);
	ctx->code.write_p += 4;
}
void emit_arm_smmla (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
)
{
	arm_smmla((uint32_t **)(&ctx->code.write_p), rd, rn, rm, ra);
	ctx->code.write_p += 4;
}
void emit_arm_smmlar_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
)
{
	arm_smmlar_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm, ra);
	ctx->code.write_p += 4;
}
void emit_arm_smmlar (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
)
{
	arm_smmlar((uint32_t **)(&ctx->code.write_p), rd, rn, rm, ra);
	ctx->code.write_p += 4;
}
void emit_arm_smmls_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
)
{
	arm_smmls_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm, ra);
	ctx->code.write_p += 4;
}
void emit_arm_smmls (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
)
{
	arm_smmls((uint32_t **)(&ctx->code.write_p), rd, rn, rm, ra);
	ctx->code.write_p += 4;
}
void emit_arm_smmlsr_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
)
{
	arm_smmlsr_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm, ra);
	ctx->code.write_p += 4;
}
void emit_arm_smmlsr (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
)
{
	arm_smmlsr((uint32_t **)(&ctx->code.write_p), rd, rn, rm, ra);
	ctx->code.write_p += 4;
}
void emit_arm_smmul_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_smmul_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_smmul (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_smmul((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_smmulr_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_smmulr_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_smmulr (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_smmulr((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_smuad_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_smuad_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_smuad (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_smuad((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_smuadx_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_smuadx_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_smuadx (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_smuadx((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_smulbb_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_smulbb_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_smulbb (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_smulbb((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_smulbt_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_smulbt_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_smulbt (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_smulbt((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_smultb_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_smultb_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_smultb (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_smultb((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_smultt_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_smultt_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_smultt (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_smultt((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_smull_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int set_condition,
	unsigned int rdhi,
	unsigned int rdlo,
	unsigned int rm,
	unsigned int rn
)
{
	arm_smull_cond((uint32_t **)(&ctx->code.write_p), auto_cond, set_condition, rdhi, rdlo, rm, rn);
	ctx->code.write_p += 4;
}
void emit_arm_smull (
	mambo_context *ctx,
	unsigned int set_condition,
	unsigned int rdhi,
	unsigned int rdlo,
	unsigned int rm,
	unsigned int rn
)
{
	arm_smull((uint32_t **)(&ctx->code.write_p), set_condition, rdhi, rdlo, rm, rn);
	ctx->code.write_p += 4;
}
void emit_arm_smulwb_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_smulwb_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_smulwb (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_smulwb((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_smulwt_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_smulwt_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_smulwt (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_smulwt((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_smusd_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_smusd_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_smusd (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_smusd((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_smusdx_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_smusdx_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_smusdx (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_smusdx((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_ssat_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int sat_imm,
	unsigned int rn,
	unsigned int sh,
	unsigned int imm5
)
{
	arm_ssat_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, sat_imm, rn, sh, imm5);
	ctx->code.write_p += 4;
}
void emit_arm_ssat (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int sat_imm,
	unsigned int rn,
	unsigned int sh,
	unsigned int imm5
)
{
	arm_ssat((uint32_t **)(&ctx->code.write_p), rd, sat_imm, rn, sh, imm5);
	ctx->code.write_p += 4;
}
void emit_arm_ssat16_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int sat_imm,
	unsigned int rn
)
{
	arm_ssat16_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, sat_imm, rn);
	ctx->code.write_p += 4;
}
void emit_arm_ssat16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int sat_imm,
	unsigned int rn
)
{
	arm_ssat16((uint32_t **)(&ctx->code.write_p), rd, sat_imm, rn);
	ctx->code.write_p += 4;
}
void emit_arm_ssax_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_ssax_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_ssax (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_ssax((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_ssub16_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_ssub16_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_ssub16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_ssub16((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_ssub8_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_ssub8_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_ssub8 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_ssub8((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_stc_cond((uint32_t **)(&ctx->code.write_p), auto_cond, p, upwards, d, writeback, rn, vd, opcode, imm8);
	ctx->code.write_p += 4;
}
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
)
{
	arm_stc((uint32_t **)(&ctx->code.write_p), p, upwards, d, writeback, rn, vd, opcode, imm8);
	ctx->code.write_p += 4;
}
void emit_arm_stm_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
)
{
	arm_stm_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rn, registers, prepostindex, updown, writeback, psr);
	ctx->code.write_p += 4;
}
void emit_arm_stm (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
)
{
	arm_stm((uint32_t **)(&ctx->code.write_p), rn, registers, prepostindex, updown, writeback, psr);
	ctx->code.write_p += 4;
}
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
)
{
	arm_str_cond((uint32_t **)(&ctx->code.write_p), auto_cond, immediate, rd, rn, offset, prepostindex, updown, writeback);
	ctx->code.write_p += 4;
}
void emit_arm_str (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
)
{
	arm_str((uint32_t **)(&ctx->code.write_p), immediate, rd, rn, offset, prepostindex, updown, writeback);
	ctx->code.write_p += 4;
}
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
)
{
	arm_strb_cond((uint32_t **)(&ctx->code.write_p), auto_cond, immediate, rd, rn, offset, prepostindex, updown, writeback);
	ctx->code.write_p += 4;
}
void emit_arm_strb (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
)
{
	arm_strb((uint32_t **)(&ctx->code.write_p), immediate, rd, rn, offset, prepostindex, updown, writeback);
	ctx->code.write_p += 4;
}
void emit_arm_strbt_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int updown
)
{
	arm_strbt_cond((uint32_t **)(&ctx->code.write_p), auto_cond, immediate, rd, rn, offset, updown);
	ctx->code.write_p += 4;
}
void emit_arm_strbt (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int updown
)
{
	arm_strbt((uint32_t **)(&ctx->code.write_p), immediate, rd, rn, offset, updown);
	ctx->code.write_p += 4;
}
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
)
{
	arm_strd_cond((uint32_t **)(&ctx->code.write_p), auto_cond, immediate, rd, rn, rm_imm4l, imm4h, prepostindex, updown, writeback);
	ctx->code.write_p += 4;
}
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
)
{
	arm_strd((uint32_t **)(&ctx->code.write_p), immediate, rd, rn, rm_imm4l, imm4h, prepostindex, updown, writeback);
	ctx->code.write_p += 4;
}
void emit_arm_strex_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_strex_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_strex (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_strex((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_strexb_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rt,
	unsigned int rn
)
{
	arm_strexb_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rt, rn);
	ctx->code.write_p += 4;
}
void emit_arm_strexb (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rt,
	unsigned int rn
)
{
	arm_strexb((uint32_t **)(&ctx->code.write_p), rd, rt, rn);
	ctx->code.write_p += 4;
}
void emit_arm_strexd_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rt,
	unsigned int rn
)
{
	arm_strexd_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rt, rn);
	ctx->code.write_p += 4;
}
void emit_arm_strexd (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rt,
	unsigned int rn
)
{
	arm_strexd((uint32_t **)(&ctx->code.write_p), rd, rt, rn);
	ctx->code.write_p += 4;
}
void emit_arm_strexh_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rt,
	unsigned int rn
)
{
	arm_strexh_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rt, rn);
	ctx->code.write_p += 4;
}
void emit_arm_strexh (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rt,
	unsigned int rn
)
{
	arm_strexh((uint32_t **)(&ctx->code.write_p), rd, rt, rn);
	ctx->code.write_p += 4;
}
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
)
{
	arm_strh_cond((uint32_t **)(&ctx->code.write_p), auto_cond, immediate, rd, rn, rm_imm4l, imm4h, prepostindex, updown, writeback);
	ctx->code.write_p += 4;
}
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
)
{
	arm_strh((uint32_t **)(&ctx->code.write_p), immediate, rd, rn, rm_imm4l, imm4h, prepostindex, updown, writeback);
	ctx->code.write_p += 4;
}
void emit_arm_strht_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm_imm4l,
	unsigned int imm4h,
	unsigned int updown
)
{
	arm_strht_cond((uint32_t **)(&ctx->code.write_p), auto_cond, immediate, rd, rn, rm_imm4l, imm4h, updown);
	ctx->code.write_p += 4;
}
void emit_arm_strht (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm_imm4l,
	unsigned int imm4h,
	unsigned int updown
)
{
	arm_strht((uint32_t **)(&ctx->code.write_p), immediate, rd, rn, rm_imm4l, imm4h, updown);
	ctx->code.write_p += 4;
}
void emit_arm_strt_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2,
	unsigned int updown
)
{
	arm_strt_cond((uint32_t **)(&ctx->code.write_p), auto_cond, immediate, rd, rn, operand2, updown);
	ctx->code.write_p += 4;
}
void emit_arm_strt (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2,
	unsigned int updown
)
{
	arm_strt((uint32_t **)(&ctx->code.write_p), immediate, rd, rn, operand2, updown);
	ctx->code.write_p += 4;
}
void emit_arm_sub_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
)
{
	arm_sub_cond((uint32_t **)(&ctx->code.write_p), auto_cond, immediate, set_condition, rd, rn, operand2);
	ctx->code.write_p += 4;
}
void emit_arm_sub (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
)
{
	arm_sub((uint32_t **)(&ctx->code.write_p), immediate, set_condition, rd, rn, operand2);
	ctx->code.write_p += 4;
}
void emit_arm_svc_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int comment
)
{
	arm_svc_cond((uint32_t **)(&ctx->code.write_p), auto_cond, comment);
	ctx->code.write_p += 4;
}
void emit_arm_svc (
	mambo_context *ctx,
	unsigned int comment
)
{
	arm_svc((uint32_t **)(&ctx->code.write_p), comment);
	ctx->code.write_p += 4;
}
void emit_arm_swp_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rt,
	unsigned int rt2,
	unsigned int rn
)
{
	arm_swp_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rt, rt2, rn);
	ctx->code.write_p += 4;
}
void emit_arm_swp (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rt2,
	unsigned int rn
)
{
	arm_swp((uint32_t **)(&ctx->code.write_p), rt, rt2, rn);
	ctx->code.write_p += 4;
}
void emit_arm_swpb_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rt,
	unsigned int rt2,
	unsigned int rn
)
{
	arm_swpb_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rt, rt2, rn);
	ctx->code.write_p += 4;
}
void emit_arm_swpb (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rt2,
	unsigned int rn
)
{
	arm_swpb((uint32_t **)(&ctx->code.write_p), rt, rt2, rn);
	ctx->code.write_p += 4;
}
void emit_arm_sxtab_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
)
{
	arm_sxtab_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm, rotate);
	ctx->code.write_p += 4;
}
void emit_arm_sxtab (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
)
{
	arm_sxtab((uint32_t **)(&ctx->code.write_p), rd, rn, rm, rotate);
	ctx->code.write_p += 4;
}
void emit_arm_sxtab16_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
)
{
	arm_sxtab16_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm, rotate);
	ctx->code.write_p += 4;
}
void emit_arm_sxtab16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
)
{
	arm_sxtab16((uint32_t **)(&ctx->code.write_p), rd, rn, rm, rotate);
	ctx->code.write_p += 4;
}
void emit_arm_sxtah_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
)
{
	arm_sxtah_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm, rotate);
	ctx->code.write_p += 4;
}
void emit_arm_sxtah (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
)
{
	arm_sxtah((uint32_t **)(&ctx->code.write_p), rd, rn, rm, rotate);
	ctx->code.write_p += 4;
}
void emit_arm_sxtb_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
)
{
	arm_sxtb_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rm, rotate);
	ctx->code.write_p += 4;
}
void emit_arm_sxtb (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
)
{
	arm_sxtb((uint32_t **)(&ctx->code.write_p), rd, rm, rotate);
	ctx->code.write_p += 4;
}
void emit_arm_sxtb16_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
)
{
	arm_sxtb16_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rm, rotate);
	ctx->code.write_p += 4;
}
void emit_arm_sxtb16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
)
{
	arm_sxtb16((uint32_t **)(&ctx->code.write_p), rd, rm, rotate);
	ctx->code.write_p += 4;
}
void emit_arm_sxth_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
)
{
	arm_sxth_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rm, rotate);
	ctx->code.write_p += 4;
}
void emit_arm_sxth (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
)
{
	arm_sxth((uint32_t **)(&ctx->code.write_p), rd, rm, rotate);
	ctx->code.write_p += 4;
}
void emit_arm_teq_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rn,
	unsigned int operand2
)
{
	arm_teq_cond((uint32_t **)(&ctx->code.write_p), auto_cond, immediate, rn, operand2);
	ctx->code.write_p += 4;
}
void emit_arm_teq (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int rn,
	unsigned int operand2
)
{
	arm_teq((uint32_t **)(&ctx->code.write_p), immediate, rn, operand2);
	ctx->code.write_p += 4;
}
void emit_arm_tst_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rn,
	unsigned int operand2
)
{
	arm_tst_cond((uint32_t **)(&ctx->code.write_p), auto_cond, immediate, rn, operand2);
	ctx->code.write_p += 4;
}
void emit_arm_tst (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int rn,
	unsigned int operand2
)
{
	arm_tst((uint32_t **)(&ctx->code.write_p), immediate, rn, operand2);
	ctx->code.write_p += 4;
}
void emit_arm_uadd16_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_uadd16_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_uadd16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_uadd16((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_uadd8_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_uadd8_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_uadd8 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_uadd8((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_uasx_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_uasx_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_uasx (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_uasx((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_ubfx_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int lsb,
	unsigned int widthm1
)
{
	arm_ubfx_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, lsb, widthm1);
	ctx->code.write_p += 4;
}
void emit_arm_ubfx (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int lsb,
	unsigned int widthm1
)
{
	arm_ubfx((uint32_t **)(&ctx->code.write_p), rd, rn, lsb, widthm1);
	ctx->code.write_p += 4;
}
void emit_arm_udf (
	mambo_context *ctx,
	unsigned int imm12,
	unsigned int imm4
)
{
	arm_udf((uint32_t **)(&ctx->code.write_p), imm12, imm4);
	ctx->code.write_p += 4;
}
void emit_arm_udiv_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_udiv_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_udiv (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_udiv((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_uhadd16_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_uhadd16_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_uhadd16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_uhadd16((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_uhadd8_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_uhadd8_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_uhadd8 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_uhadd8((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_uhasx_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_uhasx_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_uhasx (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_uhasx((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_uhsax_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_uhsax_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_uhsax (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_uhsax((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_uhsub16_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_uhsub16_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_uhsub16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_uhsub16((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_uhsub8_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_uhsub8_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_uhsub8 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_uhsub8((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_umaal (
	mambo_context *ctx,
	unsigned int rd_hi,
	unsigned int rd_lo,
	unsigned int rn,
	unsigned int rm
)
{
	arm_umaal((uint32_t **)(&ctx->code.write_p), rd_hi, rd_lo, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_umlal_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int set_condition,
	unsigned int rdhi,
	unsigned int rdlo,
	unsigned int rm,
	unsigned int rn
)
{
	arm_umlal_cond((uint32_t **)(&ctx->code.write_p), auto_cond, set_condition, rdhi, rdlo, rm, rn);
	ctx->code.write_p += 4;
}
void emit_arm_umlal (
	mambo_context *ctx,
	unsigned int set_condition,
	unsigned int rdhi,
	unsigned int rdlo,
	unsigned int rm,
	unsigned int rn
)
{
	arm_umlal((uint32_t **)(&ctx->code.write_p), set_condition, rdhi, rdlo, rm, rn);
	ctx->code.write_p += 4;
}
void emit_arm_umull_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int set_condition,
	unsigned int rdhi,
	unsigned int rdlo,
	unsigned int rm,
	unsigned int rn
)
{
	arm_umull_cond((uint32_t **)(&ctx->code.write_p), auto_cond, set_condition, rdhi, rdlo, rm, rn);
	ctx->code.write_p += 4;
}
void emit_arm_umull (
	mambo_context *ctx,
	unsigned int set_condition,
	unsigned int rdhi,
	unsigned int rdlo,
	unsigned int rm,
	unsigned int rn
)
{
	arm_umull((uint32_t **)(&ctx->code.write_p), set_condition, rdhi, rdlo, rm, rn);
	ctx->code.write_p += 4;
}
void emit_arm_uqadd16_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_uqadd16_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_uqadd16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_uqadd16((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_uqadd8_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_uqadd8_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_uqadd8 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_uqadd8((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_uqasx_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_uqasx_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_uqasx (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_uqasx((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_uqsax_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_uqsax_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_uqsax (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_uqsax((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_uqsub16_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_uqsub16_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_uqsub16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_uqsub16((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_uqsub8_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_uqsub8_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_uqsub8 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_uqsub8((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_usad8_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_usad8_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_usad8 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_usad8((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_usada8_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
)
{
	arm_usada8_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm, ra);
	ctx->code.write_p += 4;
}
void emit_arm_usada8 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
)
{
	arm_usada8((uint32_t **)(&ctx->code.write_p), rd, rn, rm, ra);
	ctx->code.write_p += 4;
}
void emit_arm_usat_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int sat_imm,
	unsigned int rn,
	unsigned int sh,
	unsigned int imm5
)
{
	arm_usat_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, sat_imm, rn, sh, imm5);
	ctx->code.write_p += 4;
}
void emit_arm_usat (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int sat_imm,
	unsigned int rn,
	unsigned int sh,
	unsigned int imm5
)
{
	arm_usat((uint32_t **)(&ctx->code.write_p), rd, sat_imm, rn, sh, imm5);
	ctx->code.write_p += 4;
}
void emit_arm_usat16_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int sat_imm,
	unsigned int rn
)
{
	arm_usat16_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, sat_imm, rn);
	ctx->code.write_p += 4;
}
void emit_arm_usat16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int sat_imm,
	unsigned int rn
)
{
	arm_usat16((uint32_t **)(&ctx->code.write_p), rd, sat_imm, rn);
	ctx->code.write_p += 4;
}
void emit_arm_usax_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_usax_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_usax (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_usax((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_usub16_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_usub16_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_usub16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_usub16((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_usub8_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_usub8_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_usub8 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_usub8((uint32_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_uxtab_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
)
{
	arm_uxtab_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm, rotate);
	ctx->code.write_p += 4;
}
void emit_arm_uxtab (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
)
{
	arm_uxtab((uint32_t **)(&ctx->code.write_p), rd, rn, rm, rotate);
	ctx->code.write_p += 4;
}
void emit_arm_uxtab16_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
)
{
	arm_uxtab16_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm, rotate);
	ctx->code.write_p += 4;
}
void emit_arm_uxtab16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
)
{
	arm_uxtab16((uint32_t **)(&ctx->code.write_p), rd, rn, rm, rotate);
	ctx->code.write_p += 4;
}
void emit_arm_uxtah_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
)
{
	arm_uxtah_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rn, rm, rotate);
	ctx->code.write_p += 4;
}
void emit_arm_uxtah (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
)
{
	arm_uxtah((uint32_t **)(&ctx->code.write_p), rd, rn, rm, rotate);
	ctx->code.write_p += 4;
}
void emit_arm_uxtb_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
)
{
	arm_uxtb_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rm, rotate);
	ctx->code.write_p += 4;
}
void emit_arm_uxtb (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
)
{
	arm_uxtb((uint32_t **)(&ctx->code.write_p), rd, rm, rotate);
	ctx->code.write_p += 4;
}
void emit_arm_uxtb16_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
)
{
	arm_uxtb16_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rm, rotate);
	ctx->code.write_p += 4;
}
void emit_arm_uxtb16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
)
{
	arm_uxtb16((uint32_t **)(&ctx->code.write_p), rd, rm, rotate);
	ctx->code.write_p += 4;
}
void emit_arm_uxth_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
)
{
	arm_uxth_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rd, rm, rotate);
	ctx->code.write_p += 4;
}
void emit_arm_uxth (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
)
{
	arm_uxth((uint32_t **)(&ctx->code.write_p), rd, rm, rotate);
	ctx->code.write_p += 4;
}
void emit_arm_wfe_cond (
	mambo_context *ctx,
	unsigned int auto_cond
)
{
	arm_wfe_cond((uint32_t **)(&ctx->code.write_p), auto_cond);
	ctx->code.write_p += 4;
}
void emit_arm_wfe (
	mambo_context *ctx
)
{
	arm_wfe((uint32_t **)(&ctx->code.write_p));
	ctx->code.write_p += 4;
}
void emit_arm_wfi_cond (
	mambo_context *ctx,
	unsigned int auto_cond
)
{
	arm_wfi_cond((uint32_t **)(&ctx->code.write_p), auto_cond);
	ctx->code.write_p += 4;
}
void emit_arm_wfi (
	mambo_context *ctx
)
{
	arm_wfi((uint32_t **)(&ctx->code.write_p));
	ctx->code.write_p += 4;
}
void emit_arm_yield_cond (
	mambo_context *ctx,
	unsigned int auto_cond
)
{
	arm_yield_cond((uint32_t **)(&ctx->code.write_p), auto_cond);
	ctx->code.write_p += 4;
}
void emit_arm_yield (
	mambo_context *ctx
)
{
	arm_yield((uint32_t **)(&ctx->code.write_p));
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vaba((uint32_t **)(&ctx->code.write_p), unsign, size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vabal((uint32_t **)(&ctx->code.write_p), unsign, size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vabd_i((uint32_t **)(&ctx->code.write_p), unsign, size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vabd_f((uint32_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vabdl((uint32_t **)(&ctx->code.write_p), unsign, size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vabs (
	mambo_context *ctx,
	unsigned int float_p,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vabs((uint32_t **)(&ctx->code.write_p), float_p, size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vabs_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	arm_vfp_vabs_cond((uint32_t **)(&ctx->code.write_p), auto_cond, size, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vabs (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	arm_vfp_vabs((uint32_t **)(&ctx->code.write_p), size, d, vd, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vacge((uint32_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vacgt((uint32_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vadd_i((uint32_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vadd_f((uint32_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_vfp_vadd_cond((uint32_t **)(&ctx->code.write_p), auto_cond, size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vadd (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
)
{
	arm_vfp_vadd((uint32_t **)(&ctx->code.write_p), size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vaddhn (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vaddhn((uint32_t **)(&ctx->code.write_p), size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vaddl((uint32_t **)(&ctx->code.write_p), size, unsign, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vaddw((uint32_t **)(&ctx->code.write_p), unsign, size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vand (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vand((uint32_t **)(&ctx->code.write_p), q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vbici (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int cmode,
	unsigned int i,
	unsigned int imm3,
	unsigned int imm4
)
{
	arm_neon_vbici((uint32_t **)(&ctx->code.write_p), q, d, vd, cmode, i, imm3, imm4);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vbic (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vbic((uint32_t **)(&ctx->code.write_p), q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vbif (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vbif((uint32_t **)(&ctx->code.write_p), q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vbit (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vbit((uint32_t **)(&ctx->code.write_p), q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vbsl (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vbsl((uint32_t **)(&ctx->code.write_p), q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vceq_i((uint32_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vceq_f((uint32_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vceqz (
	mambo_context *ctx,
	unsigned int float_p,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vceqz((uint32_t **)(&ctx->code.write_p), float_p, size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vcge_i((uint32_t **)(&ctx->code.write_p), unsign, size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vcge_f((uint32_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vcgez (
	mambo_context *ctx,
	unsigned int float_p,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vcgez((uint32_t **)(&ctx->code.write_p), float_p, size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vcgt_i((uint32_t **)(&ctx->code.write_p), unsign, size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vcgt_f((uint32_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vcgtz (
	mambo_context *ctx,
	unsigned int float_p,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vcgtz((uint32_t **)(&ctx->code.write_p), float_p, size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vclez (
	mambo_context *ctx,
	unsigned int float_p,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vclez((uint32_t **)(&ctx->code.write_p), float_p, size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vcls (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vcls((uint32_t **)(&ctx->code.write_p), size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vcltz (
	mambo_context *ctx,
	unsigned int float_p,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vcltz((uint32_t **)(&ctx->code.write_p), float_p, size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vclz (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vclz((uint32_t **)(&ctx->code.write_p), size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vcmp_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int d,
	unsigned int vd,
	unsigned int sz,
	unsigned int m,
	unsigned int vm
)
{
	arm_vfp_vcmp_cond((uint32_t **)(&ctx->code.write_p), auto_cond, d, vd, sz, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vcmp (
	mambo_context *ctx,
	unsigned int d,
	unsigned int vd,
	unsigned int sz,
	unsigned int m,
	unsigned int vm
)
{
	arm_vfp_vcmp((uint32_t **)(&ctx->code.write_p), d, vd, sz, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vcmpz_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int d,
	unsigned int vd,
	unsigned int sz
)
{
	arm_vfp_vcmpz_cond((uint32_t **)(&ctx->code.write_p), auto_cond, d, vd, sz);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vcmpz (
	mambo_context *ctx,
	unsigned int d,
	unsigned int vd,
	unsigned int sz
)
{
	arm_vfp_vcmpz((uint32_t **)(&ctx->code.write_p), d, vd, sz);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vcmpe_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int d,
	unsigned int vd,
	unsigned int sz,
	unsigned int m,
	unsigned int vm
)
{
	arm_vfp_vcmpe_cond((uint32_t **)(&ctx->code.write_p), auto_cond, d, vd, sz, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vcmpe (
	mambo_context *ctx,
	unsigned int d,
	unsigned int vd,
	unsigned int sz,
	unsigned int m,
	unsigned int vm
)
{
	arm_vfp_vcmpe((uint32_t **)(&ctx->code.write_p), d, vd, sz, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vcmpez_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int d,
	unsigned int vd,
	unsigned int sz
)
{
	arm_vfp_vcmpez_cond((uint32_t **)(&ctx->code.write_p), auto_cond, d, vd, sz);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vcmpez (
	mambo_context *ctx,
	unsigned int d,
	unsigned int vd,
	unsigned int sz
)
{
	arm_vfp_vcmpez((uint32_t **)(&ctx->code.write_p), d, vd, sz);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vcnt (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vcnt((uint32_t **)(&ctx->code.write_p), size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vcvt_f_i (
	mambo_context *ctx,
	unsigned int op,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vcvt_f_i((uint32_t **)(&ctx->code.write_p), op, size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vcvt_f_fp((uint32_t **)(&ctx->code.write_p), op, unsign, q, d, vd, m, vm, imm6);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vcvt_hp_sp (
	mambo_context *ctx,
	unsigned int op,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vcvt_hp_sp((uint32_t **)(&ctx->code.write_p), op, size, d, vd, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_vfp_vcvt_f_i_cond((uint32_t **)(&ctx->code.write_p), auto_cond, op, opcode2, sz, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vcvt_f_i (
	mambo_context *ctx,
	unsigned int op,
	unsigned int opcode2,
	unsigned int sz,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	arm_vfp_vcvt_f_i((uint32_t **)(&ctx->code.write_p), op, opcode2, sz, d, vd, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_vfp_vcvt_f_fp_cond((uint32_t **)(&ctx->code.write_p), auto_cond, op, unsign, sf, sx, d, vd, imm4, i);
	ctx->code.write_p += 4;
}
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
)
{
	arm_vfp_vcvt_f_fp((uint32_t **)(&ctx->code.write_p), op, unsign, sf, sx, d, vd, imm4, i);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vcvt_dp_sp_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	arm_vfp_vcvt_dp_sp_cond((uint32_t **)(&ctx->code.write_p), auto_cond, size, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vcvt_dp_sp (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	arm_vfp_vcvt_dp_sp((uint32_t **)(&ctx->code.write_p), size, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vcvtb_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int op,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	arm_vfp_vcvtb_cond((uint32_t **)(&ctx->code.write_p), auto_cond, op, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vcvtb (
	mambo_context *ctx,
	unsigned int op,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	arm_vfp_vcvtb((uint32_t **)(&ctx->code.write_p), op, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vcvtt_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int op,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	arm_vfp_vcvtt_cond((uint32_t **)(&ctx->code.write_p), auto_cond, op, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vcvtt (
	mambo_context *ctx,
	unsigned int op,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	arm_vfp_vcvtt((uint32_t **)(&ctx->code.write_p), op, d, vd, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_vfp_vdiv_cond((uint32_t **)(&ctx->code.write_p), auto_cond, size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vdiv (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
)
{
	arm_vfp_vdiv((uint32_t **)(&ctx->code.write_p), size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vdup_scal (
	mambo_context *ctx,
	unsigned int imm4,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vdup_scal((uint32_t **)(&ctx->code.write_p), imm4, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vdup_core_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int b,
	unsigned int e,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int rt
)
{
	arm_neon_vdup_core_cond((uint32_t **)(&ctx->code.write_p), auto_cond, b, e, q, d, vd, rt);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vdup_core (
	mambo_context *ctx,
	unsigned int b,
	unsigned int e,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int rt
)
{
	arm_neon_vdup_core((uint32_t **)(&ctx->code.write_p), b, e, q, d, vd, rt);
	ctx->code.write_p += 4;
}
void emit_arm_neon_veor (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_veor((uint32_t **)(&ctx->code.write_p), q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vext((uint32_t **)(&ctx->code.write_p), q, d, vd, n, vn, m, vm, imm4);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vfma((uint32_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vfms((uint32_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_vfp_vfma_cond((uint32_t **)(&ctx->code.write_p), auto_cond, size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vfma (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
)
{
	arm_vfp_vfma((uint32_t **)(&ctx->code.write_p), size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_vfp_vfms_cond((uint32_t **)(&ctx->code.write_p), auto_cond, size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vfms (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
)
{
	arm_vfp_vfms((uint32_t **)(&ctx->code.write_p), size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_vfp_vfnma_cond((uint32_t **)(&ctx->code.write_p), auto_cond, size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vfnma (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
)
{
	arm_vfp_vfnma((uint32_t **)(&ctx->code.write_p), size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_vfp_vfnms_cond((uint32_t **)(&ctx->code.write_p), auto_cond, size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vfnms (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
)
{
	arm_vfp_vfnms((uint32_t **)(&ctx->code.write_p), size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vhadd((uint32_t **)(&ctx->code.write_p), unsign, size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vhsub((uint32_t **)(&ctx->code.write_p), unsign, size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vldx_m (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int rn,
	unsigned int align,
	unsigned int rm
)
{
	arm_neon_vldx_m((uint32_t **)(&ctx->code.write_p), opcode, size, d, vd, rn, align, rm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vldx_s_o (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int rn,
	unsigned int index_align,
	unsigned int rm
)
{
	arm_neon_vldx_s_o((uint32_t **)(&ctx->code.write_p), opcode, size, d, vd, rn, index_align, rm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vldx_s_a((uint32_t **)(&ctx->code.write_p), opcode, size, d, vd, inc, rn, align, rm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_vfp_vldm_dp_cond((uint32_t **)(&ctx->code.write_p), auto_cond, p, upwards, d, writeback, rn, vd, imm8);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vldm_dp (
	mambo_context *ctx,
	unsigned int p,
	unsigned int upwards,
	unsigned int d,
	unsigned int writeback,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
)
{
	arm_vfp_vldm_dp((uint32_t **)(&ctx->code.write_p), p, upwards, d, writeback, rn, vd, imm8);
	ctx->code.write_p += 4;
}
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
)
{
	arm_vfp_vldm_sp_cond((uint32_t **)(&ctx->code.write_p), auto_cond, p, upwards, d, writeback, rn, vd, imm8);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vldm_sp (
	mambo_context *ctx,
	unsigned int p,
	unsigned int upwards,
	unsigned int d,
	unsigned int writeback,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
)
{
	arm_vfp_vldm_sp((uint32_t **)(&ctx->code.write_p), p, upwards, d, writeback, rn, vd, imm8);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vldr_dp_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int upwards,
	unsigned int d,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
)
{
	arm_vfp_vldr_dp_cond((uint32_t **)(&ctx->code.write_p), auto_cond, upwards, d, rn, vd, imm8);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vldr_dp (
	mambo_context *ctx,
	unsigned int upwards,
	unsigned int d,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
)
{
	arm_vfp_vldr_dp((uint32_t **)(&ctx->code.write_p), upwards, d, rn, vd, imm8);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vldr_sp_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int upwards,
	unsigned int d,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
)
{
	arm_vfp_vldr_sp_cond((uint32_t **)(&ctx->code.write_p), auto_cond, upwards, d, rn, vd, imm8);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vldr_sp (
	mambo_context *ctx,
	unsigned int upwards,
	unsigned int d,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
)
{
	arm_vfp_vldr_sp((uint32_t **)(&ctx->code.write_p), upwards, d, rn, vd, imm8);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vmax_i((uint32_t **)(&ctx->code.write_p), unsign, size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vmin_i((uint32_t **)(&ctx->code.write_p), unsign, size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vmax_f((uint32_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vmin_f((uint32_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vmla_i((uint32_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vmls_i((uint32_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vmlal_i((uint32_t **)(&ctx->code.write_p), unsign, size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vmlsl_i((uint32_t **)(&ctx->code.write_p), unsign, size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vmla_f((uint32_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vmls_f((uint32_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_vfp_vmla_f_cond((uint32_t **)(&ctx->code.write_p), auto_cond, size, d, vn, vd, n, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vmla_f (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vn,
	unsigned int vd,
	unsigned int n,
	unsigned int m,
	unsigned int vm
)
{
	arm_vfp_vmla_f((uint32_t **)(&ctx->code.write_p), size, d, vn, vd, n, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_vfp_vmls_f_cond((uint32_t **)(&ctx->code.write_p), auto_cond, size, d, vn, vd, n, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vmls_f (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vn,
	unsigned int vd,
	unsigned int n,
	unsigned int m,
	unsigned int vm
)
{
	arm_vfp_vmls_f((uint32_t **)(&ctx->code.write_p), size, d, vn, vd, n, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vmla_scal((uint32_t **)(&ctx->code.write_p), float_p, size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vmls_scal((uint32_t **)(&ctx->code.write_p), float_p, size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vmlal_scal((uint32_t **)(&ctx->code.write_p), unsign, size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vmlsl_scal((uint32_t **)(&ctx->code.write_p), unsign, size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vmovi((uint32_t **)(&ctx->code.write_p), q, d, vd, op, cmode, i, imm3, imm4);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vmovi_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int imm4h,
	unsigned int imm4l
)
{
	arm_vfp_vmovi_cond((uint32_t **)(&ctx->code.write_p), auto_cond, size, d, vd, imm4h, imm4l);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vmovi (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int imm4h,
	unsigned int imm4l
)
{
	arm_vfp_vmovi((uint32_t **)(&ctx->code.write_p), size, d, vd, imm4h, imm4l);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vmov_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	arm_vfp_vmov_cond((uint32_t **)(&ctx->code.write_p), auto_cond, size, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vmov (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	arm_vfp_vmov((uint32_t **)(&ctx->code.write_p), size, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vmov_core_scal_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int d,
	unsigned int vd,
	unsigned int opc1,
	unsigned int opc2,
	unsigned int rt
)
{
	arm_vfp_vmov_core_scal_cond((uint32_t **)(&ctx->code.write_p), auto_cond, d, vd, opc1, opc2, rt);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vmov_core_scal (
	mambo_context *ctx,
	unsigned int d,
	unsigned int vd,
	unsigned int opc1,
	unsigned int opc2,
	unsigned int rt
)
{
	arm_vfp_vmov_core_scal((uint32_t **)(&ctx->code.write_p), d, vd, opc1, opc2, rt);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vmov_scal_core_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int unsign,
	unsigned int rt,
	unsigned int n,
	unsigned int vn,
	unsigned int opc1,
	unsigned int opc2
)
{
	arm_vfp_vmov_scal_core_cond((uint32_t **)(&ctx->code.write_p), auto_cond, unsign, rt, n, vn, opc1, opc2);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vmov_scal_core (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int rt,
	unsigned int n,
	unsigned int vn,
	unsigned int opc1,
	unsigned int opc2
)
{
	arm_vfp_vmov_scal_core((uint32_t **)(&ctx->code.write_p), unsign, rt, n, vn, opc1, opc2);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vmov_core_sp_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int op,
	unsigned int rt,
	unsigned int n,
	unsigned int vn
)
{
	arm_vfp_vmov_core_sp_cond((uint32_t **)(&ctx->code.write_p), auto_cond, op, rt, n, vn);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vmov_core_sp (
	mambo_context *ctx,
	unsigned int op,
	unsigned int rt,
	unsigned int n,
	unsigned int vn
)
{
	arm_vfp_vmov_core_sp((uint32_t **)(&ctx->code.write_p), op, rt, n, vn);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vmov_2core_2sp_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int op,
	unsigned int rt,
	unsigned int rt2,
	unsigned int m,
	unsigned int vm
)
{
	arm_vfp_vmov_2core_2sp_cond((uint32_t **)(&ctx->code.write_p), auto_cond, op, rt, rt2, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vmov_2core_2sp (
	mambo_context *ctx,
	unsigned int op,
	unsigned int rt,
	unsigned int rt2,
	unsigned int m,
	unsigned int vm
)
{
	arm_vfp_vmov_2core_2sp((uint32_t **)(&ctx->code.write_p), op, rt, rt2, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vmov_2core_dp_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int op,
	unsigned int rt,
	unsigned int rt2,
	unsigned int m,
	unsigned int vm
)
{
	arm_vfp_vmov_2core_dp_cond((uint32_t **)(&ctx->code.write_p), auto_cond, op, rt, rt2, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vmov_2core_dp (
	mambo_context *ctx,
	unsigned int op,
	unsigned int rt,
	unsigned int rt2,
	unsigned int m,
	unsigned int vm
)
{
	arm_vfp_vmov_2core_dp((uint32_t **)(&ctx->code.write_p), op, rt, rt2, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vmovl (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm3
)
{
	arm_neon_vmovl((uint32_t **)(&ctx->code.write_p), unsign, d, vd, m, vm, imm3);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vmovn (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vmovn((uint32_t **)(&ctx->code.write_p), size, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vmrs_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rt
)
{
	arm_vfp_vmrs_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rt);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vmrs (
	mambo_context *ctx,
	unsigned int rt
)
{
	arm_vfp_vmrs((uint32_t **)(&ctx->code.write_p), rt);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vmsr_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int rt
)
{
	arm_vfp_vmsr_cond((uint32_t **)(&ctx->code.write_p), auto_cond, rt);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vmsr (
	mambo_context *ctx,
	unsigned int rt
)
{
	arm_vfp_vmsr((uint32_t **)(&ctx->code.write_p), rt);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vmul_i((uint32_t **)(&ctx->code.write_p), opcode, size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vmull_i((uint32_t **)(&ctx->code.write_p), opcode, opcode4, size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vmul_f((uint32_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_vfp_vmul_f_cond((uint32_t **)(&ctx->code.write_p), auto_cond, size, d, vn, vd, n, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vmul_f (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vn,
	unsigned int vd,
	unsigned int n,
	unsigned int m,
	unsigned int vm
)
{
	arm_vfp_vmul_f((uint32_t **)(&ctx->code.write_p), size, d, vn, vd, n, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vmul_scal((uint32_t **)(&ctx->code.write_p), opcode, opcode5, size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vmull_scal((uint32_t **)(&ctx->code.write_p), opcode, size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vmvni (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int cmode,
	unsigned int i,
	unsigned int imm3,
	unsigned int imm4
)
{
	arm_neon_vmvni((uint32_t **)(&ctx->code.write_p), q, d, vd, cmode, i, imm3, imm4);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vmvn (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vmvn((uint32_t **)(&ctx->code.write_p), size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vneg (
	mambo_context *ctx,
	unsigned int float_p,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vneg((uint32_t **)(&ctx->code.write_p), float_p, size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vneg_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	arm_vfp_vneg_cond((uint32_t **)(&ctx->code.write_p), auto_cond, size, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vneg (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	arm_vfp_vneg((uint32_t **)(&ctx->code.write_p), size, d, vd, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_vfp_vnmla_cond((uint32_t **)(&ctx->code.write_p), auto_cond, size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vnmla (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
)
{
	arm_vfp_vnmla((uint32_t **)(&ctx->code.write_p), size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_vfp_vnmls_cond((uint32_t **)(&ctx->code.write_p), auto_cond, size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vnmls (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
)
{
	arm_vfp_vnmls((uint32_t **)(&ctx->code.write_p), size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_vfp_vnmul_cond((uint32_t **)(&ctx->code.write_p), auto_cond, size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vnmul (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
)
{
	arm_vfp_vnmul((uint32_t **)(&ctx->code.write_p), size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vorn (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vorn((uint32_t **)(&ctx->code.write_p), q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vorri (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int cmode,
	unsigned int i,
	unsigned int imm3,
	unsigned int imm4
)
{
	arm_neon_vorri((uint32_t **)(&ctx->code.write_p), q, d, vd, cmode, i, imm3, imm4);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vorr (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vorr((uint32_t **)(&ctx->code.write_p), q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vpadal (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vpadal((uint32_t **)(&ctx->code.write_p), unsign, size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vpadd_i((uint32_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vpadd_f((uint32_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vpaddl (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vpaddl((uint32_t **)(&ctx->code.write_p), unsign, size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vpmax_i((uint32_t **)(&ctx->code.write_p), unsign, size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vpmin_i((uint32_t **)(&ctx->code.write_p), unsign, size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vpmax_f((uint32_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vpmin_f((uint32_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vpop_dp_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
)
{
	arm_vfp_vpop_dp_cond((uint32_t **)(&ctx->code.write_p), auto_cond, d, vd, imm8);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vpop_dp (
	mambo_context *ctx,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
)
{
	arm_vfp_vpop_dp((uint32_t **)(&ctx->code.write_p), d, vd, imm8);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vpop_sp_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
)
{
	arm_vfp_vpop_sp_cond((uint32_t **)(&ctx->code.write_p), auto_cond, d, vd, imm8);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vpop_sp (
	mambo_context *ctx,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
)
{
	arm_vfp_vpop_sp((uint32_t **)(&ctx->code.write_p), d, vd, imm8);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vpush_dp_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
)
{
	arm_vfp_vpush_dp_cond((uint32_t **)(&ctx->code.write_p), auto_cond, d, vd, imm8);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vpush_dp (
	mambo_context *ctx,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
)
{
	arm_vfp_vpush_dp((uint32_t **)(&ctx->code.write_p), d, vd, imm8);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vpush_sp_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
)
{
	arm_vfp_vpush_sp_cond((uint32_t **)(&ctx->code.write_p), auto_cond, d, vd, imm8);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vpush_sp (
	mambo_context *ctx,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
)
{
	arm_vfp_vpush_sp((uint32_t **)(&ctx->code.write_p), d, vd, imm8);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vqabs (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vqabs((uint32_t **)(&ctx->code.write_p), size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vqadd((uint32_t **)(&ctx->code.write_p), unsign, size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vqdmlal_i (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vqdmlal_i((uint32_t **)(&ctx->code.write_p), size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vqdmlsl_i (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vqdmlsl_i((uint32_t **)(&ctx->code.write_p), size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vqdmlal_scal (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vqdmlal_scal((uint32_t **)(&ctx->code.write_p), size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vqdmlsl_scal (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vqdmlsl_scal((uint32_t **)(&ctx->code.write_p), size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vqdmulh_i((uint32_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vqdmulh_scal((uint32_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vqdmull_i (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vqdmull_i((uint32_t **)(&ctx->code.write_p), size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vqdmull_scal (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vqdmull_scal((uint32_t **)(&ctx->code.write_p), size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vqmovn (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vqmovn((uint32_t **)(&ctx->code.write_p), unsign, size, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vqmovun (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vqmovun((uint32_t **)(&ctx->code.write_p), size, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vqneg (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vqneg((uint32_t **)(&ctx->code.write_p), size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vqrdmulh_i((uint32_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vqrdmulh_scal((uint32_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vqrshl((uint32_t **)(&ctx->code.write_p), unsign, size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vqrshrn (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
)
{
	arm_neon_vqrshrn((uint32_t **)(&ctx->code.write_p), unsign, d, vd, m, vm, imm6);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vqrshrun (
	mambo_context *ctx,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
)
{
	arm_neon_vqrshrun((uint32_t **)(&ctx->code.write_p), d, vd, m, vm, imm6);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vqshl((uint32_t **)(&ctx->code.write_p), unsign, size, q, d, vd, m, vm, n, vn);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vqshli((uint32_t **)(&ctx->code.write_p), unsign, q, d, vd, m, vm, l, imm6);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vqshlui (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int l,
	unsigned int imm6
)
{
	arm_neon_vqshlui((uint32_t **)(&ctx->code.write_p), q, d, vd, m, vm, l, imm6);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vqshrn (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
)
{
	arm_neon_vqshrn((uint32_t **)(&ctx->code.write_p), unsign, d, vd, m, vm, imm6);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vqshrun (
	mambo_context *ctx,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
)
{
	arm_neon_vqshrun((uint32_t **)(&ctx->code.write_p), d, vd, m, vm, imm6);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vqsub((uint32_t **)(&ctx->code.write_p), unsign, size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vraddhn (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vraddhn((uint32_t **)(&ctx->code.write_p), size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vrecpe (
	mambo_context *ctx,
	unsigned int float_p,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vrecpe((uint32_t **)(&ctx->code.write_p), float_p, size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vrecps((uint32_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vrev16 (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vrev16((uint32_t **)(&ctx->code.write_p), size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vrev32 (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vrev32((uint32_t **)(&ctx->code.write_p), size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vrev64 (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vrev64((uint32_t **)(&ctx->code.write_p), size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vrhadd((uint32_t **)(&ctx->code.write_p), unsign, size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vrshl((uint32_t **)(&ctx->code.write_p), unsign, size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vrshr((uint32_t **)(&ctx->code.write_p), unsign, q, d, vd, m, vm, l, imm6);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vrshrn (
	mambo_context *ctx,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
)
{
	arm_neon_vrshrn((uint32_t **)(&ctx->code.write_p), d, vd, m, vm, imm6);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vrsqrte (
	mambo_context *ctx,
	unsigned int floating_point,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vrsqrte((uint32_t **)(&ctx->code.write_p), floating_point, size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vrsqrts((uint32_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vrsra((uint32_t **)(&ctx->code.write_p), unsign, q, d, vd, m, vm, l, imm6);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vrsubhn (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vrsubhn((uint32_t **)(&ctx->code.write_p), size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vshl((uint32_t **)(&ctx->code.write_p), unsign, size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vshli (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int l,
	unsigned int imm6
)
{
	arm_neon_vshli((uint32_t **)(&ctx->code.write_p), q, d, vd, m, vm, l, imm6);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vshll (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
)
{
	arm_neon_vshll((uint32_t **)(&ctx->code.write_p), unsign, d, vd, m, vm, imm6);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vshll2 (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vshll2((uint32_t **)(&ctx->code.write_p), size, d, vd, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vshr((uint32_t **)(&ctx->code.write_p), unsign, q, d, vd, m, vm, l, imm6);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vshrn (
	mambo_context *ctx,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
)
{
	arm_neon_vshrn((uint32_t **)(&ctx->code.write_p), d, vd, m, vm, imm6);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vsli (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int l,
	unsigned int imm6
)
{
	arm_neon_vsli((uint32_t **)(&ctx->code.write_p), q, d, vd, m, vm, l, imm6);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vsqrt_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	arm_vfp_vsqrt_cond((uint32_t **)(&ctx->code.write_p), auto_cond, size, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vsqrt (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	arm_vfp_vsqrt((uint32_t **)(&ctx->code.write_p), size, d, vd, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vsra((uint32_t **)(&ctx->code.write_p), unsign, q, d, vd, m, vm, l, imm6);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vsri (
	mambo_context *ctx,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int l,
	unsigned int imm6
)
{
	arm_neon_vsri((uint32_t **)(&ctx->code.write_p), q, d, vd, m, vm, l, imm6);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vstx_m (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int rn,
	unsigned int align,
	unsigned int rm
)
{
	arm_neon_vstx_m((uint32_t **)(&ctx->code.write_p), opcode, size, d, vd, rn, align, rm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vstx_s_o (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int rn,
	unsigned int index_align,
	unsigned int rm
)
{
	arm_neon_vstx_s_o((uint32_t **)(&ctx->code.write_p), opcode, size, d, vd, rn, index_align, rm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_vfp_vstm_dp_cond((uint32_t **)(&ctx->code.write_p), auto_cond, p, upwards, d, writeback, rn, vd, imm8);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vstm_dp (
	mambo_context *ctx,
	unsigned int p,
	unsigned int upwards,
	unsigned int d,
	unsigned int writeback,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
)
{
	arm_vfp_vstm_dp((uint32_t **)(&ctx->code.write_p), p, upwards, d, writeback, rn, vd, imm8);
	ctx->code.write_p += 4;
}
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
)
{
	arm_vfp_vstm_sp_cond((uint32_t **)(&ctx->code.write_p), auto_cond, p, upwards, d, writeback, rn, vd, imm8);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vstm_sp (
	mambo_context *ctx,
	unsigned int p,
	unsigned int upwards,
	unsigned int d,
	unsigned int writeback,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
)
{
	arm_vfp_vstm_sp((uint32_t **)(&ctx->code.write_p), p, upwards, d, writeback, rn, vd, imm8);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vstr_dp_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int upwards,
	unsigned int d,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
)
{
	arm_vfp_vstr_dp_cond((uint32_t **)(&ctx->code.write_p), auto_cond, upwards, d, rn, vd, imm8);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vstr_dp (
	mambo_context *ctx,
	unsigned int upwards,
	unsigned int d,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
)
{
	arm_vfp_vstr_dp((uint32_t **)(&ctx->code.write_p), upwards, d, rn, vd, imm8);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vstr_sp_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int upwards,
	unsigned int d,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
)
{
	arm_vfp_vstr_sp_cond((uint32_t **)(&ctx->code.write_p), auto_cond, upwards, d, rn, vd, imm8);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vstr_sp (
	mambo_context *ctx,
	unsigned int upwards,
	unsigned int d,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
)
{
	arm_vfp_vstr_sp((uint32_t **)(&ctx->code.write_p), upwards, d, rn, vd, imm8);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vsub_i((uint32_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vsub_f((uint32_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_vfp_vsub_f_cond((uint32_t **)(&ctx->code.write_p), auto_cond, size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_vsub_f (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
)
{
	arm_vfp_vsub_f((uint32_t **)(&ctx->code.write_p), size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vsubhn (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vsubhn((uint32_t **)(&ctx->code.write_p), size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vsubl((uint32_t **)(&ctx->code.write_p), unsign, size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vsubw((uint32_t **)(&ctx->code.write_p), unsign, size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vswp (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vswp((uint32_t **)(&ctx->code.write_p), size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vtbl (
	mambo_context *ctx,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int len,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vtbl((uint32_t **)(&ctx->code.write_p), d, vd, n, vn, len, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vtbx (
	mambo_context *ctx,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int len,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vtbx((uint32_t **)(&ctx->code.write_p), d, vd, n, vn, len, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vtrn (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vtrn((uint32_t **)(&ctx->code.write_p), size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_neon_vtst((uint32_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vuzp (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vuzp((uint32_t **)(&ctx->code.write_p), size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_neon_vzip (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	arm_neon_vzip((uint32_t **)(&ctx->code.write_p), size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_br_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int link,
	unsigned int offset_branch
)
{
	arm_br_cond((uint32_t **)(&ctx->code.write_p), auto_cond, link, offset_branch);
	ctx->code.write_p += 4;
}
void emit_arm_br (
	mambo_context *ctx,
	unsigned int link,
	unsigned int offset_branch
)
{
	arm_br((uint32_t **)(&ctx->code.write_p), link, offset_branch);
	ctx->code.write_p += 4;
}
void emit_arm_bx_t_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int link,
	unsigned int rn
)
{
	arm_bx_t_cond((uint32_t **)(&ctx->code.write_p), auto_cond, link, rn);
	ctx->code.write_p += 4;
}
void emit_arm_bx_t (
	mambo_context *ctx,
	unsigned int link,
	unsigned int rn
)
{
	arm_bx_t((uint32_t **)(&ctx->code.write_p), link, rn);
	ctx->code.write_p += 4;
}
void emit_arm_blxi_t (
	mambo_context *ctx,
	unsigned int h,
	unsigned int imm24
)
{
	arm_blxi_t((uint32_t **)(&ctx->code.write_p), h, imm24);
	ctx->code.write_p += 4;
}
void emit_arm_data_proc_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int opcode,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
)
{
	arm_data_proc_cond((uint32_t **)(&ctx->code.write_p), auto_cond, immediate, opcode, set_condition, rd, rn, operand2);
	ctx->code.write_p += 4;
}
void emit_arm_data_proc (
	mambo_context *ctx,
	unsigned int immediate,
	unsigned int opcode,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
)
{
	arm_data_proc((uint32_t **)(&ctx->code.write_p), immediate, opcode, set_condition, rd, rn, operand2);
	ctx->code.write_p += 4;
}
void emit_arm_multiply_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int accumulate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs,
	unsigned int rn
)
{
	arm_multiply_cond((uint32_t **)(&ctx->code.write_p), auto_cond, accumulate, set_condition, rd, rm, rs, rn);
	ctx->code.write_p += 4;
}
void emit_arm_multiply (
	mambo_context *ctx,
	unsigned int accumulate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs,
	unsigned int rn
)
{
	arm_multiply((uint32_t **)(&ctx->code.write_p), accumulate, set_condition, rd, rm, rs, rn);
	ctx->code.write_p += 4;
}
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
)
{
	arm_s_data_transfer_cond((uint32_t **)(&ctx->code.write_p), auto_cond, loadstore, immediate, byteword, rd, rn, offset, prepostindex, updown, writeback);
	ctx->code.write_p += 4;
}
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
)
{
	arm_s_data_transfer((uint32_t **)(&ctx->code.write_p), loadstore, immediate, byteword, rd, rn, offset, prepostindex, updown, writeback);
	ctx->code.write_p += 4;
}
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
)
{
	arm_h_data_transfer_cond((uint32_t **)(&ctx->code.write_p), auto_cond, opcode, size, opcode2, immediate, rd, rn, rm, imm4h, prepostindex, updown, writeback);
	ctx->code.write_p += 4;
}
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
)
{
	arm_h_data_transfer((uint32_t **)(&ctx->code.write_p), opcode, size, opcode2, immediate, rd, rn, rm, imm4h, prepostindex, updown, writeback);
	ctx->code.write_p += 4;
}
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
)
{
	arm_b_data_transfer_cond((uint32_t **)(&ctx->code.write_p), auto_cond, loadstore, rn, registers, prepostindex, updown, writeback, psr);
	ctx->code.write_p += 4;
}
void emit_arm_b_data_transfer (
	mambo_context *ctx,
	unsigned int loadstore,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
)
{
	arm_b_data_transfer((uint32_t **)(&ctx->code.write_p), loadstore, rn, registers, prepostindex, updown, writeback, psr);
	ctx->code.write_p += 4;
}
void emit_arm_svc_t_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int comment
)
{
	arm_svc_t_cond((uint32_t **)(&ctx->code.write_p), auto_cond, comment);
	ctx->code.write_p += 4;
}
void emit_arm_svc_t (
	mambo_context *ctx,
	unsigned int comment
)
{
	arm_svc_t((uint32_t **)(&ctx->code.write_p), comment);
	ctx->code.write_p += 4;
}
void emit_arm_mem_hints_pli (
	mambo_context *ctx,
	unsigned int opcode1,
	unsigned int updown,
	unsigned int opcode2,
	unsigned int rn,
	unsigned int imm5,
	unsigned int type,
	unsigned int rm
)
{
	arm_mem_hints_pli((uint32_t **)(&ctx->code.write_p), opcode1, updown, opcode2, rn, imm5, type, rm);
	ctx->code.write_p += 4;
}
void emit_arm_mem_hints_pld (
	mambo_context *ctx,
	unsigned int opcode1,
	unsigned int updown,
	unsigned int read_only,
	unsigned int opcode2,
	unsigned int rn,
	unsigned int imm12
)
{
	arm_mem_hints_pld((uint32_t **)(&ctx->code.write_p), opcode1, updown, read_only, opcode2, rn, imm12);
	ctx->code.write_p += 4;
}
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
)
{
	arm_vfp_ldm_stm_cond((uint32_t **)(&ctx->code.write_p), auto_cond, p, upwards, d, writeback, load_store, rn, vd, opcode, imm8);
	ctx->code.write_p += 4;
}
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
)
{
	arm_vfp_ldm_stm((uint32_t **)(&ctx->code.write_p), p, upwards, d, writeback, load_store, rn, vd, opcode, imm8);
	ctx->code.write_p += 4;
}
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
)
{
	arm_coproc_trans_cond((uint32_t **)(&ctx->code.write_p), auto_cond, opc1, load_store, crn, rd, coproc, opc2, crm);
	ctx->code.write_p += 4;
}
void emit_arm_coproc_trans (
	mambo_context *ctx,
	unsigned int opc1,
	unsigned int load_store,
	unsigned int crn,
	unsigned int rd,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
)
{
	arm_coproc_trans((uint32_t **)(&ctx->code.write_p), opc1, load_store, crn, rd, coproc, opc2, crm);
	ctx->code.write_p += 4;
}
void emit_arm_coproc_dp_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int opc1,
	unsigned int crn,
	unsigned int crd,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
)
{
	arm_coproc_dp_cond((uint32_t **)(&ctx->code.write_p), auto_cond, opc1, crn, crd, coproc, opc2, crm);
	ctx->code.write_p += 4;
}
void emit_arm_coproc_dp (
	mambo_context *ctx,
	unsigned int opc1,
	unsigned int crn,
	unsigned int crd,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
)
{
	arm_coproc_dp((uint32_t **)(&ctx->code.write_p), opc1, crn, crd, coproc, opc2, crm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_dsp_long_res_cond((uint32_t **)(&ctx->code.write_p), auto_cond, opcode, set_condition, rdhi, rdlo, rm, opcode2, setting, rn);
	ctx->code.write_p += 4;
}
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
)
{
	arm_dsp_long_res((uint32_t **)(&ctx->code.write_p), opcode, set_condition, rdhi, rdlo, rm, opcode2, setting, rn);
	ctx->code.write_p += 4;
}
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
)
{
	arm_vops((uint32_t **)(&ctx->code.write_p), opcode, opcode2, opcode3, opcode4, opcode5, opcode6, size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_v_trans_mult((uint32_t **)(&ctx->code.write_p), opcode, opcode2, opcode3, opcode4, params, d, vd, rn, rm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_v_ops_2reg((uint32_t **)(&ctx->code.write_p), opcode, opcode2, opcode3, opcode4, opcode5, size, d, vd, q, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_v_ops_imm6((uint32_t **)(&ctx->code.write_p), opcode, u, d, vd, q, m, vm, l, imm6, f3);
	ctx->code.write_p += 4;
}
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
)
{
	arm_v_ops_1reg_mod_imm((uint32_t **)(&ctx->code.write_p), opcode, opcode2, opcode3, cmode, d, vd, q, i, imm3, imm4, op);
	ctx->code.write_p += 4;
}
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
)
{
	arm_vfp_data_proc_cond((uint32_t **)(&ctx->code.write_p), auto_cond, d, opc2, vd, sz, op, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_data_proc (
	mambo_context *ctx,
	unsigned int d,
	unsigned int opc2,
	unsigned int vd,
	unsigned int sz,
	unsigned int op,
	unsigned int m,
	unsigned int vm
)
{
	arm_vfp_data_proc((uint32_t **)(&ctx->code.write_p), d, opc2, vd, sz, op, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_cpsr_trans_reg_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int opcode,
	unsigned int mask,
	unsigned int f2,
	unsigned int rd,
	unsigned int rn
)
{
	arm_cpsr_trans_reg_cond((uint32_t **)(&ctx->code.write_p), auto_cond, opcode, mask, f2, rd, rn);
	ctx->code.write_p += 4;
}
void emit_arm_cpsr_trans_reg (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int mask,
	unsigned int f2,
	unsigned int rd,
	unsigned int rn
)
{
	arm_cpsr_trans_reg((uint32_t **)(&ctx->code.write_p), opcode, mask, f2, rd, rn);
	ctx->code.write_p += 4;
}
void emit_arm_cpsr_trans_imm_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int mask,
	unsigned int imm12
)
{
	arm_cpsr_trans_imm_cond((uint32_t **)(&ctx->code.write_p), auto_cond, mask, imm12);
	ctx->code.write_p += 4;
}
void emit_arm_cpsr_trans_imm (
	mambo_context *ctx,
	unsigned int mask,
	unsigned int imm12
)
{
	arm_cpsr_trans_imm((uint32_t **)(&ctx->code.write_p), mask, imm12);
	ctx->code.write_p += 4;
}
void emit_arm_divide_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int opcode,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_divide_cond((uint32_t **)(&ctx->code.write_p), auto_cond, opcode, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_divide (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	arm_divide((uint32_t **)(&ctx->code.write_p), opcode, rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_arm_sync (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int option
)
{
	arm_sync((uint32_t **)(&ctx->code.write_p), opcode, option);
	ctx->code.write_p += 4;
}
void emit_arm_extend_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int opcode,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
)
{
	arm_extend_cond((uint32_t **)(&ctx->code.write_p), auto_cond, opcode, rd, rn, rm, rotate);
	ctx->code.write_p += 4;
}
void emit_arm_extend (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
)
{
	arm_extend((uint32_t **)(&ctx->code.write_p), opcode, rd, rn, rm, rotate);
	ctx->code.write_p += 4;
}
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
)
{
	arm_vfp_3reg_cond((uint32_t **)(&ctx->code.write_p), auto_cond, opcode, d, opcode2, vn, vd, opcode3, sz, n, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_vfp_3reg((uint32_t **)(&ctx->code.write_p), opcode, d, opcode2, vn, vd, opcode3, sz, n, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	arm_trans_arm_vfp_cond((uint32_t **)(&ctx->code.write_p), auto_cond, op, vn, rd, opcode, n, f3, m, f5);
	ctx->code.write_p += 4;
}
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
)
{
	arm_trans_arm_vfp((uint32_t **)(&ctx->code.write_p), op, vn, rd, opcode, n, f3, m, f5);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_imm8_1reg_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int opcode,
	unsigned int d,
	unsigned int vd,
	unsigned int imm4h,
	unsigned int imm4l
)
{
	arm_vfp_imm8_1reg_cond((uint32_t **)(&ctx->code.write_p), auto_cond, opcode, d, vd, imm4h, imm4l);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_imm8_1reg (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int d,
	unsigned int vd,
	unsigned int imm4h,
	unsigned int imm4l
)
{
	arm_vfp_imm8_1reg((uint32_t **)(&ctx->code.write_p), opcode, d, vd, imm4h, imm4l);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_trans_2arm_reg_cond (
	mambo_context *ctx,
	unsigned int auto_cond,
	unsigned int opcode,
	unsigned int op,
	unsigned int rt2,
	unsigned int rt,
	unsigned int m,
	unsigned int vm
)
{
	arm_vfp_trans_2arm_reg_cond((uint32_t **)(&ctx->code.write_p), auto_cond, opcode, op, rt2, rt, m, vm);
	ctx->code.write_p += 4;
}
void emit_arm_vfp_trans_2arm_reg (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int op,
	unsigned int rt2,
	unsigned int rt,
	unsigned int m,
	unsigned int vm
)
{
	arm_vfp_trans_2arm_reg((uint32_t **)(&ctx->code.write_p), opcode, op, rt2, rt, m, vm);
	ctx->code.write_p += 4;
}
#endif
