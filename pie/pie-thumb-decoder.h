#ifndef __THUMB_PIE_DECODER_H__
#define  __THUMB_PIE_DECODER_H__
#include <stdint.h>
typedef enum {
  THUMB_ADC16,
  THUMB_ADD16,
  THUMB_ADD_FROM_PC16,
  THUMB_ADD_FROM_SP16,
  THUMB_ADDH16,
  THUMB_ADDI16,
  THUMB_ADDRI16,
  THUMB_ADD_SP_I16,
  THUMB_AND16,
  THUMB_ASR16,
  THUMB_ASRI16,
  THUMB_B16,
  THUMB_BIC16,
  THUMB_BKPT16,
  THUMB_B_COND16,
  THUMB_BLX16,
  THUMB_BX16,
  THUMB_CBNZ16,
  THUMB_CBZ16,
  THUMB_CMN16,
  THUMB_CMP16,
  THUMB_CMPH16,
  THUMB_CMPRI16,
  THUMB_EOR16,
  THUMB_IT16,
  THUMB_LDMFD16,
  THUMB_LDR16,
  THUMB_LDRB16,
  THUMB_LDRBI16,
  THUMB_LDRH16,
  THUMB_LDRHI16,
  THUMB_LDRI16,
  THUMB_LDR_PC_16,
  THUMB_LDRSB16,
  THUMB_LDRSH16,
  THUMB_LDR_SP16,
  THUMB_LSL16,
  THUMB_LSLI16,
  THUMB_LSR16,
  THUMB_LSRI16,
  THUMB_MOVH16,
  THUMB_MOVI16,
  THUMB_MOVRI16,
  THUMB_MUL16,
  THUMB_MVN16,
  THUMB_NOP16,
  THUMB_ORR16,
  THUMB_POP16,
  THUMB_PUSH16,
  THUMB_REV16,
  THUMB_REV1616,
  THUMB_REVSH16,
  THUMB_ROR16,
  THUMB_RSBI16,
  THUMB_SBC16,
  THUMB_SETEND16,
  THUMB_SEV16,
  THUMB_STMEA16,
  THUMB_STR16,
  THUMB_STRB16,
  THUMB_STRBI16,
  THUMB_STRH16,
  THUMB_STRHI16,
  THUMB_STRI16,
  THUMB_STR_SP16,
  THUMB_SUB16,
  THUMB_SUBI16,
  THUMB_SUBRI16,
  THUMB_SUB_SP_I16,
  THUMB_SVC16,
  THUMB_SXTB16,
  THUMB_SXTH16,
  THUMB_TST16,
  THUMB_UDF16,
  THUMB_UXTB16,
  THUMB_UXTH16,
  THUMB_WFE16,
  THUMB_WFI16,
  THUMB_YIELD16,
  THUMB_ADC32,
  THUMB_ADCI32,
  THUMB_ADD32,
  THUMB_ADDI32,
  THUMB_ADDWI32,
  THUMB_ADRWI_POST32,
  THUMB_ADRWI_PRE32,
  THUMB_AND32,
  THUMB_ANDI32,
  THUMB_ASR32,
  THUMB_ASRI32,
  THUMB_B32,
  THUMB_B_COND32,
  THUMB_BFC32,
  THUMB_BFI32,
  THUMB_BIC32,
  THUMB_BICI32,
  THUMB_BL32,
  THUMB_BL_ARM32,
  THUMB_CDP32,
  THUMB_CDP232,
  THUMB_CLREX32,
  THUMB_CLZ32,
  THUMB_CMN32,
  THUMB_CMNI32,
  THUMB_CMP32,
  THUMB_CMPI32,
  THUMB_DBG32,
  THUMB_DMB32,
  THUMB_DSB32,
  THUMB_EOR32,
  THUMB_EORI32,
  THUMB_ISB32,
  THUMB_LDC32,
  THUMB_LDC232,
  THUMB_LDMEA32,
  THUMB_LDMFD32,
  THUMB_LDR32,
  THUMB_LDRB32,
  THUMB_LDRBI32,
  THUMB_LDRBL32,
  THUMB_LDRBWI32,
  THUMB_LDRBT32,
  THUMB_LDRD32,
  THUMB_LDREX32,
  THUMB_LDREXB32,
  THUMB_LDREXD32,
  THUMB_LDREXH32,
  THUMB_LDRH32,
  THUMB_LDRHI32,
  THUMB_LDRHL32,
  THUMB_LDRHWI32,
  THUMB_LDRHT32,
  THUMB_LDRI32,
  THUMB_LDRL32,
  THUMB_LDRSB32,
  THUMB_LDRSBI32,
  THUMB_LDRSBL32,
  THUMB_LDRSBWI32,
  THUMB_LDRSBT32,
  THUMB_LDRSH32,
  THUMB_LDRSHI32,
  THUMB_LDRSHL32,
  THUMB_LDRSHWI32,
  THUMB_LDRSHT32,
  THUMB_LDRT32,
  THUMB_LDRWI32,
  THUMB_LSL32,
  THUMB_LSLI32,
  THUMB_LSR32,
  THUMB_LSRI32,
  THUMB_MCR32,
  THUMB_MCR232,
  THUMB_MCRR32,
  THUMB_MCRR232,
  THUMB_MLA32,
  THUMB_MLS32,
  THUMB_MOV32,
  THUMB_MOVI32,
  THUMB_MOVWI32,
  THUMB_MOVTI32,
  THUMB_MRC32,
  THUMB_MRC232,
  THUMB_MRRC32,
  THUMB_MRRC232,
  THUMB_MRS32,
  THUMB_MSR32,
  THUMB_MUL32,
  THUMB_MVN32,
  THUMB_MVNI32,
  THUMB_NOP32,
  THUMB_ORN32,
  THUMB_ORNI32,
  THUMB_ORR32,
  THUMB_ORRI32,
  THUMB_PKH32,
  THUMB_PLD32,
  THUMB_PLDI32,
  THUMB_PLDIM32,
  THUMB_PLD_LIT32,
  THUMB_PLDW32,
  THUMB_PLDWI32,
  THUMB_PLDWIM32,
  THUMB_PLI32,
  THUMB_PLII32,
  THUMB_PLIIM32,
  THUMB_PLI_LIT32,
  THUMB_QADD32,
  THUMB_QADD1632,
  THUMB_QADD832,
  THUMB_QASX32,
  THUMB_QDADD32,
  THUMB_QDSUB32,
  THUMB_QSAX32,
  THUMB_QSUB32,
  THUMB_QSUB1632,
  THUMB_QSUB832,
  THUMB_RBIT32,
  THUMB_REV32,
  THUMB_REV1632,
  THUMB_REVSH32,
  THUMB_ROR32,
  THUMB_RORI32,
  THUMB_RRX32,
  THUMB_RSB32,
  THUMB_RSBI32,
  THUMB_SADD1632,
  THUMB_SADD832,
  THUMB_SASX32,
  THUMB_SBC32,
  THUMB_SBCI32,
  THUMB_SBFX32,
  THUMB_SDIV32,
  THUMB_SEL32,
  THUMB_SEV32,
  THUMB_SHADD1632,
  THUMB_SHADD832,
  THUMB_SHASX32,
  THUMB_SHSAX32,
  THUMB_SHSUB1632,
  THUMB_SHSUB832,
  THUMB_SIMD_ADD_SUB32,
  THUMB_SMLABB32,
  THUMB_SMLABT32,
  THUMB_SMLATB32,
  THUMB_SMLATT32,
  THUMB_SMLAD32,
  THUMB_SMLAL32,
  THUMB_SMLALBB32,
  THUMB_SMLALBT32,
  THUMB_SMLALTB32,
  THUMB_SMLALTT32,
  THUMB_SMLALD32,
  THUMB_SMLAWB32,
  THUMB_SMLAWT32,
  THUMB_SMLSD32,
  THUMB_SMLSLD32,
  THUMB_SMMLA32,
  THUMB_SMMLS32,
  THUMB_SMMUL32,
  THUMB_SMUAD32,
  THUMB_SMULBB32,
  THUMB_SMULBT32,
  THUMB_SMULTB32,
  THUMB_SMULTT32,
  THUMB_SMULL32,
  THUMB_SMULWB32,
  THUMB_SMULWT32,
  THUMB_SMUSD32,
  THUMB_SSAT1632,
  THUMB_SSAT_ASR32,
  THUMB_SSAT_LSL32,
  THUMB_SSAX32,
  THUMB_SSUB1632,
  THUMB_SSUB832,
  THUMB_STC32,
  THUMB_STC232,
  THUMB_STMEA32,
  THUMB_STMFD32,
  THUMB_STR32,
  THUMB_STRB32,
  THUMB_STRBI32,
  THUMB_STRBWI32,
  THUMB_STRBT32,
  THUMB_STRD32,
  THUMB_STREX32,
  THUMB_STREXB32,
  THUMB_STREXD32,
  THUMB_STREXH32,
  THUMB_STRH32,
  THUMB_STRHI32,
  THUMB_STRHWI32,
  THUMB_STRHT32,
  THUMB_STRI32,
  THUMB_STRT32,
  THUMB_STRWI32,
  THUMB_SUB32,
  THUMB_SUBI32,
  THUMB_SUBWI32,
  THUMB_SXTAB1632,
  THUMB_SXTAB32,
  THUMB_SXTAH32,
  THUMB_SXTB1632,
  THUMB_SXTB32,
  THUMB_SXTH32,
  THUMB_TBB32,
  THUMB_TBH32,
  THUMB_TEQ32,
  THUMB_TEQI32,
  THUMB_TST32,
  THUMB_TSTI32,
  THUMB_UADD1632,
  THUMB_UADD832,
  THUMB_UASX32,
  THUMB_UBFX32,
  THUMB_UDF32,
  THUMB_UDIV32,
  THUMB_UHADD1632,
  THUMB_UHADD832,
  THUMB_UHASX32,
  THUMB_UHSAX32,
  THUMB_UHSUB1632,
  THUMB_UHSUB832,
  THUMB_UMAAL32,
  THUMB_UMLAL32,
  THUMB_UMULL32,
  THUMB_UQADD1632,
  THUMB_UQADD832,
  THUMB_UQASX32,
  THUMB_UQSAX32,
  THUMB_UQSUB1632,
  THUMB_UQSUB832,
  THUMB_USAD832,
  THUMB_USADA832,
  THUMB_USAT1632,
  THUMB_USAT_ASR32,
  THUMB_USAT_LSL32,
  THUMB_USAX32,
  THUMB_USUB1632,
  THUMB_USUB832,
  THUMB_UXTAB1632,
  THUMB_UXTAB32,
  THUMB_UXTAH32,
  THUMB_UXTB1632,
  THUMB_UXTB32,
  THUMB_UXTH32,
  THUMB_WFE32,
  THUMB_WFI32,
  THUMB_YIELD32,
  THUMB_NEON_VABA,
  THUMB_NEON_VABAL,
  THUMB_NEON_VABD_I,
  THUMB_NEON_VABD_F,
  THUMB_NEON_VABDL,
  THUMB_NEON_VABS,
  THUMB_VFP_VABS,
  THUMB_NEON_VACGE,
  THUMB_NEON_VACGT,
  THUMB_NEON_VADD_I,
  THUMB_NEON_VADD_F,
  THUMB_VFP_VADD,
  THUMB_NEON_VADDHN,
  THUMB_NEON_VADDL,
  THUMB_NEON_VADDW,
  THUMB_NEON_VAND,
  THUMB_NEON_VBIC,
  THUMB_NEON_VBICI,
  THUMB_NEON_VBIF,
  THUMB_NEON_VBIT,
  THUMB_NEON_VBSL,
  THUMB_NEON_VCEQ_I,
  THUMB_NEON_VCEQ_F,
  THUMB_NEON_VCEQZ,
  THUMB_NEON_VCGE_I,
  THUMB_NEON_VCGE_F,
  THUMB_NEON_VCGEZ,
  THUMB_NEON_VCGT_I,
  THUMB_NEON_VCGT_F,
  THUMB_NEON_VCGTZ,
  THUMB_NEON_VCLEZ,
  THUMB_NEON_VCLS,
  THUMB_NEON_VCLTZ,
  THUMB_NEON_VCLZ,
  THUMB_VFP_VCMP,
  THUMB_VFP_VCMPZ,
  THUMB_VFP_VCMPE,
  THUMB_VFP_VCMPEZ,
  THUMB_NEON_VCNT,
  THUMB_NEON_VCVT_F_I,
  THUMB_NEON_VCVT_F_FP,
  THUMB_NEON_VCVT_HP_SP,
  THUMB_VFP_VCVT_F_I,
  THUMB_VFP_VCVT_F_FP,
  THUMB_VFP_VCVT_DP_SP,
  THUMB_VFP_VCVTB,
  THUMB_VFP_VCVTT,
  THUMB_VFP_VDIV,
  THUMB_NEON_VDUP_SCAL,
  THUMB_NEON_VDUP_CORE,
  THUMB_NEON_VEOR,
  THUMB_NEON_VEXT,
  THUMB_NEON_VFMA,
  THUMB_NEON_VFMS,
  THUMB_VFP_VFMA,
  THUMB_VFP_VFMS,
  THUMB_VFP_VFNMA,
  THUMB_VFP_VFNMS,
  THUMB_NEON_VHADD,
  THUMB_NEON_VHSUB,
  THUMB_NEON_VLDX_M,
  THUMB_NEON_VLDX_S_O,
  THUMB_NEON_VLDX_S_A,
  THUMB_VFP_VLDM_DP,
  THUMB_VFP_VLDM_SP,
  THUMB_VFP_VLDR_DP,
  THUMB_VFP_VLDR_SP,
  THUMB_NEON_VMAX_I,
  THUMB_NEON_VMIN_I,
  THUMB_NEON_VMAX_F,
  THUMB_NEON_VMIN_F,
  THUMB_NEON_VMLA_I,
  THUMB_NEON_VMLS_I,
  THUMB_NEON_VMLAL_I,
  THUMB_NEON_VMLSL_I,
  THUMB_NEON_VMLA_F,
  THUMB_NEON_VMLS_F,
  THUMB_VFP_VMLA_F,
  THUMB_VFP_VMLS_F,
  THUMB_NEON_VMLA_SCAL,
  THUMB_NEON_VMLS_SCAL,
  THUMB_NEON_VMLAL_SCAL,
  THUMB_NEON_VMLSL_SCAL,
  THUMB_NEON_VMOVI,
  THUMB_VFP_VMOVI,
  THUMB_VFP_VMOV,
  THUMB_VFP_VMOV_CORE_SCAL,
  THUMB_VFP_VMOV_SCAL_CORE,
  THUMB_VFP_VMOV_CORE_SP,
  THUMB_VFP_VMOV_2CORE_2SP,
  THUMB_VFP_VMOV_2CORE_DP,
  THUMB_NEON_VMOVL,
  THUMB_NEON_VMOVN,
  THUMB_VFP_VMRS,
  THUMB_VFP_VMSR,
  THUMB_NEON_VMUL_I,
  THUMB_NEON_VMULL_I,
  THUMB_NEON_VMUL_F,
  THUMB_VFP_VMUL,
  THUMB_NEON_VMUL_SCAL,
  THUMB_NEON_VMULL_SCAL,
  THUMB_NEON_VMVNI,
  THUMB_NEON_VMVN,
  THUMB_NEON_VNEG,
  THUMB_VFP_VNEG,
  THUMB_VFP_VNMLA,
  THUMB_VFP_VNMLS,
  THUMB_VFP_VNMUL,
  THUMB_NEON_VORN,
  THUMB_NEON_VORRI,
  THUMB_NEON_VORR,
  THUMB_NEON_VPADAL,
  THUMB_NEON_VPADD_I,
  THUMB_NEON_VPADD_F,
  THUMB_NEON_VPADDL,
  THUMB_NEON_VPMAX_I,
  THUMB_NEON_VPMIN_I,
  THUMB_NEON_VPMAX_F,
  THUMB_NEON_VPMIN_F,
  THUMB_VFP_VPOP,
  THUMB_VFP_VPUSH,
  THUMB_NEON_VQABS,
  THUMB_NEON_VQADD,
  THUMB_NEON_VQDMLAL_I,
  THUMB_NEON_VQDMLSL_I,
  THUMB_NEON_VQDMLAL_SCAL,
  THUMB_NEON_VQDMLSL_SCAL,
  THUMB_NEON_VQDMULH_I,
  THUMB_NEON_VQDMULH_SCAL,
  THUMB_NEON_VQDMULL_I,
  THUMB_NEON_VQDMULL_SCAL,
  THUMB_NEON_VQMOVN,
  THUMB_NEON_VQMOVUN,
  THUMB_NEON_VQNEG,
  THUMB_NEON_VQRDMULH_I,
  THUMB_NEON_VQRDMULH_SCAL,
  THUMB_NEON_VQRSHL,
  THUMB_NEON_VQRSHRN,
  THUMB_NEON_VQRSHRUN,
  THUMB_NEON_VQSHL,
  THUMB_NEON_VQSHLI,
  THUMB_NEON_VQSHLUI,
  THUMB_NEON_VQSHRN,
  THUMB_NEON_VQSHRUN,
  THUMB_NEON_VQSUB,
  THUMB_NEON_VRADDHN,
  THUMB_NEON_VRECPE,
  THUMB_NEON_VRECPS,
  THUMB_NEON_VREV16,
  THUMB_NEON_VREV32,
  THUMB_NEON_VREV64,
  THUMB_NEON_VRHADD,
  THUMB_NEON_VRSHL,
  THUMB_NEON_VRSHR,
  THUMB_NEON_VRSHRN,
  THUMB_NEON_VRSQRTE,
  THUMB_NEON_VRSQRTS,
  THUMB_NEON_VRSRA,
  THUMB_NEON_VRSUBHN,
  THUMB_NEON_VSHL,
  THUMB_NEON_VSHLI,
  THUMB_NEON_VSHLL,
  THUMB_NEON_VSHLL2,
  THUMB_NEON_VSHR,
  THUMB_NEON_VSHRN,
  THUMB_NEON_VSLI,
  THUMB_VFP_VSQRT,
  THUMB_NEON_VSRA,
  THUMB_NEON_VSRI,
  THUMB_NEON_VSTX_M,
  THUMB_NEON_VSTX_S_O,
  THUMB_VFP_VSTM_DP,
  THUMB_VFP_VSTM_SP,
  THUMB_VFP_VSTR_DP,
  THUMB_VFP_VSTR_SP,
  THUMB_NEON_VSUB_I,
  THUMB_NEON_VSUB_F,
  THUMB_VFP_VSUB,
  THUMB_NEON_VSUBHN,
  THUMB_NEON_VSUBL,
  THUMB_NEON_VSUBW,
  THUMB_NEON_VSWP,
  THUMB_NEON_VTBL,
  THUMB_NEON_VTBX,
  THUMB_NEON_VTRN,
  THUMB_NEON_VTST,
  THUMB_NEON_VUZP,
  THUMB_NEON_VZIP,
  THUMB_VFP_VSEL,
  THUMB_INVALID
} thumb_instruction;
thumb_instruction thumb_decode(uint16_t *address);
#endif
