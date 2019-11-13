#include "pie-a64-encoder.h"
void a64_CBZ_CBNZ (
	uint32_t **address,
	unsigned int sf,
	unsigned int op,
	unsigned int imm19,
	unsigned int rt
){
	// a011010bcccccccccccccccccccddddd
	uint32_t inst = 0x34000000 | ((sf & 0x1) << 31) | ((op & 0x1) << 24) | ((imm19 & 0x7ffff) << 5) | ((rt & 0x1f) << 0);
	**address = inst;
}
void a64_B_cond (
	uint32_t **address,
	unsigned int imm19,
	unsigned int cond
){
	// 01010100aaaaaaaaaaaaaaaaaaa0bbbb
	uint32_t inst = 0x54000000 | ((imm19 & 0x7ffff) << 5) | ((cond & 0xf) << 0);
	**address = inst;
}
void a64_SVC (
	uint32_t **address,
	unsigned int imm16
){
	// 11010100000aaaaaaaaaaaaaaaa00001
	uint32_t inst = 0xd4000001 | ((imm16 & 0xffff) << 5);
	**address = inst;
}
void a64_HVC (
	uint32_t **address,
	unsigned int imm16
){
	// 11010100000aaaaaaaaaaaaaaaa00010
	uint32_t inst = 0xd4000002 | ((imm16 & 0xffff) << 5);
	**address = inst;
}
void a64_SMC (
	uint32_t **address,
	unsigned int imm16
){
	// 11010100000aaaaaaaaaaaaaaaa00011
	uint32_t inst = 0xd4000003 | ((imm16 & 0xffff) << 5);
	**address = inst;
}
void a64_BRK (
	uint32_t **address,
	unsigned int imm16
){
	// 11010100001aaaaaaaaaaaaaaaa00000
	uint32_t inst = 0xd4200000 | ((imm16 & 0xffff) << 5);
	**address = inst;
}
void a64_HLT (
	uint32_t **address,
	unsigned int imm16
){
	// 11010100010aaaaaaaaaaaaaaaa00000
	uint32_t inst = 0xd4400000 | ((imm16 & 0xffff) << 5);
	**address = inst;
}
void a64_DCPS1 (
	uint32_t **address,
	unsigned int imm16
){
	// 11010100101aaaaaaaaaaaaaaaa00001
	uint32_t inst = 0xd4a00001 | ((imm16 & 0xffff) << 5);
	**address = inst;
}
void a64_DCPS2 (
	uint32_t **address,
	unsigned int imm16
){
	// 11010100101aaaaaaaaaaaaaaaa00010
	uint32_t inst = 0xd4a00002 | ((imm16 & 0xffff) << 5);
	**address = inst;
}
void a64_DCPS3 (
	uint32_t **address,
	unsigned int imm16
){
	// 11010100101aaaaaaaaaaaaaaaa00011
	uint32_t inst = 0xd4a00003 | ((imm16 & 0xffff) << 5);
	**address = inst;
}
void a64_MSR_immed (
	uint32_t **address,
	unsigned int op1,
	unsigned int crm,
	unsigned int op2
){
	// 1101010100000aaa0100bbbbccc11111
	uint32_t inst = 0xd500401f | ((op1 & 0x7) << 16) | ((crm & 0xf) << 8) | ((op2 & 0x7) << 5);
	**address = inst;
}
void a64_HINT (
	uint32_t **address,
	unsigned int crm,
	unsigned int op2
){
	// 11010101000000110010aaaabbb11111
	uint32_t inst = 0xd503201f | ((crm & 0xf) << 8) | ((op2 & 0x7) << 5);
	**address = inst;
}
void a64_CLREX (
	uint32_t **address,
	unsigned int crm
){
	// 11010101000000110011aaaa01011111
	uint32_t inst = 0xd503305f | ((crm & 0xf) << 8);
	**address = inst;
}
void a64_DSB (
	uint32_t **address,
	unsigned int crm
){
	// 11010101000000110011aaaa10011111
	uint32_t inst = 0xd503309f | ((crm & 0xf) << 8);
	**address = inst;
}
void a64_DMB (
	uint32_t **address,
	unsigned int crm
){
	// 11010101000000110011aaaa10111111
	uint32_t inst = 0xd50330bf | ((crm & 0xf) << 8);
	**address = inst;
}
void a64_ISB (
	uint32_t **address,
	unsigned int crm
){
	// 11010101000000110011aaaa11011111
	uint32_t inst = 0xd50330df | ((crm & 0xf) << 8);
	**address = inst;
}
void a64_SYS (
	uint32_t **address,
	unsigned int op1,
	unsigned int crn,
	unsigned int crm,
	unsigned int op2,
	unsigned int rt
){
	// 1101010100001aaabbbbccccdddeeeee
	uint32_t inst = 0xd5080000 | ((op1 & 0x7) << 16) | ((crn & 0xf) << 12) | ((crm & 0xf) << 8) | ((op2 & 0x7) << 5) | ((rt & 0x1f) << 0);
	**address = inst;
}
void a64_MRS_MSR_reg (
	uint32_t **address,
	unsigned int r,
	unsigned int o0,
	unsigned int op1,
	unsigned int crn,
	unsigned int crm,
	unsigned int op2,
	unsigned int rt
){
	// 1101010100a1bcccddddeeeefffggggg
	uint32_t inst = 0xd5100000 | ((r & 0x1) << 21) | ((o0 & 0x1) << 19) | ((op1 & 0x7) << 16) | ((crn & 0xf) << 12) | ((crm & 0xf) << 8) | ((op2 & 0x7) << 5) | ((rt & 0x1f) << 0);
	**address = inst;
}
void a64_SYSL (
	uint32_t **address,
	unsigned int op1,
	unsigned int crn,
	unsigned int crm,
	unsigned int op2,
	unsigned int rt
){
	// 1101010100101aaabbbbccccdddeeeee
	uint32_t inst = 0xd5280000 | ((op1 & 0x7) << 16) | ((crn & 0xf) << 12) | ((crm & 0xf) << 8) | ((op2 & 0x7) << 5) | ((rt & 0x1f) << 0);
	**address = inst;
}
void a64_TBZ_TBNZ (
	uint32_t **address,
	unsigned int b5,
	unsigned int op,
	unsigned int b40,
	unsigned int imm14,
	unsigned int rt
){
	// a011011bcccccddddddddddddddeeeee
	uint32_t inst = 0x36000000 | ((b5 & 0x1) << 31) | ((op & 0x1) << 24) | ((b40 & 0x1f) << 19) | ((imm14 & 0x3fff) << 5) | ((rt & 0x1f) << 0);
	**address = inst;
}
void a64_B_BL (
	uint32_t **address,
	unsigned int op,
	unsigned int imm26
){
	// a00101bbbbbbbbbbbbbbbbbbbbbbbbbb
	uint32_t inst = 0x14000000 | ((op & 0x1) << 31) | ((imm26 & 0x3ffffff) << 0);
	**address = inst;
}
void a64_BR (
	uint32_t **address,
	unsigned int rn
){
	// 1101011000011111000000aaaaa00000
	uint32_t inst = 0xd61f0000 | ((rn & 0x1f) << 5);
	**address = inst;
}
void a64_BLR (
	uint32_t **address,
	unsigned int rn
){
	// 1101011000111111000000aaaaa00000
	uint32_t inst = 0xd63f0000 | ((rn & 0x1f) << 5);
	**address = inst;
}
void a64_RET (
	uint32_t **address,
	unsigned int rn
){
	// 1101011001011111000000aaaaa00000
	uint32_t inst = 0xd65f0000 | ((rn & 0x1f) << 5);
	**address = inst;
}
void a64_ERET (
	uint32_t **address
){
	// 11010110100111110000001111100000
	uint32_t inst = 0xd69f03e0;
	**address = inst;
}
void a64_DRPS (
	uint32_t **address
){
	// 11010110101111110000001111100000
	uint32_t inst = 0xd6bf03e0;
	**address = inst;
}
void a64_LDX_STX (
	uint32_t **address,
	unsigned int size,
	unsigned int o2,
	unsigned int l,
	unsigned int o1,
	unsigned int rs,
	unsigned int o0,
	unsigned int rt2,
	unsigned int rn,
	unsigned int rt
){
	// aa001000bcdeeeeefggggghhhhhiiiii
	uint32_t inst = 0x8000000 | ((size & 0x3) << 30) | ((o2 & 0x1) << 23) | ((l & 0x1) << 22) | ((o1 & 0x1) << 21) | ((rs & 0x1f) << 16) | ((o0 & 0x1) << 15) | ((rt2 & 0x1f) << 10) | ((rn & 0x1f) << 5) | ((rt & 0x1f) << 0);
	**address = inst;
}
void a64_LDR_lit (
	uint32_t **address,
	unsigned int opc,
	unsigned int v,
	unsigned int imm19,
	unsigned int rt
){
	// aa011b00cccccccccccccccccccddddd
	uint32_t inst = 0x18000000 | ((opc & 0x3) << 30) | ((v & 0x1) << 26) | ((imm19 & 0x7ffff) << 5) | ((rt & 0x1f) << 0);
	**address = inst;
}
void a64_LDP_STP (
	uint32_t **address,
	unsigned int opc,
	unsigned int v,
	unsigned int type,
	unsigned int l,
	unsigned int imm7,
	unsigned int rt2,
	unsigned int rn,
	unsigned int rt
){
	// aa101b0ccdeeeeeeefffffggggghhhhh
	uint32_t inst = 0x28000000 | ((opc & 0x3) << 30) | ((v & 0x1) << 26) | ((type & 0x3) << 23) | ((l & 0x1) << 22) | ((imm7 & 0x7f) << 15) | ((rt2 & 0x1f) << 10) | ((rn & 0x1f) << 5) | ((rt & 0x1f) << 0);
	**address = inst;
}
void a64_LDR_STR_immed (
	uint32_t **address,
	unsigned int size,
	unsigned int v,
	unsigned int opc,
	unsigned int imm9,
	unsigned int type,
	unsigned int rn,
	unsigned int rt
){
	// aa111b00cc0dddddddddeefffffggggg
	uint32_t inst = 0x38000000 | ((size & 0x3) << 30) | ((v & 0x1) << 26) | ((opc & 0x3) << 22) | ((imm9 & 0x1ff) << 12) | ((type & 0x3) << 10) | ((rn & 0x1f) << 5) | ((rt & 0x1f) << 0);
	**address = inst;
}
void a64_LDR_STR_reg (
	uint32_t **address,
	unsigned int size,
	unsigned int v,
	unsigned int opc,
	unsigned int rm,
	unsigned int option,
	unsigned int s,
	unsigned int rn,
	unsigned int rt
){
	// aa111b00cc1dddddeeef10ggggghhhhh
	uint32_t inst = 0x38200800 | ((size & 0x3) << 30) | ((v & 0x1) << 26) | ((opc & 0x3) << 22) | ((rm & 0x1f) << 16) | ((option & 0x7) << 13) | ((s & 0x1) << 12) | ((rn & 0x1f) << 5) | ((rt & 0x1f) << 0);
	**address = inst;
}
void a64_LDR_STR_unsigned_immed (
	uint32_t **address,
	unsigned int size,
	unsigned int v,
	unsigned int opc,
	unsigned int imm12,
	unsigned int rn,
	unsigned int rt
){
	// aa111b01ccddddddddddddeeeeefffff
	uint32_t inst = 0x39000000 | ((size & 0x3) << 30) | ((v & 0x1) << 26) | ((opc & 0x3) << 22) | ((imm12 & 0xfff) << 10) | ((rn & 0x1f) << 5) | ((rt & 0x1f) << 0);
	**address = inst;
}
void a64_LDx_STx_multiple (
	uint32_t **address,
	unsigned int q,
	unsigned int l,
	unsigned int opcode,
	unsigned int size,
	unsigned int rn,
	unsigned int rt
){
	// 0a0011000b000000ccccddeeeeefffff
	uint32_t inst = 0xc000000 | ((q & 0x1) << 30) | ((l & 0x1) << 22) | ((opcode & 0xf) << 12) | ((size & 0x3) << 10) | ((rn & 0x1f) << 5) | ((rt & 0x1f) << 0);
	**address = inst;
}
void a64_LDx_STx_multiple_post (
	uint32_t **address,
	unsigned int q,
	unsigned int l,
	unsigned int rm,
	unsigned int opcode,
	unsigned int size,
	unsigned int rn,
	unsigned int rt
){
	// 0a0011001b0cccccddddeefffffggggg
	uint32_t inst = 0xc800000 | ((q & 0x1) << 30) | ((l & 0x1) << 22) | ((rm & 0x1f) << 16) | ((opcode & 0xf) << 12) | ((size & 0x3) << 10) | ((rn & 0x1f) << 5) | ((rt & 0x1f) << 0);
	**address = inst;
}
void a64_LDx_STx_single (
	uint32_t **address,
	unsigned int q,
	unsigned int l,
	unsigned int r,
	unsigned int opcode,
	unsigned int s,
	unsigned int size,
	unsigned int rn,
	unsigned int rt
){
	// 0a0011010bc00000dddeffggggghhhhh
	uint32_t inst = 0xd000000 | ((q & 0x1) << 30) | ((l & 0x1) << 22) | ((r & 0x1) << 21) | ((opcode & 0x7) << 13) | ((s & 0x1) << 12) | ((size & 0x3) << 10) | ((rn & 0x1f) << 5) | ((rt & 0x1f) << 0);
	**address = inst;
}
void a64_LDx_STx_single_post (
	uint32_t **address,
	unsigned int q,
	unsigned int l,
	unsigned int r,
	unsigned int rm,
	unsigned int opcode,
	unsigned int s,
	unsigned int size,
	unsigned int rn,
	unsigned int rt
){
	// 0a0011011bcdddddeeefgghhhhhiiiii
	uint32_t inst = 0xd800000 | ((q & 0x1) << 30) | ((l & 0x1) << 22) | ((r & 0x1) << 21) | ((rm & 0x1f) << 16) | ((opcode & 0x7) << 13) | ((s & 0x1) << 12) | ((size & 0x3) << 10) | ((rn & 0x1f) << 5) | ((rt & 0x1f) << 0);
	**address = inst;
}
void a64_ADD_SUB_immed (
	uint32_t **address,
	unsigned int sf,
	unsigned int op,
	unsigned int s,
	unsigned int shift,
	unsigned int imm12,
	unsigned int rn,
	unsigned int rd
){
	// abc10001ddeeeeeeeeeeeefffffggggg
	uint32_t inst = 0x11000000 | ((sf & 0x1) << 31) | ((op & 0x1) << 30) | ((s & 0x1) << 29) | ((shift & 0x3) << 22) | ((imm12 & 0xfff) << 10) | ((rn & 0x1f) << 5) | ((rd & 0x1f) << 0);
	**address = inst;
}
void a64_BFM (
	uint32_t **address,
	unsigned int sf,
	unsigned int opc,
	unsigned int n,
	unsigned int immr,
	unsigned int imms,
	unsigned int rn,
	unsigned int rd
){
	// abb100110cddddddeeeeeefffffggggg
	uint32_t inst = 0x13000000 | ((sf & 0x1) << 31) | ((opc & 0x3) << 29) | ((n & 0x1) << 22) | ((immr & 0x3f) << 16) | ((imms & 0x3f) << 10) | ((rn & 0x1f) << 5) | ((rd & 0x1f) << 0);
	**address = inst;
}
void a64_EXTR (
	uint32_t **address,
	unsigned int sf,
	unsigned int n,
	unsigned int rm,
	unsigned int imms,
	unsigned int rn,
	unsigned int rd
){
	// a00100111b0cccccddddddeeeeefffff
	uint32_t inst = 0x13800000 | ((sf & 0x1) << 31) | ((n & 0x1) << 22) | ((rm & 0x1f) << 16) | ((imms & 0x3f) << 10) | ((rn & 0x1f) << 5) | ((rd & 0x1f) << 0);
	**address = inst;
}
void a64_logical_immed (
	uint32_t **address,
	unsigned int sf,
	unsigned int opc,
	unsigned int n,
	unsigned int immr,
	unsigned int imms,
	unsigned int rn,
	unsigned int rd
){
	// abb100100cddddddeeeeeefffffggggg
	uint32_t inst = 0x12000000 | ((sf & 0x1) << 31) | ((opc & 0x3) << 29) | ((n & 0x1) << 22) | ((immr & 0x3f) << 16) | ((imms & 0x3f) << 10) | ((rn & 0x1f) << 5) | ((rd & 0x1f) << 0);
	**address = inst;
}
void a64_MOV_wide (
	uint32_t **address,
	unsigned int sf,
	unsigned int opc,
	unsigned int hw,
	unsigned int imm16,
	unsigned int rd
){
	// abb100101ccddddddddddddddddeeeee
	uint32_t inst = 0x12800000 | ((sf & 0x1) << 31) | ((opc & 0x3) << 29) | ((hw & 0x3) << 21) | ((imm16 & 0xffff) << 5) | ((rd & 0x1f) << 0);
	**address = inst;
}
void a64_ADR (
	uint32_t **address,
	unsigned int op,
	unsigned int immlo,
	unsigned int immhi,
	unsigned int rd
){
	// abb10000cccccccccccccccccccddddd
	uint32_t inst = 0x10000000 | ((op & 0x1) << 31) | ((immlo & 0x3) << 29) | ((immhi & 0x7ffff) << 5) | ((rd & 0x1f) << 0);
	**address = inst;
}
void a64_ADD_SUB_ext_reg (
	uint32_t **address,
	unsigned int sf,
	unsigned int op,
	unsigned int s,
	unsigned int rm,
	unsigned int option,
	unsigned int imm3,
	unsigned int rn,
	unsigned int rd
){
	// abc01011001dddddeeefffggggghhhhh
	uint32_t inst = 0xb200000 | ((sf & 0x1) << 31) | ((op & 0x1) << 30) | ((s & 0x1) << 29) | ((rm & 0x1f) << 16) | ((option & 0x7) << 13) | ((imm3 & 0x7) << 10) | ((rn & 0x1f) << 5) | ((rd & 0x1f) << 0);
	**address = inst;
}
void a64_ADD_SUB_shift_reg (
	uint32_t **address,
	unsigned int sf,
	unsigned int op,
	unsigned int s,
	unsigned int shift,
	unsigned int rm,
	unsigned int imm6,
	unsigned int rn,
	unsigned int rd
){
	// abc01011dd0eeeeeffffffggggghhhhh
	uint32_t inst = 0xb000000 | ((sf & 0x1) << 31) | ((op & 0x1) << 30) | ((s & 0x1) << 29) | ((shift & 0x3) << 22) | ((rm & 0x1f) << 16) | ((imm6 & 0x3f) << 10) | ((rn & 0x1f) << 5) | ((rd & 0x1f) << 0);
	**address = inst;
}
void a64_ADC_SBC (
	uint32_t **address,
	unsigned int sf,
	unsigned int op,
	unsigned int s,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
){
	// abc11010000ddddd000000eeeeefffff
	uint32_t inst = 0x1a000000 | ((sf & 0x1) << 31) | ((op & 0x1) << 30) | ((s & 0x1) << 29) | ((rm & 0x1f) << 16) | ((rn & 0x1f) << 5) | ((rd & 0x1f) << 0);
	**address = inst;
}
void a64_CCMP_CCMN_immed (
	uint32_t **address,
	unsigned int sf,
	unsigned int op,
	unsigned int imm5,
	unsigned int cond,
	unsigned int rn,
	unsigned int nzcv
){
	// ab111010010cccccdddd10eeeee0ffff
	uint32_t inst = 0x3a400800 | ((sf & 0x1) << 31) | ((op & 0x1) << 30) | ((imm5 & 0x1f) << 16) | ((cond & 0xf) << 12) | ((rn & 0x1f) << 5) | ((nzcv & 0xf) << 0);
	**address = inst;
}
void a64_CCMP_CCMN_reg (
	uint32_t **address,
	unsigned int sf,
	unsigned int op,
	unsigned int rm,
	unsigned int cond,
	unsigned int rn,
	unsigned int nzcv
){
	// ab111010010cccccdddd00eeeee0ffff
	uint32_t inst = 0x3a400000 | ((sf & 0x1) << 31) | ((op & 0x1) << 30) | ((rm & 0x1f) << 16) | ((cond & 0xf) << 12) | ((rn & 0x1f) << 5) | ((nzcv & 0xf) << 0);
	**address = inst;
}
void a64_cond_select (
	uint32_t **address,
	unsigned int sf,
	unsigned int op,
	unsigned int rm,
	unsigned int cond,
	unsigned int op2,
	unsigned int rn,
	unsigned int rd
){
	// ab011010100cccccddddeefffffggggg
	uint32_t inst = 0x1a800000 | ((sf & 0x1) << 31) | ((op & 0x1) << 30) | ((rm & 0x1f) << 16) | ((cond & 0xf) << 12) | ((op2 & 0x3) << 10) | ((rn & 0x1f) << 5) | ((rd & 0x1f) << 0);
	**address = inst;
}
void a64_data_proc_reg1 (
	uint32_t **address,
	unsigned int sf,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
){
	// a101101011000000bbbbbbcccccddddd
	uint32_t inst = 0x5ac00000 | ((sf & 0x1) << 31) | ((opcode & 0x3f) << 10) | ((rn & 0x1f) << 5) | ((rd & 0x1f) << 0);
	**address = inst;
}
void a64_data_proc_reg2 (
	uint32_t **address,
	unsigned int sf,
	unsigned int rm,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
){
	// a0011010110bbbbbccccccdddddeeeee
	uint32_t inst = 0x1ac00000 | ((sf & 0x1) << 31) | ((rm & 0x1f) << 16) | ((opcode & 0x3f) << 10) | ((rn & 0x1f) << 5) | ((rd & 0x1f) << 0);
	**address = inst;
}
void a64_data_proc_reg3 (
	uint32_t **address,
	unsigned int sf,
	unsigned int op31,
	unsigned int rm,
	unsigned int o0,
	unsigned int Ra,
	unsigned int rn,
	unsigned int rd
){
	// a0011011bbbcccccdeeeeefffffggggg
	uint32_t inst = 0x1b000000 | ((sf & 0x1) << 31) | ((op31 & 0x7) << 21) | ((rm & 0x1f) << 16) | ((o0 & 0x1) << 15) | ((Ra & 0x1f) << 10) | ((rn & 0x1f) << 5) | ((rd & 0x1f) << 0);
	**address = inst;
}
void a64_logical_reg (
	uint32_t **address,
	unsigned int sf,
	unsigned int opc,
	unsigned int shift,
	unsigned int n,
	unsigned int rm,
	unsigned int imm6,
	unsigned int rn,
	unsigned int rd
){
	// abb01010ccdeeeeeffffffggggghhhhh
	uint32_t inst = 0xa000000 | ((sf & 0x1) << 31) | ((opc & 0x3) << 29) | ((shift & 0x3) << 22) | ((n & 0x1) << 21) | ((rm & 0x1f) << 16) | ((imm6 & 0x3f) << 10) | ((rn & 0x1f) << 5) | ((rd & 0x1f) << 0);
	**address = inst;
}
void a64_simd_across_lane (
	uint32_t **address,
	unsigned int q,
	unsigned int u,
	unsigned int size,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
){
	// 0ab01110cc11000ddddd10eeeeefffff
	uint32_t inst = 0xe300800 | ((q & 0x1) << 30) | ((u & 0x1) << 29) | ((size & 0x3) << 22) | ((opcode & 0x1f) << 12) | ((rn & 0x1f) << 5) | ((rd & 0x1f) << 0);
	**address = inst;
}
void a64_simd_copy (
	uint32_t **address,
	unsigned int q,
	unsigned int op,
	unsigned int imm5,
	unsigned int imm4,
	unsigned int rn,
	unsigned int rd
){
	// 0ab01110000ccccc0dddd1eeeeefffff
	uint32_t inst = 0xe000400 | ((q & 0x1) << 30) | ((op & 0x1) << 29) | ((imm5 & 0x1f) << 16) | ((imm4 & 0xf) << 11) | ((rn & 0x1f) << 5) | ((rd & 0x1f) << 0);
	**address = inst;
}
void a64_simd_extract (
	uint32_t **address,
	unsigned int q,
	unsigned int rm,
	unsigned int imm4,
	unsigned int rn,
	unsigned int rd
){
	// 0a101110000bbbbb0cccc0dddddeeeee
	uint32_t inst = 0x2e000000 | ((q & 0x1) << 30) | ((rm & 0x1f) << 16) | ((imm4 & 0xf) << 11) | ((rn & 0x1f) << 5) | ((rd & 0x1f) << 0);
	**address = inst;
}
void a64_simd_modified_immed (
	uint32_t **address,
	unsigned int q,
	unsigned int op,
	unsigned int abc,
	unsigned int cmode,
	unsigned int defgh,
	unsigned int rd
){
	// 0ab0111100000cccdddd01eeeeefffff
	uint32_t inst = 0xf000400 | ((q & 0x1) << 30) | ((op & 0x1) << 29) | ((abc & 0x7) << 16) | ((cmode & 0xf) << 12) | ((defgh & 0x1f) << 5) | ((rd & 0x1f) << 0);
	**address = inst;
}
void a64_simd_permute (
	uint32_t **address,
	unsigned int q,
	unsigned int size,
	unsigned int rm,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
){
	// 0a001110bb0ccccc0ddd10eeeeefffff
	uint32_t inst = 0xe000800 | ((q & 0x1) << 30) | ((size & 0x3) << 22) | ((rm & 0x1f) << 16) | ((opcode & 0x7) << 12) | ((rn & 0x1f) << 5) | ((rd & 0x1f) << 0);
	**address = inst;
}
void a64_simd_scalar_copy (
	uint32_t **address,
	unsigned int imm5,
	unsigned int rn,
	unsigned int rd
){
	// 01011110000aaaaa000001bbbbbccccc
	uint32_t inst = 0x5e000400 | ((imm5 & 0x1f) << 16) | ((rn & 0x1f) << 5) | ((rd & 0x1f) << 0);
	**address = inst;
}
void a64_simd_scalar_pairwise (
	uint32_t **address,
	unsigned int u,
	unsigned int size,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
){
	// 01a11110bb11000ccccc10dddddeeeee
	uint32_t inst = 0x5e300800 | ((u & 0x1) << 29) | ((size & 0x3) << 22) | ((opcode & 0x1f) << 12) | ((rn & 0x1f) << 5) | ((rd & 0x1f) << 0);
	**address = inst;
}
void a64_simd_scalar_shift_immed (
	uint32_t **address,
	unsigned int u,
	unsigned int immh,
	unsigned int immb,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
){
	// 01a111110bbbbcccddddd1eeeeefffff
	uint32_t inst = 0x5f000400 | ((u & 0x1) << 29) | ((immh & 0xf) << 19) | ((immb & 0x7) << 16) | ((opcode & 0x1f) << 11) | ((rn & 0x1f) << 5) | ((rd & 0x1f) << 0);
	**address = inst;
}
void a64_simd_scalar_three_diff (
	uint32_t **address,
	unsigned int u,
	unsigned int size,
	unsigned int rm,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
){
	// 01a11110bb1cccccdddd00eeeeefffff
	uint32_t inst = 0x5e200000 | ((u & 0x1) << 29) | ((size & 0x3) << 22) | ((rm & 0x1f) << 16) | ((opcode & 0xf) << 12) | ((rn & 0x1f) << 5) | ((rd & 0x1f) << 0);
	**address = inst;
}
void a64_simd_scalar_three_same (
	uint32_t **address,
	unsigned int u,
	unsigned int size,
	unsigned int rm,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
){
	// 01a11110bb1cccccddddd1eeeeefffff
	uint32_t inst = 0x5e200400 | ((u & 0x1) << 29) | ((size & 0x3) << 22) | ((rm & 0x1f) << 16) | ((opcode & 0x1f) << 11) | ((rn & 0x1f) << 5) | ((rd & 0x1f) << 0);
	**address = inst;
}
void a64_simd_scalar_two_reg (
	uint32_t **address,
	unsigned int u,
	unsigned int size,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
){
	// 01a11110bb10000ccccc10dddddeeeee
	uint32_t inst = 0x5e200800 | ((u & 0x1) << 29) | ((size & 0x3) << 22) | ((opcode & 0x1f) << 12) | ((rn & 0x1f) << 5) | ((rd & 0x1f) << 0);
	**address = inst;
}
void a64_simd_scalar_x_indexed (
	uint32_t **address,
	unsigned int u,
	unsigned int size,
	unsigned int l,
	unsigned int m,
	unsigned int rm,
	unsigned int opcode,
	unsigned int H,
	unsigned int rn,
	unsigned int rd
){
	// 01a11111bbcdeeeeffffg0hhhhhiiiii
	uint32_t inst = 0x5f000000 | ((u & 0x1) << 29) | ((size & 0x3) << 22) | ((l & 0x1) << 21) | ((m & 0x1) << 20) | ((rm & 0xf) << 16) | ((opcode & 0xf) << 12) | ((H & 0x1) << 11) | ((rn & 0x1f) << 5) | ((rd & 0x1f) << 0);
	**address = inst;
}
void a64_simd_shift_immed (
	uint32_t **address,
	unsigned int q,
	unsigned int u,
	unsigned int immh,
	unsigned int immb,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
){
	// 0ab011110ccccdddeeeee1fffffggggg
	uint32_t inst = 0xf000400 | ((q & 0x1) << 30) | ((u & 0x1) << 29) | ((immh & 0xf) << 19) | ((immb & 0x7) << 16) | ((opcode & 0x1f) << 11) | ((rn & 0x1f) << 5) | ((rd & 0x1f) << 0);
	**address = inst;
}
void a64_simd_table_lookup (
	uint32_t **address,
	unsigned int q,
	unsigned int rm,
	unsigned int len,
	unsigned int op,
	unsigned int rn,
	unsigned int rd
){
	// 0a001110000bbbbb0ccd00eeeeefffff
	uint32_t inst = 0xe000000 | ((q & 0x1) << 30) | ((rm & 0x1f) << 16) | ((len & 0x3) << 13) | ((op & 0x1) << 12) | ((rn & 0x1f) << 5) | ((rd & 0x1f) << 0);
	**address = inst;
}
void a64_simd_three_diff (
	uint32_t **address,
	unsigned int q,
	unsigned int u,
	unsigned int size,
	unsigned int rm,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
){
	// 0ab01110cc1dddddeeee00fffffggggg
	uint32_t inst = 0xe200000 | ((q & 0x1) << 30) | ((u & 0x1) << 29) | ((size & 0x3) << 22) | ((rm & 0x1f) << 16) | ((opcode & 0xf) << 12) | ((rn & 0x1f) << 5) | ((rd & 0x1f) << 0);
	**address = inst;
}
void a64_simd_three_same (
	uint32_t **address,
	unsigned int q,
	unsigned int u,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
){
	// 0ab01110cc1dddddccccc1dddddeeeee
	uint32_t inst = 0xe200400 | ((q & 0x1) << 30) | ((u & 0x1) << 29) | ((opcode & 0x1fff) << 11) | ((rn & 0xffff) << 5) | ((rd & 0x1f) << 0);
	**address = inst;
}
void a64_simd_two_reg (
	uint32_t **address,
	unsigned int q,
	unsigned int u,
	unsigned int size,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
){
	// 0ab01110cc10000ddddd10eeeeefffff
	uint32_t inst = 0xe200800 | ((q & 0x1) << 30) | ((u & 0x1) << 29) | ((size & 0x3) << 22) | ((opcode & 0x1f) << 12) | ((rn & 0x1f) << 5) | ((rd & 0x1f) << 0);
	**address = inst;
}
void a64_simd_x_indexed (
	uint32_t **address,
	unsigned int q,
	unsigned int u,
	unsigned int size,
	unsigned int l,
	unsigned int m,
	unsigned int rm,
	unsigned int opcode,
	unsigned int H,
	unsigned int rn,
	unsigned int rd
){
	// 0ab01111ccdeffffggggh0iiiiijjjjj
	uint32_t inst = 0xf000000 | ((q & 0x1) << 30) | ((u & 0x1) << 29) | ((size & 0x3) << 22) | ((l & 0x1) << 21) | ((m & 0x1) << 20) | ((rm & 0xf) << 16) | ((opcode & 0xf) << 12) | ((H & 0x1) << 11) | ((rn & 0x1f) << 5) | ((rd & 0x1f) << 0);
	**address = inst;
}
void a64_crypto_aes (
	uint32_t **address,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
){
	// 010011100010100aaaaa10bbbbbccccc
	uint32_t inst = 0x4e280800 | ((opcode & 0x1f) << 12) | ((rn & 0x1f) << 5) | ((rd & 0x1f) << 0);
	**address = inst;
}
void a64_crypto_sha_reg3 (
	uint32_t **address,
	unsigned int rm,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
){
	// 01011110000aaaaa0ccc00dddddeeeee
	uint32_t inst = 0x5e000000 | ((rm & 0x1f) << 16) | ((opcode & 0x7) << 12) | ((rn & 0x1f) << 5) | ((rd & 0x1f) << 0);
	**address = inst;
}
void a64_crypto_sha_reg2 (
	uint32_t **address,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
){
	// 010111100010100aaaaa10bbbbbccccc
	uint32_t inst = 0x5e280800 | ((opcode & 0x1f) << 12) | ((rn & 0x1f) << 5) | ((rd & 0x1f) << 0);
	**address = inst;
}
void a64_FCMP (
	uint32_t **address,
	unsigned int type,
	unsigned int rm,
	unsigned int rn,
	unsigned int opcode2
){
	// 00011110aa1bbbbb001000cccccddddd
	uint32_t inst = 0x1e202000 | ((type & 0x3) << 22) | ((rm & 0x1f) << 16) | ((rn & 0x1f) << 5) | ((opcode2 & 0x1f) << 0);
	**address = inst;
}
void a64_FCCMP (
	uint32_t **address,
	unsigned int type,
	unsigned int rm,
	unsigned int cond,
	unsigned int rn,
	unsigned int op,
	unsigned int nzcv
){
	// 00011110aa1bbbbbcccc01dddddeffff
	uint32_t inst = 0x1e200400 | ((type & 0x3) << 22) | ((rm & 0x1f) << 16) | ((cond & 0xf) << 12) | ((rn & 0x1f) << 5) | ((op & 0x1) << 4) | ((nzcv & 0xf) << 0);
	**address = inst;
}
void a64_FCSEL (
	uint32_t **address,
	unsigned int type,
	unsigned int rm,
	unsigned int cond,
	unsigned int rn,
	unsigned int rd
){
	// 00011110aa1bbbbbcccc11dddddeeeee
	uint32_t inst = 0x1e200c00 | ((type & 0x3) << 22) | ((rm & 0x1f) << 16) | ((cond & 0xf) << 12) | ((rn & 0x1f) << 5) | ((rd & 0x1f) << 0);
	**address = inst;
}
void a64_float_reg1 (
	uint32_t **address,
	unsigned int type,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
){
	// 00011110aa1bbbbbb10000cccccddddd
	uint32_t inst = 0x1e204000 | ((type & 0x3) << 22) | ((opcode & 0x3f) << 15) | ((rn & 0x1f) << 5) | ((rd & 0x1f) << 0);
	**address = inst;
}
void a64_float_reg2 (
	uint32_t **address,
	unsigned int type,
	unsigned int rm,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
){
	// 00011110aa1bbbbbcccc10dddddeeeee
	uint32_t inst = 0x1e200800 | ((type & 0x3) << 22) | ((rm & 0x1f) << 16) | ((opcode & 0xf) << 12) | ((rn & 0x1f) << 5) | ((rd & 0x1f) << 0);
	**address = inst;
}
void a64_float_reg3 (
	uint32_t **address,
	unsigned int type,
	unsigned int o1,
	unsigned int rm,
	unsigned int o0,
	unsigned int Ra,
	unsigned int rn,
	unsigned int rd
){
	// 00011111aabcccccdeeeeefffffggggg
	uint32_t inst = 0x1f000000 | ((type & 0x3) << 22) | ((o1 & 0x1) << 21) | ((rm & 0x1f) << 16) | ((o0 & 0x1) << 15) | ((Ra & 0x1f) << 10) | ((rn & 0x1f) << 5) | ((rd & 0x1f) << 0);
	**address = inst;
}
void a64_FMOV_immed (
	uint32_t **address,
	unsigned int type,
	unsigned int imm8,
	unsigned int rd
){
	// 00011110aa1bbbbbbbb10000000ccccc
	uint32_t inst = 0x1e201000 | ((type & 0x3) << 22) | ((imm8 & 0xff) << 13) | ((rd & 0x1f) << 0);
	**address = inst;
}
void a64_float_cvt_fixed (
	uint32_t **address,
	unsigned int sf,
	unsigned int type,
	unsigned int rmode,
	unsigned int opcode,
	unsigned int scale,
	unsigned int rn,
	unsigned int rd
){
	// a0011110bb0ccdddeeeeeefffffggggg
	uint32_t inst = 0x1e000000 | ((sf & 0x1) << 31) | ((type & 0x3) << 22) | ((rmode & 0x3) << 19) | ((opcode & 0x7) << 16) | ((scale & 0x3f) << 10) | ((rn & 0x1f) << 5) | ((rd & 0x1f) << 0);
	**address = inst;
}
void a64_float_cvt_int (
	uint32_t **address,
	unsigned int sf,
	unsigned int type,
	unsigned int rmode,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
){
	// a0011110bb1ccddd000000eeeeefffff
	uint32_t inst = 0x1e200000 | ((sf & 0x1) << 31) | ((type & 0x3) << 22) | ((rmode & 0x3) << 19) | ((opcode & 0x7) << 16) | ((rn & 0x1f) << 5) | ((rd & 0x1f) << 0);
	**address = inst;
}
