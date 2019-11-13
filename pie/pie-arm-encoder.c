#include "pie-arm-encoder.h"
void arm_adc_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
){
	// aaaa00b0101cddddeeeeffffffffffff
	uint32_t inst = 0xa00000 | ((auto_cond & 0xf) << 28) | ((immediate & 0x1) << 25) | ((set_condition & 0x1) << 20) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((operand2 & 0xfff) << 0);
	**address = inst;
}
void arm_adc (
	uint32_t **address,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
){
	// aaaa00b0101cddddeeeeffffffffffff
	uint32_t inst = 0xa00000 | (14 << 28) | ((immediate & 0x1) << 25) | ((set_condition & 0x1) << 20) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((operand2 & 0xfff) << 0);
	**address = inst;
}
void arm_add_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
){
	// aaaa00b0100cddddeeeeffffffffffff
	uint32_t inst = 0x800000 | ((auto_cond & 0xf) << 28) | ((immediate & 0x1) << 25) | ((set_condition & 0x1) << 20) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((operand2 & 0xfff) << 0);
	**address = inst;
}
void arm_add (
	uint32_t **address,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
){
	// aaaa00b0100cddddeeeeffffffffffff
	uint32_t inst = 0x800000 | (14 << 28) | ((immediate & 0x1) << 25) | ((set_condition & 0x1) << 20) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((operand2 & 0xfff) << 0);
	**address = inst;
}
void arm_and_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
){
	// aaaa00b0000cddddeeeeffffffffffff
	uint32_t inst = 0x0 | ((auto_cond & 0xf) << 28) | ((immediate & 0x1) << 25) | ((set_condition & 0x1) << 20) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((operand2 & 0xfff) << 0);
	**address = inst;
}
void arm_and (
	uint32_t **address,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
){
	// aaaa00b0000cddddeeeeffffffffffff
	uint32_t inst = 0x0 | (14 << 28) | ((immediate & 0x1) << 25) | ((set_condition & 0x1) << 20) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((operand2 & 0xfff) << 0);
	**address = inst;
}
void arm_b_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int offset_branch
){
	// aaaa1010bbbbbbbbbbbbbbbbbbbbbbbb
	uint32_t inst = 0xa000000 | ((auto_cond & 0xf) << 28) | ((offset_branch & 0xffffff) << 0);
	**address = inst;
}
void arm_b (
	uint32_t **address,
	unsigned int offset_branch
){
	// aaaa1010bbbbbbbbbbbbbbbbbbbbbbbb
	uint32_t inst = 0xa000000 | (14 << 28) | ((offset_branch & 0xffffff) << 0);
	**address = inst;
}
void arm_bfc_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rt,
	unsigned int lsb,
	unsigned int msb
){
	// aaaa0111110bbbbbccccddddd0011111
	uint32_t inst = 0x7c0001f | ((auto_cond & 0xf) << 28) | ((rt & 0xf) << 12) | ((lsb & 0x1f) << 7) | ((msb & 0x1f) << 16);
	**address = inst;
}
void arm_bfc (
	uint32_t **address,
	unsigned int rt,
	unsigned int lsb,
	unsigned int msb
){
	// aaaa0111110bbbbbccccddddd0011111
	uint32_t inst = 0x7c0001f | (14 << 28) | ((rt & 0xf) << 12) | ((lsb & 0x1f) << 7) | ((msb & 0x1f) << 16);
	**address = inst;
}
void arm_bfi_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rt,
	unsigned int rn,
	unsigned int lsb,
	unsigned int msb
){
	// aaaa0111110bbbbbccccddddd001eeee
	uint32_t inst = 0x7c00010 | ((auto_cond & 0xf) << 28) | ((rt & 0xf) << 12) | ((rn & 0xf) << 0) | ((lsb & 0x1f) << 7) | ((msb & 0x1f) << 16);
	**address = inst;
}
void arm_bfi (
	uint32_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int lsb,
	unsigned int msb
){
	// aaaa0111110bbbbbccccddddd001eeee
	uint32_t inst = 0x7c00010 | (14 << 28) | ((rt & 0xf) << 12) | ((rn & 0xf) << 0) | ((lsb & 0x1f) << 7) | ((msb & 0x1f) << 16);
	**address = inst;
}
void arm_bic_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
){
	// aaaa00b1110cddddeeeeffffffffffff
	uint32_t inst = 0x1c00000 | ((auto_cond & 0xf) << 28) | ((immediate & 0x1) << 25) | ((set_condition & 0x1) << 20) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((operand2 & 0xfff) << 0);
	**address = inst;
}
void arm_bic (
	uint32_t **address,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
){
	// aaaa00b1110cddddeeeeffffffffffff
	uint32_t inst = 0x1c00000 | (14 << 28) | ((immediate & 0x1) << 25) | ((set_condition & 0x1) << 20) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((operand2 & 0xfff) << 0);
	**address = inst;
}
void arm_bkpt_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int imm12,
	unsigned int imm4
){
	// aaaa00010010bbbbbbbbbbbb0111cccc
	uint32_t inst = 0x1200070 | ((auto_cond & 0xf) << 28) | ((imm12 & 0xfff) << 8) | ((imm4 & 0xf) << 0);
	**address = inst;
}
void arm_bkpt (
	uint32_t **address,
	unsigned int imm12,
	unsigned int imm4
){
	// aaaa00010010bbbbbbbbbbbb0111cccc
	uint32_t inst = 0x1200070 | (14 << 28) | ((imm12 & 0xfff) << 8) | ((imm4 & 0xf) << 0);
	**address = inst;
}
void arm_bl_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int offset_branch
){
	// aaaa1011bbbbbbbbbbbbbbbbbbbbbbbb
	uint32_t inst = 0xb000000 | ((auto_cond & 0xf) << 28) | ((offset_branch & 0xffffff) << 0);
	**address = inst;
}
void arm_bl (
	uint32_t **address,
	unsigned int offset_branch
){
	// aaaa1011bbbbbbbbbbbbbbbbbbbbbbbb
	uint32_t inst = 0xb000000 | (14 << 28) | ((offset_branch & 0xffffff) << 0);
	**address = inst;
}
void arm_blx_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rn
){
	// aaaa000100101111111111110011bbbb
	uint32_t inst = 0x12fff30 | ((auto_cond & 0xf) << 28) | ((rn & 0xf) << 0);
	**address = inst;
}
void arm_blx (
	uint32_t **address,
	unsigned int rn
){
	// aaaa000100101111111111110011bbbb
	uint32_t inst = 0x12fff30 | (14 << 28) | ((rn & 0xf) << 0);
	**address = inst;
}
void arm_blxi (
	uint32_t **address,
	unsigned int h,
	unsigned int imm24
){
	// 1111101abbbbbbbbbbbbbbbbbbbbbbbb
	uint32_t inst = 0xfa000000 | ((h & 0x1) << 24) | ((imm24 & 0xffffff) << 0);
	**address = inst;
}
void arm_bx_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rn
){
	// aaaa000100101111111111110001bbbb
	uint32_t inst = 0x12fff10 | ((auto_cond & 0xf) << 28) | ((rn & 0xf) << 0);
	**address = inst;
}
void arm_bx (
	uint32_t **address,
	unsigned int rn
){
	// aaaa000100101111111111110001bbbb
	uint32_t inst = 0x12fff10 | (14 << 28) | ((rn & 0xf) << 0);
	**address = inst;
}
void arm_cdp_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int opc1,
	unsigned int crn,
	unsigned int crd,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
){
	// aaaa1110bbbbccccddddeeeefff0gggg
	uint32_t inst = 0xe000000 | ((auto_cond & 0xf) << 28) | ((opc1 & 0xf) << 20) | ((crn & 0xf) << 16) | ((crd & 0xf) << 12) | ((coproc & 0xf) << 8) | ((opc2 & 0x7) << 5) | ((crm & 0xf) << 0);
	**address = inst;
}
void arm_cdp (
	uint32_t **address,
	unsigned int opc1,
	unsigned int crn,
	unsigned int crd,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
){
	// aaaa1110bbbbccccddddeeeefff0gggg
	uint32_t inst = 0xe000000 | (14 << 28) | ((opc1 & 0xf) << 20) | ((crn & 0xf) << 16) | ((crd & 0xf) << 12) | ((coproc & 0xf) << 8) | ((opc2 & 0x7) << 5) | ((crm & 0xf) << 0);
	**address = inst;
}
void arm_cdp2 (
	uint32_t **address,
	unsigned int opc1,
	unsigned int crn,
	unsigned int crd,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
){
	// 11111110bbbbccccddddeeeefff0gggg
	uint32_t inst = 0xfe000000 | ((opc1 & 0xf) << 20) | ((crn & 0xf) << 16) | ((crd & 0xf) << 12) | ((coproc & 0xf) << 8) | ((opc2 & 0x7) << 5) | ((crm & 0xf) << 0);
	**address = inst;
}
void arm_clrex (
	uint32_t **address
){
	// 11110101011111111111000000011111
	uint32_t inst = 0xf57ff01f;
	**address = inst;
}
void arm_clz_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm
){
	// aaaa000101101111bbbb11110001cccc
	uint32_t inst = 0x16f0f10 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_clz (
	uint32_t **address,
	unsigned int rd,
	unsigned int rm
){
	// aaaa000101101111bbbb11110001cccc
	uint32_t inst = 0x16f0f10 | (14 << 28) | ((rd & 0xf) << 12) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_cmn_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rn,
	unsigned int operand2
){
	// aaaa00b10111cccc0000dddddddddddd
	uint32_t inst = 0x1700000 | ((auto_cond & 0xf) << 28) | ((immediate & 0x1) << 25) | ((rn & 0xf) << 16) | ((operand2 & 0xfff) << 0);
	**address = inst;
}
void arm_cmn (
	uint32_t **address,
	unsigned int immediate,
	unsigned int rn,
	unsigned int operand2
){
	// aaaa00b10111cccc0000dddddddddddd
	uint32_t inst = 0x1700000 | (14 << 28) | ((immediate & 0x1) << 25) | ((rn & 0xf) << 16) | ((operand2 & 0xfff) << 0);
	**address = inst;
}
void arm_cmp_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rn,
	unsigned int operand2
){
	// aaaa00b10101cccc0000dddddddddddd
	uint32_t inst = 0x1500000 | ((auto_cond & 0xf) << 28) | ((immediate & 0x1) << 25) | ((rn & 0xf) << 16) | ((operand2 & 0xfff) << 0);
	**address = inst;
}
void arm_cmp (
	uint32_t **address,
	unsigned int immediate,
	unsigned int rn,
	unsigned int operand2
){
	// aaaa00b10101cccc0000dddddddddddd
	uint32_t inst = 0x1500000 | (14 << 28) | ((immediate & 0x1) << 25) | ((rn & 0xf) << 16) | ((operand2 & 0xfff) << 0);
	**address = inst;
}
void arm_dbg_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int option
){
	// aaaa001100100000111100001111bbbb
	uint32_t inst = 0x320f0f0 | ((auto_cond & 0xf) << 28) | ((option & 0xf) << 0);
	**address = inst;
}
void arm_dbg (
	uint32_t **address,
	unsigned int option
){
	// aaaa001100100000111100001111bbbb
	uint32_t inst = 0x320f0f0 | (14 << 28) | ((option & 0xf) << 0);
	**address = inst;
}
void arm_dmb (
	uint32_t **address,
	unsigned int option
){
	// 1111010101111111111100000101aaaa
	uint32_t inst = 0xf57ff050 | ((option & 0xf) << 0);
	**address = inst;
}
void arm_dsb (
	uint32_t **address,
	unsigned int option
){
	// 1111010101111111111100000100aaaa
	uint32_t inst = 0xf57ff040 | ((option & 0xf) << 0);
	**address = inst;
}
void arm_eor_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
){
	// aaaa00b0001cddddeeeeffffffffffff
	uint32_t inst = 0x200000 | ((auto_cond & 0xf) << 28) | ((immediate & 0x1) << 25) | ((set_condition & 0x1) << 20) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((operand2 & 0xfff) << 0);
	**address = inst;
}
void arm_eor (
	uint32_t **address,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
){
	// aaaa00b0001cddddeeeeffffffffffff
	uint32_t inst = 0x200000 | (14 << 28) | ((immediate & 0x1) << 25) | ((set_condition & 0x1) << 20) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((operand2 & 0xfff) << 0);
	**address = inst;
}
void arm_isb (
	uint32_t **address,
	unsigned int option
){
	// 1111010101111111111100000110aaaa
	uint32_t inst = 0xf57ff060 | ((option & 0xf) << 0);
	**address = inst;
}
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
){
	// aaaa110pudw1bbbbccccddddeeeeeeee
	uint32_t inst = 0xc100000 | ((auto_cond & 0xf) << 28) | ((p & 0x1) << 24) | ((u & 0x1) << 23) | ((coproc & 0x7fff) << 8) | ((w & 0x1) << 21) | ((rn & 0xf) << 16) | ((crd & 0xf) << 12) | ((imm8 & 0xff) << 0);
	**address = inst;
}
void arm_ldc (
	uint32_t **address,
	unsigned int p,
	unsigned int u,
	unsigned int coproc,
	unsigned int w,
	unsigned int rn,
	unsigned int crd,
	unsigned int imm8
){
	// aaaa110pudw1bbbbccccddddeeeeeeee
	uint32_t inst = 0xc100000 | (14 << 28) | ((p & 0x1) << 24) | ((u & 0x1) << 23) | ((coproc & 0x7fff) << 8) | ((w & 0x1) << 21) | ((rn & 0xf) << 16) | ((crd & 0xf) << 12) | ((imm8 & 0xff) << 0);
	**address = inst;
}
void arm_ldm_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
){
	// aaaa100bcde1ffffgggggggggggggggg
	uint32_t inst = 0x8100000 | ((auto_cond & 0xf) << 28) | ((rn & 0xf) << 16) | ((registers & 0xffff) << 0) | ((prepostindex & 0x1) << 24) | ((updown & 0x1) << 23) | ((writeback & 0x1) << 21) | ((psr & 0x1) << 22);
	**address = inst;
}
void arm_ldm (
	uint32_t **address,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
){
	// aaaa100bcde1ffffgggggggggggggggg
	uint32_t inst = 0x8100000 | (14 << 28) | ((rn & 0xf) << 16) | ((registers & 0xffff) << 0) | ((prepostindex & 0x1) << 24) | ((updown & 0x1) << 23) | ((writeback & 0x1) << 21) | ((psr & 0x1) << 22);
	**address = inst;
}
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
){
	// aaaa01bcd0e1ffffgggghhhhhhhhhhhh
	uint32_t inst = 0x4100000 | ((auto_cond & 0xf) << 28) | ((immediate & 0x1) << 25) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((offset & 0xfff) << 0) | ((prepostindex & 0x1) << 24) | ((updown & 0x1) << 23) | ((writeback & 0x1) << 21);
	**address = inst;
}
void arm_ldr (
	uint32_t **address,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
){
	// aaaa01bcd0e1ffffgggghhhhhhhhhhhh
	uint32_t inst = 0x4100000 | (14 << 28) | ((immediate & 0x1) << 25) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((offset & 0xfff) << 0) | ((prepostindex & 0x1) << 24) | ((updown & 0x1) << 23) | ((writeback & 0x1) << 21);
	**address = inst;
}
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
){
	// aaaa01bcd1e1ffffgggghhhhhhhhhhhh
	uint32_t inst = 0x4500000 | ((auto_cond & 0xf) << 28) | ((immediate & 0x1) << 25) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((offset & 0xfff) << 0) | ((prepostindex & 0x1) << 24) | ((updown & 0x1) << 23) | ((writeback & 0x1) << 21);
	**address = inst;
}
void arm_ldrb (
	uint32_t **address,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
){
	// aaaa01bcd1e1ffffgggghhhhhhhhhhhh
	uint32_t inst = 0x4500000 | (14 << 28) | ((immediate & 0x1) << 25) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((offset & 0xfff) << 0) | ((prepostindex & 0x1) << 24) | ((updown & 0x1) << 23) | ((writeback & 0x1) << 21);
	**address = inst;
}
void arm_ldrbt_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int updown,
	unsigned int operand2
){
	// aaaa01b0u111ccccddddeeeeeeeeeeee
	uint32_t inst = 0x4700000 | ((auto_cond & 0xf) << 28) | ((immediate & 0x1) << 25) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((updown & 0x1) << 23) | ((operand2 & 0xfff) << 0);
	**address = inst;
}
void arm_ldrbt (
	uint32_t **address,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int updown,
	unsigned int operand2
){
	// aaaa01b0u111ccccddddeeeeeeeeeeee
	uint32_t inst = 0x4700000 | (14 << 28) | ((immediate & 0x1) << 25) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((updown & 0x1) << 23) | ((operand2 & 0xfff) << 0);
	**address = inst;
}
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
){
	// aaaa000bcde0ffffgggghhhh1101iiii
	uint32_t inst = 0xd0 | ((auto_cond & 0xf) << 28) | ((immediate & 0x1) << 22) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm_imm4l & 0xf) << 0) | ((imm4h & 0xf) << 8) | ((prepostindex & 0x1) << 24) | ((updown & 0x1) << 23) | ((writeback & 0x1) << 21);
	**address = inst;
}
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
){
	// aaaa000bcde0ffffgggghhhh1101iiii
	uint32_t inst = 0xd0 | (14 << 28) | ((immediate & 0x1) << 22) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm_imm4l & 0xf) << 0) | ((imm4h & 0xf) << 8) | ((prepostindex & 0x1) << 24) | ((updown & 0x1) << 23) | ((writeback & 0x1) << 21);
	**address = inst;
}
void arm_ldrex_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn
){
	// aaaa00011001bbbbcccc111110011111
	uint32_t inst = 0x1900f9f | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16);
	**address = inst;
}
void arm_ldrex (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn
){
	// aaaa00011001bbbbcccc111110011111
	uint32_t inst = 0x1900f9f | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16);
	**address = inst;
}
void arm_ldrexb_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn
){
	// aaaa00011101bbbbcccc111110011111
	uint32_t inst = 0x1d00f9f | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16);
	**address = inst;
}
void arm_ldrexb (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn
){
	// aaaa00011101bbbbcccc111110011111
	uint32_t inst = 0x1d00f9f | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16);
	**address = inst;
}
void arm_ldrexd_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn
){
	// aaaa00011011bbbbcccc111110011111
	uint32_t inst = 0x1b00f9f | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16);
	**address = inst;
}
void arm_ldrexd (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn
){
	// aaaa00011011bbbbcccc111110011111
	uint32_t inst = 0x1b00f9f | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16);
	**address = inst;
}
void arm_ldrexh_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn
){
	// aaaa00011111bbbbcccc111110011111
	uint32_t inst = 0x1f00f9f | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16);
	**address = inst;
}
void arm_ldrexh (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn
){
	// aaaa00011111bbbbcccc111110011111
	uint32_t inst = 0x1f00f9f | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16);
	**address = inst;
}
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
){
	// aaaa000bcde1ffffgggghhhh1011iiii
	uint32_t inst = 0x1000b0 | ((auto_cond & 0xf) << 28) | ((immediate & 0x1) << 22) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm_imm4l & 0xf) << 0) | ((imm4h & 0xf) << 8) | ((prepostindex & 0x1) << 24) | ((updown & 0x1) << 23) | ((writeback & 0x1) << 21);
	**address = inst;
}
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
){
	// aaaa000bcde1ffffgggghhhh1011iiii
	uint32_t inst = 0x1000b0 | (14 << 28) | ((immediate & 0x1) << 22) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm_imm4l & 0xf) << 0) | ((imm4h & 0xf) << 8) | ((prepostindex & 0x1) << 24) | ((updown & 0x1) << 23) | ((writeback & 0x1) << 21);
	**address = inst;
}
void arm_ldrht_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm_imm4l,
	unsigned int imm4h,
	unsigned int updown
){
	// aaaa0000ub11ccccdddddeee1011ffff
	uint32_t inst = 0x3000b0 | ((auto_cond & 0xf) << 28) | ((immediate & 0x1) << 22) | ((rd & 0x1f) << 11) | ((rn & 0xf) << 16) | ((rm_imm4l & 0xf) << 0) | ((imm4h & 0x7) << 8) | ((updown & 0x1) << 23);
	**address = inst;
}
void arm_ldrht (
	uint32_t **address,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm_imm4l,
	unsigned int imm4h,
	unsigned int updown
){
	// aaaa0000ub11ccccdddddeee1011ffff
	uint32_t inst = 0x3000b0 | (14 << 28) | ((immediate & 0x1) << 22) | ((rd & 0x1f) << 11) | ((rn & 0xf) << 16) | ((rm_imm4l & 0xf) << 0) | ((imm4h & 0x7) << 8) | ((updown & 0x1) << 23);
	**address = inst;
}
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
){
	// aaaa000pubw1ccccddddeeee1101ffff
	uint32_t inst = 0x1000d0 | ((auto_cond & 0xf) << 28) | ((immediate & 0x1) << 22) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm_imm4l & 0xf) << 0) | ((imm4h & 0xf) << 8) | ((index & 0x1) << 24) | ((updown & 0x1) << 23) | ((writeback & 0x1) << 21);
	**address = inst;
}
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
){
	// aaaa000pubw1ccccddddeeee1101ffff
	uint32_t inst = 0x1000d0 | (14 << 28) | ((immediate & 0x1) << 22) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm_imm4l & 0xf) << 0) | ((imm4h & 0xf) << 8) | ((index & 0x1) << 24) | ((updown & 0x1) << 23) | ((writeback & 0x1) << 21);
	**address = inst;
}
void arm_ldrsbt_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int imm4h,
	unsigned int updown
){
	// aaaa0000ub11ccccddddeeee1101ffff
	uint32_t inst = 0x3000d0 | ((auto_cond & 0xf) << 28) | ((immediate & 0x1) << 22) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0) | ((imm4h & 0xf) << 8) | ((updown & 0x1) << 23);
	**address = inst;
}
void arm_ldrsbt (
	uint32_t **address,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int imm4h,
	unsigned int updown
){
	// aaaa0000ub11ccccddddeeee1101ffff
	uint32_t inst = 0x3000d0 | (14 << 28) | ((immediate & 0x1) << 22) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0) | ((imm4h & 0xf) << 8) | ((updown & 0x1) << 23);
	**address = inst;
}
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
){
	// aaaa000pubw1ccccddddeeee1111ffff
	uint32_t inst = 0x1000f0 | ((auto_cond & 0xf) << 28) | ((immediate & 0x1) << 22) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm_imm4l & 0xf) << 0) | ((imm4h & 0xf) << 8) | ((prepostindex & 0x1) << 24) | ((updown & 0x1) << 23) | ((writeback & 0x1) << 21);
	**address = inst;
}
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
){
	// aaaa000pubw1ccccddddeeee1111ffff
	uint32_t inst = 0x1000f0 | (14 << 28) | ((immediate & 0x1) << 22) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm_imm4l & 0xf) << 0) | ((imm4h & 0xf) << 8) | ((prepostindex & 0x1) << 24) | ((updown & 0x1) << 23) | ((writeback & 0x1) << 21);
	**address = inst;
}
void arm_ldrsht_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int imm4h,
	unsigned int updown
){
	// aaaa0000ub11ccccddddeeee1111ffff
	uint32_t inst = 0x3000f0 | ((auto_cond & 0xf) << 28) | ((immediate & 0x1) << 22) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0) | ((imm4h & 0xf) << 8) | ((updown & 0x1) << 23);
	**address = inst;
}
void arm_ldrsht (
	uint32_t **address,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int imm4h,
	unsigned int updown
){
	// aaaa0000ub11ccccddddeeee1111ffff
	uint32_t inst = 0x3000f0 | (14 << 28) | ((immediate & 0x1) << 22) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0) | ((imm4h & 0xf) << 8) | ((updown & 0x1) << 23);
	**address = inst;
}
void arm_ldrt_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int updown,
	unsigned int operand2
){
	// aaaa01b0u011ccccddddeeeeeeeeeeee
	uint32_t inst = 0x4300000 | ((auto_cond & 0xf) << 28) | ((immediate & 0x1) << 25) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((updown & 0x1) << 23) | ((operand2 & 0xfff) << 0);
	**address = inst;
}
void arm_ldrt (
	uint32_t **address,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int updown,
	unsigned int operand2
){
	// aaaa01b0u011ccccddddeeeeeeeeeeee
	uint32_t inst = 0x4300000 | (14 << 28) | ((immediate & 0x1) << 25) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((updown & 0x1) << 23) | ((operand2 & 0xfff) << 0);
	**address = inst;
}
void arm_mcr_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int opc1,
	unsigned int crn,
	unsigned int rd,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
){
	// aaaa1110bbb0ccccddddeeeefff1gggg
	uint32_t inst = 0xe000010 | ((auto_cond & 0xf) << 28) | ((opc1 & 0x7) << 21) | ((crn & 0xf) << 16) | ((rd & 0xf) << 12) | ((coproc & 0xf) << 8) | ((opc2 & 0x7) << 5) | ((crm & 0xf) << 0);
	**address = inst;
}
void arm_mcr (
	uint32_t **address,
	unsigned int opc1,
	unsigned int crn,
	unsigned int rd,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
){
	// aaaa1110bbb0ccccddddeeeefff1gggg
	uint32_t inst = 0xe000010 | (14 << 28) | ((opc1 & 0x7) << 21) | ((crn & 0xf) << 16) | ((rd & 0xf) << 12) | ((coproc & 0xf) << 8) | ((opc2 & 0x7) << 5) | ((crm & 0xf) << 0);
	**address = inst;
}
void arm_mcrr_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int coproc,
	unsigned int opc1,
	unsigned int rt,
	unsigned int rt2,
	unsigned int crm
){
	// aaaa11000100bbbbccccddddeeeeffff
	uint32_t inst = 0xc400000 | ((auto_cond & 0xf) << 28) | ((coproc & 0xf) << 8) | ((opc1 & 0xf) << 4) | ((rt & 0xf) << 12) | ((rt2 & 0xf) << 16) | ((crm & 0xf) << 0);
	**address = inst;
}
void arm_mcrr (
	uint32_t **address,
	unsigned int coproc,
	unsigned int opc1,
	unsigned int rt,
	unsigned int rt2,
	unsigned int crm
){
	// aaaa11000100bbbbccccddddeeeeffff
	uint32_t inst = 0xc400000 | (14 << 28) | ((coproc & 0xf) << 8) | ((opc1 & 0xf) << 4) | ((rt & 0xf) << 12) | ((rt2 & 0xf) << 16) | ((crm & 0xf) << 0);
	**address = inst;
}
void arm_mla_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs,
	unsigned int rn
){
	// aaaa00000010bbbbccccdddd1001eeee
	uint32_t inst = 0x200090 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 16) | ((rm & 0xf) << 0) | ((rs & 0xf) << 8) | ((rn & 0xf) << 12);
	**address = inst;
}
void arm_mla (
	uint32_t **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs,
	unsigned int rn
){
	// aaaa00000010bbbbccccdddd1001eeee
	uint32_t inst = 0x200090 | (14 << 28) | ((rd & 0xf) << 16) | ((rm & 0xf) << 0) | ((rs & 0xf) << 8) | ((rn & 0xf) << 12);
	**address = inst;
}
void arm_mls_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
){
	// aaaa00000110bbbbccccdddd1001eeee
	uint32_t inst = 0x600090 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8) | ((ra & 0xf) << 12);
	**address = inst;
}
void arm_mls (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
){
	// aaaa00000110bbbbccccdddd1001eeee
	uint32_t inst = 0x600090 | (14 << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8) | ((ra & 0xf) << 12);
	**address = inst;
}
void arm_mov_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int operand2
){
	// aaaa00b1101c0000ddddeeeeeeeeeeee
	uint32_t inst = 0x1a00000 | ((auto_cond & 0xf) << 28) | ((immediate & 0x1) << 25) | ((set_condition & 0x1) << 20) | ((rd & 0xf) << 12) | ((operand2 & 0xfff) << 0);
	**address = inst;
}
void arm_mov (
	uint32_t **address,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int operand2
){
	// aaaa00b1101c0000ddddeeeeeeeeeeee
	uint32_t inst = 0x1a00000 | (14 << 28) | ((immediate & 0x1) << 25) | ((set_condition & 0x1) << 20) | ((rd & 0xf) << 12) | ((operand2 & 0xfff) << 0);
	**address = inst;
}
void arm_movt_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
){
	// aaaa00110100bbbbccccdddddddddddd
	uint32_t inst = 0x3400000 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((operand2 & 0xfff) << 0);
	**address = inst;
}
void arm_movt (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
){
	// aaaa00110100bbbbccccdddddddddddd
	uint32_t inst = 0x3400000 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((operand2 & 0xfff) << 0);
	**address = inst;
}
void arm_movw_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
){
	// aaaa00110000bbbbccccdddddddddddd
	uint32_t inst = 0x3000000 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((operand2 & 0xfff) << 0);
	**address = inst;
}
void arm_movw (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
){
	// aaaa00110000bbbbccccdddddddddddd
	uint32_t inst = 0x3000000 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((operand2 & 0xfff) << 0);
	**address = inst;
}
void arm_mrc_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int opc1,
	unsigned int crn,
	unsigned int rd,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
){
	// aaaa1110bbb1ccccddddeeeefff1gggg
	uint32_t inst = 0xe100010 | ((auto_cond & 0xf) << 28) | ((opc1 & 0x7) << 21) | ((crn & 0xf) << 16) | ((rd & 0xf) << 12) | ((coproc & 0xf) << 8) | ((opc2 & 0x7) << 5) | ((crm & 0xf) << 0);
	**address = inst;
}
void arm_mrc (
	uint32_t **address,
	unsigned int opc1,
	unsigned int crn,
	unsigned int rd,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
){
	// aaaa1110bbb1ccccddddeeeefff1gggg
	uint32_t inst = 0xe100010 | (14 << 28) | ((opc1 & 0x7) << 21) | ((crn & 0xf) << 16) | ((rd & 0xf) << 12) | ((coproc & 0xf) << 8) | ((opc2 & 0x7) << 5) | ((crm & 0xf) << 0);
	**address = inst;
}
void arm_mrrc_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int coproc,
	unsigned int opc1,
	unsigned int rt,
	unsigned int rt2,
	unsigned int crm
){
	// aaaa11000101bbbbccccddddeeeeffff
	uint32_t inst = 0xc500000 | ((auto_cond & 0xf) << 28) | ((coproc & 0xf) << 8) | ((opc1 & 0xf) << 4) | ((rt & 0xf) << 12) | ((rt2 & 0xf) << 16) | ((crm & 0xf) << 0);
	**address = inst;
}
void arm_mrrc (
	uint32_t **address,
	unsigned int coproc,
	unsigned int opc1,
	unsigned int rt,
	unsigned int rt2,
	unsigned int crm
){
	// aaaa11000101bbbbccccddddeeeeffff
	uint32_t inst = 0xc500000 | (14 << 28) | ((coproc & 0xf) << 8) | ((opc1 & 0xf) << 4) | ((rt & 0xf) << 12) | ((rt2 & 0xf) << 16) | ((crm & 0xf) << 0);
	**address = inst;
}
void arm_mrs_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd
){
	// aaaa000100001111bbbb000000000000
	uint32_t inst = 0x10f0000 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12);
	**address = inst;
}
void arm_mrs (
	uint32_t **address,
	unsigned int rd
){
	// aaaa000100001111bbbb000000000000
	uint32_t inst = 0x10f0000 | (14 << 28) | ((rd & 0xf) << 12);
	**address = inst;
}
void arm_msr_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rn,
	unsigned int mask
){
	// aaaa00010010bb00111100000000cccc
	uint32_t inst = 0x120f000 | ((auto_cond & 0xf) << 28) | ((rn & 0xf) << 0) | ((mask & 0x3) << 18);
	**address = inst;
}
void arm_msr (
	uint32_t **address,
	unsigned int rn,
	unsigned int mask
){
	// aaaa00010010bb00111100000000cccc
	uint32_t inst = 0x120f000 | (14 << 28) | ((rn & 0xf) << 0) | ((mask & 0x3) << 18);
	**address = inst;
}
void arm_msri_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int mask,
	unsigned int imm12
){
	// aaaa00110010bb001111cccccccccccc
	uint32_t inst = 0x320f000 | ((auto_cond & 0xf) << 28) | ((mask & 0x3) << 18) | ((imm12 & 0xfff) << 0);
	**address = inst;
}
void arm_msri (
	uint32_t **address,
	unsigned int mask,
	unsigned int imm12
){
	// aaaa00110010bb001111cccccccccccc
	uint32_t inst = 0x320f000 | (14 << 28) | ((mask & 0x3) << 18) | ((imm12 & 0xfff) << 0);
	**address = inst;
}
void arm_mul_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs
){
	// aaaa00000000bbbb0000cccc1001dddd
	uint32_t inst = 0x90 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 16) | ((rm & 0xf) << 0) | ((rs & 0xf) << 8);
	**address = inst;
}
void arm_mul (
	uint32_t **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs
){
	// aaaa00000000bbbb0000cccc1001dddd
	uint32_t inst = 0x90 | (14 << 28) | ((rd & 0xf) << 16) | ((rm & 0xf) << 0) | ((rs & 0xf) << 8);
	**address = inst;
}
void arm_mvn_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int operand2
){
	// aaaa00b1111c0000ddddeeeeeeeeeeee
	uint32_t inst = 0x1e00000 | ((auto_cond & 0xf) << 28) | ((immediate & 0x1) << 25) | ((set_condition & 0x1) << 20) | ((rd & 0xf) << 12) | ((operand2 & 0xfff) << 0);
	**address = inst;
}
void arm_mvn (
	uint32_t **address,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int operand2
){
	// aaaa00b1111c0000ddddeeeeeeeeeeee
	uint32_t inst = 0x1e00000 | (14 << 28) | ((immediate & 0x1) << 25) | ((set_condition & 0x1) << 20) | ((rd & 0xf) << 12) | ((operand2 & 0xfff) << 0);
	**address = inst;
}
void arm_nop_cond (
	uint32_t **address,
	unsigned int auto_cond
){
	// aaaa0011001000001111000000000000
	uint32_t inst = 0x320f000 | ((auto_cond & 0xf) << 28);
	**address = inst;
}
void arm_nop (
	uint32_t **address
){
	// aaaa0011001000001111000000000000
	uint32_t inst = 0x320f000 | (14 << 28);
	**address = inst;
}
void arm_orr_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
){
	// aaaa00b1100cddddeeeeffffffffffff
	uint32_t inst = 0x1800000 | ((auto_cond & 0xf) << 28) | ((immediate & 0x1) << 25) | ((set_condition & 0x1) << 20) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((operand2 & 0xfff) << 0);
	**address = inst;
}
void arm_orr (
	uint32_t **address,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
){
	// aaaa00b1100cddddeeeeffffffffffff
	uint32_t inst = 0x1800000 | (14 << 28) | ((immediate & 0x1) << 25) | ((set_condition & 0x1) << 20) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((operand2 & 0xfff) << 0);
	**address = inst;
}
void arm_pkh_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int tb,
	unsigned int imm5
){
	// aaaa01101000bbbbccccddddde01ffff
	uint32_t inst = 0x6800010 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0) | ((tb & 0x1) << 6) | ((imm5 & 0x1f) << 7);
	**address = inst;
}
void arm_pkh (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int tb,
	unsigned int imm5
){
	// aaaa01101000bbbbccccddddde01ffff
	uint32_t inst = 0x6800010 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0) | ((tb & 0x1) << 6) | ((imm5 & 0x1f) << 7);
	**address = inst;
}
void arm_pld (
	uint32_t **address,
	unsigned int immediate,
	unsigned int updown,
	unsigned int is_read,
	unsigned int rn,
	unsigned int operand2
){
	// 111101i1ab01cccc1111dddddddddddd
	uint32_t inst = 0xf510f000 | ((immediate & 0x1) << 25) | ((updown & 0x1) << 23) | ((is_read & 0x1) << 22) | ((rn & 0xf) << 16) | ((operand2 & 0xfff) << 0);
	**address = inst;
}
void arm_pli (
	uint32_t **address,
	unsigned int updown,
	unsigned int rn,
	unsigned int imm5,
	unsigned int type,
	unsigned int rm
){
	// 11110110a101bbbb1111cccccdd0eeee
	uint32_t inst = 0xf650f000 | ((updown & 0x1) << 23) | ((rn & 0xf) << 16) | ((imm5 & 0x1f) << 7) | ((type & 0x3) << 5) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_plii (
	uint32_t **address,
	unsigned int updown,
	unsigned int rn,
	unsigned int imm12
){
	// 11110100a101bbbb1111cccccccccccc
	uint32_t inst = 0xf450f000 | ((updown & 0x1) << 23) | ((rn & 0xf) << 16) | ((imm12 & 0xfff) << 0);
	**address = inst;
}
void arm_qadd_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rn
){
	// aaaa00010000bbbbcccc00000101dddd
	uint32_t inst = 0x1000050 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rm & 0xf) << 0) | ((rn & 0xf) << 16);
	**address = inst;
}
void arm_qadd (
	uint32_t **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rn
){
	// aaaa00010000bbbbcccc00000101dddd
	uint32_t inst = 0x1000050 | (14 << 28) | ((rd & 0xf) << 12) | ((rm & 0xf) << 0) | ((rn & 0xf) << 16);
	**address = inst;
}
void arm_qadd16_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100010bbbbcccc11110001dddd
	uint32_t inst = 0x6200f10 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_qadd16 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100010bbbbcccc11110001dddd
	uint32_t inst = 0x6200f10 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_qadd8_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100010bbbbcccc11111001dddd
	uint32_t inst = 0x6200f90 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_qadd8 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100010bbbbcccc11111001dddd
	uint32_t inst = 0x6200f90 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_qasx_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100010bbbbcccc11110011dddd
	uint32_t inst = 0x6200f30 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_qasx (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100010bbbbcccc11110011dddd
	uint32_t inst = 0x6200f30 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_qdadd_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rn
){
	// aaaa00010100bbbbcccc00000101dddd
	uint32_t inst = 0x1400050 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rm & 0xf) << 0) | ((rn & 0xf) << 16);
	**address = inst;
}
void arm_qdadd (
	uint32_t **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rn
){
	// aaaa00010100bbbbcccc00000101dddd
	uint32_t inst = 0x1400050 | (14 << 28) | ((rd & 0xf) << 12) | ((rm & 0xf) << 0) | ((rn & 0xf) << 16);
	**address = inst;
}
void arm_qdsub_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rn
){
	// aaaa00010110bbbbcccc00000101dddd
	uint32_t inst = 0x1600050 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rm & 0xf) << 0) | ((rn & 0xf) << 16);
	**address = inst;
}
void arm_qdsub (
	uint32_t **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rn
){
	// aaaa00010110bbbbcccc00000101dddd
	uint32_t inst = 0x1600050 | (14 << 28) | ((rd & 0xf) << 12) | ((rm & 0xf) << 0) | ((rn & 0xf) << 16);
	**address = inst;
}
void arm_qsax_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100010bbbbcccc11110101dddd
	uint32_t inst = 0x6200f50 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_qsax (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100010bbbbcccc11110101dddd
	uint32_t inst = 0x6200f50 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_qsub_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rn
){
	// aaaa00010010bbbbcccc00000101dddd
	uint32_t inst = 0x1200050 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rm & 0xf) << 0) | ((rn & 0xf) << 16);
	**address = inst;
}
void arm_qsub (
	uint32_t **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rn
){
	// aaaa00010010bbbbcccc00000101dddd
	uint32_t inst = 0x1200050 | (14 << 28) | ((rd & 0xf) << 12) | ((rm & 0xf) << 0) | ((rn & 0xf) << 16);
	**address = inst;
}
void arm_qsub16_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100010bbbbcccc11110111dddd
	uint32_t inst = 0x6200f70 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_qsub16 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100010bbbbcccc11110111dddd
	uint32_t inst = 0x6200f70 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_qsub8_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100010bbbbcccc11110111dddd
	uint32_t inst = 0x6200f70 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_qsub8 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100010bbbbcccc11110111dddd
	uint32_t inst = 0x6200f70 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_rbit_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm
){
	// aaaa011011111111bbbb11110011cccc
	uint32_t inst = 0x6ff0f30 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_rbit (
	uint32_t **address,
	unsigned int rd,
	unsigned int rm
){
	// aaaa011011111111bbbb11110011cccc
	uint32_t inst = 0x6ff0f30 | (14 << 28) | ((rd & 0xf) << 12) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_rev_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm
){
	// aaaa011010111111bbbb11110011cccc
	uint32_t inst = 0x6bf0f30 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_rev (
	uint32_t **address,
	unsigned int rd,
	unsigned int rm
){
	// aaaa011010111111bbbb11110011cccc
	uint32_t inst = 0x6bf0f30 | (14 << 28) | ((rd & 0xf) << 12) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_rev16_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm
){
	// aaaa011010111111bbbb11111011cccc
	uint32_t inst = 0x6bf0fb0 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_rev16 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rm
){
	// aaaa011010111111bbbb11111011cccc
	uint32_t inst = 0x6bf0fb0 | (14 << 28) | ((rd & 0xf) << 12) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_revsh_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm
){
	// aaaa011011111111bbbb11111011cccc
	uint32_t inst = 0x6ff0fb0 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_revsh (
	uint32_t **address,
	unsigned int rd,
	unsigned int rm
){
	// aaaa011011111111bbbb11111011cccc
	uint32_t inst = 0x6ff0fb0 | (14 << 28) | ((rd & 0xf) << 12) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_rrx_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rm
){
	// aaaa0001101s0000bbbb00000110cccc
	uint32_t inst = 0x1a00060 | ((auto_cond & 0xf) << 28) | ((set_condition & 0x1) << 20) | ((rd & 0xf) << 12) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_rrx (
	uint32_t **address,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rm
){
	// aaaa0001101s0000bbbb00000110cccc
	uint32_t inst = 0x1a00060 | (14 << 28) | ((set_condition & 0x1) << 20) | ((rd & 0xf) << 12) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_rsb_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
){
	// aaaa00b0011cddddeeeeffffffffffff
	uint32_t inst = 0x600000 | ((auto_cond & 0xf) << 28) | ((immediate & 0x1) << 25) | ((set_condition & 0x1) << 20) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((operand2 & 0xfff) << 0);
	**address = inst;
}
void arm_rsb (
	uint32_t **address,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
){
	// aaaa00b0011cddddeeeeffffffffffff
	uint32_t inst = 0x600000 | (14 << 28) | ((immediate & 0x1) << 25) | ((set_condition & 0x1) << 20) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((operand2 & 0xfff) << 0);
	**address = inst;
}
void arm_rsc_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
){
	// aaaa00b0111fccccddddeeeeeeeeeeee
	uint32_t inst = 0xe00000 | ((auto_cond & 0xf) << 28) | ((immediate & 0x1) << 25) | ((set_condition & 0x1) << 20) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((operand2 & 0xfff) << 0);
	**address = inst;
}
void arm_rsc (
	uint32_t **address,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
){
	// aaaa00b0111fccccddddeeeeeeeeeeee
	uint32_t inst = 0xe00000 | (14 << 28) | ((immediate & 0x1) << 25) | ((set_condition & 0x1) << 20) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((operand2 & 0xfff) << 0);
	**address = inst;
}
void arm_sadd16_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100001bbbbcccc11110001dddd
	uint32_t inst = 0x6100f10 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_sadd16 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100001bbbbcccc11110001dddd
	uint32_t inst = 0x6100f10 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_sadd8_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100001bbbbcccc11111001dddd
	uint32_t inst = 0x6100f90 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_sadd8 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100001bbbbcccc11111001dddd
	uint32_t inst = 0x6100f90 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_sasx_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100001bbbbcccc11110011dddd
	uint32_t inst = 0x6100f30 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_sasx (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100001bbbbcccc11110011dddd
	uint32_t inst = 0x6100f30 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_sbc_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
){
	// aaaa00b0110cddddeeeeffffffffffff
	uint32_t inst = 0xc00000 | ((auto_cond & 0xf) << 28) | ((immediate & 0x1) << 25) | ((set_condition & 0x1) << 20) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((operand2 & 0xfff) << 0);
	**address = inst;
}
void arm_sbc (
	uint32_t **address,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
){
	// aaaa00b0110cddddeeeeffffffffffff
	uint32_t inst = 0xc00000 | (14 << 28) | ((immediate & 0x1) << 25) | ((set_condition & 0x1) << 20) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((operand2 & 0xfff) << 0);
	**address = inst;
}
void arm_sbfx_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int lsb,
	unsigned int widthm1
){
	// aaaa0111101bbbbbccccddddd101eeee
	uint32_t inst = 0x7a00050 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 0) | ((lsb & 0x1f) << 7) | ((widthm1 & 0x1f) << 16);
	**address = inst;
}
void arm_sbfx (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int lsb,
	unsigned int widthm1
){
	// aaaa0111101bbbbbccccddddd101eeee
	uint32_t inst = 0x7a00050 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 0) | ((lsb & 0x1f) << 7) | ((widthm1 & 0x1f) << 16);
	**address = inst;
}
void arm_sdiv_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01110001bbbb1111cccc0001dddd
	uint32_t inst = 0x710f010 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_sdiv (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01110001bbbb1111cccc0001dddd
	uint32_t inst = 0x710f010 | (14 << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_sel_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01101000bbbbcccc11111011dddd
	uint32_t inst = 0x6800fb0 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_sel (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01101000bbbbcccc11111011dddd
	uint32_t inst = 0x6800fb0 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_setend (
	uint32_t **address,
	unsigned int set_bigend
){
	// 1111000100000001000000e000000000
	uint32_t inst = 0xf1010000 | ((set_bigend & 0x1) << 9);
	**address = inst;
}
void arm_sev_cond (
	uint32_t **address,
	unsigned int auto_cond
){
	// aaaa0011001000001111000000000100
	uint32_t inst = 0x320f004 | ((auto_cond & 0xf) << 28);
	**address = inst;
}
void arm_sev (
	uint32_t **address
){
	// aaaa0011001000001111000000000100
	uint32_t inst = 0x320f004 | (14 << 28);
	**address = inst;
}
void arm_shadd16_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100011bbbbcccc11110001dddd
	uint32_t inst = 0x6300f10 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_shadd16 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100011bbbbcccc11110001dddd
	uint32_t inst = 0x6300f10 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_shadd8_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100011bbbbcccc11111001dddd
	uint32_t inst = 0x6300f90 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_shadd8 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100011bbbbcccc11111001dddd
	uint32_t inst = 0x6300f90 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_shasx_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100011bbbbcccc11110011dddd
	uint32_t inst = 0x6300f30 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_shasx (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100011bbbbcccc11110011dddd
	uint32_t inst = 0x6300f30 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_shsax_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100011bbbbcccc11110101dddd
	uint32_t inst = 0x6300f50 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_shsax (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100011bbbbcccc11110101dddd
	uint32_t inst = 0x6300f50 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_shsub16_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100011bbbbcccc11110111dddd
	uint32_t inst = 0x6300f70 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_shsub16 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100011bbbbcccc11110111dddd
	uint32_t inst = 0x6300f70 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_shsub8_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100011bbbbcccc11111111dddd
	uint32_t inst = 0x6300ff0 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_shsub8 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100011bbbbcccc11111111dddd
	uint32_t inst = 0x6300ff0 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_smlabb_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
){
	// aaaa00010000bbbbccccdddd1000eeee
	uint32_t inst = 0x1000080 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8) | ((ra & 0xf) << 12);
	**address = inst;
}
void arm_smlabb (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
){
	// aaaa00010000bbbbccccdddd1000eeee
	uint32_t inst = 0x1000080 | (14 << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8) | ((ra & 0xf) << 12);
	**address = inst;
}
void arm_smlabt_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
){
	// aaaa00010000bbbbccccdddd1100eeee
	uint32_t inst = 0x10000c0 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8) | ((ra & 0xf) << 12);
	**address = inst;
}
void arm_smlabt (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
){
	// aaaa00010000bbbbccccdddd1100eeee
	uint32_t inst = 0x10000c0 | (14 << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8) | ((ra & 0xf) << 12);
	**address = inst;
}
void arm_smlatb_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
){
	// aaaa00010000bbbbccccdddd1010eeee
	uint32_t inst = 0x10000a0 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8) | ((ra & 0xf) << 12);
	**address = inst;
}
void arm_smlatb (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
){
	// aaaa00010000bbbbccccdddd1010eeee
	uint32_t inst = 0x10000a0 | (14 << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8) | ((ra & 0xf) << 12);
	**address = inst;
}
void arm_smlatt_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
){
	// aaaa00010000bbbbccccdddd1110eeee
	uint32_t inst = 0x10000e0 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8) | ((ra & 0xf) << 12);
	**address = inst;
}
void arm_smlatt (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
){
	// aaaa00010000bbbbccccdddd1110eeee
	uint32_t inst = 0x10000e0 | (14 << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8) | ((ra & 0xf) << 12);
	**address = inst;
}
void arm_smlad_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int swap,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
){
	// aaaa01110000bbbbccccdddd00m1eeee
	uint32_t inst = 0x7000010 | ((auto_cond & 0xf) << 28) | ((swap & 0x1) << 5) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8) | ((ra & 0xf) << 12);
	**address = inst;
}
void arm_smlad (
	uint32_t **address,
	unsigned int swap,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
){
	// aaaa01110000bbbbccccdddd00m1eeee
	uint32_t inst = 0x7000010 | (14 << 28) | ((swap & 0x1) << 5) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8) | ((ra & 0xf) << 12);
	**address = inst;
}
void arm_smlal_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int set_condition,
	unsigned int rdhi,
	unsigned int rdlo,
	unsigned int rm,
	unsigned int rn
){
	// aaaa0000111bccccddddeeee1001ffff
	uint32_t inst = 0xe00090 | ((auto_cond & 0xf) << 28) | ((set_condition & 0x1) << 20) | ((rdhi & 0xf) << 16) | ((rdlo & 0xf) << 12) | ((rm & 0xf) << 8) | ((rn & 0xf) << 0);
	**address = inst;
}
void arm_smlal (
	uint32_t **address,
	unsigned int set_condition,
	unsigned int rdhi,
	unsigned int rdlo,
	unsigned int rm,
	unsigned int rn
){
	// aaaa0000111bccccddddeeee1001ffff
	uint32_t inst = 0xe00090 | (14 << 28) | ((set_condition & 0x1) << 20) | ((rdhi & 0xf) << 16) | ((rdlo & 0xf) << 12) | ((rm & 0xf) << 8) | ((rn & 0xf) << 0);
	**address = inst;
}
void arm_smlalbb_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
){
	// aaaa00010100bbbbccccdddd1000eeee
	uint32_t inst = 0x1400080 | ((auto_cond & 0xf) << 28) | ((rd_lo & 0xf) << 12) | ((rd_hi & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_smlalbb (
	uint32_t **address,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
){
	// aaaa00010100bbbbccccdddd1000eeee
	uint32_t inst = 0x1400080 | (14 << 28) | ((rd_lo & 0xf) << 12) | ((rd_hi & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_smlalbt_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
){
	// aaaa00010100bbbbccccdddd1100eeee
	uint32_t inst = 0x14000c0 | ((auto_cond & 0xf) << 28) | ((rd_lo & 0xf) << 12) | ((rd_hi & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_smlalbt (
	uint32_t **address,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
){
	// aaaa00010100bbbbccccdddd1100eeee
	uint32_t inst = 0x14000c0 | (14 << 28) | ((rd_lo & 0xf) << 12) | ((rd_hi & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_smlaltb_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
){
	// aaaa00010100bbbbccccdddd1010eeee
	uint32_t inst = 0x14000a0 | ((auto_cond & 0xf) << 28) | ((rd_lo & 0xf) << 12) | ((rd_hi & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_smlaltb (
	uint32_t **address,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
){
	// aaaa00010100bbbbccccdddd1010eeee
	uint32_t inst = 0x14000a0 | (14 << 28) | ((rd_lo & 0xf) << 12) | ((rd_hi & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_smlaltt_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
){
	// aaaa00010100bbbbccccdddd1110eeee
	uint32_t inst = 0x14000e0 | ((auto_cond & 0xf) << 28) | ((rd_lo & 0xf) << 12) | ((rd_hi & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_smlaltt (
	uint32_t **address,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
){
	// aaaa00010100bbbbccccdddd1110eeee
	uint32_t inst = 0x14000e0 | (14 << 28) | ((rd_lo & 0xf) << 12) | ((rd_hi & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_smlald_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01110100bbbbccccdddd0001eeee
	uint32_t inst = 0x7400010 | ((auto_cond & 0xf) << 28) | ((rd_lo & 0xf) << 12) | ((rd_hi & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_smlald (
	uint32_t **address,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01110100bbbbccccdddd0001eeee
	uint32_t inst = 0x7400010 | (14 << 28) | ((rd_lo & 0xf) << 12) | ((rd_hi & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_smlaldx_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01110100bbbbccccdddd0011eeee
	uint32_t inst = 0x7400030 | ((auto_cond & 0xf) << 28) | ((rd_lo & 0xf) << 12) | ((rd_hi & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_smlaldx (
	uint32_t **address,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01110100bbbbccccdddd0011eeee
	uint32_t inst = 0x7400030 | (14 << 28) | ((rd_lo & 0xf) << 12) | ((rd_hi & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_smlawb_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
){
	// aaaa00010010bbbbccccdddd1000eeee
	uint32_t inst = 0x1200080 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8) | ((ra & 0xf) << 12);
	**address = inst;
}
void arm_smlawb (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
){
	// aaaa00010010bbbbccccdddd1000eeee
	uint32_t inst = 0x1200080 | (14 << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8) | ((ra & 0xf) << 12);
	**address = inst;
}
void arm_smlawt_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
){
	// aaaa00010010bbbbccccdddd1100eeee
	uint32_t inst = 0x12000c0 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8) | ((ra & 0xf) << 12);
	**address = inst;
}
void arm_smlawt (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
){
	// aaaa00010010bbbbccccdddd1100eeee
	uint32_t inst = 0x12000c0 | (14 << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8) | ((ra & 0xf) << 12);
	**address = inst;
}
void arm_smlsd_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
){
	// aaaa01110000bbbbccccdddd0101eeee
	uint32_t inst = 0x7000050 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8) | ((ra & 0xf) << 12);
	**address = inst;
}
void arm_smlsd (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
){
	// aaaa01110000bbbbccccdddd0101eeee
	uint32_t inst = 0x7000050 | (14 << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8) | ((ra & 0xf) << 12);
	**address = inst;
}
void arm_smlsdx_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
){
	// aaaa01110000bbbbccccdddd0111eeee
	uint32_t inst = 0x7000070 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8) | ((ra & 0xf) << 12);
	**address = inst;
}
void arm_smlsdx (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
){
	// aaaa01110000bbbbccccdddd0111eeee
	uint32_t inst = 0x7000070 | (14 << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8) | ((ra & 0xf) << 12);
	**address = inst;
}
void arm_smlsld_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01110100bbbbccccdddd0101eeee
	uint32_t inst = 0x7400050 | ((auto_cond & 0xf) << 28) | ((rd_lo & 0xf) << 12) | ((rd_hi & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_smlsld (
	uint32_t **address,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01110100bbbbccccdddd0101eeee
	uint32_t inst = 0x7400050 | (14 << 28) | ((rd_lo & 0xf) << 12) | ((rd_hi & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_smlsldx_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01110100bbbbccccdddd0111eeee
	uint32_t inst = 0x7400070 | ((auto_cond & 0xf) << 28) | ((rd_lo & 0xf) << 12) | ((rd_hi & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_smlsldx (
	uint32_t **address,
	unsigned int rd_lo,
	unsigned int rd_hi,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01110100bbbbccccdddd0111eeee
	uint32_t inst = 0x7400070 | (14 << 28) | ((rd_lo & 0xf) << 12) | ((rd_hi & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_smmla_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
){
	// aaaa01110101bbbbccccdddd0001eeee
	uint32_t inst = 0x7500010 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8) | ((ra & 0xf) << 12);
	**address = inst;
}
void arm_smmla (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
){
	// aaaa01110101bbbbccccdddd0001eeee
	uint32_t inst = 0x7500010 | (14 << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8) | ((ra & 0xf) << 12);
	**address = inst;
}
void arm_smmlar_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
){
	// aaaa01110101bbbbccccdddd0011eeee
	uint32_t inst = 0x7500030 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8) | ((ra & 0xf) << 12);
	**address = inst;
}
void arm_smmlar (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
){
	// aaaa01110101bbbbccccdddd0011eeee
	uint32_t inst = 0x7500030 | (14 << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8) | ((ra & 0xf) << 12);
	**address = inst;
}
void arm_smmls_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
){
	// aaaa01110101bbbbccccdddd1101eeee
	uint32_t inst = 0x75000d0 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8) | ((ra & 0xf) << 12);
	**address = inst;
}
void arm_smmls (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
){
	// aaaa01110101bbbbccccdddd1101eeee
	uint32_t inst = 0x75000d0 | (14 << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8) | ((ra & 0xf) << 12);
	**address = inst;
}
void arm_smmlsr_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
){
	// aaaa01110101bbbbccccdddd1111eeee
	uint32_t inst = 0x75000f0 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8) | ((ra & 0xf) << 12);
	**address = inst;
}
void arm_smmlsr (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
){
	// aaaa01110101bbbbccccdddd1111eeee
	uint32_t inst = 0x75000f0 | (14 << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8) | ((ra & 0xf) << 12);
	**address = inst;
}
void arm_smmul_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01110101bbbb1111cccc0001dddd
	uint32_t inst = 0x750f010 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_smmul (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01110101bbbb1111cccc0001dddd
	uint32_t inst = 0x750f010 | (14 << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_smmulr_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01110101bbbb1111cccc0011dddd
	uint32_t inst = 0x750f030 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_smmulr (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01110101bbbb1111cccc0011dddd
	uint32_t inst = 0x750f030 | (14 << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_smuad_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01110000bbbb1111cccc0001dddd
	uint32_t inst = 0x700f010 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_smuad (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01110000bbbb1111cccc0001dddd
	uint32_t inst = 0x700f010 | (14 << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_smuadx_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01110000bbbb1111cccc0011dddd
	uint32_t inst = 0x700f030 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_smuadx (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01110000bbbb1111cccc0011dddd
	uint32_t inst = 0x700f030 | (14 << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_smulbb_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa00010110bbbb0000cccc1000dddd
	uint32_t inst = 0x1600080 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_smulbb (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa00010110bbbb0000cccc1000dddd
	uint32_t inst = 0x1600080 | (14 << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_smulbt_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa00010110bbbb0000cccc1100dddd
	uint32_t inst = 0x16000c0 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_smulbt (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa00010110bbbb0000cccc1100dddd
	uint32_t inst = 0x16000c0 | (14 << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_smultb_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa00010110bbbb0000cccc1010dddd
	uint32_t inst = 0x16000a0 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_smultb (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa00010110bbbb0000cccc1010dddd
	uint32_t inst = 0x16000a0 | (14 << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_smultt_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa00010110bbbb0000cccc1110dddd
	uint32_t inst = 0x16000e0 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_smultt (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa00010110bbbb0000cccc1110dddd
	uint32_t inst = 0x16000e0 | (14 << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_smull_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int set_condition,
	unsigned int rdhi,
	unsigned int rdlo,
	unsigned int rm,
	unsigned int rn
){
	// aaaa0000110bccccddddeeee1001ffff
	uint32_t inst = 0xc00090 | ((auto_cond & 0xf) << 28) | ((set_condition & 0x1) << 20) | ((rdhi & 0xf) << 16) | ((rdlo & 0xf) << 12) | ((rm & 0xf) << 8) | ((rn & 0xf) << 0);
	**address = inst;
}
void arm_smull (
	uint32_t **address,
	unsigned int set_condition,
	unsigned int rdhi,
	unsigned int rdlo,
	unsigned int rm,
	unsigned int rn
){
	// aaaa0000110bccccddddeeee1001ffff
	uint32_t inst = 0xc00090 | (14 << 28) | ((set_condition & 0x1) << 20) | ((rdhi & 0xf) << 16) | ((rdlo & 0xf) << 12) | ((rm & 0xf) << 8) | ((rn & 0xf) << 0);
	**address = inst;
}
void arm_smulwb_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa00010010bbbb0000cccc1010dddd
	uint32_t inst = 0x12000a0 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_smulwb (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa00010010bbbb0000cccc1010dddd
	uint32_t inst = 0x12000a0 | (14 << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_smulwt_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa00010010bbbb0000cccc1110dddd
	uint32_t inst = 0x12000e0 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_smulwt (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa00010010bbbb0000cccc1110dddd
	uint32_t inst = 0x12000e0 | (14 << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_smusd_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01110000bbbb1111cccc0101dddd
	uint32_t inst = 0x700f050 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_smusd (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01110000bbbb1111cccc0101dddd
	uint32_t inst = 0x700f050 | (14 << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_smusdx_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01110000bbbb1111cccc0111dddd
	uint32_t inst = 0x700f070 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_smusdx (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01110000bbbb1111cccc0111dddd
	uint32_t inst = 0x700f070 | (14 << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_ssat_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int sat_imm,
	unsigned int rn,
	unsigned int sh,
	unsigned int imm5
){
	// aaaa0110101bbbbbccccddddde01ffff
	uint32_t inst = 0x6a00010 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((sat_imm & 0x1f) << 16) | ((rn & 0xf) << 0) | ((sh & 0x1) << 6) | ((imm5 & 0x1f) << 7);
	**address = inst;
}
void arm_ssat (
	uint32_t **address,
	unsigned int rd,
	unsigned int sat_imm,
	unsigned int rn,
	unsigned int sh,
	unsigned int imm5
){
	// aaaa0110101bbbbbccccddddde01ffff
	uint32_t inst = 0x6a00010 | (14 << 28) | ((rd & 0xf) << 12) | ((sat_imm & 0x1f) << 16) | ((rn & 0xf) << 0) | ((sh & 0x1) << 6) | ((imm5 & 0x1f) << 7);
	**address = inst;
}
void arm_ssat16_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int sat_imm,
	unsigned int rn
){
	// aaaa01101010bbbbcccc11110011dddd
	uint32_t inst = 0x6a00f30 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((sat_imm & 0xf) << 16) | ((rn & 0xf) << 0);
	**address = inst;
}
void arm_ssat16 (
	uint32_t **address,
	unsigned int rd,
	unsigned int sat_imm,
	unsigned int rn
){
	// aaaa01101010bbbbcccc11110011dddd
	uint32_t inst = 0x6a00f30 | (14 << 28) | ((rd & 0xf) << 12) | ((sat_imm & 0xf) << 16) | ((rn & 0xf) << 0);
	**address = inst;
}
void arm_ssax_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100001bbbbcccc11110101dddd
	uint32_t inst = 0x6100f50 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_ssax (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100001bbbbcccc11110101dddd
	uint32_t inst = 0x6100f50 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_ssub16_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100001bbbbcccc11110111dddd
	uint32_t inst = 0x6100f70 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_ssub16 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100001bbbbcccc11110111dddd
	uint32_t inst = 0x6100f70 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_ssub8_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100001bbbbcccc11111111dddd
	uint32_t inst = 0x6100ff0 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_ssub8 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100001bbbbcccc11111111dddd
	uint32_t inst = 0x6100ff0 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
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
){
	// aaaa110bcde0ffffgggghhhhiiiiiiii
	uint32_t inst = 0xc000000 | ((auto_cond & 0xf) << 28) | ((p & 0x1) << 24) | ((upwards & 0x1) << 23) | ((d & 0x1) << 22) | ((writeback & 0x1) << 21) | ((rn & 0xf) << 16) | ((vd & 0xf) << 12) | ((opcode & 0xf) << 8) | ((imm8 & 0xff) << 0);
	**address = inst;
}
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
){
	// aaaa110bcde0ffffgggghhhhiiiiiiii
	uint32_t inst = 0xc000000 | (14 << 28) | ((p & 0x1) << 24) | ((upwards & 0x1) << 23) | ((d & 0x1) << 22) | ((writeback & 0x1) << 21) | ((rn & 0xf) << 16) | ((vd & 0xf) << 12) | ((opcode & 0xf) << 8) | ((imm8 & 0xff) << 0);
	**address = inst;
}
void arm_stm_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
){
	// aaaa100bcde0ffffgggggggggggggggg
	uint32_t inst = 0x8000000 | ((auto_cond & 0xf) << 28) | ((rn & 0xf) << 16) | ((registers & 0xffff) << 0) | ((prepostindex & 0x1) << 24) | ((updown & 0x1) << 23) | ((writeback & 0x1) << 21) | ((psr & 0x1) << 22);
	**address = inst;
}
void arm_stm (
	uint32_t **address,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
){
	// aaaa100bcde0ffffgggggggggggggggg
	uint32_t inst = 0x8000000 | (14 << 28) | ((rn & 0xf) << 16) | ((registers & 0xffff) << 0) | ((prepostindex & 0x1) << 24) | ((updown & 0x1) << 23) | ((writeback & 0x1) << 21) | ((psr & 0x1) << 22);
	**address = inst;
}
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
){
	// aaaa01bcd0e0ffffgggghhhhhhhhhhhh
	uint32_t inst = 0x4000000 | ((auto_cond & 0xf) << 28) | ((immediate & 0x1) << 25) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((offset & 0xfff) << 0) | ((prepostindex & 0x1) << 24) | ((updown & 0x1) << 23) | ((writeback & 0x1) << 21);
	**address = inst;
}
void arm_str (
	uint32_t **address,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
){
	// aaaa01bcd0e0ffffgggghhhhhhhhhhhh
	uint32_t inst = 0x4000000 | (14 << 28) | ((immediate & 0x1) << 25) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((offset & 0xfff) << 0) | ((prepostindex & 0x1) << 24) | ((updown & 0x1) << 23) | ((writeback & 0x1) << 21);
	**address = inst;
}
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
){
	// aaaa01bcd1e0ffffgggghhhhhhhhhhhh
	uint32_t inst = 0x4400000 | ((auto_cond & 0xf) << 28) | ((immediate & 0x1) << 25) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((offset & 0xfff) << 0) | ((prepostindex & 0x1) << 24) | ((updown & 0x1) << 23) | ((writeback & 0x1) << 21);
	**address = inst;
}
void arm_strb (
	uint32_t **address,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback
){
	// aaaa01bcd1e0ffffgggghhhhhhhhhhhh
	uint32_t inst = 0x4400000 | (14 << 28) | ((immediate & 0x1) << 25) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((offset & 0xfff) << 0) | ((prepostindex & 0x1) << 24) | ((updown & 0x1) << 23) | ((writeback & 0x1) << 21);
	**address = inst;
}
void arm_strbt_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int updown
){
	// aaaa01b0d110ffffgggghhhhhhhhhhhh
	uint32_t inst = 0x4600000 | ((auto_cond & 0xf) << 28) | ((immediate & 0x1) << 25) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((offset & 0xfff) << 0) | ((updown & 0x1) << 23);
	**address = inst;
}
void arm_strbt (
	uint32_t **address,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int offset,
	unsigned int updown
){
	// aaaa01b0d110ffffgggghhhhhhhhhhhh
	uint32_t inst = 0x4600000 | (14 << 28) | ((immediate & 0x1) << 25) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((offset & 0xfff) << 0) | ((updown & 0x1) << 23);
	**address = inst;
}
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
){
	// aaaa000bcde0ffffgggghhhh1111iiii
	uint32_t inst = 0xf0 | ((auto_cond & 0xf) << 28) | ((immediate & 0x1) << 22) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm_imm4l & 0xf) << 0) | ((imm4h & 0xf) << 8) | ((prepostindex & 0x1) << 24) | ((updown & 0x1) << 23) | ((writeback & 0x1) << 21);
	**address = inst;
}
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
){
	// aaaa000bcde0ffffgggghhhh1111iiii
	uint32_t inst = 0xf0 | (14 << 28) | ((immediate & 0x1) << 22) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm_imm4l & 0xf) << 0) | ((imm4h & 0xf) << 8) | ((prepostindex & 0x1) << 24) | ((updown & 0x1) << 23) | ((writeback & 0x1) << 21);
	**address = inst;
}
void arm_strex_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa00011000bbbbcccc11111001dddd
	uint32_t inst = 0x1800f90 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_strex (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa00011000bbbbcccc11111001dddd
	uint32_t inst = 0x1800f90 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_strexb_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rt,
	unsigned int rn
){
	// aaaa00011100bbbbcccc11111001dddd
	uint32_t inst = 0x1c00f90 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rt & 0xf) << 0) | ((rn & 0xf) << 16);
	**address = inst;
}
void arm_strexb (
	uint32_t **address,
	unsigned int rd,
	unsigned int rt,
	unsigned int rn
){
	// aaaa00011100bbbbcccc11111001dddd
	uint32_t inst = 0x1c00f90 | (14 << 28) | ((rd & 0xf) << 12) | ((rt & 0xf) << 0) | ((rn & 0xf) << 16);
	**address = inst;
}
void arm_strexd_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rt,
	unsigned int rn
){
	// aaaa00011010bbbbcccc11111001dddd
	uint32_t inst = 0x1a00f90 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rt & 0xf) << 0) | ((rn & 0xf) << 16);
	**address = inst;
}
void arm_strexd (
	uint32_t **address,
	unsigned int rd,
	unsigned int rt,
	unsigned int rn
){
	// aaaa00011010bbbbcccc11111001dddd
	uint32_t inst = 0x1a00f90 | (14 << 28) | ((rd & 0xf) << 12) | ((rt & 0xf) << 0) | ((rn & 0xf) << 16);
	**address = inst;
}
void arm_strexh_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rt,
	unsigned int rn
){
	// aaaa00011110bbbbcccc11111001dddd
	uint32_t inst = 0x1e00f90 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rt & 0xf) << 0) | ((rn & 0xf) << 16);
	**address = inst;
}
void arm_strexh (
	uint32_t **address,
	unsigned int rd,
	unsigned int rt,
	unsigned int rn
){
	// aaaa00011110bbbbcccc11111001dddd
	uint32_t inst = 0x1e00f90 | (14 << 28) | ((rd & 0xf) << 12) | ((rt & 0xf) << 0) | ((rn & 0xf) << 16);
	**address = inst;
}
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
){
	// aaaa000bcde0ffffgggghhhh1011iiii
	uint32_t inst = 0xb0 | ((auto_cond & 0xf) << 28) | ((immediate & 0x1) << 22) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm_imm4l & 0xf) << 0) | ((imm4h & 0xf) << 8) | ((prepostindex & 0x1) << 24) | ((updown & 0x1) << 23) | ((writeback & 0x1) << 21);
	**address = inst;
}
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
){
	// aaaa000bcde0ffffgggghhhh1011iiii
	uint32_t inst = 0xb0 | (14 << 28) | ((immediate & 0x1) << 22) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm_imm4l & 0xf) << 0) | ((imm4h & 0xf) << 8) | ((prepostindex & 0x1) << 24) | ((updown & 0x1) << 23) | ((writeback & 0x1) << 21);
	**address = inst;
}
void arm_strht_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm_imm4l,
	unsigned int imm4h,
	unsigned int updown
){
	// aaaa0000ui10bbbbccccdddd1011eeee
	uint32_t inst = 0x2000b0 | ((auto_cond & 0xf) << 28) | ((immediate & 0x1) << 22) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm_imm4l & 0xf) << 0) | ((imm4h & 0xf) << 8) | ((updown & 0x1) << 23);
	**address = inst;
}
void arm_strht (
	uint32_t **address,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm_imm4l,
	unsigned int imm4h,
	unsigned int updown
){
	// aaaa0000ui10bbbbccccdddd1011eeee
	uint32_t inst = 0x2000b0 | (14 << 28) | ((immediate & 0x1) << 22) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm_imm4l & 0xf) << 0) | ((imm4h & 0xf) << 8) | ((updown & 0x1) << 23);
	**address = inst;
}
void arm_strt_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2,
	unsigned int updown
){
	// aaaa01i0u010bbbbccccdddddddddddd
	uint32_t inst = 0x4200000 | ((auto_cond & 0xf) << 28) | ((immediate & 0x1) << 25) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((operand2 & 0xfff) << 0) | ((updown & 0x1) << 23);
	**address = inst;
}
void arm_strt (
	uint32_t **address,
	unsigned int immediate,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2,
	unsigned int updown
){
	// aaaa01i0u010bbbbccccdddddddddddd
	uint32_t inst = 0x4200000 | (14 << 28) | ((immediate & 0x1) << 25) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((operand2 & 0xfff) << 0) | ((updown & 0x1) << 23);
	**address = inst;
}
void arm_sub_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
){
	// aaaa00b0010cddddeeeeffffffffffff
	uint32_t inst = 0x400000 | ((auto_cond & 0xf) << 28) | ((immediate & 0x1) << 25) | ((set_condition & 0x1) << 20) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((operand2 & 0xfff) << 0);
	**address = inst;
}
void arm_sub (
	uint32_t **address,
	unsigned int immediate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
){
	// aaaa00b0010cddddeeeeffffffffffff
	uint32_t inst = 0x400000 | (14 << 28) | ((immediate & 0x1) << 25) | ((set_condition & 0x1) << 20) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((operand2 & 0xfff) << 0);
	**address = inst;
}
void arm_svc_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int comment
){
	// aaaa1111bbbbbbbbbbbbbbbbbbbbbbbb
	uint32_t inst = 0xf000000 | ((auto_cond & 0xf) << 28) | ((comment & 0xffffff) << 0);
	**address = inst;
}
void arm_svc (
	uint32_t **address,
	unsigned int comment
){
	// aaaa1111bbbbbbbbbbbbbbbbbbbbbbbb
	uint32_t inst = 0xf000000 | (14 << 28) | ((comment & 0xffffff) << 0);
	**address = inst;
}
void arm_swp_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rt,
	unsigned int rt2,
	unsigned int rn
){
	// aaaa00010000ccccdddd00001001eeee
	uint32_t inst = 0x1000090 | ((auto_cond & 0xf) << 28) | ((rt & 0xf) << 12) | ((rt2 & 0xf) << 0) | ((rn & 0xf) << 16);
	**address = inst;
}
void arm_swp (
	uint32_t **address,
	unsigned int rt,
	unsigned int rt2,
	unsigned int rn
){
	// aaaa00010000ccccdddd00001001eeee
	uint32_t inst = 0x1000090 | (14 << 28) | ((rt & 0xf) << 12) | ((rt2 & 0xf) << 0) | ((rn & 0xf) << 16);
	**address = inst;
}
void arm_swpb_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rt,
	unsigned int rt2,
	unsigned int rn
){
	// aaaa00010100ccccdddd00001001eeee
	uint32_t inst = 0x1400090 | ((auto_cond & 0xf) << 28) | ((rt & 0xf) << 12) | ((rt2 & 0xf) << 0) | ((rn & 0xf) << 16);
	**address = inst;
}
void arm_swpb (
	uint32_t **address,
	unsigned int rt,
	unsigned int rt2,
	unsigned int rn
){
	// aaaa00010100ccccdddd00001001eeee
	uint32_t inst = 0x1400090 | (14 << 28) | ((rt & 0xf) << 12) | ((rt2 & 0xf) << 0) | ((rn & 0xf) << 16);
	**address = inst;
}
void arm_sxtab_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
){
	// aaaa01101010bbbbccccdd000111eeee
	uint32_t inst = 0x6a00070 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0) | ((rotate & 0x3) << 10);
	**address = inst;
}
void arm_sxtab (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
){
	// aaaa01101010bbbbccccdd000111eeee
	uint32_t inst = 0x6a00070 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0) | ((rotate & 0x3) << 10);
	**address = inst;
}
void arm_sxtab16_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
){
	// aaaa01101000bbbbccccdd000111eeee
	uint32_t inst = 0x6800070 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0) | ((rotate & 0x3) << 10);
	**address = inst;
}
void arm_sxtab16 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
){
	// aaaa01101000bbbbccccdd000111eeee
	uint32_t inst = 0x6800070 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0) | ((rotate & 0x3) << 10);
	**address = inst;
}
void arm_sxtah_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
){
	// aaaa01101011bbbbccccdd000111eeee
	uint32_t inst = 0x6b00070 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0) | ((rotate & 0x3) << 10);
	**address = inst;
}
void arm_sxtah (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
){
	// aaaa01101011bbbbccccdd000111eeee
	uint32_t inst = 0x6b00070 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0) | ((rotate & 0x3) << 10);
	**address = inst;
}
void arm_sxtb_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
){
	// aaaa011010101111bbbbcc000111dddd
	uint32_t inst = 0x6af0070 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rm & 0xf) << 0) | ((rotate & 0x3) << 10);
	**address = inst;
}
void arm_sxtb (
	uint32_t **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
){
	// aaaa011010101111bbbbcc000111dddd
	uint32_t inst = 0x6af0070 | (14 << 28) | ((rd & 0xf) << 12) | ((rm & 0xf) << 0) | ((rotate & 0x3) << 10);
	**address = inst;
}
void arm_sxtb16_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
){
	// aaaa011010001111bbbbcc000111dddd
	uint32_t inst = 0x68f0070 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rm & 0xf) << 0) | ((rotate & 0x3) << 10);
	**address = inst;
}
void arm_sxtb16 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
){
	// aaaa011010001111bbbbcc000111dddd
	uint32_t inst = 0x68f0070 | (14 << 28) | ((rd & 0xf) << 12) | ((rm & 0xf) << 0) | ((rotate & 0x3) << 10);
	**address = inst;
}
void arm_sxth_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
){
	// aaaa011010111111bbbbcc000111dddd
	uint32_t inst = 0x6bf0070 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rm & 0xf) << 0) | ((rotate & 0x3) << 10);
	**address = inst;
}
void arm_sxth (
	uint32_t **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
){
	// aaaa011010111111bbbbcc000111dddd
	uint32_t inst = 0x6bf0070 | (14 << 28) | ((rd & 0xf) << 12) | ((rm & 0xf) << 0) | ((rotate & 0x3) << 10);
	**address = inst;
}
void arm_teq_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rn,
	unsigned int operand2
){
	// aaaa00b10011cccc0000dddddddddddd
	uint32_t inst = 0x1300000 | ((auto_cond & 0xf) << 28) | ((immediate & 0x1) << 25) | ((rn & 0xf) << 16) | ((operand2 & 0xfff) << 0);
	**address = inst;
}
void arm_teq (
	uint32_t **address,
	unsigned int immediate,
	unsigned int rn,
	unsigned int operand2
){
	// aaaa00b10011cccc0000dddddddddddd
	uint32_t inst = 0x1300000 | (14 << 28) | ((immediate & 0x1) << 25) | ((rn & 0xf) << 16) | ((operand2 & 0xfff) << 0);
	**address = inst;
}
void arm_tst_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int rn,
	unsigned int operand2
){
	// aaaa00b10001cccc0000dddddddddddd
	uint32_t inst = 0x1100000 | ((auto_cond & 0xf) << 28) | ((immediate & 0x1) << 25) | ((rn & 0xf) << 16) | ((operand2 & 0xfff) << 0);
	**address = inst;
}
void arm_tst (
	uint32_t **address,
	unsigned int immediate,
	unsigned int rn,
	unsigned int operand2
){
	// aaaa00b10001cccc0000dddddddddddd
	uint32_t inst = 0x1100000 | (14 << 28) | ((immediate & 0x1) << 25) | ((rn & 0xf) << 16) | ((operand2 & 0xfff) << 0);
	**address = inst;
}
void arm_uadd16_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100101ccccdddd11110001eeee
	uint32_t inst = 0x6500f10 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_uadd16 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100101ccccdddd11110001eeee
	uint32_t inst = 0x6500f10 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_uadd8_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100101ccccdddd11111001eeee
	uint32_t inst = 0x6500f90 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_uadd8 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100101ccccdddd11111001eeee
	uint32_t inst = 0x6500f90 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_uasx_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100101ccccdddd11110011eeee
	uint32_t inst = 0x6500f30 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_uasx (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100101ccccdddd11110011eeee
	uint32_t inst = 0x6500f30 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_ubfx_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int lsb,
	unsigned int widthm1
){
	// aaaa0111111bbbbbccccddddd101eeee
	uint32_t inst = 0x7e00050 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 0) | ((lsb & 0x1f) << 7) | ((widthm1 & 0x1f) << 16);
	**address = inst;
}
void arm_ubfx (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int lsb,
	unsigned int widthm1
){
	// aaaa0111111bbbbbccccddddd101eeee
	uint32_t inst = 0x7e00050 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 0) | ((lsb & 0x1f) << 7) | ((widthm1 & 0x1f) << 16);
	**address = inst;
}
void arm_udf (
	uint32_t **address,
	unsigned int imm12,
	unsigned int imm4
){
	// 111001111111bbbbbbbbbbbb1111cccc
	uint32_t inst = 0xe7f000f0 | ((imm12 & 0xfff) << 8) | ((imm4 & 0xf) << 0);
	**address = inst;
}
void arm_udiv_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01110011bbbb1111cccc0001dddd
	uint32_t inst = 0x730f010 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_udiv (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01110011bbbb1111cccc0001dddd
	uint32_t inst = 0x730f010 | (14 << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_uhadd16_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100111bbbbcccc11110001dddd
	uint32_t inst = 0x6700f10 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_uhadd16 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100111bbbbcccc11110001dddd
	uint32_t inst = 0x6700f10 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_uhadd8_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100111bbbbcccc11111001dddd
	uint32_t inst = 0x6700f90 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_uhadd8 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100111bbbbcccc11111001dddd
	uint32_t inst = 0x6700f90 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_uhasx_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100111bbbbcccc11110011dddd
	uint32_t inst = 0x6700f30 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_uhasx (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100111bbbbcccc11110011dddd
	uint32_t inst = 0x6700f30 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_uhsax_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100111bbbbcccc11110101dddd
	uint32_t inst = 0x6700f50 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_uhsax (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100111bbbbcccc11110101dddd
	uint32_t inst = 0x6700f50 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_uhsub16_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100111bbbbcccc11110111dddd
	uint32_t inst = 0x6700f70 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_uhsub16 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100111bbbbcccc11110111dddd
	uint32_t inst = 0x6700f70 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_uhsub8_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100111bbbbcccc11111111dddd
	uint32_t inst = 0x6700ff0 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_uhsub8 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100111bbbbcccc11111111dddd
	uint32_t inst = 0x6700ff0 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_umaal (
	uint32_t **address,
	unsigned int rd_hi,
	unsigned int rd_lo,
	unsigned int rn,
	unsigned int rm
){
	// aaaa00000100aaaabbbbcccc1001dddd
	uint32_t inst = 0x400090 | ((rd_hi & 0xffff) << 16) | ((rd_lo & 0xf) << 12) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_umlal_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int set_condition,
	unsigned int rdhi,
	unsigned int rdlo,
	unsigned int rm,
	unsigned int rn
){
	// aaaa0000101bccccddddeeee1001ffff
	uint32_t inst = 0xa00090 | ((auto_cond & 0xf) << 28) | ((set_condition & 0x1) << 20) | ((rdhi & 0xf) << 16) | ((rdlo & 0xf) << 12) | ((rm & 0xf) << 8) | ((rn & 0xf) << 0);
	**address = inst;
}
void arm_umlal (
	uint32_t **address,
	unsigned int set_condition,
	unsigned int rdhi,
	unsigned int rdlo,
	unsigned int rm,
	unsigned int rn
){
	// aaaa0000101bccccddddeeee1001ffff
	uint32_t inst = 0xa00090 | (14 << 28) | ((set_condition & 0x1) << 20) | ((rdhi & 0xf) << 16) | ((rdlo & 0xf) << 12) | ((rm & 0xf) << 8) | ((rn & 0xf) << 0);
	**address = inst;
}
void arm_umull_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int set_condition,
	unsigned int rdhi,
	unsigned int rdlo,
	unsigned int rm,
	unsigned int rn
){
	// aaaa0000100bccccddddeeee1001ffff
	uint32_t inst = 0x800090 | ((auto_cond & 0xf) << 28) | ((set_condition & 0x1) << 20) | ((rdhi & 0xf) << 16) | ((rdlo & 0xf) << 12) | ((rm & 0xf) << 8) | ((rn & 0xf) << 0);
	**address = inst;
}
void arm_umull (
	uint32_t **address,
	unsigned int set_condition,
	unsigned int rdhi,
	unsigned int rdlo,
	unsigned int rm,
	unsigned int rn
){
	// aaaa0000100bccccddddeeee1001ffff
	uint32_t inst = 0x800090 | (14 << 28) | ((set_condition & 0x1) << 20) | ((rdhi & 0xf) << 16) | ((rdlo & 0xf) << 12) | ((rm & 0xf) << 8) | ((rn & 0xf) << 0);
	**address = inst;
}
void arm_uqadd16_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100110bbbbcccc11110001dddd
	uint32_t inst = 0x6600f10 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_uqadd16 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100110bbbbcccc11110001dddd
	uint32_t inst = 0x6600f10 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_uqadd8_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100110bbbbcccc11111001dddd
	uint32_t inst = 0x6600f90 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_uqadd8 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100110bbbbcccc11111001dddd
	uint32_t inst = 0x6600f90 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_uqasx_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100110bbbbcccc11110011dddd
	uint32_t inst = 0x6600f30 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_uqasx (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100110bbbbcccc11110011dddd
	uint32_t inst = 0x6600f30 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_uqsax_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100110bbbbcccc11110101dddd
	uint32_t inst = 0x6600f50 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_uqsax (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100110bbbbcccc11110101dddd
	uint32_t inst = 0x6600f50 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_uqsub16_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100110bbbbcccc11110111dddd
	uint32_t inst = 0x6600f70 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_uqsub16 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100110bbbbcccc11110111dddd
	uint32_t inst = 0x6600f70 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_uqsub8_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100110bbbbcccc11111111dddd
	uint32_t inst = 0x6600ff0 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_uqsub8 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100110bbbbcccc11111111dddd
	uint32_t inst = 0x6600ff0 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_usad8_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01111000bbbbcccc11110001dddd
	uint32_t inst = 0x7800f10 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_usad8 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01111000bbbbcccc11110001dddd
	uint32_t inst = 0x7800f10 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_usada8_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
){
	// aaaa01111000bbbbccccdddd0001eeee
	uint32_t inst = 0x7800010 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8) | ((ra & 0xf) << 12);
	**address = inst;
}
void arm_usada8 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
){
	// aaaa01111000bbbbccccdddd0001eeee
	uint32_t inst = 0x7800010 | (14 << 28) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8) | ((ra & 0xf) << 12);
	**address = inst;
}
void arm_usat_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int sat_imm,
	unsigned int rn,
	unsigned int sh,
	unsigned int imm5
){
	// aaaa0110111bbbbbccccddddde01ffff
	uint32_t inst = 0x6e00010 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((sat_imm & 0x1f) << 16) | ((rn & 0xf) << 0) | ((sh & 0x1) << 6) | ((imm5 & 0x1f) << 7);
	**address = inst;
}
void arm_usat (
	uint32_t **address,
	unsigned int rd,
	unsigned int sat_imm,
	unsigned int rn,
	unsigned int sh,
	unsigned int imm5
){
	// aaaa0110111bbbbbccccddddde01ffff
	uint32_t inst = 0x6e00010 | (14 << 28) | ((rd & 0xf) << 12) | ((sat_imm & 0x1f) << 16) | ((rn & 0xf) << 0) | ((sh & 0x1) << 6) | ((imm5 & 0x1f) << 7);
	**address = inst;
}
void arm_usat16_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int sat_imm,
	unsigned int rn
){
	// aaaa01101110bbbbcccc11110011dddd
	uint32_t inst = 0x6e00f30 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((sat_imm & 0xf) << 16) | ((rn & 0xf) << 0);
	**address = inst;
}
void arm_usat16 (
	uint32_t **address,
	unsigned int rd,
	unsigned int sat_imm,
	unsigned int rn
){
	// aaaa01101110bbbbcccc11110011dddd
	uint32_t inst = 0x6e00f30 | (14 << 28) | ((rd & 0xf) << 12) | ((sat_imm & 0xf) << 16) | ((rn & 0xf) << 0);
	**address = inst;
}
void arm_usax_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100101bbbbcccc11110101dddd
	uint32_t inst = 0x6500f50 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_usax (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100101bbbbcccc11110101dddd
	uint32_t inst = 0x6500f50 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_usub16_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100101bbbbcccc11110111dddd
	uint32_t inst = 0x6500f70 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_usub16 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100101bbbbcccc11110111dddd
	uint32_t inst = 0x6500f70 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_usub8_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100101bbbbcccc11111111dddd
	uint32_t inst = 0x6500ff0 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_usub8 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaa01100101bbbbcccc11111111dddd
	uint32_t inst = 0x6500ff0 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_uxtab_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
){
	// aaaa01101110bbbbccccdd000111eeee
	uint32_t inst = 0x6e00070 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0) | ((rotate & 0x3) << 10);
	**address = inst;
}
void arm_uxtab (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
){
	// aaaa01101110bbbbccccdd000111eeee
	uint32_t inst = 0x6e00070 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0) | ((rotate & 0x3) << 10);
	**address = inst;
}
void arm_uxtab16_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
){
	// aaaa01101100bbbbccccdd000111eeee
	uint32_t inst = 0x6c00070 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0) | ((rotate & 0x3) << 10);
	**address = inst;
}
void arm_uxtab16 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
){
	// aaaa01101100bbbbccccdd000111eeee
	uint32_t inst = 0x6c00070 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0) | ((rotate & 0x3) << 10);
	**address = inst;
}
void arm_uxtah_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
){
	// aaaa01101111bbbbccccdd000111eeee
	uint32_t inst = 0x6f00070 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0) | ((rotate & 0x3) << 10);
	**address = inst;
}
void arm_uxtah (
	uint32_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
){
	// aaaa01101111bbbbccccdd000111eeee
	uint32_t inst = 0x6f00070 | (14 << 28) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0) | ((rotate & 0x3) << 10);
	**address = inst;
}
void arm_uxtb_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
){
	// aaaa011011101111bbbbcc000111dddd
	uint32_t inst = 0x6ef0070 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rm & 0xf) << 0) | ((rotate & 0x3) << 10);
	**address = inst;
}
void arm_uxtb (
	uint32_t **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
){
	// aaaa011011101111bbbbcc000111dddd
	uint32_t inst = 0x6ef0070 | (14 << 28) | ((rd & 0xf) << 12) | ((rm & 0xf) << 0) | ((rotate & 0x3) << 10);
	**address = inst;
}
void arm_uxtb16_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
){
	// aaaa011011001111bbbbcc000111dddd
	uint32_t inst = 0x6cf0070 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rm & 0xf) << 0) | ((rotate & 0x3) << 10);
	**address = inst;
}
void arm_uxtb16 (
	uint32_t **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
){
	// aaaa011011001111bbbbcc000111dddd
	uint32_t inst = 0x6cf0070 | (14 << 28) | ((rd & 0xf) << 12) | ((rm & 0xf) << 0) | ((rotate & 0x3) << 10);
	**address = inst;
}
void arm_uxth_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
){
	// aaaa011011111111bbbbcc000111dddd
	uint32_t inst = 0x6ff0070 | ((auto_cond & 0xf) << 28) | ((rd & 0xf) << 12) | ((rm & 0xf) << 0) | ((rotate & 0x3) << 10);
	**address = inst;
}
void arm_uxth (
	uint32_t **address,
	unsigned int rd,
	unsigned int rm,
	unsigned int rotate
){
	// aaaa011011111111bbbbcc000111dddd
	uint32_t inst = 0x6ff0070 | (14 << 28) | ((rd & 0xf) << 12) | ((rm & 0xf) << 0) | ((rotate & 0x3) << 10);
	**address = inst;
}
void arm_wfe_cond (
	uint32_t **address,
	unsigned int auto_cond
){
	// aaaa0011001000001111000000000010
	uint32_t inst = 0x320f002 | ((auto_cond & 0xf) << 28);
	**address = inst;
}
void arm_wfe (
	uint32_t **address
){
	// aaaa0011001000001111000000000010
	uint32_t inst = 0x320f002 | (14 << 28);
	**address = inst;
}
void arm_wfi_cond (
	uint32_t **address,
	unsigned int auto_cond
){
	// aaaa0011001000001111000000000011
	uint32_t inst = 0x320f003 | ((auto_cond & 0xf) << 28);
	**address = inst;
}
void arm_wfi (
	uint32_t **address
){
	// aaaa0011001000001111000000000011
	uint32_t inst = 0x320f003 | (14 << 28);
	**address = inst;
}
void arm_yield_cond (
	uint32_t **address,
	unsigned int auto_cond
){
	// aaaa0011001000001111000000000001
	uint32_t inst = 0x320f001 | ((auto_cond & 0xf) << 28);
	**address = inst;
}
void arm_yield (
	uint32_t **address
){
	// aaaa0011001000001111000000000001
	uint32_t inst = 0x320f001 | (14 << 28);
	**address = inst;
}
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
){
	// 1111001u0daabbbbcccc0111nqm1eeee
	uint32_t inst = 0xf2000710 | ((unsign & 0x1) << 24) | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 1111001u1daabbbbcccc0101n0m0eeee
	uint32_t inst = 0xf2800500 | ((unsign & 0x1) << 24) | ((size & 0x3) << 20) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 1111001u0daabbbbcccc0111nqm0eeee
	uint32_t inst = 0xf2000700 | ((unsign & 0x1) << 24) | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 111100110d1saaaabbbb1101nqm0cccc
	uint32_t inst = 0xf3200d00 | ((size & 0x1) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 1111001u1daabbbbcccc0111n0m0eeee
	uint32_t inst = 0xf2800700 | ((unsign & 0x1) << 24) | ((size & 0x3) << 20) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vabs (
	uint32_t **address,
	unsigned int float_p,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111100111d11ss01aaaa0f110qm0bbbb
	uint32_t inst = 0xf3b10300 | ((float_p & 0x1) << 10) | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_vfp_vabs_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// aaaa11101d110000bbbb101s11m0cccc
	uint32_t inst = 0xeb00ac0 | ((auto_cond & 0xf) << 28) | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_vfp_vabs (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// aaaa11101d110000bbbb101s11m0cccc
	uint32_t inst = 0xeb00ac0 | (14 << 28) | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 111100110d0saaaabbbb1110nqm1cccc
	uint32_t inst = 0xf3000e10 | ((size & 0x1) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 111100110d1saaaabbbb1110nqm1cccc
	uint32_t inst = 0xf3200e10 | ((size & 0x1) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 111100100abbccccdddd1000efg0hhhh
	uint32_t inst = 0xf2000800 | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 111100100d0saaaabbbb1101nqm0cccc
	uint32_t inst = 0xf2000d00 | ((size & 0x1) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// aaaa11100d11bbbbcccc101sn0meeeee
	uint32_t inst = 0xe300a00 | ((auto_cond & 0xf) << 28) | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0x1f) << 0);
	**address = inst;
}
void arm_vfp_vadd (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// aaaa11100d11bbbbcccc101sn0meeeee
	uint32_t inst = 0xe300a00 | (14 << 28) | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0x1f) << 0);
	**address = inst;
}
void arm_neon_vaddhn (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111100101dssaaaabbbb0100n0m0cccc
	uint32_t inst = 0xf2800400 | ((size & 0x3) << 20) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 1111001u1dssaaaabbbb0000n0m0cccc
	uint32_t inst = 0xf2800000 | ((size & 0x3) << 20) | ((unsign & 0x1) << 24) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 1111001u1dssaaaabbbb0001n0m0cccc
	uint32_t inst = 0xf2800100 | ((unsign & 0x1) << 24) | ((size & 0x3) << 20) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vand (
	uint32_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111100100d00aaaabbbb0001nqm1cccc
	uint32_t inst = 0xf2000110 | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vbici (
	uint32_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int cmode,
	unsigned int i,
	unsigned int imm3,
	unsigned int imm4
){
	// 1111001i1d000aaabbbbcccc0q11eeee
	uint32_t inst = 0xf2800030 | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((cmode & 0xf) << 8) | ((i & 0x1) << 24) | ((imm3 & 0x7) << 16) | ((imm4 & 0xf) << 0);
	**address = inst;
}
void arm_neon_vbic (
	uint32_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111100100d01aaaabbbb0001nqm1cccc
	uint32_t inst = 0xf2100110 | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vbif (
	uint32_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111100110d11aaaabbbb0001nqm1cccc
	uint32_t inst = 0xf3300110 | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vbit (
	uint32_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111100110d10aaaabbbb0001nqm1cccc
	uint32_t inst = 0xf3200110 | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vbsl (
	uint32_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111100110d01aaaabbbb0001nqm1cccc
	uint32_t inst = 0xf3100110 | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 111100110dssaaaabbbb1000nqm1cccc
	uint32_t inst = 0xf3000810 | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 111100100d0saaaabbbb1110nqm0cccc
	uint32_t inst = 0xf2000e00 | ((size & 0x1) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vceqz (
	uint32_t **address,
	unsigned int float_p,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111100111d11ss01aaaa0f010qm0bbbb
	uint32_t inst = 0xf3b10100 | ((float_p & 0x1) << 10) | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 1111001u0dssaaaabbbb0011nqm1cccc
	uint32_t inst = 0xf2000310 | ((unsign & 0x1) << 24) | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 111100110d0saaaabbbb1110nqm0cccc
	uint32_t inst = 0xf3000e00 | ((size & 0x1) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vcgez (
	uint32_t **address,
	unsigned int float_p,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111100111d11ss01aaaa0f001qm0bbbb
	uint32_t inst = 0xf3b10080 | ((float_p & 0x1) << 10) | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 1111001u0dssaaaabbbb0011nqm0cccc
	uint32_t inst = 0xf2000300 | ((unsign & 0x1) << 24) | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 111100110d1saaaabbbb1110nqm0cccc
	uint32_t inst = 0xf3200e00 | ((size & 0x1) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vcgtz (
	uint32_t **address,
	unsigned int float_p,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111100111d11ss01aaaa0f000qm0bbbb
	uint32_t inst = 0xf3b10000 | ((float_p & 0x1) << 10) | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vclez (
	uint32_t **address,
	unsigned int float_p,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111100111d11ss01aaaa0f011qm0bbbb
	uint32_t inst = 0xf3b10180 | ((float_p & 0x1) << 10) | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vcls (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111100111d11ss00aaaa01000qm0bbbb
	uint32_t inst = 0xf3b00400 | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vcltz (
	uint32_t **address,
	unsigned int float_p,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111100111d11ss01aaaa0f100qm0bbbb
	uint32_t inst = 0xf3b10200 | ((float_p & 0x1) << 10) | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vclz (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111100111d11ss00aaaa01001qm0bbbb
	uint32_t inst = 0xf3b00480 | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_vfp_vcmp_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int d,
	unsigned int vd,
	unsigned int sz,
	unsigned int m,
	unsigned int vm
){
	// aaaa11101b110100cccc101d01e0ffff
	uint32_t inst = 0xeb40a40 | ((auto_cond & 0xf) << 28) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((sz & 0x1) << 8) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_vfp_vcmp (
	uint32_t **address,
	unsigned int d,
	unsigned int vd,
	unsigned int sz,
	unsigned int m,
	unsigned int vm
){
	// aaaa11101b110100cccc101d01e0ffff
	uint32_t inst = 0xeb40a40 | (14 << 28) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((sz & 0x1) << 8) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_vfp_vcmpz_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int d,
	unsigned int vd,
	unsigned int sz
){
	// aaaa11101b110101cccc101d01000000
	uint32_t inst = 0xeb50a40 | ((auto_cond & 0xf) << 28) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((sz & 0x1) << 8);
	**address = inst;
}
void arm_vfp_vcmpz (
	uint32_t **address,
	unsigned int d,
	unsigned int vd,
	unsigned int sz
){
	// aaaa11101b110101cccc101d01000000
	uint32_t inst = 0xeb50a40 | (14 << 28) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((sz & 0x1) << 8);
	**address = inst;
}
void arm_vfp_vcmpe_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int d,
	unsigned int vd,
	unsigned int sz,
	unsigned int m,
	unsigned int vm
){
	// aaaa11101b110100cccc101d11e0ffff
	uint32_t inst = 0xeb40ac0 | ((auto_cond & 0xf) << 28) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((sz & 0x1) << 8) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_vfp_vcmpe (
	uint32_t **address,
	unsigned int d,
	unsigned int vd,
	unsigned int sz,
	unsigned int m,
	unsigned int vm
){
	// aaaa11101b110100cccc101d11e0ffff
	uint32_t inst = 0xeb40ac0 | (14 << 28) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((sz & 0x1) << 8) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_vfp_vcmpez_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int d,
	unsigned int vd,
	unsigned int sz
){
	// aaaa11101b110101cccc101d11000000
	uint32_t inst = 0xeb50ac0 | ((auto_cond & 0xf) << 28) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((sz & 0x1) << 8);
	**address = inst;
}
void arm_vfp_vcmpez (
	uint32_t **address,
	unsigned int d,
	unsigned int vd,
	unsigned int sz
){
	// aaaa11101b110101cccc101d11000000
	uint32_t inst = 0xeb50ac0 | (14 << 28) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((sz & 0x1) << 8);
	**address = inst;
}
void arm_neon_vcnt (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111100111d11ss00aaaa01010qm0bbbb
	uint32_t inst = 0xf3b00500 | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vcvt_f_i (
	uint32_t **address,
	unsigned int op,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111100111d11ss11aaaa011ooqm0bbbb
	uint32_t inst = 0xf3b30600 | ((op & 0x3) << 7) | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 1111001u1daaaaaabbbb111o0qm1cccc
	uint32_t inst = 0xf2800e10 | ((op & 0x1) << 8) | ((unsign & 0x1) << 24) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0) | ((imm6 & 0x3f) << 16);
	**address = inst;
}
void arm_neon_vcvt_hp_sp (
	uint32_t **address,
	unsigned int op,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111100111d11ss10aaaa011o00m0bbbb
	uint32_t inst = 0xf3b20600 | ((op & 0x1) << 8) | ((size & 0x3) << 18) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// aaaa11101b111cccdddd101eo1g0hhhh
	uint32_t inst = 0xeb80a40 | ((auto_cond & 0xf) << 28) | ((op & 0x1) << 7) | ((opcode2 & 0x7) << 16) | ((sz & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_vfp_vcvt_f_i (
	uint32_t **address,
	unsigned int op,
	unsigned int opcode2,
	unsigned int sz,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// aaaa11101b111cccdddd101eo1g0hhhh
	uint32_t inst = 0xeb80a40 | (14 << 28) | ((op & 0x1) << 7) | ((opcode2 & 0x7) << 16) | ((sz & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// aaaa11101d111o1ubbbb101ce1i0ffff
	uint32_t inst = 0xeba0a40 | ((auto_cond & 0xf) << 28) | ((op & 0x1) << 18) | ((unsign & 0x1) << 16) | ((sf & 0x1) << 8) | ((sx & 0x1) << 7) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((imm4 & 0xf) << 0) | ((i & 0x1) << 5);
	**address = inst;
}
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
){
	// aaaa11101d111o1ubbbb101ce1i0ffff
	uint32_t inst = 0xeba0a40 | (14 << 28) | ((op & 0x1) << 18) | ((unsign & 0x1) << 16) | ((sf & 0x1) << 8) | ((sx & 0x1) << 7) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((imm4 & 0xf) << 0) | ((i & 0x1) << 5);
	**address = inst;
}
void arm_vfp_vcvt_dp_sp_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// aaaa11101d110111bbbb101s11m0cccc
	uint32_t inst = 0xeb70ac0 | ((auto_cond & 0xf) << 28) | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_vfp_vcvt_dp_sp (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// aaaa11101d110111bbbb101s11m0cccc
	uint32_t inst = 0xeb70ac0 | (14 << 28) | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_vfp_vcvtb_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int op,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// aaaa11101d11001obbbb101001m0cccc
	uint32_t inst = 0xeb20a40 | ((auto_cond & 0xf) << 28) | ((op & 0x1) << 16) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_vfp_vcvtb (
	uint32_t **address,
	unsigned int op,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// aaaa11101d11001obbbb101001m0cccc
	uint32_t inst = 0xeb20a40 | (14 << 28) | ((op & 0x1) << 16) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_vfp_vcvtt_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int op,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// aaaa11101d11001obbbb101011m0cccc
	uint32_t inst = 0xeb20ac0 | ((auto_cond & 0xf) << 28) | ((op & 0x1) << 16) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_vfp_vcvtt (
	uint32_t **address,
	unsigned int op,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// aaaa11101d11001obbbb101011m0cccc
	uint32_t inst = 0xeb20ac0 | (14 << 28) | ((op & 0x1) << 16) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// aaaa11101d00bbbbcccc101sn0m0eeee
	uint32_t inst = 0xe800a00 | ((auto_cond & 0xf) << 28) | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_vfp_vdiv (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// aaaa11101d00bbbbcccc101sn0m0eeee
	uint32_t inst = 0xe800a00 | (14 << 28) | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vdup_scal (
	uint32_t **address,
	unsigned int imm4,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111100111d11aaaabbbb11000qm0cccc
	uint32_t inst = 0xf3b00c00 | ((imm4 & 0xf) << 16) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vdup_core_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int b,
	unsigned int e,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int rt
){
	// aaaa11101bq0ccccffff1011d0e10000
	uint32_t inst = 0xe800b10 | ((auto_cond & 0xf) << 28) | ((b & 0x1) << 22) | ((e & 0x1) << 5) | ((q & 0x1) << 21) | ((d & 0x1) << 7) | ((vd & 0xf) << 16) | ((rt & 0xf) << 12);
	**address = inst;
}
void arm_neon_vdup_core (
	uint32_t **address,
	unsigned int b,
	unsigned int e,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int rt
){
	// aaaa11101bq0ccccffff1011d0e10000
	uint32_t inst = 0xe800b10 | (14 << 28) | ((b & 0x1) << 22) | ((e & 0x1) << 5) | ((q & 0x1) << 21) | ((d & 0x1) << 7) | ((vd & 0xf) << 16) | ((rt & 0xf) << 12);
	**address = inst;
}
void arm_neon_veor (
	uint32_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111100110d00aaaabbbb0001nqm1cccc
	uint32_t inst = 0xf3000110 | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 111100101d11aaaabbbbccccnqm0eeee
	uint32_t inst = 0xf2b00000 | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0) | ((imm4 & 0xf) << 8);
	**address = inst;
}
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
){
	// 111100100d0saaaabbbb1100nqm1cccc
	uint32_t inst = 0xf2000c10 | ((size & 0x1) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 111100100d1saaaabbbb1100nqm1cccc
	uint32_t inst = 0xf2200c10 | ((size & 0x1) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// aaaa11101d10bbbbcccc101sn0m0eeee
	uint32_t inst = 0xea00a00 | ((auto_cond & 0xf) << 28) | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_vfp_vfma (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// aaaa11101d10bbbbcccc101sn0m0eeee
	uint32_t inst = 0xea00a00 | (14 << 28) | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// aaaa11101d10bbbbcccc101sn1m0eeee
	uint32_t inst = 0xea00a40 | ((auto_cond & 0xf) << 28) | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_vfp_vfms (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// aaaa11101d10bbbbcccc101sn1m0eeee
	uint32_t inst = 0xea00a40 | (14 << 28) | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// aaaa11101d01bbbbcccc101sn1m0eeee
	uint32_t inst = 0xe900a40 | ((auto_cond & 0xf) << 28) | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_vfp_vfnma (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// aaaa11101d01bbbbcccc101sn1m0eeee
	uint32_t inst = 0xe900a40 | (14 << 28) | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// aaaa11101d01bbbbcccc101sn0m0eeee
	uint32_t inst = 0xe900a00 | ((auto_cond & 0xf) << 28) | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_vfp_vfnms (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// aaaa11101d01bbbbcccc101sn0m0eeee
	uint32_t inst = 0xe900a00 | (14 << 28) | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 1111001u0dssaaaabbbb0000nqm0cccc
	uint32_t inst = 0xf2000000 | ((unsign & 0x1) << 24) | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 1111001u0dssaaaabbbb0010nqm0cccc
	uint32_t inst = 0xf2000200 | ((unsign & 0x1) << 24) | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vldx_m (
	uint32_t **address,
	unsigned int opcode,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int rn,
	unsigned int align,
	unsigned int rm
){
	// 111101000a10bbbbccccddddeeffgggg
	uint32_t inst = 0xf4200000 | ((opcode & 0xf) << 8) | ((size & 0x3) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((rn & 0xf) << 16) | ((align & 0x3) << 4) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vldx_s_o (
	uint32_t **address,
	unsigned int opcode,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int rn,
	unsigned int index_align,
	unsigned int rm
){
	// 111101001a10bbbbccccddeeffffgggg
	uint32_t inst = 0xf4a00000 | ((opcode & 0x3) << 8) | ((size & 0x3) << 10) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((rn & 0xf) << 16) | ((index_align & 0xf) << 4) | ((rm & 0xf) << 0);
	**address = inst;
}
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
){
	// 111101001a10bbbbcccc11ddeetgffff
	uint32_t inst = 0xf4a00c00 | ((opcode & 0x3) << 8) | ((size & 0x3) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((inc & 0x1) << 5) | ((rn & 0xf) << 16) | ((align & 0x1) << 4) | ((rm & 0xf) << 0);
	**address = inst;
}
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
){
	// aaaa110bcde1ffffgggg1011hhhhhhhh
	uint32_t inst = 0xc100b00 | ((auto_cond & 0xf) << 28) | ((p & 0x1) << 24) | ((upwards & 0x1) << 23) | ((d & 0x1) << 22) | ((writeback & 0x1) << 21) | ((rn & 0xf) << 16) | ((vd & 0xf) << 12) | ((imm8 & 0xff) << 0);
	**address = inst;
}
void arm_vfp_vldm_dp (
	uint32_t **address,
	unsigned int p,
	unsigned int upwards,
	unsigned int d,
	unsigned int writeback,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
){
	// aaaa110bcde1ffffgggg1011hhhhhhhh
	uint32_t inst = 0xc100b00 | (14 << 28) | ((p & 0x1) << 24) | ((upwards & 0x1) << 23) | ((d & 0x1) << 22) | ((writeback & 0x1) << 21) | ((rn & 0xf) << 16) | ((vd & 0xf) << 12) | ((imm8 & 0xff) << 0);
	**address = inst;
}
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
){
	// aaaa110bcde1ffffgggg1010hhhhhhhh
	uint32_t inst = 0xc100a00 | ((auto_cond & 0xf) << 28) | ((p & 0x1) << 24) | ((upwards & 0x1) << 23) | ((d & 0x1) << 22) | ((writeback & 0x1) << 21) | ((rn & 0xf) << 16) | ((vd & 0xf) << 12) | ((imm8 & 0xff) << 0);
	**address = inst;
}
void arm_vfp_vldm_sp (
	uint32_t **address,
	unsigned int p,
	unsigned int upwards,
	unsigned int d,
	unsigned int writeback,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
){
	// aaaa110bcde1ffffgggg1010hhhhhhhh
	uint32_t inst = 0xc100a00 | (14 << 28) | ((p & 0x1) << 24) | ((upwards & 0x1) << 23) | ((d & 0x1) << 22) | ((writeback & 0x1) << 21) | ((rn & 0xf) << 16) | ((vd & 0xf) << 12) | ((imm8 & 0xff) << 0);
	**address = inst;
}
void arm_vfp_vldr_dp_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int upwards,
	unsigned int d,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
){
	// aaaa1101bc01ddddeeee1011ffffffff
	uint32_t inst = 0xd100b00 | ((auto_cond & 0xf) << 28) | ((upwards & 0x1) << 23) | ((d & 0x1) << 22) | ((rn & 0xf) << 16) | ((vd & 0xf) << 12) | ((imm8 & 0xff) << 0);
	**address = inst;
}
void arm_vfp_vldr_dp (
	uint32_t **address,
	unsigned int upwards,
	unsigned int d,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
){
	// aaaa1101bc01ddddeeee1011ffffffff
	uint32_t inst = 0xd100b00 | (14 << 28) | ((upwards & 0x1) << 23) | ((d & 0x1) << 22) | ((rn & 0xf) << 16) | ((vd & 0xf) << 12) | ((imm8 & 0xff) << 0);
	**address = inst;
}
void arm_vfp_vldr_sp_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int upwards,
	unsigned int d,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
){
	// aaaa1101bc01ddddeeee1010ffffffff
	uint32_t inst = 0xd100a00 | ((auto_cond & 0xf) << 28) | ((upwards & 0x1) << 23) | ((d & 0x1) << 22) | ((rn & 0xf) << 16) | ((vd & 0xf) << 12) | ((imm8 & 0xff) << 0);
	**address = inst;
}
void arm_vfp_vldr_sp (
	uint32_t **address,
	unsigned int upwards,
	unsigned int d,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
){
	// aaaa1101bc01ddddeeee1010ffffffff
	uint32_t inst = 0xd100a00 | (14 << 28) | ((upwards & 0x1) << 23) | ((d & 0x1) << 22) | ((rn & 0xf) << 16) | ((vd & 0xf) << 12) | ((imm8 & 0xff) << 0);
	**address = inst;
}
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
){
	// 1111001u0dssaaaabbbb0110nqm0cccc
	uint32_t inst = 0xf2000600 | ((unsign & 0x1) << 24) | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 1111001u0dssaaaabbbb0110nqm1cccc
	uint32_t inst = 0xf2000610 | ((unsign & 0x1) << 24) | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 111100100d0saaaabbbb1111nqm0cccc
	uint32_t inst = 0xf2000f00 | ((size & 0x1) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 111100100d1saaaabbbb1111nqm0cccc
	uint32_t inst = 0xf2200f00 | ((size & 0x1) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 111100100dssaaaabbbb1001nqm0cccc
	uint32_t inst = 0xf2000900 | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 111100110dssaaaabbbb1001nqm0cccc
	uint32_t inst = 0xf3000900 | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 1111001u1dssaaaabbbb1000n0m0cccc
	uint32_t inst = 0xf2800800 | ((unsign & 0x1) << 24) | ((size & 0x3) << 20) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 1111001u1dssaaaabbbb1010n0m0cccc
	uint32_t inst = 0xf2800a00 | ((unsign & 0x1) << 24) | ((size & 0x3) << 20) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 111100100d0saaaabbbb1101nqm1cccc
	uint32_t inst = 0xf2000d10 | ((size & 0x1) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 111100100d1saaaabbbb1101nqm1cccc
	uint32_t inst = 0xf2200d10 | ((size & 0x1) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// aaaa11100b00ccccdddd101se0f0gggg
	uint32_t inst = 0xe000a00 | ((auto_cond & 0xf) << 28) | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vn & 0xf) << 16) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_vfp_vmla_f (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vn,
	unsigned int vd,
	unsigned int n,
	unsigned int m,
	unsigned int vm
){
	// aaaa11100b00ccccdddd101se0f0gggg
	uint32_t inst = 0xe000a00 | (14 << 28) | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vn & 0xf) << 16) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// aaaa11100b00ccccdddd101se1f0gggg
	uint32_t inst = 0xe000a40 | ((auto_cond & 0xf) << 28) | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vn & 0xf) << 16) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_vfp_vmls_f (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vn,
	unsigned int vd,
	unsigned int n,
	unsigned int m,
	unsigned int vm
){
	// aaaa11100b00ccccdddd101se1f0gggg
	uint32_t inst = 0xe000a40 | (14 << 28) | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vn & 0xf) << 16) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 1111001q1dssaaaabbbb000fn1m0cccc
	uint32_t inst = 0xf2800040 | ((float_p & 0x1) << 8) | ((size & 0x3) << 20) | ((q & 0x1) << 24) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 1111001q1dssaaaabbbb010fn1m0cccc
	uint32_t inst = 0xf2800440 | ((float_p & 0x1) << 8) | ((size & 0x3) << 20) | ((q & 0x1) << 24) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 1111001u1dssaaaabbbb0010n1m0cccc
	uint32_t inst = 0xf2800240 | ((unsign & 0x1) << 24) | ((size & 0x3) << 20) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 1111001u1dssaaaabbbb0110n1m0cccc
	uint32_t inst = 0xf2800640 | ((unsign & 0x1) << 24) | ((size & 0x3) << 20) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 1111001i1d000aaabbbbcccc0qo1eeee
	uint32_t inst = 0xf2800010 | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((op & 0x1) << 5) | ((cmode & 0xf) << 8) | ((i & 0x1) << 24) | ((imm3 & 0x7) << 16) | ((imm4 & 0xf) << 0);
	**address = inst;
}
void arm_vfp_vmovi_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int imm4h,
	unsigned int imm4l
){
	// aaaa11101d11bbbbcccc101s0000eeee
	uint32_t inst = 0xeb00a00 | ((auto_cond & 0xf) << 28) | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((imm4h & 0xf) << 16) | ((imm4l & 0xf) << 0);
	**address = inst;
}
void arm_vfp_vmovi (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int imm4h,
	unsigned int imm4l
){
	// aaaa11101d11bbbbcccc101s0000eeee
	uint32_t inst = 0xeb00a00 | (14 << 28) | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((imm4h & 0xf) << 16) | ((imm4l & 0xf) << 0);
	**address = inst;
}
void arm_vfp_vmov_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// aaaa11101d110000bbbb101s01m0cccc
	uint32_t inst = 0xeb00a40 | ((auto_cond & 0xf) << 28) | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_vfp_vmov (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// aaaa11101d110000bbbb101s01m0cccc
	uint32_t inst = 0xeb00a40 | (14 << 28) | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_vfp_vmov_core_scal_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int d,
	unsigned int vd,
	unsigned int opc1,
	unsigned int opc2,
	unsigned int rt
){
	// aaaa11100bb0ccccdddd1011eff10000
	uint32_t inst = 0xe000b10 | ((auto_cond & 0xf) << 28) | ((d & 0x1) << 7) | ((vd & 0xf) << 16) | ((opc1 & 0x3) << 21) | ((opc2 & 0x3) << 5) | ((rt & 0xf) << 12);
	**address = inst;
}
void arm_vfp_vmov_core_scal (
	uint32_t **address,
	unsigned int d,
	unsigned int vd,
	unsigned int opc1,
	unsigned int opc2,
	unsigned int rt
){
	// aaaa11100bb0ccccdddd1011eff10000
	uint32_t inst = 0xe000b10 | (14 << 28) | ((d & 0x1) << 7) | ((vd & 0xf) << 16) | ((opc1 & 0x3) << 21) | ((opc2 & 0x3) << 5) | ((rt & 0xf) << 12);
	**address = inst;
}
void arm_vfp_vmov_scal_core_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int unsign,
	unsigned int rt,
	unsigned int n,
	unsigned int vn,
	unsigned int opc1,
	unsigned int opc2
){
	// aaaa1110bcc1ddddeeee1011fgg10000
	uint32_t inst = 0xe100b10 | ((auto_cond & 0xf) << 28) | ((unsign & 0x1) << 23) | ((rt & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((opc1 & 0x3) << 21) | ((opc2 & 0x3) << 5);
	**address = inst;
}
void arm_vfp_vmov_scal_core (
	uint32_t **address,
	unsigned int unsign,
	unsigned int rt,
	unsigned int n,
	unsigned int vn,
	unsigned int opc1,
	unsigned int opc2
){
	// aaaa1110bcc1ddddeeee1011fgg10000
	uint32_t inst = 0xe100b10 | (14 << 28) | ((unsign & 0x1) << 23) | ((rt & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((opc1 & 0x3) << 21) | ((opc2 & 0x3) << 5);
	**address = inst;
}
void arm_vfp_vmov_core_sp_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int op,
	unsigned int rt,
	unsigned int n,
	unsigned int vn
){
	// aaaa1110000obbbbcccc1010n0010000
	uint32_t inst = 0xe000a10 | ((auto_cond & 0xf) << 28) | ((op & 0x1) << 20) | ((rt & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16);
	**address = inst;
}
void arm_vfp_vmov_core_sp (
	uint32_t **address,
	unsigned int op,
	unsigned int rt,
	unsigned int n,
	unsigned int vn
){
	// aaaa1110000obbbbcccc1010n0010000
	uint32_t inst = 0xe000a10 | (14 << 28) | ((op & 0x1) << 20) | ((rt & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16);
	**address = inst;
}
void arm_vfp_vmov_2core_2sp_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int op,
	unsigned int rt,
	unsigned int rt2,
	unsigned int m,
	unsigned int vm
){
	// aaaa1100010obbbbcccc101000m1dddd
	uint32_t inst = 0xc400a10 | ((auto_cond & 0xf) << 28) | ((op & 0x1) << 20) | ((rt & 0xf) << 12) | ((rt2 & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_vfp_vmov_2core_2sp (
	uint32_t **address,
	unsigned int op,
	unsigned int rt,
	unsigned int rt2,
	unsigned int m,
	unsigned int vm
){
	// aaaa1100010obbbbcccc101000m1dddd
	uint32_t inst = 0xc400a10 | (14 << 28) | ((op & 0x1) << 20) | ((rt & 0xf) << 12) | ((rt2 & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_vfp_vmov_2core_dp_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int op,
	unsigned int rt,
	unsigned int rt2,
	unsigned int m,
	unsigned int vm
){
	// aaaa1100010obbbbcccc101100m1dddd
	uint32_t inst = 0xc400b10 | ((auto_cond & 0xf) << 28) | ((op & 0x1) << 20) | ((rt & 0xf) << 12) | ((rt2 & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_vfp_vmov_2core_dp (
	uint32_t **address,
	unsigned int op,
	unsigned int rt,
	unsigned int rt2,
	unsigned int m,
	unsigned int vm
){
	// aaaa1100010obbbbcccc101100m1dddd
	uint32_t inst = 0xc400b10 | (14 << 28) | ((op & 0x1) << 20) | ((rt & 0xf) << 12) | ((rt2 & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vmovl (
	uint32_t **address,
	unsigned int unsign,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm3
){
	// 1111001u1daaa000bbbb101000m1cccc
	uint32_t inst = 0xf2800a10 | ((unsign & 0x1) << 24) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0) | ((imm3 & 0x7) << 19);
	**address = inst;
}
void arm_neon_vmovn (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111100111d11ss10aaaa001000m0bbbb
	uint32_t inst = 0xf3b20200 | ((size & 0x3) << 18) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_vfp_vmrs_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rt
){
	// aaaa111011110001bbbb101000010000
	uint32_t inst = 0xef10a10 | ((auto_cond & 0xf) << 28) | ((rt & 0xf) << 12);
	**address = inst;
}
void arm_vfp_vmrs (
	uint32_t **address,
	unsigned int rt
){
	// aaaa111011110001bbbb101000010000
	uint32_t inst = 0xef10a10 | (14 << 28) | ((rt & 0xf) << 12);
	**address = inst;
}
void arm_vfp_vmsr_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int rt
){
	// aaaa111011100001bbbb101000010000
	uint32_t inst = 0xee10a10 | ((auto_cond & 0xf) << 28) | ((rt & 0xf) << 12);
	**address = inst;
}
void arm_vfp_vmsr (
	uint32_t **address,
	unsigned int rt
){
	// aaaa111011100001bbbb101000010000
	uint32_t inst = 0xee10a10 | (14 << 28) | ((rt & 0xf) << 12);
	**address = inst;
}
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
){
	// 1111001a0bccddddeeee1001fgh1iiii
	uint32_t inst = 0xf2000910 | ((opcode & 0x1) << 24) | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 1111001a1bccddddeeee11f0g0h0iiii
	uint32_t inst = 0xf2800c00 | ((opcode & 0x1) << 24) | ((opcode4 & 0x1) << 9) | ((size & 0x3) << 20) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 111100110d0saaaabbbb1101nqm1cccc
	uint32_t inst = 0xf3000d10 | ((size & 0x1) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// aaaa11100b10ccccdddd101se0f0gggg
	uint32_t inst = 0xe200a00 | ((auto_cond & 0xf) << 28) | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vn & 0xf) << 16) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_vfp_vmul_f (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vn,
	unsigned int vd,
	unsigned int n,
	unsigned int m,
	unsigned int vm
){
	// aaaa11100b10ccccdddd101se0f0gggg
	uint32_t inst = 0xe200a00 | (14 << 28) | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vn & 0xf) << 16) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 1111001a1bccddddeeee100fg1h0iiii
	uint32_t inst = 0xf2800840 | ((opcode & 0x1) << 24) | ((opcode5 & 0x1) << 8) | ((size & 0x3) << 20) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 1111001a1bccddddeeee1010f1g0hhhh
	uint32_t inst = 0xf2800a40 | ((opcode & 0x1) << 24) | ((size & 0x3) << 20) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vmvni (
	uint32_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int cmode,
	unsigned int i,
	unsigned int imm3,
	unsigned int imm4
){
	// 1111001i1d000aaabbbbcccc0q11eeee
	uint32_t inst = 0xf2800030 | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((cmode & 0xf) << 8) | ((i & 0x1) << 24) | ((imm3 & 0x7) << 16) | ((imm4 & 0xf) << 0);
	**address = inst;
}
void arm_neon_vmvn (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111100111a11bb00cccc01011de0ffff
	uint32_t inst = 0xf3b00580 | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vneg (
	uint32_t **address,
	unsigned int float_p,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111100111d11ss01aaaa0f111qm0bbbb
	uint32_t inst = 0xf3b10380 | ((float_p & 0x1) << 10) | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_vfp_vneg_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// aaaa11101d110001bbbb101s01m0cccc
	uint32_t inst = 0xeb10a40 | ((auto_cond & 0xf) << 28) | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_vfp_vneg (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// aaaa11101d110001bbbb101s01m0cccc
	uint32_t inst = 0xeb10a40 | (14 << 28) | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// aaaa11100d01bbbbcccc101sn1m0eeee
	uint32_t inst = 0xe100a40 | ((auto_cond & 0xf) << 28) | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_vfp_vnmla (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// aaaa11100d01bbbbcccc101sn1m0eeee
	uint32_t inst = 0xe100a40 | (14 << 28) | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// aaaa11100d01bbbbcccc101sn0m0eeee
	uint32_t inst = 0xe100a00 | ((auto_cond & 0xf) << 28) | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_vfp_vnmls (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// aaaa11100d01bbbbcccc101sn0m0eeee
	uint32_t inst = 0xe100a00 | (14 << 28) | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// aaaa11100d10bbbbcccc101sn1m0eeee
	uint32_t inst = 0xe200a40 | ((auto_cond & 0xf) << 28) | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_vfp_vnmul (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// aaaa11100d10bbbbcccc101sn1m0eeee
	uint32_t inst = 0xe200a40 | (14 << 28) | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vorn (
	uint32_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111100100d11aaaabbbb0001nqm1cccc
	uint32_t inst = 0xf2300110 | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vorri (
	uint32_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int cmode,
	unsigned int i,
	unsigned int imm3,
	unsigned int imm4
){
	// 1111001i1d000aaabbbbcccc0q01eeee
	uint32_t inst = 0xf2800010 | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((cmode & 0xf) << 8) | ((i & 0x1) << 24) | ((imm3 & 0x7) << 16) | ((imm4 & 0xf) << 0);
	**address = inst;
}
void arm_neon_vorr (
	uint32_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111100100d10aaaabbbb0001nqm1cccc
	uint32_t inst = 0xf2200110 | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vpadal (
	uint32_t **address,
	unsigned int unsign,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111100111d11ss00aaaa0110oqm0bbbb
	uint32_t inst = 0xf3b00600 | ((unsign & 0x1) << 7) | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 111100100dssaaaabbbb1011nqm1cccc
	uint32_t inst = 0xf2000b10 | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 111100110d0saaaabbbb1101nqm0cccc
	uint32_t inst = 0xf3000d00 | ((size & 0x1) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vpaddl (
	uint32_t **address,
	unsigned int unsign,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111100111d11ss00aaaa0010oqm0bbbb
	uint32_t inst = 0xf3b00200 | ((unsign & 0x1) << 7) | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 1111001u0dssaaaabbbb1010nqm0cccc
	uint32_t inst = 0xf2000a00 | ((unsign & 0x1) << 24) | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 1111001u0dssaaaabbbb1010nqm1cccc
	uint32_t inst = 0xf2000a10 | ((unsign & 0x1) << 24) | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 111100110d0saaaabbbb1111nqm0cccc
	uint32_t inst = 0xf3000f00 | ((size & 0x1) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 111100110d1saaaabbbb1111nqm0cccc
	uint32_t inst = 0xf3200f00 | ((size & 0x1) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_vfp_vpop_dp_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
){
	// aaaa11001d111101bbbb1011cccccccc
	uint32_t inst = 0xcbd0b00 | ((auto_cond & 0xf) << 28) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((imm8 & 0xff) << 0);
	**address = inst;
}
void arm_vfp_vpop_dp (
	uint32_t **address,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
){
	// aaaa11001d111101bbbb1011cccccccc
	uint32_t inst = 0xcbd0b00 | (14 << 28) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((imm8 & 0xff) << 0);
	**address = inst;
}
void arm_vfp_vpop_sp_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
){
	// aaaa11001d111101bbbb1010cccccccc
	uint32_t inst = 0xcbd0a00 | ((auto_cond & 0xf) << 28) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((imm8 & 0xff) << 0);
	**address = inst;
}
void arm_vfp_vpop_sp (
	uint32_t **address,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
){
	// aaaa11001d111101bbbb1010cccccccc
	uint32_t inst = 0xcbd0a00 | (14 << 28) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((imm8 & 0xff) << 0);
	**address = inst;
}
void arm_vfp_vpush_dp_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
){
	// aaaa11010d101101bbbb1011cccccccc
	uint32_t inst = 0xd2d0b00 | ((auto_cond & 0xf) << 28) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((imm8 & 0xff) << 0);
	**address = inst;
}
void arm_vfp_vpush_dp (
	uint32_t **address,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
){
	// aaaa11010d101101bbbb1011cccccccc
	uint32_t inst = 0xd2d0b00 | (14 << 28) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((imm8 & 0xff) << 0);
	**address = inst;
}
void arm_vfp_vpush_sp_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
){
	// aaaa11010d101101bbbb1010cccccccc
	uint32_t inst = 0xd2d0a00 | ((auto_cond & 0xf) << 28) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((imm8 & 0xff) << 0);
	**address = inst;
}
void arm_vfp_vpush_sp (
	uint32_t **address,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
){
	// aaaa11010d101101bbbb1010cccccccc
	uint32_t inst = 0xd2d0a00 | (14 << 28) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((imm8 & 0xff) << 0);
	**address = inst;
}
void arm_neon_vqabs (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111100111d11ss00aaaa01110qm0bbbb
	uint32_t inst = 0xf3b00700 | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 1111001a0bccddddeeee0000fgh1iiii
	uint32_t inst = 0xf2000010 | ((unsign & 0x1) << 24) | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vqdmlal_i (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111100101dssaaaabbbb1001n0m0cccc
	uint32_t inst = 0xf2800900 | ((size & 0x3) << 20) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vqdmlsl_i (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111100101dssaaaabbbb1011n0m0cccc
	uint32_t inst = 0xf2800b00 | ((size & 0x3) << 20) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vqdmlal_scal (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111100101dssaaaabbbb0011n1m0cccc
	uint32_t inst = 0xf2800340 | ((size & 0x3) << 20) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vqdmlsl_scal (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111100101dssaaaabbbb0111n1m0cccc
	uint32_t inst = 0xf2800740 | ((size & 0x3) << 20) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 111100100dssaaaabbbb1011nqm0cccc
	uint32_t inst = 0xf2000b00 | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 1111001q1dssaaaabbbb1100n1m0cccc
	uint32_t inst = 0xf2800c40 | ((size & 0x3) << 20) | ((q & 0x1) << 24) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vqdmull_i (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111100101dssaaaabbbb1101n0m0cccc
	uint32_t inst = 0xf2800d00 | ((size & 0x3) << 20) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vqdmull_scal (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111100101dssaaaabbbb1011n1m0cccc
	uint32_t inst = 0xf2800b40 | ((size & 0x3) << 20) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vqmovn (
	uint32_t **address,
	unsigned int unsign,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111100111d11ss10aaaa00101om0bbbb
	uint32_t inst = 0xf3b20280 | ((unsign & 0x1) << 6) | ((size & 0x3) << 18) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vqmovun (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111100111d11ss10aaaa001001m0bbbb
	uint32_t inst = 0xf3b20240 | ((size & 0x3) << 18) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vqneg (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111100111d11ss00aaaa01111qm0bbbb
	uint32_t inst = 0xf3b00780 | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 111100110dssaaaabbbb1011nqm0cccc
	uint32_t inst = 0xf3000b00 | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 1111001q1dssaaaabbbb1101n1m0cccc
	uint32_t inst = 0xf2800d40 | ((size & 0x3) << 20) | ((q & 0x1) << 24) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 1111001u0dssaaaabbbb0101nqm1cccc
	uint32_t inst = 0xf2000510 | ((unsign & 0x1) << 24) | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vqrshrn (
	uint32_t **address,
	unsigned int unsign,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
){
	// 1111001u1daaaaaabbbb100101m1cccc
	uint32_t inst = 0xf2800950 | ((unsign & 0x1) << 24) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0) | ((imm6 & 0x3f) << 16);
	**address = inst;
}
void arm_neon_vqrshrun (
	uint32_t **address,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
){
	// 111100111daaaaaabbbb100001m1cccc
	uint32_t inst = 0xf3800850 | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0) | ((imm6 & 0x3f) << 16);
	**address = inst;
}
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
){
	// 1111001u0dssaaaabbbb0100nqm1cccc
	uint32_t inst = 0xf2000410 | ((unsign & 0x1) << 24) | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0) | ((n & 0x1) << 7) | ((vn & 0xf) << 16);
	**address = inst;
}
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
){
	// 1111001u1daaaaaabbbb0111lqm1cccc
	uint32_t inst = 0xf2800710 | ((unsign & 0x1) << 24) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0) | ((l & 0x1) << 7) | ((imm6 & 0x3f) << 16);
	**address = inst;
}
void arm_neon_vqshlui (
	uint32_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int l,
	unsigned int imm6
){
	// 111100111daaaaaabbbb0110lqm1cccc
	uint32_t inst = 0xf3800610 | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0) | ((l & 0x1) << 7) | ((imm6 & 0x3f) << 16);
	**address = inst;
}
void arm_neon_vqshrn (
	uint32_t **address,
	unsigned int unsign,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
){
	// 1111001u1daaaaaabbbb100100m1cccc
	uint32_t inst = 0xf2800910 | ((unsign & 0x1) << 24) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0) | ((imm6 & 0x3f) << 16);
	**address = inst;
}
void arm_neon_vqshrun (
	uint32_t **address,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
){
	// 111100111daaaaaabbbb100000m1cccc
	uint32_t inst = 0xf3800810 | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0) | ((imm6 & 0x3f) << 16);
	**address = inst;
}
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
){
	// 1111001u0dssaaaabbbb0010nqm1cccc
	uint32_t inst = 0xf2000210 | ((unsign & 0x1) << 24) | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vraddhn (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111100111abbccccdddd0100e0f0gggg
	uint32_t inst = 0xf3800400 | ((size & 0x3) << 20) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vrecpe (
	uint32_t **address,
	unsigned int float_p,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111100111d11ss11aaaa010f0qm0bbbb
	uint32_t inst = 0xf3b30400 | ((float_p & 0x1) << 8) | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 111100100d0saaaabbbb1111nqm1cccc
	uint32_t inst = 0xf2000f10 | ((size & 0x1) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vrev16 (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111100111d11ss00aaaa00010qm0bbbb
	uint32_t inst = 0xf3b00100 | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vrev32 (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111100111d11ss00aaaa00001qm0bbbb
	uint32_t inst = 0xf3b00080 | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vrev64 (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111100111d11ss00aaaa00000qm0bbbb
	uint32_t inst = 0xf3b00000 | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 1111001u0dssaaaabbbb0001nqm0cccc
	uint32_t inst = 0xf2000100 | ((unsign & 0x1) << 24) | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 1111001u0dssaaaabbbb0101nqm0cccc
	uint32_t inst = 0xf2000500 | ((unsign & 0x1) << 24) | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 1111001a1bccccccdddd0010efg1hhhh
	uint32_t inst = 0xf2800210 | ((unsign & 0x1) << 24) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0) | ((l & 0x1) << 7) | ((imm6 & 0x3f) << 16);
	**address = inst;
}
void arm_neon_vrshrn (
	uint32_t **address,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
){
	// 111100101abbbbbbcccc100001d1eeee
	uint32_t inst = 0xf2800850 | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0) | ((imm6 & 0x3f) << 16);
	**address = inst;
}
void arm_neon_vrsqrte (
	uint32_t **address,
	unsigned int floating_point,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111100111d11ss11aaaa010f1qm0bbbb
	uint32_t inst = 0xf3b30480 | ((floating_point & 0x1) << 8) | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 111100100d1saaaabbbb1111nqm1cccc
	uint32_t inst = 0xf2200f10 | ((size & 0x1) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 1111001u1daaaaaabbbb0011lqm1cccc
	uint32_t inst = 0xf2800310 | ((unsign & 0x1) << 24) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0) | ((l & 0x1) << 7) | ((imm6 & 0x3f) << 16);
	**address = inst;
}
void arm_neon_vrsubhn (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111100111dssaaaabbbb0110n0m0cccc
	uint32_t inst = 0xf3800600 | ((size & 0x3) << 20) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 1111001u0dssaaaabbbb0100nqm0cccc
	uint32_t inst = 0xf2000400 | ((unsign & 0x1) << 24) | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vshli (
	uint32_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int l,
	unsigned int imm6
){
	// 111100101daaaaaabbbb0101lqm1cccc
	uint32_t inst = 0xf2800510 | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0) | ((l & 0x1) << 7) | ((imm6 & 0x3f) << 16);
	**address = inst;
}
void arm_neon_vshll (
	uint32_t **address,
	unsigned int unsign,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
){
	// 1111001u1daaaaaabbbb101000m1cccc
	uint32_t inst = 0xf2800a10 | ((unsign & 0x1) << 24) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0) | ((imm6 & 0x3f) << 16);
	**address = inst;
}
void arm_neon_vshll2 (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111100111d11ss10aaaa001100m0bbbb
	uint32_t inst = 0xf3b20300 | ((size & 0x3) << 18) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 1111001u1daaaaaabbbb0000lqm1cccc
	uint32_t inst = 0xf2800010 | ((unsign & 0x1) << 24) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0) | ((l & 0x1) << 7) | ((imm6 & 0x3f) << 16);
	**address = inst;
}
void arm_neon_vshrn (
	uint32_t **address,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
){
	// 111100101daaaaaabbbb100000m1cccc
	uint32_t inst = 0xf2800810 | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0) | ((imm6 & 0x3f) << 16);
	**address = inst;
}
void arm_neon_vsli (
	uint32_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int l,
	unsigned int imm6
){
	// 111100111daaaaaabbbb0101lqm1cccc
	uint32_t inst = 0xf3800510 | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0) | ((l & 0x1) << 7) | ((imm6 & 0x3f) << 16);
	**address = inst;
}
void arm_vfp_vsqrt_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// aaaa11101d110001bbbb101s11m0cccc
	uint32_t inst = 0xeb10ac0 | ((auto_cond & 0xf) << 28) | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_vfp_vsqrt (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// aaaa11101d110001bbbb101s11m0cccc
	uint32_t inst = 0xeb10ac0 | (14 << 28) | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 1111001a1bccccccdddd0001efg1hhhh
	uint32_t inst = 0xf2800110 | ((unsign & 0x1) << 24) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0) | ((l & 0x1) << 7) | ((imm6 & 0x3f) << 16);
	**address = inst;
}
void arm_neon_vsri (
	uint32_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int l,
	unsigned int imm6
){
	// 111100111daaaaaabbbb0100lqm1cccc
	uint32_t inst = 0xf3800410 | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0) | ((l & 0x1) << 7) | ((imm6 & 0x3f) << 16);
	**address = inst;
}
void arm_neon_vstx_m (
	uint32_t **address,
	unsigned int opcode,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int rn,
	unsigned int align,
	unsigned int rm
){
	// 111101000a00bbbbccccddddeeffgggg
	uint32_t inst = 0xf4000000 | ((opcode & 0xf) << 8) | ((size & 0x3) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((rn & 0xf) << 16) | ((align & 0x3) << 4) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vstx_s_o (
	uint32_t **address,
	unsigned int opcode,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int rn,
	unsigned int index_align,
	unsigned int rm
){
	// 111101001a00bbbbccccddeeffffgggg
	uint32_t inst = 0xf4800000 | ((opcode & 0x3) << 8) | ((size & 0x3) << 10) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((rn & 0xf) << 16) | ((index_align & 0xf) << 4) | ((rm & 0xf) << 0);
	**address = inst;
}
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
){
	// aaaa110bcde0ffffgggg1011hhhhhhhh
	uint32_t inst = 0xc000b00 | ((auto_cond & 0xf) << 28) | ((p & 0x1) << 24) | ((upwards & 0x1) << 23) | ((d & 0x1) << 22) | ((writeback & 0x1) << 21) | ((rn & 0xf) << 16) | ((vd & 0xf) << 12) | ((imm8 & 0xff) << 0);
	**address = inst;
}
void arm_vfp_vstm_dp (
	uint32_t **address,
	unsigned int p,
	unsigned int upwards,
	unsigned int d,
	unsigned int writeback,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
){
	// aaaa110bcde0ffffgggg1011hhhhhhhh
	uint32_t inst = 0xc000b00 | (14 << 28) | ((p & 0x1) << 24) | ((upwards & 0x1) << 23) | ((d & 0x1) << 22) | ((writeback & 0x1) << 21) | ((rn & 0xf) << 16) | ((vd & 0xf) << 12) | ((imm8 & 0xff) << 0);
	**address = inst;
}
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
){
	// aaaa110bcde0ffffgggg1010hhhhhhhh
	uint32_t inst = 0xc000a00 | ((auto_cond & 0xf) << 28) | ((p & 0x1) << 24) | ((upwards & 0x1) << 23) | ((d & 0x1) << 22) | ((writeback & 0x1) << 21) | ((rn & 0xf) << 16) | ((vd & 0xf) << 12) | ((imm8 & 0xff) << 0);
	**address = inst;
}
void arm_vfp_vstm_sp (
	uint32_t **address,
	unsigned int p,
	unsigned int upwards,
	unsigned int d,
	unsigned int writeback,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
){
	// aaaa110bcde0ffffgggg1010hhhhhhhh
	uint32_t inst = 0xc000a00 | (14 << 28) | ((p & 0x1) << 24) | ((upwards & 0x1) << 23) | ((d & 0x1) << 22) | ((writeback & 0x1) << 21) | ((rn & 0xf) << 16) | ((vd & 0xf) << 12) | ((imm8 & 0xff) << 0);
	**address = inst;
}
void arm_vfp_vstr_dp_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int upwards,
	unsigned int d,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
){
	// aaaa1101bc00ddddeeee1011ffffffff
	uint32_t inst = 0xd000b00 | ((auto_cond & 0xf) << 28) | ((upwards & 0x1) << 23) | ((d & 0x1) << 22) | ((rn & 0xf) << 16) | ((vd & 0xf) << 12) | ((imm8 & 0xff) << 0);
	**address = inst;
}
void arm_vfp_vstr_dp (
	uint32_t **address,
	unsigned int upwards,
	unsigned int d,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
){
	// aaaa1101bc00ddddeeee1011ffffffff
	uint32_t inst = 0xd000b00 | (14 << 28) | ((upwards & 0x1) << 23) | ((d & 0x1) << 22) | ((rn & 0xf) << 16) | ((vd & 0xf) << 12) | ((imm8 & 0xff) << 0);
	**address = inst;
}
void arm_vfp_vstr_sp_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int upwards,
	unsigned int d,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
){
	// aaaa1101bc00ddddeeee1010ffffffff
	uint32_t inst = 0xd000a00 | ((auto_cond & 0xf) << 28) | ((upwards & 0x1) << 23) | ((d & 0x1) << 22) | ((rn & 0xf) << 16) | ((vd & 0xf) << 12) | ((imm8 & 0xff) << 0);
	**address = inst;
}
void arm_vfp_vstr_sp (
	uint32_t **address,
	unsigned int upwards,
	unsigned int d,
	unsigned int rn,
	unsigned int vd,
	unsigned int imm8
){
	// aaaa1101bc00ddddeeee1010ffffffff
	uint32_t inst = 0xd000a00 | (14 << 28) | ((upwards & 0x1) << 23) | ((d & 0x1) << 22) | ((rn & 0xf) << 16) | ((vd & 0xf) << 12) | ((imm8 & 0xff) << 0);
	**address = inst;
}
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
){
	// 111100110abbccccdddd1000efg0hhhh
	uint32_t inst = 0xf3000800 | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 111100100d1saaaabbbb1101nqm0cccc
	uint32_t inst = 0xf2200d00 | ((size & 0x1) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// aaaa11100d11bbbbcccc101sn1m0eeee
	uint32_t inst = 0xe300a40 | ((auto_cond & 0xf) << 28) | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_vfp_vsub_f (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// aaaa11100d11bbbbcccc101sn1m0eeee
	uint32_t inst = 0xe300a40 | (14 << 28) | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vsubhn (
	uint32_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111100101dssaaaabbbb0110n0m0cccc
	uint32_t inst = 0xf2800600 | ((size & 0x3) << 20) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 1111001u1dssaaaabbbb0010n0m0cccc
	uint32_t inst = 0xf2800200 | ((unsign & 0x1) << 24) | ((size & 0x3) << 20) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 1111001u1dssaaaabbbb0011n0m0cccc
	uint32_t inst = 0xf2800300 | ((unsign & 0x1) << 24) | ((size & 0x3) << 20) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vswp (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111100111a11bb10cccc00000de0ffff
	uint32_t inst = 0xf3b20000 | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vtbl (
	uint32_t **address,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int len,
	unsigned int m,
	unsigned int vm
){
	// 111100111d11aaaabbbb10ccn0m0eeee
	uint32_t inst = 0xf3b00800 | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((len & 0x3) << 8) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vtbx (
	uint32_t **address,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int len,
	unsigned int m,
	unsigned int vm
){
	// 111100111d11aaaabbbb10ccn1m0eeee
	uint32_t inst = 0xf3b00840 | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((len & 0x3) << 8) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vtrn (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111100111a11bb10cccc00001de0ffff
	uint32_t inst = 0xf3b20080 | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 111100100dssaaaabbbb1000nqm1cccc
	uint32_t inst = 0xf2000810 | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vuzp (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111100111d11ss10aaaa00010qm0bbbb
	uint32_t inst = 0xf3b20100 | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_neon_vzip (
	uint32_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111100111d11ss10aaaa00011qm0bbbb
	uint32_t inst = 0xf3b20180 | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_br_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int link,
	unsigned int offset_branch
){
	// aaaa101bcccccccccccccccccccccccc
	uint32_t inst = 0xa000000 | ((auto_cond & 0xf) << 28) | ((link & 0x1) << 24) | ((offset_branch & 0xffffff) << 0);
	**address = inst;
}
void arm_br (
	uint32_t **address,
	unsigned int link,
	unsigned int offset_branch
){
	// aaaa101bcccccccccccccccccccccccc
	uint32_t inst = 0xa000000 | (14 << 28) | ((link & 0x1) << 24) | ((offset_branch & 0xffffff) << 0);
	**address = inst;
}
void arm_bx_t_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int link,
	unsigned int rn
){
	// aaaa0001001011111111111100b1cccc
	uint32_t inst = 0x12fff10 | ((auto_cond & 0xf) << 28) | ((link & 0x1) << 5) | ((rn & 0xf) << 0);
	**address = inst;
}
void arm_bx_t (
	uint32_t **address,
	unsigned int link,
	unsigned int rn
){
	// aaaa0001001011111111111100b1cccc
	uint32_t inst = 0x12fff10 | (14 << 28) | ((link & 0x1) << 5) | ((rn & 0xf) << 0);
	**address = inst;
}
void arm_blxi_t (
	uint32_t **address,
	unsigned int h,
	unsigned int imm24
){
	// 1111101abbbbbbbbbbbbbbbbbbbbbbbb
	uint32_t inst = 0xfa000000 | ((h & 0x1) << 24) | ((imm24 & 0xffffff) << 0);
	**address = inst;
}
void arm_data_proc_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int immediate,
	unsigned int opcode,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
){
	// aaaa00bccccdeeeeffffgggggggggggg
	uint32_t inst = 0x0 | ((auto_cond & 0xf) << 28) | ((immediate & 0x1) << 25) | ((opcode & 0xf) << 21) | ((set_condition & 0x1) << 20) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((operand2 & 0xfff) << 0);
	**address = inst;
}
void arm_data_proc (
	uint32_t **address,
	unsigned int immediate,
	unsigned int opcode,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rn,
	unsigned int operand2
){
	// aaaa00bccccdeeeeffffgggggggggggg
	uint32_t inst = 0x0 | (14 << 28) | ((immediate & 0x1) << 25) | ((opcode & 0xf) << 21) | ((set_condition & 0x1) << 20) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((operand2 & 0xfff) << 0);
	**address = inst;
}
void arm_multiply_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int accumulate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs,
	unsigned int rn
){
	// aaaa000000bcddddeeeeffff1001gggg
	uint32_t inst = 0x90 | ((auto_cond & 0xf) << 28) | ((accumulate & 0x1) << 21) | ((set_condition & 0x1) << 20) | ((rd & 0xf) << 16) | ((rm & 0xf) << 0) | ((rs & 0xf) << 8) | ((rn & 0xf) << 12);
	**address = inst;
}
void arm_multiply (
	uint32_t **address,
	unsigned int accumulate,
	unsigned int set_condition,
	unsigned int rd,
	unsigned int rm,
	unsigned int rs,
	unsigned int rn
){
	// aaaa000000bcddddeeeeffff1001gggg
	uint32_t inst = 0x90 | (14 << 28) | ((accumulate & 0x1) << 21) | ((set_condition & 0x1) << 20) | ((rd & 0xf) << 16) | ((rm & 0xf) << 0) | ((rs & 0xf) << 8) | ((rn & 0xf) << 12);
	**address = inst;
}
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
){
	// aaaa01bcdefghhhhiiiijjjjjjjjjjjj
	uint32_t inst = 0x4000000 | ((auto_cond & 0xf) << 28) | ((loadstore & 0x1) << 20) | ((immediate & 0x1) << 25) | ((byteword & 0x1) << 22) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((offset & 0xfff) << 0) | ((prepostindex & 0x1) << 24) | ((updown & 0x1) << 23) | ((writeback & 0x1) << 21);
	**address = inst;
}
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
){
	// aaaa01bcdefghhhhiiiijjjjjjjjjjjj
	uint32_t inst = 0x4000000 | (14 << 28) | ((loadstore & 0x1) << 20) | ((immediate & 0x1) << 25) | ((byteword & 0x1) << 22) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((offset & 0xfff) << 0) | ((prepostindex & 0x1) << 24) | ((updown & 0x1) << 23) | ((writeback & 0x1) << 21);
	**address = inst;
}
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
){
	// aaaabbbcdefghhhhiiiijjjjkkkkllll
	uint32_t inst = 0x0 | ((auto_cond & 0xf) << 28) | ((opcode & 0x7) << 25) | ((size & 0x1) << 20) | ((opcode2 & 0xf) << 4) | ((immediate & 0x1) << 22) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0) | ((imm4h & 0xf) << 8) | ((prepostindex & 0x1) << 24) | ((updown & 0x1) << 23) | ((writeback & 0x1) << 21);
	**address = inst;
}
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
){
	// aaaabbbcdefghhhhiiiijjjjkkkkllll
	uint32_t inst = 0x0 | (14 << 28) | ((opcode & 0x7) << 25) | ((size & 0x1) << 20) | ((opcode2 & 0xf) << 4) | ((immediate & 0x1) << 22) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0) | ((imm4h & 0xf) << 8) | ((prepostindex & 0x1) << 24) | ((updown & 0x1) << 23) | ((writeback & 0x1) << 21);
	**address = inst;
}
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
){
	// aaaa100bcdefgggghhhhhhhhhhhhhhhh
	uint32_t inst = 0x8000000 | ((auto_cond & 0xf) << 28) | ((loadstore & 0x1) << 20) | ((rn & 0xf) << 16) | ((registers & 0xffff) << 0) | ((prepostindex & 0x1) << 24) | ((updown & 0x1) << 23) | ((writeback & 0x1) << 21) | ((psr & 0x1) << 22);
	**address = inst;
}
void arm_b_data_transfer (
	uint32_t **address,
	unsigned int loadstore,
	unsigned int rn,
	unsigned int registers,
	unsigned int prepostindex,
	unsigned int updown,
	unsigned int writeback,
	unsigned int psr
){
	// aaaa100bcdefgggghhhhhhhhhhhhhhhh
	uint32_t inst = 0x8000000 | (14 << 28) | ((loadstore & 0x1) << 20) | ((rn & 0xf) << 16) | ((registers & 0xffff) << 0) | ((prepostindex & 0x1) << 24) | ((updown & 0x1) << 23) | ((writeback & 0x1) << 21) | ((psr & 0x1) << 22);
	**address = inst;
}
void arm_svc_t_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int comment
){
	// aaaa1111bbbbbbbbbbbbbbbbbbbbbbbb
	uint32_t inst = 0xf000000 | ((auto_cond & 0xf) << 28) | ((comment & 0xffffff) << 0);
	**address = inst;
}
void arm_svc_t (
	uint32_t **address,
	unsigned int comment
){
	// aaaa1111bbbbbbbbbbbbbbbbbbbbbbbb
	uint32_t inst = 0xf000000 | (14 << 28) | ((comment & 0xffffff) << 0);
	**address = inst;
}
void arm_mem_hints_pli (
	uint32_t **address,
	unsigned int opcode1,
	unsigned int updown,
	unsigned int opcode2,
	unsigned int rn,
	unsigned int imm5,
	unsigned int type,
	unsigned int rm
){
	// 1111aaaabcccdddd1111eeeeeff0gggg
	uint32_t inst = 0xf000f000 | ((opcode1 & 0xf) << 24) | ((updown & 0x1) << 23) | ((opcode2 & 0x7) << 20) | ((rn & 0xf) << 16) | ((imm5 & 0x1f) << 7) | ((type & 0x3) << 5) | ((rm & 0xf) << 0);
	**address = inst;
}
void arm_mem_hints_pld (
	uint32_t **address,
	unsigned int opcode1,
	unsigned int updown,
	unsigned int read_only,
	unsigned int opcode2,
	unsigned int rn,
	unsigned int imm12
){
	// 1111aaaabcddeeee1111ffffffffffff
	uint32_t inst = 0xf000f000 | ((opcode1 & 0xf) << 24) | ((updown & 0x1) << 23) | ((read_only & 0x1) << 22) | ((opcode2 & 0x3) << 20) | ((rn & 0xf) << 16) | ((imm12 & 0xfff) << 0);
	**address = inst;
}
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
){
	// aaaa110bcdefgggghhhhiiiijjjjjjjj
	uint32_t inst = 0xc000000 | ((auto_cond & 0xf) << 28) | ((p & 0x1) << 24) | ((upwards & 0x1) << 23) | ((d & 0x1) << 22) | ((writeback & 0x1) << 21) | ((load_store & 0x1) << 20) | ((rn & 0xf) << 16) | ((vd & 0xf) << 12) | ((opcode & 0xf) << 8) | ((imm8 & 0xff) << 0);
	**address = inst;
}
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
){
	// aaaa110bcdefgggghhhhiiiijjjjjjjj
	uint32_t inst = 0xc000000 | (14 << 28) | ((p & 0x1) << 24) | ((upwards & 0x1) << 23) | ((d & 0x1) << 22) | ((writeback & 0x1) << 21) | ((load_store & 0x1) << 20) | ((rn & 0xf) << 16) | ((vd & 0xf) << 12) | ((opcode & 0xf) << 8) | ((imm8 & 0xff) << 0);
	**address = inst;
}
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
){
	// aaaa1110bbbcddddeeeeffffggg1hhhh
	uint32_t inst = 0xe000010 | ((auto_cond & 0xf) << 28) | ((opc1 & 0x7) << 21) | ((load_store & 0x1) << 20) | ((crn & 0xf) << 16) | ((rd & 0xf) << 12) | ((coproc & 0xf) << 8) | ((opc2 & 0x7) << 5) | ((crm & 0xf) << 0);
	**address = inst;
}
void arm_coproc_trans (
	uint32_t **address,
	unsigned int opc1,
	unsigned int load_store,
	unsigned int crn,
	unsigned int rd,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
){
	// aaaa1110bbbcddddeeeeffffggg1hhhh
	uint32_t inst = 0xe000010 | (14 << 28) | ((opc1 & 0x7) << 21) | ((load_store & 0x1) << 20) | ((crn & 0xf) << 16) | ((rd & 0xf) << 12) | ((coproc & 0xf) << 8) | ((opc2 & 0x7) << 5) | ((crm & 0xf) << 0);
	**address = inst;
}
void arm_coproc_dp_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int opc1,
	unsigned int crn,
	unsigned int crd,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
){
	// aaaa1110bbbbccccddddeeeefff0gggg
	uint32_t inst = 0xe000000 | ((auto_cond & 0xf) << 28) | ((opc1 & 0xf) << 20) | ((crn & 0xf) << 16) | ((crd & 0xf) << 12) | ((coproc & 0xf) << 8) | ((opc2 & 0x7) << 5) | ((crm & 0xf) << 0);
	**address = inst;
}
void arm_coproc_dp (
	uint32_t **address,
	unsigned int opc1,
	unsigned int crn,
	unsigned int crd,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
){
	// aaaa1110bbbbccccddddeeeefff0gggg
	uint32_t inst = 0xe000000 | (14 << 28) | ((opc1 & 0xf) << 20) | ((crn & 0xf) << 16) | ((crd & 0xf) << 12) | ((coproc & 0xf) << 8) | ((opc2 & 0x7) << 5) | ((crm & 0xf) << 0);
	**address = inst;
}
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
){
	// aaaabbbbbbbcddddeeeeffffgghhiiii
	uint32_t inst = 0x0 | ((auto_cond & 0xf) << 28) | ((opcode & 0x7f) << 21) | ((set_condition & 0x1) << 20) | ((rdhi & 0xf) << 16) | ((rdlo & 0xf) << 12) | ((rm & 0xf) << 8) | ((opcode2 & 0x3) << 6) | ((setting & 0x3) << 4) | ((rn & 0xf) << 0);
	**address = inst;
}
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
){
	// aaaabbbbbbbcddddeeeeffffgghhiiii
	uint32_t inst = 0x0 | (14 << 28) | ((opcode & 0x7f) << 21) | ((set_condition & 0x1) << 20) | ((rdhi & 0xf) << 16) | ((rdlo & 0xf) << 12) | ((rm & 0xf) << 8) | ((opcode2 & 0x3) << 6) | ((setting & 0x3) << 4) | ((rn & 0xf) << 0);
	**address = inst;
}
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
){
	// 1111001abcddeeeeffffgghijklmnnnn
	uint32_t inst = 0xf2000000 | ((opcode & 0x1) << 24) | ((opcode2 & 0x1) << 23) | ((opcode3 & 0x3) << 10) | ((opcode4 & 0x1) << 9) | ((opcode5 & 0x1) << 8) | ((opcode6 & 0x1) << 4) | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 11110100abccddddeeeeffgghhhhiiii
	uint32_t inst = 0xf4000000 | ((opcode & 0x1) << 23) | ((opcode2 & 0x3) << 20) | ((opcode3 & 0x3) << 10) | ((opcode4 & 0x3) << 8) | ((params & 0xf) << 4) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = inst;
}
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
){
	// 11110011abccddeeffffgggghij0kkkk
	uint32_t inst = 0xf3000000 | ((opcode & 0x1) << 23) | ((opcode2 & 0x3) << 20) | ((opcode3 & 0x3) << 16) | ((opcode4 & 0xf) << 8) | ((opcode5 & 0x1) << 7) | ((size & 0x3) << 18) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((q & 0x1) << 6) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// 1111001a1bccccccddddeeeefghijjjj
	uint32_t inst = 0xf2800000 | ((opcode & 0xf) << 8) | ((u & 0x1) << 24) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((q & 0x1) << 6) | ((m & 0x1) << 5) | ((vm & 0xf) << 0) | ((l & 0x1) << 7) | ((imm6 & 0x3f) << 16) | ((f3 & 0x1) << 4);
	**address = inst;
}
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
){
	// 1111001abcdddeeeffffgggghij1kkkk
	uint32_t inst = 0xf2000010 | ((opcode & 0x1) << 23) | ((opcode2 & 0x7) << 19) | ((opcode3 & 0x1) << 7) | ((cmode & 0xf) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((q & 0x1) << 6) | ((i & 0x1) << 24) | ((imm3 & 0x7) << 16) | ((imm4 & 0xf) << 0) | ((op & 0x1) << 5);
	**address = inst;
}
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
){
	// aaaa11101b110cccdddd101ef1g0hhhh
	uint32_t inst = 0xeb00a40 | ((auto_cond & 0xf) << 28) | ((d & 0x1) << 22) | ((opc2 & 0x7) << 16) | ((vd & 0xf) << 12) | ((sz & 0x1) << 8) | ((op & 0x1) << 7) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_vfp_data_proc (
	uint32_t **address,
	unsigned int d,
	unsigned int opc2,
	unsigned int vd,
	unsigned int sz,
	unsigned int op,
	unsigned int m,
	unsigned int vm
){
	// aaaa11101b110cccdddd101ef1g0hhhh
	uint32_t inst = 0xeb00a40 | (14 << 28) | ((d & 0x1) << 22) | ((opc2 & 0x7) << 16) | ((vd & 0xf) << 12) | ((sz & 0x1) << 8) | ((op & 0x1) << 7) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_cpsr_trans_reg_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int opcode,
	unsigned int mask,
	unsigned int f2,
	unsigned int rd,
	unsigned int rn
){
	// aaaa000100bbccddeeee00000000ffff
	uint32_t inst = 0x1000000 | ((auto_cond & 0xf) << 28) | ((opcode & 0x3) << 20) | ((mask & 0x3) << 18) | ((f2 & 0x3) << 16) | ((rd & 0xf) << 12) | ((rn & 0xf) << 0);
	**address = inst;
}
void arm_cpsr_trans_reg (
	uint32_t **address,
	unsigned int opcode,
	unsigned int mask,
	unsigned int f2,
	unsigned int rd,
	unsigned int rn
){
	// aaaa000100bbccddeeee00000000ffff
	uint32_t inst = 0x1000000 | (14 << 28) | ((opcode & 0x3) << 20) | ((mask & 0x3) << 18) | ((f2 & 0x3) << 16) | ((rd & 0xf) << 12) | ((rn & 0xf) << 0);
	**address = inst;
}
void arm_cpsr_trans_imm_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int mask,
	unsigned int imm12
){
	// aaaa00110010bb001111cccccccccccc
	uint32_t inst = 0x320f000 | ((auto_cond & 0xf) << 28) | ((mask & 0x3) << 18) | ((imm12 & 0xfff) << 0);
	**address = inst;
}
void arm_cpsr_trans_imm (
	uint32_t **address,
	unsigned int mask,
	unsigned int imm12
){
	// aaaa00110010bb001111cccccccccccc
	uint32_t inst = 0x320f000 | (14 << 28) | ((mask & 0x3) << 18) | ((imm12 & 0xfff) << 0);
	**address = inst;
}
void arm_divide_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int opcode,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaabbbbbbbbcccc1111dddd0001eeee
	uint32_t inst = 0xf010 | ((auto_cond & 0xf) << 28) | ((opcode & 0xff) << 20) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_divide (
	uint32_t **address,
	unsigned int opcode,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// aaaabbbbbbbbcccc1111dddd0001eeee
	uint32_t inst = 0xf010 | (14 << 28) | ((opcode & 0xff) << 20) | ((rd & 0xf) << 16) | ((rn & 0xf) << 0) | ((rm & 0xf) << 8);
	**address = inst;
}
void arm_sync (
	uint32_t **address,
	unsigned int opcode,
	unsigned int option
){
	// 111101010111111111110000aaaabbbb
	uint32_t inst = 0xf57ff000 | ((opcode & 0xf) << 4) | ((option & 0xf) << 0);
	**address = inst;
}
void arm_extend_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int opcode,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
){
	// aaaabbbbbbbbccccddddee000111ffff
	uint32_t inst = 0x70 | ((auto_cond & 0xf) << 28) | ((opcode & 0xff) << 20) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0) | ((rotate & 0x3) << 10);
	**address = inst;
}
void arm_extend (
	uint32_t **address,
	unsigned int opcode,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int rotate
){
	// aaaabbbbbbbbccccddddee000111ffff
	uint32_t inst = 0x70 | (14 << 28) | ((opcode & 0xff) << 20) | ((rd & 0xf) << 12) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0) | ((rotate & 0x3) << 10);
	**address = inst;
}
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
){
	// aaaabbbbbcddeeeeffffggghi0j0kkkk
	uint32_t inst = 0x0 | ((auto_cond & 0xf) << 28) | ((opcode & 0x1f) << 23) | ((d & 0x1) << 22) | ((opcode2 & 0x3) << 20) | ((vn & 0xf) << 16) | ((vd & 0xf) << 12) | ((opcode3 & 0x7) << 9) | ((sz & 0x1) << 8) | ((n & 0x1) << 7) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// aaaabbbbbcddeeeeffffggghi0j0kkkk
	uint32_t inst = 0x0 | (14 << 28) | ((opcode & 0x1f) << 23) | ((d & 0x1) << 22) | ((opcode2 & 0x3) << 20) | ((vn & 0xf) << 16) | ((vd & 0xf) << 12) | ((opcode3 & 0x7) << 9) | ((sz & 0x1) << 8) | ((n & 0x1) << 7) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
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
){
	// aaaa1110000bccccddddeeeefgh1iiii
	uint32_t inst = 0xe000010 | ((auto_cond & 0xf) << 28) | ((op & 0x1) << 20) | ((vn & 0xf) << 16) | ((rd & 0xf) << 12) | ((opcode & 0xf) << 8) | ((n & 0x1) << 7) | ((f3 & 0x1) << 6) | ((m & 0x1) << 5) | ((f5 & 0xf) << 0);
	**address = inst;
}
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
){
	// aaaa1110000bccccddddeeeefgh1iiii
	uint32_t inst = 0xe000010 | (14 << 28) | ((op & 0x1) << 20) | ((vn & 0xf) << 16) | ((rd & 0xf) << 12) | ((opcode & 0xf) << 8) | ((n & 0x1) << 7) | ((f3 & 0x1) << 6) | ((m & 0x1) << 5) | ((f5 & 0xf) << 0);
	**address = inst;
}
void arm_vfp_imm8_1reg_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int opcode,
	unsigned int d,
	unsigned int vd,
	unsigned int imm4h,
	unsigned int imm4l
){
	// aaaa11101b11ccccddddeeee0000ffff
	uint32_t inst = 0xeb00000 | ((auto_cond & 0xf) << 28) | ((opcode & 0xf) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((imm4h & 0xf) << 16) | ((imm4l & 0xf) << 0);
	**address = inst;
}
void arm_vfp_imm8_1reg (
	uint32_t **address,
	unsigned int opcode,
	unsigned int d,
	unsigned int vd,
	unsigned int imm4h,
	unsigned int imm4l
){
	// aaaa11101b11ccccddddeeee0000ffff
	uint32_t inst = 0xeb00000 | (14 << 28) | ((opcode & 0xf) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((imm4h & 0xf) << 16) | ((imm4l & 0xf) << 0);
	**address = inst;
}
void arm_vfp_trans_2arm_reg_cond (
	uint32_t **address,
	unsigned int auto_cond,
	unsigned int opcode,
	unsigned int op,
	unsigned int rt2,
	unsigned int rt,
	unsigned int m,
	unsigned int vm
){
	// aaaa1100bbbcddddeeee101100f1gggg
	uint32_t inst = 0xc000b10 | ((auto_cond & 0xf) << 28) | ((opcode & 0x7) << 21) | ((op & 0x1) << 20) | ((rt2 & 0xf) << 16) | ((rt & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
void arm_vfp_trans_2arm_reg (
	uint32_t **address,
	unsigned int opcode,
	unsigned int op,
	unsigned int rt2,
	unsigned int rt,
	unsigned int m,
	unsigned int vm
){
	// aaaa1100bbbcddddeeee101100f1gggg
	uint32_t inst = 0xc000b10 | (14 << 28) | ((opcode & 0x7) << 21) | ((op & 0x1) << 20) | ((rt2 & 0xf) << 16) | ((rt & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = inst;
}
