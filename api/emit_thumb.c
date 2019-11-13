#ifdef PLUGINS_NEW
#include "../dbm.h"
#include "../pie/pie-thumb-encoder.h"
#include "plugin_support.h"
void emit_thumb_adc16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rdn
)
{
	thumb_adc16((uint16_t **)(&ctx->code.write_p), rm, rdn);
	ctx->code.write_p += 2;
}
void emit_thumb_add16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
)
{
	thumb_add16((uint16_t **)(&ctx->code.write_p), rm, rn, rd);
	ctx->code.write_p += 2;
}
void emit_thumb_add_from_pc16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int imm8
)
{
	thumb_add_from_pc16((uint16_t **)(&ctx->code.write_p), rd, imm8);
	ctx->code.write_p += 2;
}
void emit_thumb_add_from_sp16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int imm8
)
{
	thumb_add_from_sp16((uint16_t **)(&ctx->code.write_p), rd, imm8);
	ctx->code.write_p += 2;
}
void emit_thumb_addh16 (
	mambo_context *ctx,
	unsigned int dn,
	unsigned int rm,
	unsigned int rdn
)
{
	thumb_addh16((uint16_t **)(&ctx->code.write_p), dn, rm, rdn);
	ctx->code.write_p += 2;
}
void emit_thumb_addi16 (
	mambo_context *ctx,
	unsigned int imm3,
	unsigned int rn,
	unsigned int rd
)
{
	thumb_addi16((uint16_t **)(&ctx->code.write_p), imm3, rn, rd);
	ctx->code.write_p += 2;
}
void emit_thumb_addri16 (
	mambo_context *ctx,
	unsigned int rdn,
	unsigned int imm8
)
{
	thumb_addri16((uint16_t **)(&ctx->code.write_p), rdn, imm8);
	ctx->code.write_p += 2;
}
void emit_thumb_add_sp_i16 (
	mambo_context *ctx,
	unsigned int imm7
)
{
	thumb_add_sp_i16((uint16_t **)(&ctx->code.write_p), imm7);
	ctx->code.write_p += 2;
}
void emit_thumb_and16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rdn
)
{
	thumb_and16((uint16_t **)(&ctx->code.write_p), rm, rdn);
	ctx->code.write_p += 2;
}
void emit_thumb_asr16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rdn
)
{
	thumb_asr16((uint16_t **)(&ctx->code.write_p), rm, rdn);
	ctx->code.write_p += 2;
}
void emit_thumb_asri16 (
	mambo_context *ctx,
	unsigned int imm5,
	unsigned int rm,
	unsigned int rd
)
{
	thumb_asri16((uint16_t **)(&ctx->code.write_p), imm5, rm, rd);
	ctx->code.write_p += 2;
}
void emit_thumb_b16 (
	mambo_context *ctx,
	unsigned int imm11
)
{
	thumb_b16((uint16_t **)(&ctx->code.write_p), imm11);
	ctx->code.write_p += 2;
}
void emit_thumb_bic16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rdn
)
{
	thumb_bic16((uint16_t **)(&ctx->code.write_p), rm, rdn);
	ctx->code.write_p += 2;
}
void emit_thumb_bkpt16 (
	mambo_context *ctx,
	unsigned int imm8
)
{
	thumb_bkpt16((uint16_t **)(&ctx->code.write_p), imm8);
	ctx->code.write_p += 2;
}
void emit_thumb_b_cond16 (
	mambo_context *ctx,
	unsigned int condition,
	unsigned int imm8
)
{
	thumb_b_cond16((uint16_t **)(&ctx->code.write_p), condition, imm8);
	ctx->code.write_p += 2;
}
void emit_thumb_blx16 (
	mambo_context *ctx,
	unsigned int rm
)
{
	thumb_blx16((uint16_t **)(&ctx->code.write_p), rm);
	ctx->code.write_p += 2;
}
void emit_thumb_bx16 (
	mambo_context *ctx,
	unsigned int rm
)
{
	thumb_bx16((uint16_t **)(&ctx->code.write_p), rm);
	ctx->code.write_p += 2;
}
void emit_thumb_cbnz16 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int imm5,
	unsigned int rn
)
{
	thumb_cbnz16((uint16_t **)(&ctx->code.write_p), imm1, imm5, rn);
	ctx->code.write_p += 2;
}
void emit_thumb_cbz16 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int imm5,
	unsigned int rn
)
{
	thumb_cbz16((uint16_t **)(&ctx->code.write_p), imm1, imm5, rn);
	ctx->code.write_p += 2;
}
void emit_thumb_cmn16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rdn
)
{
	thumb_cmn16((uint16_t **)(&ctx->code.write_p), rm, rdn);
	ctx->code.write_p += 2;
}
void emit_thumb_cmp16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rdn
)
{
	thumb_cmp16((uint16_t **)(&ctx->code.write_p), rm, rdn);
	ctx->code.write_p += 2;
}
void emit_thumb_cmph16 (
	mambo_context *ctx,
	unsigned int dn,
	unsigned int rm,
	unsigned int rdn
)
{
	thumb_cmph16((uint16_t **)(&ctx->code.write_p), dn, rm, rdn);
	ctx->code.write_p += 2;
}
void emit_thumb_cmpri16 (
	mambo_context *ctx,
	unsigned int rdn,
	unsigned int imm8
)
{
	thumb_cmpri16((uint16_t **)(&ctx->code.write_p), rdn, imm8);
	ctx->code.write_p += 2;
}
void emit_thumb_eor16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rdn
)
{
	thumb_eor16((uint16_t **)(&ctx->code.write_p), rm, rdn);
	ctx->code.write_p += 2;
}
void emit_thumb_it16 (
	mambo_context *ctx,
	unsigned int cond,
	unsigned int mask
)
{
	thumb_it16((uint16_t **)(&ctx->code.write_p), cond, mask);
	ctx->code.write_p += 2;
}
void emit_thumb_ldmfd16 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int reglist
)
{
	thumb_ldmfd16((uint16_t **)(&ctx->code.write_p), rn, reglist);
	ctx->code.write_p += 2;
}
void emit_thumb_ldr16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
)
{
	thumb_ldr16((uint16_t **)(&ctx->code.write_p), rm, rn, rd);
	ctx->code.write_p += 2;
}
void emit_thumb_ldrb16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
)
{
	thumb_ldrb16((uint16_t **)(&ctx->code.write_p), rm, rn, rd);
	ctx->code.write_p += 2;
}
void emit_thumb_ldrbi16 (
	mambo_context *ctx,
	unsigned int imm5,
	unsigned int rn,
	unsigned int rd
)
{
	thumb_ldrbi16((uint16_t **)(&ctx->code.write_p), imm5, rn, rd);
	ctx->code.write_p += 2;
}
void emit_thumb_ldrh16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
)
{
	thumb_ldrh16((uint16_t **)(&ctx->code.write_p), rm, rn, rd);
	ctx->code.write_p += 2;
}
void emit_thumb_ldrhi16 (
	mambo_context *ctx,
	unsigned int imm5,
	unsigned int rn,
	unsigned int rd
)
{
	thumb_ldrhi16((uint16_t **)(&ctx->code.write_p), imm5, rn, rd);
	ctx->code.write_p += 2;
}
void emit_thumb_ldri16 (
	mambo_context *ctx,
	unsigned int imm5,
	unsigned int rn,
	unsigned int rd
)
{
	thumb_ldri16((uint16_t **)(&ctx->code.write_p), imm5, rn, rd);
	ctx->code.write_p += 2;
}
void emit_thumb_ldr_pc_16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int imm8
)
{
	thumb_ldr_pc_16((uint16_t **)(&ctx->code.write_p), rd, imm8);
	ctx->code.write_p += 2;
}
void emit_thumb_ldrsb16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
)
{
	thumb_ldrsb16((uint16_t **)(&ctx->code.write_p), rm, rn, rd);
	ctx->code.write_p += 2;
}
void emit_thumb_ldrsh16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
)
{
	thumb_ldrsh16((uint16_t **)(&ctx->code.write_p), rm, rn, rd);
	ctx->code.write_p += 2;
}
void emit_thumb_ldr_sp16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int imm8
)
{
	thumb_ldr_sp16((uint16_t **)(&ctx->code.write_p), rd, imm8);
	ctx->code.write_p += 2;
}
void emit_thumb_lsl16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rdn
)
{
	thumb_lsl16((uint16_t **)(&ctx->code.write_p), rm, rdn);
	ctx->code.write_p += 2;
}
void emit_thumb_lsli16 (
	mambo_context *ctx,
	unsigned int imm5,
	unsigned int rm,
	unsigned int rd
)
{
	thumb_lsli16((uint16_t **)(&ctx->code.write_p), imm5, rm, rd);
	ctx->code.write_p += 2;
}
void emit_thumb_lsr16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rdn
)
{
	thumb_lsr16((uint16_t **)(&ctx->code.write_p), rm, rdn);
	ctx->code.write_p += 2;
}
void emit_thumb_lsri16 (
	mambo_context *ctx,
	unsigned int imm5,
	unsigned int rm,
	unsigned int rd
)
{
	thumb_lsri16((uint16_t **)(&ctx->code.write_p), imm5, rm, rd);
	ctx->code.write_p += 2;
}
void emit_thumb_movh16 (
	mambo_context *ctx,
	unsigned int dn,
	unsigned int rm,
	unsigned int rdn
)
{
	thumb_movh16((uint16_t **)(&ctx->code.write_p), dn, rm, rdn);
	ctx->code.write_p += 2;
}
void emit_thumb_movi16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rd
)
{
	thumb_movi16((uint16_t **)(&ctx->code.write_p), rm, rd);
	ctx->code.write_p += 2;
}
void emit_thumb_movri16 (
	mambo_context *ctx,
	unsigned int rdn,
	unsigned int imm8
)
{
	thumb_movri16((uint16_t **)(&ctx->code.write_p), rdn, imm8);
	ctx->code.write_p += 2;
}
void emit_thumb_mul16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rdn
)
{
	thumb_mul16((uint16_t **)(&ctx->code.write_p), rm, rdn);
	ctx->code.write_p += 2;
}
void emit_thumb_mvn16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rdn
)
{
	thumb_mvn16((uint16_t **)(&ctx->code.write_p), rm, rdn);
	ctx->code.write_p += 2;
}
void emit_thumb_nop16 (
	mambo_context *ctx
)
{
	thumb_nop16((uint16_t **)(&ctx->code.write_p));
	ctx->code.write_p += 2;
}
void emit_thumb_orr16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rdn
)
{
	thumb_orr16((uint16_t **)(&ctx->code.write_p), rm, rdn);
	ctx->code.write_p += 2;
}
void emit_thumb_pop16 (
	mambo_context *ctx,
	unsigned int reg
)
{
	thumb_pop16((uint16_t **)(&ctx->code.write_p), reg);
	ctx->code.write_p += 2;
}
void emit_thumb_push16 (
	mambo_context *ctx,
	unsigned int reg
)
{
	thumb_push16((uint16_t **)(&ctx->code.write_p), reg);
	ctx->code.write_p += 2;
}
void emit_thumb_rev16 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd
)
{
	thumb_rev16((uint16_t **)(&ctx->code.write_p), rn, rd);
	ctx->code.write_p += 2;
}
void emit_thumb_rev1616 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd
)
{
	thumb_rev1616((uint16_t **)(&ctx->code.write_p), rn, rd);
	ctx->code.write_p += 2;
}
void emit_thumb_revsh16 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd
)
{
	thumb_revsh16((uint16_t **)(&ctx->code.write_p), rn, rd);
	ctx->code.write_p += 2;
}
void emit_thumb_ror16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rdn
)
{
	thumb_ror16((uint16_t **)(&ctx->code.write_p), rm, rdn);
	ctx->code.write_p += 2;
}
void emit_thumb_rsbi16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rdn
)
{
	thumb_rsbi16((uint16_t **)(&ctx->code.write_p), rm, rdn);
	ctx->code.write_p += 2;
}
void emit_thumb_sbc16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rdn
)
{
	thumb_sbc16((uint16_t **)(&ctx->code.write_p), rm, rdn);
	ctx->code.write_p += 2;
}
void emit_thumb_setend16 (
	mambo_context *ctx,
	unsigned int is_bigend
)
{
	thumb_setend16((uint16_t **)(&ctx->code.write_p), is_bigend);
	ctx->code.write_p += 2;
}
void emit_thumb_sev16 (
	mambo_context *ctx
)
{
	thumb_sev16((uint16_t **)(&ctx->code.write_p));
	ctx->code.write_p += 2;
}
void emit_thumb_stmea16 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int reglist
)
{
	thumb_stmea16((uint16_t **)(&ctx->code.write_p), rn, reglist);
	ctx->code.write_p += 2;
}
void emit_thumb_str16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
)
{
	thumb_str16((uint16_t **)(&ctx->code.write_p), rm, rn, rd);
	ctx->code.write_p += 2;
}
void emit_thumb_strb16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
)
{
	thumb_strb16((uint16_t **)(&ctx->code.write_p), rm, rn, rd);
	ctx->code.write_p += 2;
}
void emit_thumb_strbi16 (
	mambo_context *ctx,
	unsigned int imm5,
	unsigned int rn,
	unsigned int rd
)
{
	thumb_strbi16((uint16_t **)(&ctx->code.write_p), imm5, rn, rd);
	ctx->code.write_p += 2;
}
void emit_thumb_strh16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
)
{
	thumb_strh16((uint16_t **)(&ctx->code.write_p), rm, rn, rd);
	ctx->code.write_p += 2;
}
void emit_thumb_strhi16 (
	mambo_context *ctx,
	unsigned int imm5,
	unsigned int rn,
	unsigned int rd
)
{
	thumb_strhi16((uint16_t **)(&ctx->code.write_p), imm5, rn, rd);
	ctx->code.write_p += 2;
}
void emit_thumb_stri16 (
	mambo_context *ctx,
	unsigned int imm5,
	unsigned int rn,
	unsigned int rd
)
{
	thumb_stri16((uint16_t **)(&ctx->code.write_p), imm5, rn, rd);
	ctx->code.write_p += 2;
}
void emit_thumb_str_sp16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int imm8
)
{
	thumb_str_sp16((uint16_t **)(&ctx->code.write_p), rd, imm8);
	ctx->code.write_p += 2;
}
void emit_thumb_sub16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
)
{
	thumb_sub16((uint16_t **)(&ctx->code.write_p), rm, rn, rd);
	ctx->code.write_p += 2;
}
void emit_thumb_subi16 (
	mambo_context *ctx,
	unsigned int imm3,
	unsigned int rn,
	unsigned int rd
)
{
	thumb_subi16((uint16_t **)(&ctx->code.write_p), imm3, rn, rd);
	ctx->code.write_p += 2;
}
void emit_thumb_subri16 (
	mambo_context *ctx,
	unsigned int rdn,
	unsigned int imm8
)
{
	thumb_subri16((uint16_t **)(&ctx->code.write_p), rdn, imm8);
	ctx->code.write_p += 2;
}
void emit_thumb_sub_sp_i16 (
	mambo_context *ctx,
	unsigned int imm7
)
{
	thumb_sub_sp_i16((uint16_t **)(&ctx->code.write_p), imm7);
	ctx->code.write_p += 2;
}
void emit_thumb_svc16 (
	mambo_context *ctx,
	unsigned int imm8
)
{
	thumb_svc16((uint16_t **)(&ctx->code.write_p), imm8);
	ctx->code.write_p += 2;
}
void emit_thumb_sxtb16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rd
)
{
	thumb_sxtb16((uint16_t **)(&ctx->code.write_p), rm, rd);
	ctx->code.write_p += 2;
}
void emit_thumb_sxth16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rd
)
{
	thumb_sxth16((uint16_t **)(&ctx->code.write_p), rm, rd);
	ctx->code.write_p += 2;
}
void emit_thumb_tst16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rdn
)
{
	thumb_tst16((uint16_t **)(&ctx->code.write_p), rm, rdn);
	ctx->code.write_p += 2;
}
void emit_thumb_udf16 (
	mambo_context *ctx,
	unsigned int imm8
)
{
	thumb_udf16((uint16_t **)(&ctx->code.write_p), imm8);
	ctx->code.write_p += 2;
}
void emit_thumb_uxtb16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rd
)
{
	thumb_uxtb16((uint16_t **)(&ctx->code.write_p), rm, rd);
	ctx->code.write_p += 2;
}
void emit_thumb_uxth16 (
	mambo_context *ctx,
	unsigned int rm,
	unsigned int rd
)
{
	thumb_uxth16((uint16_t **)(&ctx->code.write_p), rm, rd);
	ctx->code.write_p += 2;
}
void emit_thumb_wfe16 (
	mambo_context *ctx
)
{
	thumb_wfe16((uint16_t **)(&ctx->code.write_p));
	ctx->code.write_p += 2;
}
void emit_thumb_wfi16 (
	mambo_context *ctx
)
{
	thumb_wfi16((uint16_t **)(&ctx->code.write_p));
	ctx->code.write_p += 2;
}
void emit_thumb_yield16 (
	mambo_context *ctx
)
{
	thumb_yield16((uint16_t **)(&ctx->code.write_p));
	ctx->code.write_p += 2;
}
void emit_thumb_adc32 (
	mambo_context *ctx,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
)
{
	thumb_adc32((uint16_t **)(&ctx->code.write_p), set_flags, rn, imm3, rd, imm2, shift_type, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_adci32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
)
{
	thumb_adci32((uint16_t **)(&ctx->code.write_p), imm1, set_condition, rn, imm3, rd, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_add32 (
	mambo_context *ctx,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
)
{
	thumb_add32((uint16_t **)(&ctx->code.write_p), set_flags, rn, imm3, rd, imm2, shift_type, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_addi32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
)
{
	thumb_addi32((uint16_t **)(&ctx->code.write_p), imm1, set_condition, rn, imm3, rd, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_addwi32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
)
{
	thumb_addwi32((uint16_t **)(&ctx->code.write_p), imm1, rn, imm3, rd, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_adrwi_post32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
)
{
	thumb_adrwi_post32((uint16_t **)(&ctx->code.write_p), imm1, rn, imm3, rd, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_adrwi_pre32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
)
{
	thumb_adrwi_pre32((uint16_t **)(&ctx->code.write_p), imm1, rn, imm3, rd, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_and32 (
	mambo_context *ctx,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
)
{
	thumb_and32((uint16_t **)(&ctx->code.write_p), set_flags, rn, imm3, rd, imm2, shift_type, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_andi32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
)
{
	thumb_andi32((uint16_t **)(&ctx->code.write_p), imm1, set_condition, rn, imm3, rd, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_asr32 (
	mambo_context *ctx,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
)
{
	thumb_asr32((uint16_t **)(&ctx->code.write_p), set_flags, rn, rd, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_asri32 (
	mambo_context *ctx,
	unsigned int set_flags,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int rm
)
{
	thumb_asri32((uint16_t **)(&ctx->code.write_p), set_flags, imm3, rd, imm2, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_b32 (
	mambo_context *ctx,
	unsigned int sign_bit,
	unsigned int offset_high,
	unsigned int j1,
	unsigned int j2,
	unsigned int offset_low
)
{
	thumb_b32((uint16_t **)(&ctx->code.write_p), sign_bit, offset_high, j1, j2, offset_low);
	ctx->code.write_p += 4;
}
void emit_thumb_b_cond32 (
	mambo_context *ctx,
	unsigned int sign_bit,
	unsigned int condition,
	unsigned int offset_high,
	unsigned int j1,
	unsigned int j2,
	unsigned int offset_low
)
{
	thumb_b_cond32((uint16_t **)(&ctx->code.write_p), sign_bit, condition, offset_high, j1, j2, offset_low);
	ctx->code.write_p += 4;
}
void emit_thumb_bfc32 (
	mambo_context *ctx,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int imm5
)
{
	thumb_bfc32((uint16_t **)(&ctx->code.write_p), imm3, rd, imm2, imm5);
	ctx->code.write_p += 4;
}
void emit_thumb_bfi32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int imm5
)
{
	thumb_bfi32((uint16_t **)(&ctx->code.write_p), rn, imm3, rd, imm2, imm5);
	ctx->code.write_p += 4;
}
void emit_thumb_bic32 (
	mambo_context *ctx,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
)
{
	thumb_bic32((uint16_t **)(&ctx->code.write_p), set_flags, rn, imm3, rd, imm2, shift_type, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_bici32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
)
{
	thumb_bici32((uint16_t **)(&ctx->code.write_p), imm1, set_condition, rn, imm3, rd, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_bl32 (
	mambo_context *ctx,
	unsigned int sign_bit,
	unsigned int offset_high,
	unsigned int j1,
	unsigned int j2,
	unsigned int offset_low
)
{
	thumb_bl32((uint16_t **)(&ctx->code.write_p), sign_bit, offset_high, j1, j2, offset_low);
	ctx->code.write_p += 4;
}
void emit_thumb_bl_arm32 (
	mambo_context *ctx,
	unsigned int sign_bit,
	unsigned int offset_high,
	unsigned int j1,
	unsigned int j2,
	unsigned int offset_low
)
{
	thumb_bl_arm32((uint16_t **)(&ctx->code.write_p), sign_bit, offset_high, j1, j2, offset_low);
	ctx->code.write_p += 4;
}
void emit_thumb_cdp32 (
	mambo_context *ctx,
	unsigned int coproc,
	unsigned int opc1,
	unsigned int crd,
	unsigned int crn,
	unsigned int crm,
	unsigned int opc2
)
{
	thumb_cdp32((uint16_t **)(&ctx->code.write_p), coproc, opc1, crd, crn, crm, opc2);
	ctx->code.write_p += 4;
}
void emit_thumb_cdp232 (
	mambo_context *ctx,
	unsigned int coproc,
	unsigned int opc1,
	unsigned int crd,
	unsigned int crn,
	unsigned int crm,
	unsigned int opc2
)
{
	thumb_cdp232((uint16_t **)(&ctx->code.write_p), coproc, opc1, crd, crn, crm, opc2);
	ctx->code.write_p += 4;
}
void emit_thumb_clrex32 (
	mambo_context *ctx,
	unsigned int option
)
{
	thumb_clrex32((uint16_t **)(&ctx->code.write_p), option);
	ctx->code.write_p += 4;
}
void emit_thumb_clz32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
)
{
	thumb_clz32((uint16_t **)(&ctx->code.write_p), rn, rd, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_cmn32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int imm3,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
)
{
	thumb_cmn32((uint16_t **)(&ctx->code.write_p), rn, imm3, imm2, shift_type, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_cmni32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int rn,
	unsigned int imm3,
	unsigned int imm8
)
{
	thumb_cmni32((uint16_t **)(&ctx->code.write_p), imm1, rn, imm3, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_cmp32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int imm3,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
)
{
	thumb_cmp32((uint16_t **)(&ctx->code.write_p), rn, imm3, imm2, shift_type, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_cmpi32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int rn,
	unsigned int imm3,
	unsigned int imm8
)
{
	thumb_cmpi32((uint16_t **)(&ctx->code.write_p), imm1, rn, imm3, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_dbg32 (
	mambo_context *ctx,
	unsigned int option
)
{
	thumb_dbg32((uint16_t **)(&ctx->code.write_p), option);
	ctx->code.write_p += 4;
}
void emit_thumb_dmb32 (
	mambo_context *ctx,
	unsigned int option
)
{
	thumb_dmb32((uint16_t **)(&ctx->code.write_p), option);
	ctx->code.write_p += 4;
}
void emit_thumb_dsb32 (
	mambo_context *ctx,
	unsigned int option
)
{
	thumb_dsb32((uint16_t **)(&ctx->code.write_p), option);
	ctx->code.write_p += 4;
}
void emit_thumb_eor32 (
	mambo_context *ctx,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
)
{
	thumb_eor32((uint16_t **)(&ctx->code.write_p), set_flags, rn, imm3, rd, imm2, shift_type, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_eori32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
)
{
	thumb_eori32((uint16_t **)(&ctx->code.write_p), imm1, set_condition, rn, imm3, rd, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_isb32 (
	mambo_context *ctx,
	unsigned int option
)
{
	thumb_isb32((uint16_t **)(&ctx->code.write_p), option);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_ldc32((uint16_t **)(&ctx->code.write_p), coproc, d, crd, rn, pre_index, upwards, writeback, imm8);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_ldc232((uint16_t **)(&ctx->code.write_p), coproc, d, crd, rn, pre_index, upwards, writeback, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_ldmea32 (
	mambo_context *ctx,
	unsigned int writeback,
	unsigned int rn,
	unsigned int reglist
)
{
	thumb_ldmea32((uint16_t **)(&ctx->code.write_p), writeback, rn, reglist);
	ctx->code.write_p += 4;
}
void emit_thumb_ldmfd32 (
	mambo_context *ctx,
	unsigned int writeback,
	unsigned int rn,
	unsigned int reglist
)
{
	thumb_ldmfd32((uint16_t **)(&ctx->code.write_p), writeback, rn, reglist);
	ctx->code.write_p += 4;
}
void emit_thumb_ldr32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rt,
	unsigned int shift,
	unsigned int rm
)
{
	thumb_ldr32((uint16_t **)(&ctx->code.write_p), rn, rt, shift, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_ldrb32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rt,
	unsigned int shift,
	unsigned int rm
)
{
	thumb_ldrb32((uint16_t **)(&ctx->code.write_p), rn, rt, shift, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_ldrbi32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback
)
{
	thumb_ldrbi32((uint16_t **)(&ctx->code.write_p), rt, rn, imm8, pre_index, upwards, writeback);
	ctx->code.write_p += 4;
}
void emit_thumb_ldrbl32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int imm12,
	unsigned int upwards
)
{
	thumb_ldrbl32((uint16_t **)(&ctx->code.write_p), rt, imm12, upwards);
	ctx->code.write_p += 4;
}
void emit_thumb_ldrbwi32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm12
)
{
	thumb_ldrbwi32((uint16_t **)(&ctx->code.write_p), rt, rn, imm12);
	ctx->code.write_p += 4;
}
void emit_thumb_ldrbt32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8
)
{
	thumb_ldrbt32((uint16_t **)(&ctx->code.write_p), rt, rn, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_ldrd32 (
	mambo_context *ctx,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback,
	unsigned int rn,
	unsigned int rt,
	unsigned int rd,
	unsigned int imm8
)
{
	thumb_ldrd32((uint16_t **)(&ctx->code.write_p), pre_index, upwards, writeback, rn, rt, rd, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_ldrex32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rt,
	unsigned int imm8
)
{
	thumb_ldrex32((uint16_t **)(&ctx->code.write_p), rn, rt, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_ldrexb32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rt
)
{
	thumb_ldrexb32((uint16_t **)(&ctx->code.write_p), rn, rt);
	ctx->code.write_p += 4;
}
void emit_thumb_ldrexd32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rt,
	unsigned int rt2
)
{
	thumb_ldrexd32((uint16_t **)(&ctx->code.write_p), rn, rt, rt2);
	ctx->code.write_p += 4;
}
void emit_thumb_ldrexh32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rt
)
{
	thumb_ldrexh32((uint16_t **)(&ctx->code.write_p), rn, rt);
	ctx->code.write_p += 4;
}
void emit_thumb_ldrh32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rt,
	unsigned int shift,
	unsigned int rm
)
{
	thumb_ldrh32((uint16_t **)(&ctx->code.write_p), rn, rt, shift, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_ldrhi32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback
)
{
	thumb_ldrhi32((uint16_t **)(&ctx->code.write_p), rt, rn, imm8, pre_index, upwards, writeback);
	ctx->code.write_p += 4;
}
void emit_thumb_ldrhl32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int imm12,
	unsigned int upwards
)
{
	thumb_ldrhl32((uint16_t **)(&ctx->code.write_p), rt, imm12, upwards);
	ctx->code.write_p += 4;
}
void emit_thumb_ldrhwi32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm12
)
{
	thumb_ldrhwi32((uint16_t **)(&ctx->code.write_p), rt, rn, imm12);
	ctx->code.write_p += 4;
}
void emit_thumb_ldrht32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8
)
{
	thumb_ldrht32((uint16_t **)(&ctx->code.write_p), rt, rn, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_ldri32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback
)
{
	thumb_ldri32((uint16_t **)(&ctx->code.write_p), rt, rn, imm8, pre_index, upwards, writeback);
	ctx->code.write_p += 4;
}
void emit_thumb_ldrl32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int imm12,
	unsigned int upwards
)
{
	thumb_ldrl32((uint16_t **)(&ctx->code.write_p), rt, imm12, upwards);
	ctx->code.write_p += 4;
}
void emit_thumb_ldrsb32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rt,
	unsigned int shift,
	unsigned int rm
)
{
	thumb_ldrsb32((uint16_t **)(&ctx->code.write_p), rn, rt, shift, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_ldrsbi32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback
)
{
	thumb_ldrsbi32((uint16_t **)(&ctx->code.write_p), rt, rn, imm8, pre_index, upwards, writeback);
	ctx->code.write_p += 4;
}
void emit_thumb_ldrsbl32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int imm12,
	unsigned int upwards
)
{
	thumb_ldrsbl32((uint16_t **)(&ctx->code.write_p), rt, imm12, upwards);
	ctx->code.write_p += 4;
}
void emit_thumb_ldrsbwi32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm12
)
{
	thumb_ldrsbwi32((uint16_t **)(&ctx->code.write_p), rt, rn, imm12);
	ctx->code.write_p += 4;
}
void emit_thumb_ldrsbt32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8
)
{
	thumb_ldrsbt32((uint16_t **)(&ctx->code.write_p), rt, rn, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_ldrsh32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rt,
	unsigned int shift,
	unsigned int rm
)
{
	thumb_ldrsh32((uint16_t **)(&ctx->code.write_p), rn, rt, shift, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_ldrshi32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback
)
{
	thumb_ldrshi32((uint16_t **)(&ctx->code.write_p), rt, rn, imm8, pre_index, upwards, writeback);
	ctx->code.write_p += 4;
}
void emit_thumb_ldrshl32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int imm12,
	unsigned int upwards
)
{
	thumb_ldrshl32((uint16_t **)(&ctx->code.write_p), rt, imm12, upwards);
	ctx->code.write_p += 4;
}
void emit_thumb_ldrshwi32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm12
)
{
	thumb_ldrshwi32((uint16_t **)(&ctx->code.write_p), rt, rn, imm12);
	ctx->code.write_p += 4;
}
void emit_thumb_ldrsht32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8
)
{
	thumb_ldrsht32((uint16_t **)(&ctx->code.write_p), rt, rn, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_ldrt32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8
)
{
	thumb_ldrt32((uint16_t **)(&ctx->code.write_p), rt, rn, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_ldrwi32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm12
)
{
	thumb_ldrwi32((uint16_t **)(&ctx->code.write_p), rt, rn, imm12);
	ctx->code.write_p += 4;
}
void emit_thumb_lsl32 (
	mambo_context *ctx,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
)
{
	thumb_lsl32((uint16_t **)(&ctx->code.write_p), set_flags, rn, rd, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_lsli32 (
	mambo_context *ctx,
	unsigned int set_flags,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int rm
)
{
	thumb_lsli32((uint16_t **)(&ctx->code.write_p), set_flags, imm3, rd, imm2, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_lsr32 (
	mambo_context *ctx,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
)
{
	thumb_lsr32((uint16_t **)(&ctx->code.write_p), set_flags, rn, rd, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_lsri32 (
	mambo_context *ctx,
	unsigned int set_flags,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int rm
)
{
	thumb_lsri32((uint16_t **)(&ctx->code.write_p), set_flags, imm3, rd, imm2, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_mcr32 (
	mambo_context *ctx,
	unsigned int opc1,
	unsigned int crn,
	unsigned int rt,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
)
{
	thumb_mcr32((uint16_t **)(&ctx->code.write_p), opc1, crn, rt, coproc, opc2, crm);
	ctx->code.write_p += 4;
}
void emit_thumb_mcr232 (
	mambo_context *ctx,
	unsigned int opc1,
	unsigned int crn,
	unsigned int rt,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
)
{
	thumb_mcr232((uint16_t **)(&ctx->code.write_p), opc1, crn, rt, coproc, opc2, crm);
	ctx->code.write_p += 4;
}
void emit_thumb_mcrr32 (
	mambo_context *ctx,
	unsigned int coproc,
	unsigned int opc1,
	unsigned int rt,
	unsigned int rt2,
	unsigned int crm
)
{
	thumb_mcrr32((uint16_t **)(&ctx->code.write_p), coproc, opc1, rt, rt2, crm);
	ctx->code.write_p += 4;
}
void emit_thumb_mcrr232 (
	mambo_context *ctx,
	unsigned int coproc,
	unsigned int opc1,
	unsigned int rt,
	unsigned int rt2,
	unsigned int crm
)
{
	thumb_mcrr232((uint16_t **)(&ctx->code.write_p), coproc, opc1, rt, rt2, crm);
	ctx->code.write_p += 4;
}
void emit_thumb_mla32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int racc,
	unsigned int rd,
	unsigned int rm
)
{
	thumb_mla32((uint16_t **)(&ctx->code.write_p), rn, racc, rd, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_mls32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int racc,
	unsigned int rd,
	unsigned int rm
)
{
	thumb_mls32((uint16_t **)(&ctx->code.write_p), rn, racc, rd, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_mov32 (
	mambo_context *ctx,
	unsigned int set_flags,
	unsigned int rd,
	unsigned int rm
)
{
	thumb_mov32((uint16_t **)(&ctx->code.write_p), set_flags, rd, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_movi32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
)
{
	thumb_movi32((uint16_t **)(&ctx->code.write_p), imm1, set_condition, imm3, rd, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_movwi32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int imm4,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
)
{
	thumb_movwi32((uint16_t **)(&ctx->code.write_p), imm1, imm4, imm3, rd, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_movti32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int imm4,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
)
{
	thumb_movti32((uint16_t **)(&ctx->code.write_p), imm1, imm4, imm3, rd, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_mrc32 (
	mambo_context *ctx,
	unsigned int opc1,
	unsigned int crn,
	unsigned int rt,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
)
{
	thumb_mrc32((uint16_t **)(&ctx->code.write_p), opc1, crn, rt, coproc, opc2, crm);
	ctx->code.write_p += 4;
}
void emit_thumb_mrc232 (
	mambo_context *ctx,
	unsigned int opc1,
	unsigned int crn,
	unsigned int rt,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
)
{
	thumb_mrc232((uint16_t **)(&ctx->code.write_p), opc1, crn, rt, coproc, opc2, crm);
	ctx->code.write_p += 4;
}
void emit_thumb_mrrc32 (
	mambo_context *ctx,
	unsigned int coproc,
	unsigned int opc,
	unsigned int rt,
	unsigned int rt2,
	unsigned int crm
)
{
	thumb_mrrc32((uint16_t **)(&ctx->code.write_p), coproc, opc, rt, rt2, crm);
	ctx->code.write_p += 4;
}
void emit_thumb_mrrc232 (
	mambo_context *ctx,
	unsigned int coproc,
	unsigned int opc,
	unsigned int rt,
	unsigned int rt2,
	unsigned int crm
)
{
	thumb_mrrc232((uint16_t **)(&ctx->code.write_p), coproc, opc, rt, rt2, crm);
	ctx->code.write_p += 4;
}
void emit_thumb_mrs32 (
	mambo_context *ctx,
	unsigned int rd
)
{
	thumb_mrs32((uint16_t **)(&ctx->code.write_p), rd);
	ctx->code.write_p += 4;
}
void emit_thumb_msr32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int mask
)
{
	thumb_msr32((uint16_t **)(&ctx->code.write_p), rn, mask);
	ctx->code.write_p += 4;
}
void emit_thumb_mul32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
)
{
	thumb_mul32((uint16_t **)(&ctx->code.write_p), rn, rd, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_mvn32 (
	mambo_context *ctx,
	unsigned int set_flags,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
)
{
	thumb_mvn32((uint16_t **)(&ctx->code.write_p), set_flags, imm3, rd, imm2, shift_type, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_mvni32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
)
{
	thumb_mvni32((uint16_t **)(&ctx->code.write_p), imm1, set_condition, imm3, rd, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_nop32 (
	mambo_context *ctx
)
{
	thumb_nop32((uint16_t **)(&ctx->code.write_p));
	ctx->code.write_p += 4;
}
void emit_thumb_orn32 (
	mambo_context *ctx,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
)
{
	thumb_orn32((uint16_t **)(&ctx->code.write_p), set_flags, rn, imm3, rd, imm2, shift_type, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_orni32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
)
{
	thumb_orni32((uint16_t **)(&ctx->code.write_p), imm1, set_condition, rn, imm3, rd, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_orr32 (
	mambo_context *ctx,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
)
{
	thumb_orr32((uint16_t **)(&ctx->code.write_p), set_flags, rn, imm3, rd, imm2, shift_type, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_orri32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
)
{
	thumb_orri32((uint16_t **)(&ctx->code.write_p), imm1, set_condition, rn, imm3, rd, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_pkh32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
)
{
	thumb_pkh32((uint16_t **)(&ctx->code.write_p), rn, imm3, rd, imm2, shift_type, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_pld32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int shift,
	unsigned int rm
)
{
	thumb_pld32((uint16_t **)(&ctx->code.write_p), rn, shift, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_pldi32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int imm12
)
{
	thumb_pldi32((uint16_t **)(&ctx->code.write_p), rn, imm12);
	ctx->code.write_p += 4;
}
void emit_thumb_pldim32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int imm8
)
{
	thumb_pldim32((uint16_t **)(&ctx->code.write_p), rn, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_pld_lit32 (
	mambo_context *ctx,
	unsigned int upwards,
	unsigned int imm12
)
{
	thumb_pld_lit32((uint16_t **)(&ctx->code.write_p), upwards, imm12);
	ctx->code.write_p += 4;
}
void emit_thumb_pldw32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int shift,
	unsigned int rm
)
{
	thumb_pldw32((uint16_t **)(&ctx->code.write_p), rn, shift, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_pldwi32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int imm12
)
{
	thumb_pldwi32((uint16_t **)(&ctx->code.write_p), rn, imm12);
	ctx->code.write_p += 4;
}
void emit_thumb_pldwim32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int imm8
)
{
	thumb_pldwim32((uint16_t **)(&ctx->code.write_p), rn, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_pli32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rm,
	unsigned int shift
)
{
	thumb_pli32((uint16_t **)(&ctx->code.write_p), rn, rm, shift);
	ctx->code.write_p += 4;
}
void emit_thumb_plii32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int imm12
)
{
	thumb_plii32((uint16_t **)(&ctx->code.write_p), rn, imm12);
	ctx->code.write_p += 4;
}
void emit_thumb_pliim32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int imm8
)
{
	thumb_pliim32((uint16_t **)(&ctx->code.write_p), rn, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_pli_lit32 (
	mambo_context *ctx,
	unsigned int upwards,
	unsigned int imm12
)
{
	thumb_pli_lit32((uint16_t **)(&ctx->code.write_p), upwards, imm12);
	ctx->code.write_p += 4;
}
void emit_thumb_qadd32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
)
{
	thumb_qadd32((uint16_t **)(&ctx->code.write_p), rn, rd, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_qadd1632 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_qadd1632((uint16_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_qadd832 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_qadd832((uint16_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_qasx32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_qasx32((uint16_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_qdadd32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
)
{
	thumb_qdadd32((uint16_t **)(&ctx->code.write_p), rn, rd, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_qdsub32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
)
{
	thumb_qdsub32((uint16_t **)(&ctx->code.write_p), rn, rd, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_qsax32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_qsax32((uint16_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_qsub32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
)
{
	thumb_qsub32((uint16_t **)(&ctx->code.write_p), rn, rd, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_qsub1632 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_qsub1632((uint16_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_qsub832 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_qsub832((uint16_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_rbit32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
)
{
	thumb_rbit32((uint16_t **)(&ctx->code.write_p), rn, rd, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_rev32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
)
{
	thumb_rev32((uint16_t **)(&ctx->code.write_p), rn, rd, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_rev1632 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
)
{
	thumb_rev1632((uint16_t **)(&ctx->code.write_p), rn, rd, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_revsh32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
)
{
	thumb_revsh32((uint16_t **)(&ctx->code.write_p), rn, rd, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_ror32 (
	mambo_context *ctx,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
)
{
	thumb_ror32((uint16_t **)(&ctx->code.write_p), set_flags, rn, rd, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_rori32 (
	mambo_context *ctx,
	unsigned int set_flags,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int rm
)
{
	thumb_rori32((uint16_t **)(&ctx->code.write_p), set_flags, imm3, rd, imm2, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_rrx32 (
	mambo_context *ctx,
	unsigned int set_flags,
	unsigned int rd,
	unsigned int rm
)
{
	thumb_rrx32((uint16_t **)(&ctx->code.write_p), set_flags, rd, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_rsb32 (
	mambo_context *ctx,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
)
{
	thumb_rsb32((uint16_t **)(&ctx->code.write_p), set_flags, rn, imm3, rd, imm2, shift_type, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_rsbi32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
)
{
	thumb_rsbi32((uint16_t **)(&ctx->code.write_p), imm1, set_condition, rn, imm3, rd, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_sadd1632 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_sadd1632((uint16_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_sadd832 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_sadd832((uint16_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_sasx32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_sasx32((uint16_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_sbc32 (
	mambo_context *ctx,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
)
{
	thumb_sbc32((uint16_t **)(&ctx->code.write_p), set_flags, rn, imm3, rd, imm2, shift_type, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_sbci32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
)
{
	thumb_sbci32((uint16_t **)(&ctx->code.write_p), imm1, set_condition, rn, imm3, rd, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_sbfx32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int imm5
)
{
	thumb_sbfx32((uint16_t **)(&ctx->code.write_p), rn, imm3, rd, imm2, imm5);
	ctx->code.write_p += 4;
}
void emit_thumb_sdiv32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rdhi,
	unsigned int rm
)
{
	thumb_sdiv32((uint16_t **)(&ctx->code.write_p), rn, rdhi, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_sel32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
)
{
	thumb_sel32((uint16_t **)(&ctx->code.write_p), rn, rd, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_sev32 (
	mambo_context *ctx
)
{
	thumb_sev32((uint16_t **)(&ctx->code.write_p));
	ctx->code.write_p += 4;
}
void emit_thumb_shadd1632 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_shadd1632((uint16_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_shadd832 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_shadd832((uint16_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_shasx32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_shasx32((uint16_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_shsax32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_shsax32((uint16_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_shsub1632 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_shsub1632((uint16_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_shsub832 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_shsub832((uint16_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_simd_add_sub32 (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd,
	unsigned int pref,
	unsigned int rm
)
{
	thumb_simd_add_sub32((uint16_t **)(&ctx->code.write_p), opcode, rn, rd, pref, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_smlabb32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
)
{
	thumb_smlabb32((uint16_t **)(&ctx->code.write_p), rd, rn, rm, ra);
	ctx->code.write_p += 4;
}
void emit_thumb_smlabt32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
)
{
	thumb_smlabt32((uint16_t **)(&ctx->code.write_p), rd, rn, rm, ra);
	ctx->code.write_p += 4;
}
void emit_thumb_smlatb32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
)
{
	thumb_smlatb32((uint16_t **)(&ctx->code.write_p), rd, rn, rm, ra);
	ctx->code.write_p += 4;
}
void emit_thumb_smlatt32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
)
{
	thumb_smlatt32((uint16_t **)(&ctx->code.write_p), rd, rn, rm, ra);
	ctx->code.write_p += 4;
}
void emit_thumb_smlad32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int racc,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
)
{
	thumb_smlad32((uint16_t **)(&ctx->code.write_p), rn, racc, rd, opcode2, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_smlal32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rdlo,
	unsigned int rdhi,
	unsigned int rm
)
{
	thumb_smlal32((uint16_t **)(&ctx->code.write_p), rn, rdlo, rdhi, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_smlalbb32 (
	mambo_context *ctx,
	unsigned int rdlo,
	unsigned int rdhi,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_smlalbb32((uint16_t **)(&ctx->code.write_p), rdlo, rdhi, rn, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_smlalbt32 (
	mambo_context *ctx,
	unsigned int rdlo,
	unsigned int rdhi,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_smlalbt32((uint16_t **)(&ctx->code.write_p), rdlo, rdhi, rn, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_smlaltb32 (
	mambo_context *ctx,
	unsigned int rdlo,
	unsigned int rdhi,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_smlaltb32((uint16_t **)(&ctx->code.write_p), rdlo, rdhi, rn, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_smlaltt32 (
	mambo_context *ctx,
	unsigned int rdlo,
	unsigned int rdhi,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_smlaltt32((uint16_t **)(&ctx->code.write_p), rdlo, rdhi, rn, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_smlald32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rdlo,
	unsigned int rdhi,
	unsigned int m_swap,
	unsigned int rm
)
{
	thumb_smlald32((uint16_t **)(&ctx->code.write_p), rn, rdlo, rdhi, m_swap, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_smlawb32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
)
{
	thumb_smlawb32((uint16_t **)(&ctx->code.write_p), rd, rn, rm, ra);
	ctx->code.write_p += 4;
}
void emit_thumb_smlawt32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
)
{
	thumb_smlawt32((uint16_t **)(&ctx->code.write_p), rd, rn, rm, ra);
	ctx->code.write_p += 4;
}
void emit_thumb_smlsd32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int racc,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
)
{
	thumb_smlsd32((uint16_t **)(&ctx->code.write_p), rn, racc, rd, opcode2, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_smlsld32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rdlo,
	unsigned int rdhi,
	unsigned int m_swap,
	unsigned int rm
)
{
	thumb_smlsld32((uint16_t **)(&ctx->code.write_p), rn, rdlo, rdhi, m_swap, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_smmla32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int racc,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
)
{
	thumb_smmla32((uint16_t **)(&ctx->code.write_p), rn, racc, rd, opcode2, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_smmls32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int racc,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
)
{
	thumb_smmls32((uint16_t **)(&ctx->code.write_p), rn, racc, rd, opcode2, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_smmul32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
)
{
	thumb_smmul32((uint16_t **)(&ctx->code.write_p), rn, rd, opcode2, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_smuad32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
)
{
	thumb_smuad32((uint16_t **)(&ctx->code.write_p), rn, rd, opcode2, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_smulbb32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_smulbb32((uint16_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_smulbt32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_smulbt32((uint16_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_smultb32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_smultb32((uint16_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_smultt32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_smultt32((uint16_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_smull32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rdlo,
	unsigned int rdhi,
	unsigned int rm
)
{
	thumb_smull32((uint16_t **)(&ctx->code.write_p), rn, rdlo, rdhi, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_smulwb32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
)
{
	thumb_smulwb32((uint16_t **)(&ctx->code.write_p), rn, rd, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_smulwt32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
)
{
	thumb_smulwt32((uint16_t **)(&ctx->code.write_p), rn, rd, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_smusd32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
)
{
	thumb_smusd32((uint16_t **)(&ctx->code.write_p), rn, rd, opcode2, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_ssat1632 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd
)
{
	thumb_ssat1632((uint16_t **)(&ctx->code.write_p), rn, rd);
	ctx->code.write_p += 4;
}
void emit_thumb_ssat_asr32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int imm5
)
{
	thumb_ssat_asr32((uint16_t **)(&ctx->code.write_p), rn, imm3, rd, imm2, imm5);
	ctx->code.write_p += 4;
}
void emit_thumb_ssat_lsl32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int imm5
)
{
	thumb_ssat_lsl32((uint16_t **)(&ctx->code.write_p), rn, imm3, rd, imm2, imm5);
	ctx->code.write_p += 4;
}
void emit_thumb_ssax32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_ssax32((uint16_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_ssub1632 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_ssub1632((uint16_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_ssub832 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_ssub832((uint16_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_stc32((uint16_t **)(&ctx->code.write_p), coproc, d, crd, rn, pre_index, upwards, writeback, imm8);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_stc232((uint16_t **)(&ctx->code.write_p), coproc, d, crd, rn, pre_index, upwards, writeback, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_stmea32 (
	mambo_context *ctx,
	unsigned int writeback,
	unsigned int rn,
	unsigned int reglist
)
{
	thumb_stmea32((uint16_t **)(&ctx->code.write_p), writeback, rn, reglist);
	ctx->code.write_p += 4;
}
void emit_thumb_stmfd32 (
	mambo_context *ctx,
	unsigned int writeback,
	unsigned int rn,
	unsigned int reglist
)
{
	thumb_stmfd32((uint16_t **)(&ctx->code.write_p), writeback, rn, reglist);
	ctx->code.write_p += 4;
}
void emit_thumb_str32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rt,
	unsigned int shift,
	unsigned int rm
)
{
	thumb_str32((uint16_t **)(&ctx->code.write_p), rn, rt, shift, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_strb32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rt,
	unsigned int shift,
	unsigned int rm
)
{
	thumb_strb32((uint16_t **)(&ctx->code.write_p), rn, rt, shift, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_strbi32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback
)
{
	thumb_strbi32((uint16_t **)(&ctx->code.write_p), rt, rn, imm8, pre_index, upwards, writeback);
	ctx->code.write_p += 4;
}
void emit_thumb_strbwi32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm12
)
{
	thumb_strbwi32((uint16_t **)(&ctx->code.write_p), rt, rn, imm12);
	ctx->code.write_p += 4;
}
void emit_thumb_strbt32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8
)
{
	thumb_strbt32((uint16_t **)(&ctx->code.write_p), rt, rn, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_strd32 (
	mambo_context *ctx,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback,
	unsigned int rn,
	unsigned int rt,
	unsigned int rd,
	unsigned int imm8
)
{
	thumb_strd32((uint16_t **)(&ctx->code.write_p), pre_index, upwards, writeback, rn, rt, rd, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_strex32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rt,
	unsigned int rd,
	unsigned int imm8
)
{
	thumb_strex32((uint16_t **)(&ctx->code.write_p), rn, rt, rd, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_strexb32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rt,
	unsigned int rd
)
{
	thumb_strexb32((uint16_t **)(&ctx->code.write_p), rn, rt, rd);
	ctx->code.write_p += 4;
}
void emit_thumb_strexd32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rt,
	unsigned int rt2,
	unsigned int rd
)
{
	thumb_strexd32((uint16_t **)(&ctx->code.write_p), rn, rt, rt2, rd);
	ctx->code.write_p += 4;
}
void emit_thumb_strexh32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rt,
	unsigned int rd
)
{
	thumb_strexh32((uint16_t **)(&ctx->code.write_p), rn, rt, rd);
	ctx->code.write_p += 4;
}
void emit_thumb_strh32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rt,
	unsigned int shift,
	unsigned int rm
)
{
	thumb_strh32((uint16_t **)(&ctx->code.write_p), rn, rt, shift, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_strhi32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback
)
{
	thumb_strhi32((uint16_t **)(&ctx->code.write_p), rt, rn, imm8, pre_index, upwards, writeback);
	ctx->code.write_p += 4;
}
void emit_thumb_strhwi32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm12
)
{
	thumb_strhwi32((uint16_t **)(&ctx->code.write_p), rt, rn, imm12);
	ctx->code.write_p += 4;
}
void emit_thumb_strht32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8
)
{
	thumb_strht32((uint16_t **)(&ctx->code.write_p), rt, rn, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_stri32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback
)
{
	thumb_stri32((uint16_t **)(&ctx->code.write_p), rt, rn, imm8, pre_index, upwards, writeback);
	ctx->code.write_p += 4;
}
void emit_thumb_strt32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8
)
{
	thumb_strt32((uint16_t **)(&ctx->code.write_p), rt, rn, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_strwi32 (
	mambo_context *ctx,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm12
)
{
	thumb_strwi32((uint16_t **)(&ctx->code.write_p), rt, rn, imm12);
	ctx->code.write_p += 4;
}
void emit_thumb_sub32 (
	mambo_context *ctx,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
)
{
	thumb_sub32((uint16_t **)(&ctx->code.write_p), set_flags, rn, imm3, rd, imm2, shift_type, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_subi32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
)
{
	thumb_subi32((uint16_t **)(&ctx->code.write_p), imm1, set_condition, rn, imm3, rd, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_subwi32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
)
{
	thumb_subwi32((uint16_t **)(&ctx->code.write_p), imm1, rn, imm3, rd, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_sxtab1632 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
)
{
	thumb_sxtab1632((uint16_t **)(&ctx->code.write_p), rn, rd, rotate, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_sxtab32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
)
{
	thumb_sxtab32((uint16_t **)(&ctx->code.write_p), rn, rd, rotate, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_sxtah32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
)
{
	thumb_sxtah32((uint16_t **)(&ctx->code.write_p), rn, rd, rotate, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_sxtb1632 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
)
{
	thumb_sxtb1632((uint16_t **)(&ctx->code.write_p), rd, rotate, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_sxtb32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
)
{
	thumb_sxtb32((uint16_t **)(&ctx->code.write_p), rd, rotate, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_sxth32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
)
{
	thumb_sxth32((uint16_t **)(&ctx->code.write_p), rd, rotate, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_tbb32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_tbb32((uint16_t **)(&ctx->code.write_p), rn, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_tbh32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_tbh32((uint16_t **)(&ctx->code.write_p), rn, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_teq32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int imm3,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
)
{
	thumb_teq32((uint16_t **)(&ctx->code.write_p), rn, imm3, imm2, shift_type, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_teqi32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int rn,
	unsigned int imm3,
	unsigned int imm8
)
{
	thumb_teqi32((uint16_t **)(&ctx->code.write_p), imm1, rn, imm3, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_tst32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int imm3,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
)
{
	thumb_tst32((uint16_t **)(&ctx->code.write_p), rn, imm3, imm2, shift_type, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_tsti32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int rn,
	unsigned int imm3,
	unsigned int imm8
)
{
	thumb_tsti32((uint16_t **)(&ctx->code.write_p), imm1, rn, imm3, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_uadd1632 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_uadd1632((uint16_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_uadd832 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_uadd832((uint16_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_uasx32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_uasx32((uint16_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_ubfx32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int imm5
)
{
	thumb_ubfx32((uint16_t **)(&ctx->code.write_p), rn, imm3, rd, imm2, imm5);
	ctx->code.write_p += 4;
}
void emit_thumb_udf32 (
	mambo_context *ctx,
	unsigned int imm4,
	unsigned int imm12
)
{
	thumb_udf32((uint16_t **)(&ctx->code.write_p), imm4, imm12);
	ctx->code.write_p += 4;
}
void emit_thumb_udiv32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rdhi,
	unsigned int rm
)
{
	thumb_udiv32((uint16_t **)(&ctx->code.write_p), rn, rdhi, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_uhadd1632 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_uhadd1632((uint16_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_uhadd832 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_uhadd832((uint16_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_uhasx32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_uhasx32((uint16_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_uhsax32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_uhsax32((uint16_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_uhsub1632 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_uhsub1632((uint16_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_uhsub832 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_uhsub832((uint16_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_umaal32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rdlo,
	unsigned int rdhi,
	unsigned int rm
)
{
	thumb_umaal32((uint16_t **)(&ctx->code.write_p), rn, rdlo, rdhi, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_umlal32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rdlo,
	unsigned int rdhi,
	unsigned int rm
)
{
	thumb_umlal32((uint16_t **)(&ctx->code.write_p), rn, rdlo, rdhi, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_umull32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rdlo,
	unsigned int rdhi,
	unsigned int rm
)
{
	thumb_umull32((uint16_t **)(&ctx->code.write_p), rn, rdlo, rdhi, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_uqadd1632 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_uqadd1632((uint16_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_uqadd832 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_uqadd832((uint16_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_uqasx32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_uqasx32((uint16_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_uqsax32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_uqsax32((uint16_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_uqsub1632 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_uqsub1632((uint16_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_uqsub832 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_uqsub832((uint16_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_usad832 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
)
{
	thumb_usad832((uint16_t **)(&ctx->code.write_p), rn, rd, opcode2, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_usada832 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int racc,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
)
{
	thumb_usada832((uint16_t **)(&ctx->code.write_p), rn, racc, rd, opcode2, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_usat1632 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd
)
{
	thumb_usat1632((uint16_t **)(&ctx->code.write_p), rn, rd);
	ctx->code.write_p += 4;
}
void emit_thumb_usat_asr32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int imm5
)
{
	thumb_usat_asr32((uint16_t **)(&ctx->code.write_p), rn, imm3, rd, imm2, imm5);
	ctx->code.write_p += 4;
}
void emit_thumb_usat_lsl32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int imm5
)
{
	thumb_usat_lsl32((uint16_t **)(&ctx->code.write_p), rn, imm3, rd, imm2, imm5);
	ctx->code.write_p += 4;
}
void emit_thumb_usax32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_usax32((uint16_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_usub1632 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_usub1632((uint16_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_usub832 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_usub832((uint16_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_uxtab1632 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
)
{
	thumb_uxtab1632((uint16_t **)(&ctx->code.write_p), rn, rd, rotate, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_uxtab32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
)
{
	thumb_uxtab32((uint16_t **)(&ctx->code.write_p), rn, rd, rotate, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_uxtah32 (
	mambo_context *ctx,
	unsigned int rn,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
)
{
	thumb_uxtah32((uint16_t **)(&ctx->code.write_p), rn, rd, rotate, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_uxtb1632 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
)
{
	thumb_uxtb1632((uint16_t **)(&ctx->code.write_p), rd, rotate, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_uxtb32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
)
{
	thumb_uxtb32((uint16_t **)(&ctx->code.write_p), rd, rotate, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_uxth32 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
)
{
	thumb_uxth32((uint16_t **)(&ctx->code.write_p), rd, rotate, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_wfe32 (
	mambo_context *ctx
)
{
	thumb_wfe32((uint16_t **)(&ctx->code.write_p));
	ctx->code.write_p += 4;
}
void emit_thumb_wfi32 (
	mambo_context *ctx
)
{
	thumb_wfi32((uint16_t **)(&ctx->code.write_p));
	ctx->code.write_p += 4;
}
void emit_thumb_yield32 (
	mambo_context *ctx
)
{
	thumb_yield32((uint16_t **)(&ctx->code.write_p));
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vaba((uint16_t **)(&ctx->code.write_p), unsign, size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vabal((uint16_t **)(&ctx->code.write_p), unsign, size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vabd_i((uint16_t **)(&ctx->code.write_p), unsign, size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vabd_f((uint16_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vabdl((uint16_t **)(&ctx->code.write_p), unsign, size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vabs (
	mambo_context *ctx,
	unsigned int is_float,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	thumb_neon_vabs((uint16_t **)(&ctx->code.write_p), is_float, size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_vfp_vabs (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	thumb_vfp_vabs((uint16_t **)(&ctx->code.write_p), size, d, vd, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vacge((uint16_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vacgt((uint16_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vadd_i((uint16_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vadd_f((uint16_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_vfp_vadd (
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
	thumb_vfp_vadd((uint16_t **)(&ctx->code.write_p), size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vaddhn (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int n,
	unsigned int vd,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
)
{
	thumb_neon_vaddhn((uint16_t **)(&ctx->code.write_p), size, d, n, vd, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vaddl((uint16_t **)(&ctx->code.write_p), unsign, size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vaddw((uint16_t **)(&ctx->code.write_p), unsign, size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vand (
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
	thumb_neon_vand((uint16_t **)(&ctx->code.write_p), q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vbic (
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
	thumb_neon_vbic((uint16_t **)(&ctx->code.write_p), q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vbici (
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
	thumb_neon_vbici((uint16_t **)(&ctx->code.write_p), q, d, vd, cmode, i, imm3, imm4);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vbif (
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
	thumb_neon_vbif((uint16_t **)(&ctx->code.write_p), q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vbit (
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
	thumb_neon_vbit((uint16_t **)(&ctx->code.write_p), q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vbsl (
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
	thumb_neon_vbsl((uint16_t **)(&ctx->code.write_p), q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vceq_i((uint16_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vceq_f((uint16_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vceqz (
	mambo_context *ctx,
	unsigned int is_float,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	thumb_neon_vceqz((uint16_t **)(&ctx->code.write_p), is_float, size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vcge_i((uint16_t **)(&ctx->code.write_p), unsign, size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vcge_f((uint16_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vcgez (
	mambo_context *ctx,
	unsigned int is_float,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	thumb_neon_vcgez((uint16_t **)(&ctx->code.write_p), is_float, size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vcgt_i((uint16_t **)(&ctx->code.write_p), unsign, size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vcgt_f((uint16_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vcgtz (
	mambo_context *ctx,
	unsigned int is_float,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	thumb_neon_vcgtz((uint16_t **)(&ctx->code.write_p), is_float, size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vclez (
	mambo_context *ctx,
	unsigned int is_float,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	thumb_neon_vclez((uint16_t **)(&ctx->code.write_p), is_float, size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vcls (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	thumb_neon_vcls((uint16_t **)(&ctx->code.write_p), size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vcltz (
	mambo_context *ctx,
	unsigned int is_float,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	thumb_neon_vcltz((uint16_t **)(&ctx->code.write_p), is_float, size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vclz (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	thumb_neon_vclz((uint16_t **)(&ctx->code.write_p), size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_vfp_vcmp (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	thumb_vfp_vcmp((uint16_t **)(&ctx->code.write_p), size, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_vfp_vcmpz (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd
)
{
	thumb_vfp_vcmpz((uint16_t **)(&ctx->code.write_p), size, d, vd);
	ctx->code.write_p += 4;
}
void emit_thumb_vfp_vcmpe (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	thumb_vfp_vcmpe((uint16_t **)(&ctx->code.write_p), size, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_vfp_vcmpez (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd
)
{
	thumb_vfp_vcmpez((uint16_t **)(&ctx->code.write_p), size, d, vd);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vcnt (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	thumb_neon_vcnt((uint16_t **)(&ctx->code.write_p), size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vcvt_f_i (
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
	thumb_neon_vcvt_f_i((uint16_t **)(&ctx->code.write_p), op, size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vcvt_f_fp (
	mambo_context *ctx,
	unsigned int op,
	unsigned int unsign,
	unsigned int q,
	unsigned int d,
	unsigned int vm,
	unsigned int m,
	unsigned int imm6
)
{
	thumb_neon_vcvt_f_fp((uint16_t **)(&ctx->code.write_p), op, unsign, q, d, vm, m, imm6);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vcvt_hp_sp (
	mambo_context *ctx,
	unsigned int op,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	thumb_neon_vcvt_hp_sp((uint16_t **)(&ctx->code.write_p), op, size, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_vfp_vcvt_f_i (
	mambo_context *ctx,
	unsigned int op,
	unsigned int op2,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	thumb_vfp_vcvt_f_i((uint16_t **)(&ctx->code.write_p), op, op2, size, d, vd, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_vfp_vcvt_f_fp((uint16_t **)(&ctx->code.write_p), op, unsign, sf, sx, d, vd, imm4, i);
	ctx->code.write_p += 4;
}
void emit_thumb_vfp_vcvt_dp_sp (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	thumb_vfp_vcvt_dp_sp((uint16_t **)(&ctx->code.write_p), size, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_vfp_vcvtb (
	mambo_context *ctx,
	unsigned int op,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	thumb_vfp_vcvtb((uint16_t **)(&ctx->code.write_p), op, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_vfp_vcvtt (
	mambo_context *ctx,
	unsigned int op,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	thumb_vfp_vcvtt((uint16_t **)(&ctx->code.write_p), op, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_vfp_vdiv (
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
	thumb_vfp_vdiv((uint16_t **)(&ctx->code.write_p), size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vdup_scal (
	mambo_context *ctx,
	unsigned int q,
	unsigned int imm4,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	thumb_neon_vdup_scal((uint16_t **)(&ctx->code.write_p), q, imm4, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vdup_core (
	mambo_context *ctx,
	unsigned int b,
	unsigned int e,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int rt
)
{
	thumb_neon_vdup_core((uint16_t **)(&ctx->code.write_p), b, e, q, d, vd, rt);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_veor (
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
	thumb_neon_veor((uint16_t **)(&ctx->code.write_p), q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vext((uint16_t **)(&ctx->code.write_p), q, d, vd, n, vn, m, vm, imm4);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vfma((uint16_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vfms((uint16_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_vfp_vfma (
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
	thumb_vfp_vfma((uint16_t **)(&ctx->code.write_p), size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_vfp_vfms (
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
	thumb_vfp_vfms((uint16_t **)(&ctx->code.write_p), size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_vfp_vfnma (
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
	thumb_vfp_vfnma((uint16_t **)(&ctx->code.write_p), size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_vfp_vfnms (
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
	thumb_vfp_vfnms((uint16_t **)(&ctx->code.write_p), size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vhadd((uint16_t **)(&ctx->code.write_p), unsign, size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vhsub((uint16_t **)(&ctx->code.write_p), unsign, size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vldx_m (
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
	thumb_neon_vldx_m((uint16_t **)(&ctx->code.write_p), opcode, size, d, vd, rn, align, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vldx_s_o (
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
	thumb_neon_vldx_s_o((uint16_t **)(&ctx->code.write_p), opcode, size, d, vd, rn, index_align, rm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vldx_s_a((uint16_t **)(&ctx->code.write_p), opcode, size, d, vd, inc, rn, align, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_vfp_vldm_dp (
	mambo_context *ctx,
	unsigned int p,
	unsigned int upwards,
	unsigned int writeback,
	unsigned int rn,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
)
{
	thumb_vfp_vldm_dp((uint16_t **)(&ctx->code.write_p), p, upwards, writeback, rn, d, vd, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_vfp_vldm_sp (
	mambo_context *ctx,
	unsigned int p,
	unsigned int upwards,
	unsigned int writeback,
	unsigned int rn,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
)
{
	thumb_vfp_vldm_sp((uint16_t **)(&ctx->code.write_p), p, upwards, writeback, rn, d, vd, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_vfp_vldr_dp (
	mambo_context *ctx,
	unsigned int upwards,
	unsigned int rn,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
)
{
	thumb_vfp_vldr_dp((uint16_t **)(&ctx->code.write_p), upwards, rn, d, vd, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_vfp_vldr_sp (
	mambo_context *ctx,
	unsigned int upwards,
	unsigned int rn,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
)
{
	thumb_vfp_vldr_sp((uint16_t **)(&ctx->code.write_p), upwards, rn, d, vd, imm8);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vmax_i((uint16_t **)(&ctx->code.write_p), unsign, size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vmin_i((uint16_t **)(&ctx->code.write_p), unsign, size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vmax_f((uint16_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vmin_f((uint16_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vmla_i((uint16_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vmls_i((uint16_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vmlal_i((uint16_t **)(&ctx->code.write_p), unsign, size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vmlsl_i((uint16_t **)(&ctx->code.write_p), unsign, size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vmla_f((uint16_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vmls_f((uint16_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_vfp_vmla_f (
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
	thumb_vfp_vmla_f((uint16_t **)(&ctx->code.write_p), size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_vfp_vmls_f (
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
	thumb_vfp_vmls_f((uint16_t **)(&ctx->code.write_p), size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vmla_scal((uint16_t **)(&ctx->code.write_p), is_float, size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vmls_scal((uint16_t **)(&ctx->code.write_p), is_float, size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vmlal_scal((uint16_t **)(&ctx->code.write_p), unsign, size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vmlsl_scal((uint16_t **)(&ctx->code.write_p), unsign, size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vmovi((uint16_t **)(&ctx->code.write_p), q, d, vd, op, cmode, i, imm3, imm4);
	ctx->code.write_p += 4;
}
void emit_thumb_vfp_vmovi (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int imm4h,
	unsigned int imm4l
)
{
	thumb_vfp_vmovi((uint16_t **)(&ctx->code.write_p), size, d, vd, imm4h, imm4l);
	ctx->code.write_p += 4;
}
void emit_thumb_vfp_vmov (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	thumb_vfp_vmov((uint16_t **)(&ctx->code.write_p), size, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_vfp_vmov_core_scal (
	mambo_context *ctx,
	unsigned int d,
	unsigned int vd,
	unsigned int opc1,
	unsigned int opc2,
	unsigned int rt
)
{
	thumb_vfp_vmov_core_scal((uint16_t **)(&ctx->code.write_p), d, vd, opc1, opc2, rt);
	ctx->code.write_p += 4;
}
void emit_thumb_vfp_vmov_scal_core (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int rt,
	unsigned int n,
	unsigned int vn,
	unsigned int opc1,
	unsigned int opc2
)
{
	thumb_vfp_vmov_scal_core((uint16_t **)(&ctx->code.write_p), unsign, rt, n, vn, opc1, opc2);
	ctx->code.write_p += 4;
}
void emit_thumb_vfp_vmov_core_sp (
	mambo_context *ctx,
	unsigned int op,
	unsigned int rt,
	unsigned int n,
	unsigned int vn
)
{
	thumb_vfp_vmov_core_sp((uint16_t **)(&ctx->code.write_p), op, rt, n, vn);
	ctx->code.write_p += 4;
}
void emit_thumb_vfp_vmov_2core_2sp (
	mambo_context *ctx,
	unsigned int to_arm,
	unsigned int rt,
	unsigned int rt2,
	unsigned int m,
	unsigned int vm
)
{
	thumb_vfp_vmov_2core_2sp((uint16_t **)(&ctx->code.write_p), to_arm, rt, rt2, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_vfp_vmov_2core_dp (
	mambo_context *ctx,
	unsigned int to_arm,
	unsigned int rt,
	unsigned int rt2,
	unsigned int m,
	unsigned int vm
)
{
	thumb_vfp_vmov_2core_dp((uint16_t **)(&ctx->code.write_p), to_arm, rt, rt2, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vmovl (
	mambo_context *ctx,
	unsigned int op,
	unsigned int unsign,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	thumb_neon_vmovl((uint16_t **)(&ctx->code.write_p), op, unsign, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vmovn (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	thumb_neon_vmovn((uint16_t **)(&ctx->code.write_p), size, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_vfp_vmrs (
	mambo_context *ctx,
	unsigned int rt
)
{
	thumb_vfp_vmrs((uint16_t **)(&ctx->code.write_p), rt);
	ctx->code.write_p += 4;
}
void emit_thumb_vfp_vmsr (
	mambo_context *ctx,
	unsigned int rt
)
{
	thumb_vfp_vmsr((uint16_t **)(&ctx->code.write_p), rt);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vmul_i((uint16_t **)(&ctx->code.write_p), op, size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vmull_i((uint16_t **)(&ctx->code.write_p), op, unsign, size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vmul_f((uint16_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_vfp_vmul (
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
	thumb_vfp_vmul((uint16_t **)(&ctx->code.write_p), size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vmul_scal((uint16_t **)(&ctx->code.write_p), is_float, size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vmull_scal((uint16_t **)(&ctx->code.write_p), unsign, size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vmvni (
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
	thumb_neon_vmvni((uint16_t **)(&ctx->code.write_p), q, d, vd, cmode, i, imm3, imm4);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vmvn (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	thumb_neon_vmvn((uint16_t **)(&ctx->code.write_p), size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vneg (
	mambo_context *ctx,
	unsigned int is_float,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	thumb_neon_vneg((uint16_t **)(&ctx->code.write_p), is_float, size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_vfp_vneg (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	thumb_vfp_vneg((uint16_t **)(&ctx->code.write_p), size, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_vfp_vnmla (
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
	thumb_vfp_vnmla((uint16_t **)(&ctx->code.write_p), size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_vfp_vnmls (
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
	thumb_vfp_vnmls((uint16_t **)(&ctx->code.write_p), size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_vfp_vnmul (
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
	thumb_vfp_vnmul((uint16_t **)(&ctx->code.write_p), size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vorn (
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
	thumb_neon_vorn((uint16_t **)(&ctx->code.write_p), q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vorri (
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
	thumb_neon_vorri((uint16_t **)(&ctx->code.write_p), q, d, vd, cmode, i, imm3, imm4);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vorr (
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
	thumb_neon_vorr((uint16_t **)(&ctx->code.write_p), q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vpadal (
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
	thumb_neon_vpadal((uint16_t **)(&ctx->code.write_p), unsign, size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vpadd_i((uint16_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vpadd_f((uint16_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vpaddl (
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
	thumb_neon_vpaddl((uint16_t **)(&ctx->code.write_p), unsign, size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vpmax_i((uint16_t **)(&ctx->code.write_p), unsign, size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vpmin_i((uint16_t **)(&ctx->code.write_p), unsign, size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vpmax_f((uint16_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vpmin_f((uint16_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_vfp_vpop (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int regs
)
{
	thumb_vfp_vpop((uint16_t **)(&ctx->code.write_p), size, d, vd, regs);
	ctx->code.write_p += 4;
}
void emit_thumb_vfp_vpush (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int regs
)
{
	thumb_vfp_vpush((uint16_t **)(&ctx->code.write_p), size, d, vd, regs);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vqabs (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	thumb_neon_vqabs((uint16_t **)(&ctx->code.write_p), size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vqadd((uint16_t **)(&ctx->code.write_p), unsign, size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vqdmlal_i (
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
	thumb_neon_vqdmlal_i((uint16_t **)(&ctx->code.write_p), size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vqdmlsl_i (
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
	thumb_neon_vqdmlsl_i((uint16_t **)(&ctx->code.write_p), size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vqdmlal_scal (
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
	thumb_neon_vqdmlal_scal((uint16_t **)(&ctx->code.write_p), size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vqdmlsl_scal (
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
	thumb_neon_vqdmlsl_scal((uint16_t **)(&ctx->code.write_p), size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vqdmulh_i((uint16_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vqdmulh_scal((uint16_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vqdmull_i (
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
	thumb_neon_vqdmull_i((uint16_t **)(&ctx->code.write_p), size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vqdmull_scal (
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
	thumb_neon_vqdmull_scal((uint16_t **)(&ctx->code.write_p), size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vqmovn (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	thumb_neon_vqmovn((uint16_t **)(&ctx->code.write_p), unsign, size, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vqmovun (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	thumb_neon_vqmovun((uint16_t **)(&ctx->code.write_p), size, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vqneg (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	thumb_neon_vqneg((uint16_t **)(&ctx->code.write_p), size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vqrdmulh_i((uint16_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vqrdmulh_scal((uint16_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vqrshl((uint16_t **)(&ctx->code.write_p), unsign, size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vqrshrn (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
)
{
	thumb_neon_vqrshrn((uint16_t **)(&ctx->code.write_p), unsign, d, vd, m, vm, imm6);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vqrshrun (
	mambo_context *ctx,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
)
{
	thumb_neon_vqrshrun((uint16_t **)(&ctx->code.write_p), d, vd, m, vm, imm6);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vqshl((uint16_t **)(&ctx->code.write_p), unsign, size, q, d, vd, m, vm, n, vn);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vqshli((uint16_t **)(&ctx->code.write_p), unsign, q, d, vd, m, vm, l, imm6);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vqshlui (
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
	thumb_neon_vqshlui((uint16_t **)(&ctx->code.write_p), q, d, vd, m, vm, l, imm6);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vqshrn (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
)
{
	thumb_neon_vqshrn((uint16_t **)(&ctx->code.write_p), unsign, d, vd, m, vm, imm6);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vqshrun (
	mambo_context *ctx,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
)
{
	thumb_neon_vqshrun((uint16_t **)(&ctx->code.write_p), d, vd, m, vm, imm6);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vqsub((uint16_t **)(&ctx->code.write_p), unsign, size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vraddhn (
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
	thumb_neon_vraddhn((uint16_t **)(&ctx->code.write_p), size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vrecpe (
	mambo_context *ctx,
	unsigned int is_float,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	thumb_neon_vrecpe((uint16_t **)(&ctx->code.write_p), is_float, size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vrecps((uint16_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vrev16 (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	thumb_neon_vrev16((uint16_t **)(&ctx->code.write_p), size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vrev32 (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	thumb_neon_vrev32((uint16_t **)(&ctx->code.write_p), size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vrev64 (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	thumb_neon_vrev64((uint16_t **)(&ctx->code.write_p), size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vrhadd((uint16_t **)(&ctx->code.write_p), unsign, size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vrshl((uint16_t **)(&ctx->code.write_p), unsign, size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vrshr((uint16_t **)(&ctx->code.write_p), unsign, q, d, vd, m, vm, l, imm6);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vrshrn (
	mambo_context *ctx,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
)
{
	thumb_neon_vrshrn((uint16_t **)(&ctx->code.write_p), d, vd, m, vm, imm6);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vrsqrte (
	mambo_context *ctx,
	unsigned int is_float,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	thumb_neon_vrsqrte((uint16_t **)(&ctx->code.write_p), is_float, size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vrsqrts((uint16_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vrsra((uint16_t **)(&ctx->code.write_p), unsign, q, d, vd, m, vm, l, imm6);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vrsubhn (
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
	thumb_neon_vrsubhn((uint16_t **)(&ctx->code.write_p), size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vshl((uint16_t **)(&ctx->code.write_p), unsign, size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vshli (
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
	thumb_neon_vshli((uint16_t **)(&ctx->code.write_p), q, d, vd, m, vm, l, imm6);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vshll (
	mambo_context *ctx,
	unsigned int unsign,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
)
{
	thumb_neon_vshll((uint16_t **)(&ctx->code.write_p), unsign, d, vd, m, vm, imm6);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vshll2 (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	thumb_neon_vshll2((uint16_t **)(&ctx->code.write_p), size, d, vd, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vshr((uint16_t **)(&ctx->code.write_p), unsign, q, d, vd, m, vm, l, imm6);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vshrn (
	mambo_context *ctx,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
)
{
	thumb_neon_vshrn((uint16_t **)(&ctx->code.write_p), d, vd, m, vm, imm6);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vsli (
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
	thumb_neon_vsli((uint16_t **)(&ctx->code.write_p), q, d, vd, m, vm, l, imm6);
	ctx->code.write_p += 4;
}
void emit_thumb_vfp_vsqrt (
	mambo_context *ctx,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	thumb_vfp_vsqrt((uint16_t **)(&ctx->code.write_p), size, d, vd, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vsra((uint16_t **)(&ctx->code.write_p), unsign, q, d, vd, m, vm, l, imm6);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vsri (
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
	thumb_neon_vsri((uint16_t **)(&ctx->code.write_p), q, d, vd, m, vm, l, imm6);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vstx_m (
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
	thumb_neon_vstx_m((uint16_t **)(&ctx->code.write_p), opcode, size, d, vd, rn, align, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vstx_s_o (
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
	thumb_neon_vstx_s_o((uint16_t **)(&ctx->code.write_p), opcode, size, d, vd, rn, index_align, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_vfp_vstm_dp (
	mambo_context *ctx,
	unsigned int p,
	unsigned int upwards,
	unsigned int writeback,
	unsigned int rn,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
)
{
	thumb_vfp_vstm_dp((uint16_t **)(&ctx->code.write_p), p, upwards, writeback, rn, d, vd, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_vfp_vstm_sp (
	mambo_context *ctx,
	unsigned int p,
	unsigned int upwards,
	unsigned int writeback,
	unsigned int rn,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
)
{
	thumb_vfp_vstm_sp((uint16_t **)(&ctx->code.write_p), p, upwards, writeback, rn, d, vd, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_vfp_vstr_dp (
	mambo_context *ctx,
	unsigned int upwards,
	unsigned int rn,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
)
{
	thumb_vfp_vstr_dp((uint16_t **)(&ctx->code.write_p), upwards, rn, d, vd, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_vfp_vstr_sp (
	mambo_context *ctx,
	unsigned int upwards,
	unsigned int rn,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
)
{
	thumb_vfp_vstr_sp((uint16_t **)(&ctx->code.write_p), upwards, rn, d, vd, imm8);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vsub_i((uint16_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vsub_f((uint16_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_vfp_vsub (
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
	thumb_vfp_vsub((uint16_t **)(&ctx->code.write_p), size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vsubhn (
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
	thumb_neon_vsubhn((uint16_t **)(&ctx->code.write_p), size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vsubl((uint16_t **)(&ctx->code.write_p), unsign, size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vsubw((uint16_t **)(&ctx->code.write_p), unsign, size, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vswp (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	thumb_neon_vswp((uint16_t **)(&ctx->code.write_p), size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vtbl (
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
	thumb_neon_vtbl((uint16_t **)(&ctx->code.write_p), d, vd, n, vn, len, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vtbx (
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
	thumb_neon_vtbx((uint16_t **)(&ctx->code.write_p), d, vd, n, vn, len, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vtrn (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	thumb_neon_vtrn((uint16_t **)(&ctx->code.write_p), size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_vtst((uint16_t **)(&ctx->code.write_p), size, q, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vuzp (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	thumb_neon_vuzp((uint16_t **)(&ctx->code.write_p), size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_neon_vzip (
	mambo_context *ctx,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
)
{
	thumb_neon_vzip((uint16_t **)(&ctx->code.write_p), size, q, d, vd, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_vfp_vsel((uint16_t **)(&ctx->code.write_p), size, cond, d, vd, n, vn, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_shift_i_mov_16 (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int imm5,
	unsigned int rm,
	unsigned int rd
)
{
	thumb_shift_i_mov_16((uint16_t **)(&ctx->code.write_p), opcode, imm5, rm, rd);
	ctx->code.write_p += 2;
}
void emit_thumb_add_sub_16 (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
)
{
	thumb_add_sub_16((uint16_t **)(&ctx->code.write_p), opcode, rm, rn, rd);
	ctx->code.write_p += 2;
}
void emit_thumb_add_sub_i_16 (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int imm3,
	unsigned int rn,
	unsigned int rd
)
{
	thumb_add_sub_i_16((uint16_t **)(&ctx->code.write_p), opcode, imm3, rn, rd);
	ctx->code.write_p += 2;
}
void emit_thumb_add_sub_comp_mov_i_16 (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int rdn,
	unsigned int imm8
)
{
	thumb_add_sub_comp_mov_i_16((uint16_t **)(&ctx->code.write_p), opcode, rdn, imm8);
	ctx->code.write_p += 2;
}
void emit_thumb_data_proc_16 (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int rm,
	unsigned int rdn
)
{
	thumb_data_proc_16((uint16_t **)(&ctx->code.write_p), opcode, rm, rdn);
	ctx->code.write_p += 2;
}
void emit_thumb_special_data_proc_16 (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int dn,
	unsigned int rm,
	unsigned int rdn
)
{
	thumb_special_data_proc_16((uint16_t **)(&ctx->code.write_p), opcode, dn, rm, rdn);
	ctx->code.write_p += 2;
}
void emit_thumb_bx_16 (
	mambo_context *ctx,
	unsigned int link,
	unsigned int rm
)
{
	thumb_bx_16((uint16_t **)(&ctx->code.write_p), link, rm);
	ctx->code.write_p += 2;
}
void emit_thumb_load_lit_16 (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int imm8
)
{
	thumb_load_lit_16((uint16_t **)(&ctx->code.write_p), rd, imm8);
	ctx->code.write_p += 2;
}
void emit_thumb_load_store_reg_offset_16 (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
)
{
	thumb_load_store_reg_offset_16((uint16_t **)(&ctx->code.write_p), opcode, rm, rn, rd);
	ctx->code.write_p += 2;
}
void emit_thumb_load_store_byte_word_i_16 (
	mambo_context *ctx,
	unsigned int byte,
	unsigned int load,
	unsigned int imm5,
	unsigned int rn,
	unsigned int rd
)
{
	thumb_load_store_byte_word_i_16((uint16_t **)(&ctx->code.write_p), byte, load, imm5, rn, rd);
	ctx->code.write_p += 2;
}
void emit_thumb_load_store_halfword_i_16 (
	mambo_context *ctx,
	unsigned int load,
	unsigned int imm5,
	unsigned int rn,
	unsigned int rd
)
{
	thumb_load_store_halfword_i_16((uint16_t **)(&ctx->code.write_p), load, imm5, rn, rd);
	ctx->code.write_p += 2;
}
void emit_thumb_load_store_stack_16 (
	mambo_context *ctx,
	unsigned int load,
	unsigned int rd,
	unsigned int imm8
)
{
	thumb_load_store_stack_16((uint16_t **)(&ctx->code.write_p), load, rd, imm8);
	ctx->code.write_p += 2;
}
void emit_thumb_add_sp_pc_16 (
	mambo_context *ctx,
	unsigned int sp,
	unsigned int rd,
	unsigned int imm8
)
{
	thumb_add_sp_pc_16((uint16_t **)(&ctx->code.write_p), sp, rd, imm8);
	ctx->code.write_p += 2;
}
void emit_thumb_misc_add_sub_sp_i_16 (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int imm7
)
{
	thumb_misc_add_sub_sp_i_16((uint16_t **)(&ctx->code.write_p), opcode, imm7);
	ctx->code.write_p += 2;
}
void emit_thumb_misc_sign_zero_extend_16 (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int rm,
	unsigned int rd
)
{
	thumb_misc_sign_zero_extend_16((uint16_t **)(&ctx->code.write_p), opcode, rm, rd);
	ctx->code.write_p += 2;
}
void emit_thumb_misc_cbz_16 (
	mambo_context *ctx,
	unsigned int n,
	unsigned int imm1,
	unsigned int imm5,
	unsigned int rn
)
{
	thumb_misc_cbz_16((uint16_t **)(&ctx->code.write_p), n, imm1, imm5, rn);
	ctx->code.write_p += 2;
}
void emit_thumb_misc_push_pop_16 (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int reg
)
{
	thumb_misc_push_pop_16((uint16_t **)(&ctx->code.write_p), opcode, reg);
	ctx->code.write_p += 2;
}
void emit_thumb_misc_rev_16 (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
)
{
	thumb_misc_rev_16((uint16_t **)(&ctx->code.write_p), opcode, rn, rd);
	ctx->code.write_p += 2;
}
void emit_thumb_misc_if_then_16 (
	mambo_context *ctx,
	unsigned int cond,
	unsigned int mask
)
{
	thumb_misc_if_then_16((uint16_t **)(&ctx->code.write_p), cond, mask);
	ctx->code.write_p += 2;
}
void emit_thumb_misc_nop_16 (
	mambo_context *ctx,
	unsigned int hint
)
{
	thumb_misc_nop_16((uint16_t **)(&ctx->code.write_p), hint);
	ctx->code.write_p += 2;
}
void emit_thumb_load_store_multiple_16 (
	mambo_context *ctx,
	unsigned int load,
	unsigned int rn,
	unsigned int reglist
)
{
	thumb_load_store_multiple_16((uint16_t **)(&ctx->code.write_p), load, rn, reglist);
	ctx->code.write_p += 2;
}
void emit_thumb_cond_branch_16 (
	mambo_context *ctx,
	unsigned int condition,
	unsigned int imm8
)
{
	thumb_cond_branch_16((uint16_t **)(&ctx->code.write_p), condition, imm8);
	ctx->code.write_p += 2;
}
void emit_thumb_svc_16 (
	mambo_context *ctx,
	unsigned int imm8
)
{
	thumb_svc_16((uint16_t **)(&ctx->code.write_p), imm8);
	ctx->code.write_p += 2;
}
void emit_thumb_uncond_branch_16 (
	mambo_context *ctx,
	unsigned int imm11
)
{
	thumb_uncond_branch_16((uint16_t **)(&ctx->code.write_p), imm11);
	ctx->code.write_p += 2;
}
void emit_thumb_data_proc_12bit_i_32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int opcode,
	unsigned int set_condition,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
)
{
	thumb_data_proc_12bit_i_32((uint16_t **)(&ctx->code.write_p), imm1, opcode, set_condition, rn, imm3, rd, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_data_proc_12bit_i_plain_32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int opcode,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
)
{
	thumb_data_proc_12bit_i_plain_32((uint16_t **)(&ctx->code.write_p), imm1, opcode, rn, imm3, rd, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_data_proc_16bit_i_32 (
	mambo_context *ctx,
	unsigned int imm1,
	unsigned int opcode,
	unsigned int imm4,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
)
{
	thumb_data_proc_16bit_i_32((uint16_t **)(&ctx->code.write_p), imm1, opcode, imm4, imm3, rd, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_data_proc_bit_field (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int imm5
)
{
	thumb_data_proc_bit_field((uint16_t **)(&ctx->code.write_p), opcode, rn, imm3, rd, imm2, imm5);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_data_proc_const_shift((uint16_t **)(&ctx->code.write_p), opcode, set_flags, rn, imm3, rd, imm2, shift_type, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_data_proc_reg_shift (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
)
{
	thumb_data_proc_reg_shift((uint16_t **)(&ctx->code.write_p), opcode, set_flags, rn, rd, opcode2, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_data_proc_sign_zero_ext (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
)
{
	thumb_data_proc_sign_zero_ext((uint16_t **)(&ctx->code.write_p), opcode, rn, rd, rotate, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_data_proc_simd_add_sub (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd,
	unsigned int pref,
	unsigned int rm
)
{
	thumb_data_proc_simd_add_sub((uint16_t **)(&ctx->code.write_p), opcode, rn, rd, pref, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_data_proc_other_3reg (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
)
{
	thumb_data_proc_other_3reg((uint16_t **)(&ctx->code.write_p), opcode, rn, rd, opcode2, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_data_proc_32_mult (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int rn,
	unsigned int racc,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
)
{
	thumb_data_proc_32_mult((uint16_t **)(&ctx->code.write_p), opcode, rn, racc, rd, opcode2, rm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_data_proc_64_mult((uint16_t **)(&ctx->code.write_p), opcode, rn, rdlo, rdhi, opcode2, n_high, m_swap, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_load_store_single_reg_imm12_32 (
	mambo_context *ctx,
	unsigned int sign_ext,
	unsigned int upwards,
	unsigned int size,
	unsigned int load_store,
	unsigned int rn,
	unsigned int rt,
	unsigned int imm12
)
{
	thumb_load_store_single_reg_imm12_32((uint16_t **)(&ctx->code.write_p), sign_ext, upwards, size, load_store, rn, rt, imm12);
	ctx->code.write_p += 4;
}
void emit_thumb_load_store_single_reg_off_32 (
	mambo_context *ctx,
	unsigned int sign_ext,
	unsigned int size,
	unsigned int load_store,
	unsigned int rn,
	unsigned int rt,
	unsigned int shift,
	unsigned int rm
)
{
	thumb_load_store_single_reg_off_32((uint16_t **)(&ctx->code.write_p), sign_ext, size, load_store, rn, rt, shift, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_pld_t2_32 (
	mambo_context *ctx,
	unsigned int sign_ext,
	unsigned int size,
	unsigned int load_store,
	unsigned int rn,
	unsigned int rt,
	unsigned int opcode,
	unsigned int imm8
)
{
	thumb_pld_t2_32((uint16_t **)(&ctx->code.write_p), sign_ext, size, load_store, rn, rt, opcode, imm8);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_load_store_double_ex((uint16_t **)(&ctx->code.write_p), pre_index, upwards, writeback, load_store, rn, rt, rd, imm8);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_load_store_ex_tb_branch((uint16_t **)(&ctx->code.write_p), pre_index, upwards, writeback, load_store, rn, rt, rd, opcode, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_load_store_multiple32 (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int writeback,
	unsigned int load,
	unsigned int rn,
	unsigned int reglist
)
{
	thumb_load_store_multiple32((uint16_t **)(&ctx->code.write_p), opcode, writeback, load, rn, reglist);
	ctx->code.write_p += 4;
}
void emit_thumb_branch32 (
	mambo_context *ctx,
	unsigned int sign_bit,
	unsigned int offset_high,
	unsigned int link,
	unsigned int j1,
	unsigned int thumb_mode,
	unsigned int j2,
	unsigned int offset_low
)
{
	thumb_branch32((uint16_t **)(&ctx->code.write_p), sign_bit, offset_high, link, j1, thumb_mode, j2, offset_low);
	ctx->code.write_p += 4;
}
void emit_thumb_branch_cond32 (
	mambo_context *ctx,
	unsigned int sign_bit,
	unsigned int condition,
	unsigned int offset_high,
	unsigned int j1,
	unsigned int j2,
	unsigned int offset_low
)
{
	thumb_branch_cond32((uint16_t **)(&ctx->code.write_p), sign_bit, condition, offset_high, j1, j2, offset_low);
	ctx->code.write_p += 4;
}
void emit_thumb_special_control (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int option
)
{
	thumb_special_control((uint16_t **)(&ctx->code.write_p), opcode, option);
	ctx->code.write_p += 4;
}
void emit_thumb_status_reg_access (
	mambo_context *ctx,
	unsigned int opcode,
	unsigned int s_or_c,
	unsigned int rn,
	unsigned int rd
)
{
	thumb_status_reg_access((uint16_t **)(&ctx->code.write_p), opcode, s_or_c, rn, rd);
	ctx->code.write_p += 4;
}
void emit_thumb_coproc_proc (
	mambo_context *ctx,
	unsigned int opc1,
	unsigned int crn,
	unsigned int crd,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
)
{
	thumb_coproc_proc((uint16_t **)(&ctx->code.write_p), opc1, crn, crd, coproc, opc2, crm);
	ctx->code.write_p += 4;
}
void emit_thumb_coproc_trans (
	mambo_context *ctx,
	unsigned int opc1,
	unsigned int load,
	unsigned int crn,
	unsigned int rt,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
)
{
	thumb_coproc_trans((uint16_t **)(&ctx->code.write_p), opc1, load, crn, rt, coproc, opc2, crm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_vmov_arm((uint16_t **)(&ctx->code.write_p), opcode, to_arm, rt2, rt, double_single, n, f2, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_vmov((uint16_t **)(&ctx->code.write_p), type, d, opcode, vm2, vd, opcode2, m2, q, m, opcode3, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_vmovi_neon((uint16_t **)(&ctx->code.write_p), i, d, imm3, vd, cmode, q, op, imm4);
	ctx->code.write_p += 4;
}
void emit_thumb_vmovi (
	mambo_context *ctx,
	unsigned int d,
	unsigned int immh,
	unsigned int vd,
	unsigned int sz,
	unsigned int imml
)
{
	thumb_vmovi((uint16_t **)(&ctx->code.write_p), d, immh, vd, sz, imml);
	ctx->code.write_p += 4;
}
void emit_thumb_vfp_ldr_str (
	mambo_context *ctx,
	unsigned int upwards,
	unsigned int d,
	unsigned int load_store,
	unsigned int rn,
	unsigned int vd,
	unsigned int double_reg,
	unsigned int imm8
)
{
	thumb_vfp_ldr_str((uint16_t **)(&ctx->code.write_p), upwards, d, load_store, rn, vd, double_reg, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_vcmp (
	mambo_context *ctx,
	unsigned int d,
	unsigned int empty,
	unsigned int vd,
	unsigned int sz,
	unsigned int e,
	unsigned int m,
	unsigned int vm
)
{
	thumb_vcmp((uint16_t **)(&ctx->code.write_p), d, empty, vd, sz, e, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_v_s_ldm((uint16_t **)(&ctx->code.write_p), p, upwards, d, writeback, load_store, rn, vd, double_prec, imm8);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_vadd((uint16_t **)(&ctx->code.write_p), sub_add, single_prec, d, sz, vn, vd, opcode, n, q, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_vneg((uint16_t **)(&ctx->code.write_p), single_prec, d, size, vd, double_prec, f, f5, sz, q, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_vml((uint16_t **)(&ctx->code.write_p), op, opcode2, scalar, d, size, vn, vd, f2, opcode3, f3, f, n, q, m, f4, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_vcvt((uint16_t **)(&ctx->code.write_p), u, opcode2, d, opcode3, vd, opcode4, op, q, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_vdiv (
	mambo_context *ctx,
	unsigned int d,
	unsigned int vn,
	unsigned int vd,
	unsigned int sz,
	unsigned int n,
	unsigned int m,
	unsigned int vm
)
{
	thumb_vdiv((uint16_t **)(&ctx->code.write_p), d, vn, vd, sz, n, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_fpv_op((uint16_t **)(&ctx->code.write_p), d, opcode, vn, vd, opcode2, sz, n, q, m, z, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_simd_op((uint16_t **)(&ctx->code.write_p), d, sz, vn, vd, opcode, n, q, m, z, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_imm6((uint16_t **)(&ctx->code.write_p), u, d, imm6, vd, opcode3, opcode4, l, q, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_trans_mult_lane((uint16_t **)(&ctx->code.write_p), opcode, d, opcode2, rn, vd, size, element_size, sz, align, rm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_imm4_2reg((uint16_t **)(&ctx->code.write_p), d, imm4, vd, opcode, opcode2, q, m, vm);
	ctx->code.write_p += 4;
}
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
)
{
	thumb_neon_imm4_3reg((uint16_t **)(&ctx->code.write_p), d, vn, vd, imm4, n, q, m, vm);
	ctx->code.write_p += 4;
}
void emit_thumb_data_proc_rd_rn_rm (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
)
{
	thumb_data_proc_rd_rn_rm((uint16_t **)(&ctx->code.write_p), rd, rn, rm);
	ctx->code.write_p += 4;
}
void emit_thumb_data_proc_rd_rn_rm_ra (
	mambo_context *ctx,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
)
{
	thumb_data_proc_rd_rn_rm_ra((uint16_t **)(&ctx->code.write_p), rd, rn, rm, ra);
	ctx->code.write_p += 4;
}
void emit_thumb_vfp_ld_st_m (
	mambo_context *ctx,
	unsigned int p,
	unsigned int upwards,
	unsigned int writeback,
	unsigned int rn,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
)
{
	thumb_vfp_ld_st_m((uint16_t **)(&ctx->code.write_p), p, upwards, writeback, rn, d, vd, imm8);
	ctx->code.write_p += 4;
}
void emit_thumb_vfp_vldr_vstr (
	mambo_context *ctx,
	unsigned int upwards,
	unsigned int rn,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
)
{
	thumb_vfp_vldr_vstr((uint16_t **)(&ctx->code.write_p), upwards, rn, d, vd, imm8);
	ctx->code.write_p += 4;
}
#endif
