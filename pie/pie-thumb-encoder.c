#include "pie-thumb-encoder.h"
void thumb_adc16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rdn
){
	// 0100000101aaabbb
	uint16_t inst = 0x4140 | ((rm & 0x7) << 3) | ((rdn & 0x7) << 0);
	**address = inst;
}
void thumb_add16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
){
	// 0001100aaabbbccc
	uint16_t inst = 0x1800 | ((rm & 0x7) << 6) | ((rn & 0x7) << 3) | ((rd & 0x7) << 0);
	**address = inst;
}
void thumb_add_from_pc16 (
	uint16_t **address,
	unsigned int rd,
	unsigned int imm8
){
	// 10100aaabbbbbbbb
	uint16_t inst = 0xa000 | ((rd & 0x7) << 8) | ((imm8 & 0xff) << 0);
	**address = inst;
}
void thumb_add_from_sp16 (
	uint16_t **address,
	unsigned int rd,
	unsigned int imm8
){
	// 10101aaabbbbbbbb
	uint16_t inst = 0xa800 | ((rd & 0x7) << 8) | ((imm8 & 0xff) << 0);
	**address = inst;
}
void thumb_addh16 (
	uint16_t **address,
	unsigned int dn,
	unsigned int rm,
	unsigned int rdn
){
	// 01000100abbbbccc
	uint16_t inst = 0x4400 | ((dn & 0x1) << 7) | ((rm & 0xf) << 3) | ((rdn & 0x7) << 0);
	**address = inst;
}
void thumb_addi16 (
	uint16_t **address,
	unsigned int imm3,
	unsigned int rn,
	unsigned int rd
){
	// 0001110aaabbbccc
	uint16_t inst = 0x1c00 | ((imm3 & 0x7) << 6) | ((rn & 0x7) << 3) | ((rd & 0x7) << 0);
	**address = inst;
}
void thumb_addri16 (
	uint16_t **address,
	unsigned int rdn,
	unsigned int imm8
){
	// 00110aaabbbbbbbb
	uint16_t inst = 0x3000 | ((rdn & 0x7) << 8) | ((imm8 & 0xff) << 0);
	**address = inst;
}
void thumb_add_sp_i16 (
	uint16_t **address,
	unsigned int imm7
){
	// 101100000aaaaaaa
	uint16_t inst = 0xb000 | ((imm7 & 0x7f) << 0);
	**address = inst;
}
void thumb_and16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rdn
){
	// 0100000000aaabbb
	uint16_t inst = 0x4000 | ((rm & 0x7) << 3) | ((rdn & 0x7) << 0);
	**address = inst;
}
void thumb_asr16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rdn
){
	// 0100000100aaabbb
	uint16_t inst = 0x4100 | ((rm & 0x7) << 3) | ((rdn & 0x7) << 0);
	**address = inst;
}
void thumb_asri16 (
	uint16_t **address,
	unsigned int imm5,
	unsigned int rm,
	unsigned int rd
){
	// 00010aaaaabbbccc
	uint16_t inst = 0x1000 | ((imm5 & 0x1f) << 6) | ((rm & 0x7) << 3) | ((rd & 0x7) << 0);
	**address = inst;
}
void thumb_b16 (
	uint16_t **address,
	unsigned int imm11
){
	// 11100aaaaaaaaaaa
	uint16_t inst = 0xe000 | ((imm11 & 0x7ff) << 0);
	**address = inst;
}
void thumb_bic16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rdn
){
	// 0100001110aaabbb
	uint16_t inst = 0x4380 | ((rm & 0x7) << 3) | ((rdn & 0x7) << 0);
	**address = inst;
}
void thumb_bkpt16 (
	uint16_t **address,
	unsigned int imm8
){
	// 10111110aaaaaaaa
	uint16_t inst = 0xbe00 | ((imm8 & 0xff) << 0);
	**address = inst;
}
void thumb_b_cond16 (
	uint16_t **address,
	unsigned int condition,
	unsigned int imm8
){
	// 1101aaaabbbbbbbb
	uint16_t inst = 0xd000 | ((condition & 0xf) << 8) | ((imm8 & 0xff) << 0);
	**address = inst;
}
void thumb_blx16 (
	uint16_t **address,
	unsigned int rm
){
	// 010001111aaaa000
	uint16_t inst = 0x4780 | ((rm & 0xf) << 3);
	**address = inst;
}
void thumb_bx16 (
	uint16_t **address,
	unsigned int rm
){
	// 010001110aaaa000
	uint16_t inst = 0x4700 | ((rm & 0xf) << 3);
	**address = inst;
}
void thumb_cbnz16 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int imm5,
	unsigned int rn
){
	// 101110a1bbbbbccc
	uint16_t inst = 0xb900 | ((imm1 & 0x1) << 9) | ((imm5 & 0x1f) << 3) | ((rn & 0x7) << 0);
	**address = inst;
}
void thumb_cbz16 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int imm5,
	unsigned int rn
){
	// 101100a1bbbbbccc
	uint16_t inst = 0xb100 | ((imm1 & 0x1) << 9) | ((imm5 & 0x1f) << 3) | ((rn & 0x7) << 0);
	**address = inst;
}
void thumb_cmn16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rdn
){
	// 0100001011aaabbb
	uint16_t inst = 0x42c0 | ((rm & 0x7) << 3) | ((rdn & 0x7) << 0);
	**address = inst;
}
void thumb_cmp16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rdn
){
	// 0100001010aaabbb
	uint16_t inst = 0x4280 | ((rm & 0x7) << 3) | ((rdn & 0x7) << 0);
	**address = inst;
}
void thumb_cmph16 (
	uint16_t **address,
	unsigned int dn,
	unsigned int rm,
	unsigned int rdn
){
	// 01000101abbbbccc
	uint16_t inst = 0x4500 | ((dn & 0x1) << 7) | ((rm & 0xf) << 3) | ((rdn & 0x7) << 0);
	**address = inst;
}
void thumb_cmpri16 (
	uint16_t **address,
	unsigned int rdn,
	unsigned int imm8
){
	// 00101aaabbbbbbbb
	uint16_t inst = 0x2800 | ((rdn & 0x7) << 8) | ((imm8 & 0xff) << 0);
	**address = inst;
}
void thumb_eor16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rdn
){
	// 0100000001aaabbb
	uint16_t inst = 0x4040 | ((rm & 0x7) << 3) | ((rdn & 0x7) << 0);
	**address = inst;
}
void thumb_it16 (
	uint16_t **address,
	unsigned int cond,
	unsigned int mask
){
	// 10111111aaaabbbb
	uint16_t inst = 0xbf00 | ((cond & 0xf) << 4) | ((mask & 0xf) << 0);
	**address = inst;
}
void thumb_ldmfd16 (
	uint16_t **address,
	unsigned int rn,
	unsigned int reglist
){
	// 11001aaabbbbbbbb
	uint16_t inst = 0xc800 | ((rn & 0x7) << 8) | ((reglist & 0xff) << 0);
	**address = inst;
}
void thumb_ldr16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
){
	// 0101100aaabbbccc
	uint16_t inst = 0x5800 | ((rm & 0x7) << 6) | ((rn & 0x7) << 3) | ((rd & 0x7) << 0);
	**address = inst;
}
void thumb_ldrb16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
){
	// 0101110aaabbbccc
	uint16_t inst = 0x5c00 | ((rm & 0x7) << 6) | ((rn & 0x7) << 3) | ((rd & 0x7) << 0);
	**address = inst;
}
void thumb_ldrbi16 (
	uint16_t **address,
	unsigned int imm5,
	unsigned int rn,
	unsigned int rd
){
	// 01111aaaaabbbccc
	uint16_t inst = 0x7800 | ((imm5 & 0x1f) << 6) | ((rn & 0x7) << 3) | ((rd & 0x7) << 0);
	**address = inst;
}
void thumb_ldrh16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
){
	// 0101101aaabbbccc
	uint16_t inst = 0x5a00 | ((rm & 0x7) << 6) | ((rn & 0x7) << 3) | ((rd & 0x7) << 0);
	**address = inst;
}
void thumb_ldrhi16 (
	uint16_t **address,
	unsigned int imm5,
	unsigned int rn,
	unsigned int rd
){
	// 10001aaaaabbbccc
	uint16_t inst = 0x8800 | ((imm5 & 0x1f) << 6) | ((rn & 0x7) << 3) | ((rd & 0x7) << 0);
	**address = inst;
}
void thumb_ldri16 (
	uint16_t **address,
	unsigned int imm5,
	unsigned int rn,
	unsigned int rd
){
	// 01101aaaaabbbccc
	uint16_t inst = 0x6800 | ((imm5 & 0x1f) << 6) | ((rn & 0x7) << 3) | ((rd & 0x7) << 0);
	**address = inst;
}
void thumb_ldr_pc_16 (
	uint16_t **address,
	unsigned int rd,
	unsigned int imm8
){
	// 01001aaabbbbbbbb
	uint16_t inst = 0x4800 | ((rd & 0x7) << 8) | ((imm8 & 0xff) << 0);
	**address = inst;
}
void thumb_ldrsb16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
){
	// 0101011aaabbbccc
	uint16_t inst = 0x5600 | ((rm & 0x7) << 6) | ((rn & 0x7) << 3) | ((rd & 0x7) << 0);
	**address = inst;
}
void thumb_ldrsh16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
){
	// 0101111aaabbbccc
	uint16_t inst = 0x5e00 | ((rm & 0x7) << 6) | ((rn & 0x7) << 3) | ((rd & 0x7) << 0);
	**address = inst;
}
void thumb_ldr_sp16 (
	uint16_t **address,
	unsigned int rd,
	unsigned int imm8
){
	// 10011aaabbbbbbbb
	uint16_t inst = 0x9800 | ((rd & 0x7) << 8) | ((imm8 & 0xff) << 0);
	**address = inst;
}
void thumb_lsl16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rdn
){
	// 0100000010aaabbb
	uint16_t inst = 0x4080 | ((rm & 0x7) << 3) | ((rdn & 0x7) << 0);
	**address = inst;
}
void thumb_lsli16 (
	uint16_t **address,
	unsigned int imm5,
	unsigned int rm,
	unsigned int rd
){
	// 00000aaaaabbbccc
	uint16_t inst = 0x0 | ((imm5 & 0x1f) << 6) | ((rm & 0x7) << 3) | ((rd & 0x7) << 0);
	**address = inst;
}
void thumb_lsr16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rdn
){
	// 0100000011aaabbb
	uint16_t inst = 0x40c0 | ((rm & 0x7) << 3) | ((rdn & 0x7) << 0);
	**address = inst;
}
void thumb_lsri16 (
	uint16_t **address,
	unsigned int imm5,
	unsigned int rm,
	unsigned int rd
){
	// 00001aaaaabbbccc
	uint16_t inst = 0x800 | ((imm5 & 0x1f) << 6) | ((rm & 0x7) << 3) | ((rd & 0x7) << 0);
	**address = inst;
}
void thumb_movh16 (
	uint16_t **address,
	unsigned int dn,
	unsigned int rm,
	unsigned int rdn
){
	// 01000110abbbbccc
	uint16_t inst = 0x4600 | ((dn & 0x1) << 7) | ((rm & 0xf) << 3) | ((rdn & 0x7) << 0);
	**address = inst;
}
void thumb_movi16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rd
){
	// 0000000000aaabbb
	uint16_t inst = 0x0 | ((rm & 0x7) << 3) | ((rd & 0x7) << 0);
	**address = inst;
}
void thumb_movri16 (
	uint16_t **address,
	unsigned int rdn,
	unsigned int imm8
){
	// 00100aaabbbbbbbb
	uint16_t inst = 0x2000 | ((rdn & 0x7) << 8) | ((imm8 & 0xff) << 0);
	**address = inst;
}
void thumb_mul16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rdn
){
	// 0100001101aaabbb
	uint16_t inst = 0x4340 | ((rm & 0x7) << 3) | ((rdn & 0x7) << 0);
	**address = inst;
}
void thumb_mvn16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rdn
){
	// 0100001111aaabbb
	uint16_t inst = 0x43c0 | ((rm & 0x7) << 3) | ((rdn & 0x7) << 0);
	**address = inst;
}
void thumb_nop16 (
	uint16_t **address
){
	// 1011111100000000
	uint16_t inst = 0xbf00;
	**address = inst;
}
void thumb_orr16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rdn
){
	// 0100001100aaabbb
	uint16_t inst = 0x4300 | ((rm & 0x7) << 3) | ((rdn & 0x7) << 0);
	**address = inst;
}
void thumb_pop16 (
	uint16_t **address,
	unsigned int reg
){
	// 1011110aaaaaaaaa
	uint16_t inst = 0xbc00 | ((reg & 0x1ff) << 0);
	**address = inst;
}
void thumb_push16 (
	uint16_t **address,
	unsigned int reg
){
	// 1011010aaaaaaaaa
	uint16_t inst = 0xb400 | ((reg & 0x1ff) << 0);
	**address = inst;
}
void thumb_rev16 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd
){
	// 1011101000aaabbb
	uint16_t inst = 0xba00 | ((rn & 0x7) << 3) | ((rd & 0x7) << 0);
	**address = inst;
}
void thumb_rev1616 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd
){
	// 1011101001aaabbb
	uint16_t inst = 0xba40 | ((rn & 0x7) << 3) | ((rd & 0x7) << 0);
	**address = inst;
}
void thumb_revsh16 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd
){
	// 1011101011aaabbb
	uint16_t inst = 0xbac0 | ((rn & 0x7) << 3) | ((rd & 0x7) << 0);
	**address = inst;
}
void thumb_ror16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rdn
){
	// 0100000111aaabbb
	uint16_t inst = 0x41c0 | ((rm & 0x7) << 3) | ((rdn & 0x7) << 0);
	**address = inst;
}
void thumb_rsbi16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rdn
){
	// 0100001001aaabbb
	uint16_t inst = 0x4240 | ((rm & 0x7) << 3) | ((rdn & 0x7) << 0);
	**address = inst;
}
void thumb_sbc16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rdn
){
	// 0100000110aaabbb
	uint16_t inst = 0x4180 | ((rm & 0x7) << 3) | ((rdn & 0x7) << 0);
	**address = inst;
}
void thumb_setend16 (
	uint16_t **address,
	unsigned int is_bigend
){
	// 101101100101e000
	uint16_t inst = 0xb650 | ((is_bigend & 0x1) << 3);
	**address = inst;
}
void thumb_sev16 (
	uint16_t **address
){
	// 1011111101000000
	uint16_t inst = 0xbf40;
	**address = inst;
}
void thumb_stmea16 (
	uint16_t **address,
	unsigned int rn,
	unsigned int reglist
){
	// 11000aaabbbbbbbb
	uint16_t inst = 0xc000 | ((rn & 0x7) << 8) | ((reglist & 0xff) << 0);
	**address = inst;
}
void thumb_str16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
){
	// 0101000aaabbbccc
	uint16_t inst = 0x5000 | ((rm & 0x7) << 6) | ((rn & 0x7) << 3) | ((rd & 0x7) << 0);
	**address = inst;
}
void thumb_strb16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
){
	// 0101010aaabbbccc
	uint16_t inst = 0x5400 | ((rm & 0x7) << 6) | ((rn & 0x7) << 3) | ((rd & 0x7) << 0);
	**address = inst;
}
void thumb_strbi16 (
	uint16_t **address,
	unsigned int imm5,
	unsigned int rn,
	unsigned int rd
){
	// 01110aaaaabbbccc
	uint16_t inst = 0x7000 | ((imm5 & 0x1f) << 6) | ((rn & 0x7) << 3) | ((rd & 0x7) << 0);
	**address = inst;
}
void thumb_strh16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
){
	// 0101001aaabbbccc
	uint16_t inst = 0x5200 | ((rm & 0x7) << 6) | ((rn & 0x7) << 3) | ((rd & 0x7) << 0);
	**address = inst;
}
void thumb_strhi16 (
	uint16_t **address,
	unsigned int imm5,
	unsigned int rn,
	unsigned int rd
){
	// 10000aaaaabbbccc
	uint16_t inst = 0x8000 | ((imm5 & 0x1f) << 6) | ((rn & 0x7) << 3) | ((rd & 0x7) << 0);
	**address = inst;
}
void thumb_stri16 (
	uint16_t **address,
	unsigned int imm5,
	unsigned int rn,
	unsigned int rd
){
	// 01100aaaaabbbccc
	uint16_t inst = 0x6000 | ((imm5 & 0x1f) << 6) | ((rn & 0x7) << 3) | ((rd & 0x7) << 0);
	**address = inst;
}
void thumb_str_sp16 (
	uint16_t **address,
	unsigned int rd,
	unsigned int imm8
){
	// 10010aaabbbbbbbb
	uint16_t inst = 0x9000 | ((rd & 0x7) << 8) | ((imm8 & 0xff) << 0);
	**address = inst;
}
void thumb_sub16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
){
	// 0001101aaabbbccc
	uint16_t inst = 0x1a00 | ((rm & 0x7) << 6) | ((rn & 0x7) << 3) | ((rd & 0x7) << 0);
	**address = inst;
}
void thumb_subi16 (
	uint16_t **address,
	unsigned int imm3,
	unsigned int rn,
	unsigned int rd
){
	// 0001111aaabbbccc
	uint16_t inst = 0x1e00 | ((imm3 & 0x7) << 6) | ((rn & 0x7) << 3) | ((rd & 0x7) << 0);
	**address = inst;
}
void thumb_subri16 (
	uint16_t **address,
	unsigned int rdn,
	unsigned int imm8
){
	// 00111aaabbbbbbbb
	uint16_t inst = 0x3800 | ((rdn & 0x7) << 8) | ((imm8 & 0xff) << 0);
	**address = inst;
}
void thumb_sub_sp_i16 (
	uint16_t **address,
	unsigned int imm7
){
	// 101100001aaaaaaa
	uint16_t inst = 0xb080 | ((imm7 & 0x7f) << 0);
	**address = inst;
}
void thumb_svc16 (
	uint16_t **address,
	unsigned int imm8
){
	// 11011111aaaaaaaa
	uint16_t inst = 0xdf00 | ((imm8 & 0xff) << 0);
	**address = inst;
}
void thumb_sxtb16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rd
){
	// 1011001001aaabbb
	uint16_t inst = 0xb240 | ((rm & 0x7) << 3) | ((rd & 0x7) << 0);
	**address = inst;
}
void thumb_sxth16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rd
){
	// 1011001000aaabbb
	uint16_t inst = 0xb200 | ((rm & 0x7) << 3) | ((rd & 0x7) << 0);
	**address = inst;
}
void thumb_tst16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rdn
){
	// 0100001000aaabbb
	uint16_t inst = 0x4200 | ((rm & 0x7) << 3) | ((rdn & 0x7) << 0);
	**address = inst;
}
void thumb_udf16 (
	uint16_t **address,
	unsigned int imm8
){
	// 11011110aaaaaaaa
	uint16_t inst = 0xde00 | ((imm8 & 0xff) << 0);
	**address = inst;
}
void thumb_uxtb16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rd
){
	// 1011001011aaabbb
	uint16_t inst = 0xb2c0 | ((rm & 0x7) << 3) | ((rd & 0x7) << 0);
	**address = inst;
}
void thumb_uxth16 (
	uint16_t **address,
	unsigned int rm,
	unsigned int rd
){
	// 1011001010aaabbb
	uint16_t inst = 0xb280 | ((rm & 0x7) << 3) | ((rd & 0x7) << 0);
	**address = inst;
}
void thumb_wfe16 (
	uint16_t **address
){
	// 1011111100100000
	uint16_t inst = 0xbf20;
	**address = inst;
}
void thumb_wfi16 (
	uint16_t **address
){
	// 1011111100110000
	uint16_t inst = 0xbf30;
	**address = inst;
}
void thumb_yield16 (
	uint16_t **address
){
	// 1011111100010000
	uint16_t inst = 0xbf10;
	**address = inst;
}
void thumb_adc32 (
	uint16_t **address,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
){
	// 11101011010abbbb0cccddddeeffgggg
	uint32_t inst = 0xeb400000 | ((set_flags & 0x1) << 20) | ((rn & 0xf) << 16) | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm2 & 0x3) << 6) | ((shift_type & 0x3) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_adci32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
){
	// 11110a01010bcccc0dddeeeeffffffff
	uint32_t inst = 0xf1400000 | ((imm1 & 0x1) << 26) | ((set_condition & 0x1) << 20) | ((rn & 0xf) << 16) | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_add32 (
	uint16_t **address,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
){
	// 11101011000abbbb0cccddddeeffgggg
	uint32_t inst = 0xeb000000 | ((set_flags & 0x1) << 20) | ((rn & 0xf) << 16) | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm2 & 0x3) << 6) | ((shift_type & 0x3) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_addi32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
){
	// 11110a01000bcccc0dddeeeeffffffff
	uint32_t inst = 0xf1000000 | ((imm1 & 0x1) << 26) | ((set_condition & 0x1) << 20) | ((rn & 0xf) << 16) | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_addwi32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
){
	// 11110a100000bbbb0cccddddeeeeeeee
	uint32_t inst = 0xf2000000 | ((imm1 & 0x1) << 26) | ((rn & 0xf) << 16) | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_adrwi_post32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
){
	// 11110a101000bbbb0cccddddeeeeeeee
	uint32_t inst = 0xf2800000 | ((imm1 & 0x1) << 26) | ((rn & 0xf) << 16) | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_adrwi_pre32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
){
	// 11110a100010bbbb0cccddddeeeeeeee
	uint32_t inst = 0xf2200000 | ((imm1 & 0x1) << 26) | ((rn & 0xf) << 16) | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_and32 (
	uint16_t **address,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
){
	// 11101010000abbbb0cccddddeeffgggg
	uint32_t inst = 0xea000000 | ((set_flags & 0x1) << 20) | ((rn & 0xf) << 16) | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm2 & 0x3) << 6) | ((shift_type & 0x3) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_andi32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
){
	// 11110a00000bcccc0dddeeeeffffffff
	uint32_t inst = 0xf0000000 | ((imm1 & 0x1) << 26) | ((set_condition & 0x1) << 20) | ((rn & 0xf) << 16) | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_asr32 (
	uint16_t **address,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
){
	// 11111010010abbbb1111cccc0000dddd
	uint32_t inst = 0xfa40f000 | ((set_flags & 0x1) << 20) | ((rn & 0xf) << 16) | ((rd & 0xf) << 8) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_asri32 (
	uint16_t **address,
	unsigned int set_flags,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int rm
){
	// 11101010010a11110bbbccccdd10eeee
	uint32_t inst = 0xea4f0020 | ((set_flags & 0x1) << 20) | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm2 & 0x3) << 6) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_b32 (
	uint16_t **address,
	unsigned int sign_bit,
	unsigned int offset_high,
	unsigned int j1,
	unsigned int j2,
	unsigned int offset_low
){
	// 11110abbbbbbbbbb10c1deeeeeeeeeee
	uint32_t inst = 0xf0009000 | ((sign_bit & 0x1) << 26) | ((offset_high & 0x3ff) << 16) | ((j1 & 0x1) << 13) | ((j2 & 0x1) << 11) | ((offset_low & 0x7ff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_b_cond32 (
	uint16_t **address,
	unsigned int sign_bit,
	unsigned int condition,
	unsigned int offset_high,
	unsigned int j1,
	unsigned int j2,
	unsigned int offset_low
){
	// 11110abbbbcccccc10d0efffffffffff
	uint32_t inst = 0xf0008000 | ((sign_bit & 0x1) << 26) | ((condition & 0xf) << 22) | ((offset_high & 0x3f) << 16) | ((j1 & 0x1) << 13) | ((j2 & 0x1) << 11) | ((offset_low & 0x7ff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_bfc32 (
	uint16_t **address,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int imm5
){
	// 11110011011011110aaabbbbcc0ddddd
	uint32_t inst = 0xf36f0000 | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm2 & 0x3) << 6) | ((imm5 & 0x1f) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_bfi32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int imm5
){
	// 11110011011aaaaa0bbbccccdd0eeeee
	uint32_t inst = 0xf3600000 | ((rn & 0x1f) << 16) | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm2 & 0x3) << 6) | ((imm5 & 0x1f) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_bic32 (
	uint16_t **address,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
){
	// 11101010001abbbb0cccddddeeffgggg
	uint32_t inst = 0xea200000 | ((set_flags & 0x1) << 20) | ((rn & 0xf) << 16) | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm2 & 0x3) << 6) | ((shift_type & 0x3) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_bici32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
){
	// 11110a00001bcccc0dddeeeeffffffff
	uint32_t inst = 0xf0200000 | ((imm1 & 0x1) << 26) | ((set_condition & 0x1) << 20) | ((rn & 0xf) << 16) | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_bl32 (
	uint16_t **address,
	unsigned int sign_bit,
	unsigned int offset_high,
	unsigned int j1,
	unsigned int j2,
	unsigned int offset_low
){
	// 11110abbbbbbbbbb11c1deeeeeeeeeee
	uint32_t inst = 0xf000d000 | ((sign_bit & 0x1) << 26) | ((offset_high & 0x3ff) << 16) | ((j1 & 0x1) << 13) | ((j2 & 0x1) << 11) | ((offset_low & 0x7ff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_bl_arm32 (
	uint16_t **address,
	unsigned int sign_bit,
	unsigned int offset_high,
	unsigned int j1,
	unsigned int j2,
	unsigned int offset_low
){
	// 11110abbbbbbbbbb11c0deeeeeeeeeee
	uint32_t inst = 0xf000c000 | ((sign_bit & 0x1) << 26) | ((offset_high & 0x3ff) << 16) | ((j1 & 0x1) << 13) | ((j2 & 0x1) << 11) | ((offset_low & 0x7ff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_cdp32 (
	uint16_t **address,
	unsigned int coproc,
	unsigned int opc1,
	unsigned int crd,
	unsigned int crn,
	unsigned int crm,
	unsigned int opc2
){
	// 11101110aaaabbbbccccddddeee0ffff
	uint32_t inst = 0xee000000 | ((coproc & 0xf) << 8) | ((opc1 & 0xf) << 20) | ((crd & 0xf) << 12) | ((crn & 0xf) << 16) | ((crm & 0xf) << 0) | ((opc2 & 0x7) << 5);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_cdp232 (
	uint16_t **address,
	unsigned int coproc,
	unsigned int opc1,
	unsigned int crd,
	unsigned int crn,
	unsigned int crm,
	unsigned int opc2
){
	// 11111110aaaabbbbccccddddeee0ffff
	uint32_t inst = 0xfe000000 | ((coproc & 0xf) << 8) | ((opc1 & 0xf) << 20) | ((crd & 0xf) << 12) | ((crn & 0xf) << 16) | ((crm & 0xf) << 0) | ((opc2 & 0x7) << 5);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_clrex32 (
	uint16_t **address,
	unsigned int option
){
	// 1111001110111111100011110010aaaa
	uint32_t inst = 0xf3bf8f20 | ((option & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_clz32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
){
	// 111110101011aaaa1111bbbb1000cccc
	uint32_t inst = 0xfab0f080 | ((rn & 0xf) << 16) | ((rd & 0xf) << 8) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_cmn32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int imm3,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
){
	// 111010110001aaaa0bbb1111ccddeeee
	uint32_t inst = 0xeb100f00 | ((rn & 0xf) << 16) | ((imm3 & 0x7) << 12) | ((imm2 & 0x3) << 6) | ((shift_type & 0x3) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_cmni32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int rn,
	unsigned int imm3,
	unsigned int imm8
){
	// 11110a010001bbbb0ccc1111dddddddd
	uint32_t inst = 0xf1100f00 | ((imm1 & 0x1) << 26) | ((rn & 0xf) << 16) | ((imm3 & 0x7) << 12) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_cmp32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int imm3,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
){
	// 111010111011aaaa0bbb1111ccddeeee
	uint32_t inst = 0xebb00f00 | ((rn & 0xf) << 16) | ((imm3 & 0x7) << 12) | ((imm2 & 0x3) << 6) | ((shift_type & 0x3) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_cmpi32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int rn,
	unsigned int imm3,
	unsigned int imm8
){
	// 11110a011011bbbb0ccc1111dddddddd
	uint32_t inst = 0xf1b00f00 | ((imm1 & 0x1) << 26) | ((rn & 0xf) << 16) | ((imm3 & 0x7) << 12) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_dbg32 (
	uint16_t **address,
	unsigned int option
){
	// 1111001110101111100000001111aaaa
	uint32_t inst = 0xf3af80f0 | ((option & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_dmb32 (
	uint16_t **address,
	unsigned int option
){
	// 1111001110111111100011110101aaaa
	uint32_t inst = 0xf3bf8f50 | ((option & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_dsb32 (
	uint16_t **address,
	unsigned int option
){
	// 1111001110111111100011110100aaaa
	uint32_t inst = 0xf3bf8f40 | ((option & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_eor32 (
	uint16_t **address,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
){
	// 11101010100abbbb0cccddddeeffgggg
	uint32_t inst = 0xea800000 | ((set_flags & 0x1) << 20) | ((rn & 0xf) << 16) | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm2 & 0x3) << 6) | ((shift_type & 0x3) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_eori32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
){
	// 11110a00100bcccc0dddeeeeffffffff
	uint32_t inst = 0xf0800000 | ((imm1 & 0x1) << 26) | ((set_condition & 0x1) << 20) | ((rn & 0xf) << 16) | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_isb32 (
	uint16_t **address,
	unsigned int option
){
	// 1111001110111111100011110110aaaa
	uint32_t inst = 0xf3bf8f60 | ((option & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 1110110pudw1aaaabbbbcccceeeeeeee
	uint32_t inst = 0xec100000 | ((coproc & 0xf) << 8) | ((d & 0x1) << 22) | ((crd & 0xf) << 12) | ((rn & 0xf) << 16) | ((pre_index & 0x1) << 24) | ((upwards & 0x1) << 23) | ((writeback & 0x1) << 21) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 1111110pudw1aaaabbbbcccceeeeeeee
	uint32_t inst = 0xfc100000 | ((coproc & 0xf) << 8) | ((d & 0x1) << 22) | ((crd & 0xf) << 12) | ((rn & 0xf) << 16) | ((pre_index & 0x1) << 24) | ((upwards & 0x1) << 23) | ((writeback & 0x1) << 21) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_ldmea32 (
	uint16_t **address,
	unsigned int writeback,
	unsigned int rn,
	unsigned int reglist
){
	// 1110100100a1bbbbcccccccccccccccc
	uint32_t inst = 0xe9100000 | ((writeback & 0x1) << 21) | ((rn & 0xf) << 16) | ((reglist & 0xffff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_ldmfd32 (
	uint16_t **address,
	unsigned int writeback,
	unsigned int rn,
	unsigned int reglist
){
	// 1110100010a1bbbbcccccccccccccccc
	uint32_t inst = 0xe8900000 | ((writeback & 0x1) << 21) | ((rn & 0xf) << 16) | ((reglist & 0xffff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_ldr32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rt,
	unsigned int shift,
	unsigned int rm
){
	// 111110000101aaaabbbb000000ccdddd
	uint32_t inst = 0xf8500000 | ((rn & 0xf) << 16) | ((rt & 0xf) << 12) | ((shift & 0x3) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_ldrb32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rt,
	unsigned int shift,
	unsigned int rm
){
	// 111110000001aaaabbbb000000ccdddd
	uint32_t inst = 0xf8100000 | ((rn & 0xf) << 16) | ((rt & 0xf) << 12) | ((shift & 0x3) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_ldrbi32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback
){
	// 111110000001ccccdddd1puweeeeeeee
	uint32_t inst = 0xf8100800 | ((rt & 0xf) << 12) | ((rn & 0xf) << 16) | ((imm8 & 0xff) << 0) | ((pre_index & 0x1) << 10) | ((upwards & 0x1) << 9) | ((writeback & 0x1) << 8);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_ldrbl32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int imm12,
	unsigned int upwards
){
	// 11111000a0011111bbbbcccccccccccc
	uint32_t inst = 0xf81f0000 | ((rt & 0xf) << 12) | ((imm12 & 0xfff) << 0) | ((upwards & 0x1) << 23);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_ldrbwi32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm12
){
	// 111110001001ccccddddeeeeeeeeeeee
	uint32_t inst = 0xf8900000 | ((rt & 0xf) << 12) | ((rn & 0xf) << 16) | ((imm12 & 0xfff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_ldrbt32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8
){
	// 111110000001aaaabbbb1110cccccccc
	uint32_t inst = 0xf8100e00 | ((rt & 0xf) << 12) | ((rn & 0xf) << 16) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_ldrd32 (
	uint16_t **address,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback,
	unsigned int rn,
	unsigned int rt,
	unsigned int rd,
	unsigned int imm8
){
	// 1110100ab1c1ddddeeeeffffgggggggg
	uint32_t inst = 0xe8500000 | ((pre_index & 0x1) << 24) | ((upwards & 0x1) << 23) | ((writeback & 0x1) << 21) | ((rn & 0xf) << 16) | ((rt & 0xf) << 12) | ((rd & 0xf) << 8) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_ldrex32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rt,
	unsigned int imm8
){
	// 111010000101aaaabbbb1111cccccccc
	uint32_t inst = 0xe8500f00 | ((rn & 0xf) << 16) | ((rt & 0xf) << 12) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_ldrexb32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rt
){
	// 111010001101aaaabbbb111101001111
	uint32_t inst = 0xe8d00f4f | ((rn & 0xf) << 16) | ((rt & 0xf) << 12);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_ldrexd32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rt,
	unsigned int rt2
){
	// 111010001101aaaabbbbcccc01111111
	uint32_t inst = 0xe8d0007f | ((rn & 0xf) << 16) | ((rt & 0xf) << 12) | ((rt2 & 0xf) << 8);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_ldrexh32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rt
){
	// 111010001101aaaabbbb111101011111
	uint32_t inst = 0xe8d00f5f | ((rn & 0xf) << 16) | ((rt & 0xf) << 12);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_ldrh32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rt,
	unsigned int shift,
	unsigned int rm
){
	// 111110000011aaaabbbb000000ccdddd
	uint32_t inst = 0xf8300000 | ((rn & 0xf) << 16) | ((rt & 0xf) << 12) | ((shift & 0x3) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_ldrhi32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback
){
	// 111110000011ccccdddd1puweeeeeeee
	uint32_t inst = 0xf8300800 | ((rt & 0xf) << 12) | ((rn & 0xf) << 16) | ((imm8 & 0xff) << 0) | ((pre_index & 0x1) << 10) | ((upwards & 0x1) << 9) | ((writeback & 0x1) << 8);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_ldrhl32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int imm12,
	unsigned int upwards
){
	// 11111000a0111111bbbbcccccccccccc
	uint32_t inst = 0xf83f0000 | ((rt & 0xf) << 12) | ((imm12 & 0xfff) << 0) | ((upwards & 0x1) << 23);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_ldrhwi32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm12
){
	// 111110001011ccccddddeeeeeeeeeeee
	uint32_t inst = 0xf8b00000 | ((rt & 0xf) << 12) | ((rn & 0xf) << 16) | ((imm12 & 0xfff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_ldrht32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8
){
	// 111110000011aaaabbbb1110cccccccc
	uint32_t inst = 0xf8300e00 | ((rt & 0xf) << 12) | ((rn & 0xf) << 16) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_ldri32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback
){
	// 111110000101ccccdddd1puweeeeeeee
	uint32_t inst = 0xf8500800 | ((rt & 0xf) << 12) | ((rn & 0xf) << 16) | ((imm8 & 0xff) << 0) | ((pre_index & 0x1) << 10) | ((upwards & 0x1) << 9) | ((writeback & 0x1) << 8);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_ldrl32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int imm12,
	unsigned int upwards
){
	// 11111000a1011111ddddeeeeeeeeeeee
	uint32_t inst = 0xf85f0000 | ((rt & 0xf) << 12) | ((imm12 & 0xfff) << 0) | ((upwards & 0x1) << 23);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_ldrsb32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rt,
	unsigned int shift,
	unsigned int rm
){
	// 111110010001aaaabbbb000000ccdddd
	uint32_t inst = 0xf9100000 | ((rn & 0xf) << 16) | ((rt & 0xf) << 12) | ((shift & 0x3) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_ldrsbi32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback
){
	// 111110010001ccccdddd1puweeeeeeee
	uint32_t inst = 0xf9100800 | ((rt & 0xf) << 12) | ((rn & 0xf) << 16) | ((imm8 & 0xff) << 0) | ((pre_index & 0x1) << 10) | ((upwards & 0x1) << 9) | ((writeback & 0x1) << 8);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_ldrsbl32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int imm12,
	unsigned int upwards
){
	// 11111001a0011111bbbbcccccccccccc
	uint32_t inst = 0xf91f0000 | ((rt & 0xf) << 12) | ((imm12 & 0xfff) << 0) | ((upwards & 0x1) << 23);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_ldrsbwi32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm12
){
	// 111110011001ccccddddeeeeeeeeeeee
	uint32_t inst = 0xf9900000 | ((rt & 0xf) << 12) | ((rn & 0xf) << 16) | ((imm12 & 0xfff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_ldrsbt32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8
){
	// 111110010001aaaabbbb1110cccccccc
	uint32_t inst = 0xf9100e00 | ((rt & 0xf) << 12) | ((rn & 0xf) << 16) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_ldrsh32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rt,
	unsigned int shift,
	unsigned int rm
){
	// 111110010011aaaabbbb000000ccdddd
	uint32_t inst = 0xf9300000 | ((rn & 0xf) << 16) | ((rt & 0xf) << 12) | ((shift & 0x3) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_ldrshi32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback
){
	// 111110010011ccccdddd1puweeeeeeee
	uint32_t inst = 0xf9300800 | ((rt & 0xf) << 12) | ((rn & 0xf) << 16) | ((imm8 & 0xff) << 0) | ((pre_index & 0x1) << 10) | ((upwards & 0x1) << 9) | ((writeback & 0x1) << 8);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_ldrshl32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int imm12,
	unsigned int upwards
){
	// 11111001a0111111bbbbcccccccccccc
	uint32_t inst = 0xf93f0000 | ((rt & 0xf) << 12) | ((imm12 & 0xfff) << 0) | ((upwards & 0x1) << 23);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_ldrshwi32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm12
){
	// 111110011011ccccddddeeeeeeeeeeee
	uint32_t inst = 0xf9b00000 | ((rt & 0xf) << 12) | ((rn & 0xf) << 16) | ((imm12 & 0xfff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_ldrsht32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8
){
	// 111110010011aaaabbbb1110cccccccc
	uint32_t inst = 0xf9300e00 | ((rt & 0xf) << 12) | ((rn & 0xf) << 16) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_ldrt32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8
){
	// 111110000101aaaabbbb1110cccccccc
	uint32_t inst = 0xf8500e00 | ((rt & 0xf) << 12) | ((rn & 0xf) << 16) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_ldrwi32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm12
){
	// 111110001101ccccddddeeeeeeeeeeee
	uint32_t inst = 0xf8d00000 | ((rt & 0xf) << 12) | ((rn & 0xf) << 16) | ((imm12 & 0xfff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_lsl32 (
	uint16_t **address,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
){
	// 11111010000abbbb1111cccc0000dddd
	uint32_t inst = 0xfa00f000 | ((set_flags & 0x1) << 20) | ((rn & 0xf) << 16) | ((rd & 0xf) << 8) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_lsli32 (
	uint16_t **address,
	unsigned int set_flags,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int rm
){
	// 11101010010a11110bbbccccdd00eeee
	uint32_t inst = 0xea4f0000 | ((set_flags & 0x1) << 20) | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm2 & 0x3) << 6) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_lsr32 (
	uint16_t **address,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
){
	// 11111010001abbbb1111cccc0000dddd
	uint32_t inst = 0xfa20f000 | ((set_flags & 0x1) << 20) | ((rn & 0xf) << 16) | ((rd & 0xf) << 8) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_lsri32 (
	uint16_t **address,
	unsigned int set_flags,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int rm
){
	// 11101010010a11110bbbccccdd01eeee
	uint32_t inst = 0xea4f0010 | ((set_flags & 0x1) << 20) | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm2 & 0x3) << 6) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_mcr32 (
	uint16_t **address,
	unsigned int opc1,
	unsigned int crn,
	unsigned int rt,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
){
	// 11101110aaa0bbbbccccddddeee1ffff
	uint32_t inst = 0xee000010 | ((opc1 & 0x7) << 21) | ((crn & 0xf) << 16) | ((rt & 0xf) << 12) | ((coproc & 0xf) << 8) | ((opc2 & 0x7) << 5) | ((crm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_mcr232 (
	uint16_t **address,
	unsigned int opc1,
	unsigned int crn,
	unsigned int rt,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
){
	// 11111110aaa0bbbbccccddddeee1ffff
	uint32_t inst = 0xfe000010 | ((opc1 & 0x7) << 21) | ((crn & 0xf) << 16) | ((rt & 0xf) << 12) | ((coproc & 0xf) << 8) | ((opc2 & 0x7) << 5) | ((crm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_mcrr32 (
	uint16_t **address,
	unsigned int coproc,
	unsigned int opc1,
	unsigned int rt,
	unsigned int rt2,
	unsigned int crm
){
	// 111011000100aaaabbbbccccddddeeee
	uint32_t inst = 0xec400000 | ((coproc & 0xf) << 8) | ((opc1 & 0xf) << 4) | ((rt & 0xf) << 12) | ((rt2 & 0xf) << 16) | ((crm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_mcrr232 (
	uint16_t **address,
	unsigned int coproc,
	unsigned int opc1,
	unsigned int rt,
	unsigned int rt2,
	unsigned int crm
){
	// 111111000100aaaabbbbccccddddeeee
	uint32_t inst = 0xfc400000 | ((coproc & 0xf) << 8) | ((opc1 & 0xf) << 4) | ((rt & 0xf) << 12) | ((rt2 & 0xf) << 16) | ((crm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_mla32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int racc,
	unsigned int rd,
	unsigned int rm
){
	// 111110110000aaaabbbbcccc0000dddd
	uint32_t inst = 0xfb000000 | ((rn & 0xf) << 16) | ((racc & 0xf) << 12) | ((rd & 0xf) << 8) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_mls32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int racc,
	unsigned int rd,
	unsigned int rm
){
	// 111110110000aaaabbbbcccc0001dddd
	uint32_t inst = 0xfb000010 | ((rn & 0xf) << 16) | ((racc & 0xf) << 12) | ((rd & 0xf) << 8) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_mov32 (
	uint16_t **address,
	unsigned int set_flags,
	unsigned int rd,
	unsigned int rm
){
	// 11101010010a11110000bbbb0000cccc
	uint32_t inst = 0xea4f0000 | ((set_flags & 0x1) << 20) | ((rd & 0xf) << 8) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_movi32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
){
	// 11110a00010b11110cccddddeeeeeeee
	uint32_t inst = 0xf04f0000 | ((imm1 & 0x1) << 26) | ((set_condition & 0x1) << 20) | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_movwi32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int imm4,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
){
	// 11110a100100bbbb0cccddddeeeeeeee
	uint32_t inst = 0xf2400000 | ((imm1 & 0x1) << 26) | ((imm4 & 0xf) << 16) | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_movti32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int imm4,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
){
	// 11110a101100bbbb0cccddddeeeeeeee
	uint32_t inst = 0xf2c00000 | ((imm1 & 0x1) << 26) | ((imm4 & 0xf) << 16) | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_mrc32 (
	uint16_t **address,
	unsigned int opc1,
	unsigned int crn,
	unsigned int rt,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
){
	// 11101110aaa1bbbbccccddddeee1ffff
	uint32_t inst = 0xee100010 | ((opc1 & 0x7) << 21) | ((crn & 0xf) << 16) | ((rt & 0xf) << 12) | ((coproc & 0xf) << 8) | ((opc2 & 0x7) << 5) | ((crm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_mrc232 (
	uint16_t **address,
	unsigned int opc1,
	unsigned int crn,
	unsigned int rt,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
){
	// 11111110aaa1bbbbccccddddeee1ffff
	uint32_t inst = 0xfe100010 | ((opc1 & 0x7) << 21) | ((crn & 0xf) << 16) | ((rt & 0xf) << 12) | ((coproc & 0xf) << 8) | ((opc2 & 0x7) << 5) | ((crm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_mrrc32 (
	uint16_t **address,
	unsigned int coproc,
	unsigned int opc,
	unsigned int rt,
	unsigned int rt2,
	unsigned int crm
){
	// 111011000101aaaabbbbccccddddeeee
	uint32_t inst = 0xec500000 | ((coproc & 0xf) << 8) | ((opc & 0xf) << 4) | ((rt & 0xf) << 12) | ((rt2 & 0xf) << 16) | ((crm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_mrrc232 (
	uint16_t **address,
	unsigned int coproc,
	unsigned int opc,
	unsigned int rt,
	unsigned int rt2,
	unsigned int crm
){
	// 111111000101aaaabbbbccccddddeeee
	uint32_t inst = 0xfc500000 | ((coproc & 0xf) << 8) | ((opc & 0xf) << 4) | ((rt & 0xf) << 12) | ((rt2 & 0xf) << 16) | ((crm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_mrs32 (
	uint16_t **address,
	unsigned int rd
){
	// 11110011111011111000aaaa00000000
	uint32_t inst = 0xf3ef8000 | ((rd & 0xf) << 8);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_msr32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int mask
){
	// 111100111000bbbb1000cc0000000000
	uint32_t inst = 0xf3808000 | ((rn & 0xf) << 16) | ((mask & 0x3) << 10);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_mul32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
){
	// 111110110000aaaa1111bbbb0000cccc
	uint32_t inst = 0xfb00f000 | ((rn & 0xf) << 16) | ((rd & 0xf) << 8) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_mvn32 (
	uint16_t **address,
	unsigned int set_flags,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
){
	// 11101010011a11110bbbccccddeeffff
	uint32_t inst = 0xea6f0000 | ((set_flags & 0x1) << 20) | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm2 & 0x3) << 6) | ((shift_type & 0x3) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_mvni32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
){
	// 11110a00011b11110cccddddeeeeeeee
	uint32_t inst = 0xf06f0000 | ((imm1 & 0x1) << 26) | ((set_condition & 0x1) << 20) | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_nop32 (
	uint16_t **address
){
	// 11110011101011111000000000000000
	uint32_t inst = 0xf3af8000;
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_orn32 (
	uint16_t **address,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
){
	// 11101010011abbbb0cccddddeeffgggg
	uint32_t inst = 0xea600000 | ((set_flags & 0x1) << 20) | ((rn & 0xf) << 16) | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm2 & 0x3) << 6) | ((shift_type & 0x3) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_orni32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
){
	// 11110a00011bcccc0dddeeeeffffffff
	uint32_t inst = 0xf0600000 | ((imm1 & 0x1) << 26) | ((set_condition & 0x1) << 20) | ((rn & 0xf) << 16) | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_orr32 (
	uint16_t **address,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
){
	// 11101010010abbbb0cccddddeeffgggg
	uint32_t inst = 0xea400000 | ((set_flags & 0x1) << 20) | ((rn & 0xf) << 16) | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm2 & 0x3) << 6) | ((shift_type & 0x3) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_orri32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
){
	// 11110a00010bcccc0dddeeeeffffffff
	uint32_t inst = 0xf0400000 | ((imm1 & 0x1) << 26) | ((set_condition & 0x1) << 20) | ((rn & 0xf) << 16) | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_pkh32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
){
	// 111010101100aaaa0bbbccccddeeffff
	uint32_t inst = 0xeac00000 | ((rn & 0xf) << 16) | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm2 & 0x3) << 6) | ((shift_type & 0x3) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_pld32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int shift,
	unsigned int rm
){
	// 111110000001aaaa1111000000bbcccc
	uint32_t inst = 0xf810f000 | ((rn & 0xf) << 16) | ((shift & 0x3) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_pldi32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int imm12
){
	// 111110001001aaaa1111bbbbbbbbbbbb
	uint32_t inst = 0xf890f000 | ((rn & 0xf) << 16) | ((imm12 & 0xfff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_pldim32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int imm8
){
	// 111110000001aaaa11111100bbbbbbbb
	uint32_t inst = 0xf810fc00 | ((rn & 0xf) << 16) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_pld_lit32 (
	uint16_t **address,
	unsigned int upwards,
	unsigned int imm12
){
	// 11111000u00111111111aaaaaaaaaaaa
	uint32_t inst = 0xf81ff000 | ((upwards & 0x1) << 23) | ((imm12 & 0xfff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_pldw32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int shift,
	unsigned int rm
){
	// 111110000011aaaa1111000000bbcccc
	uint32_t inst = 0xf830f000 | ((rn & 0xf) << 16) | ((shift & 0x3) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_pldwi32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int imm12
){
	// 111110001011aaaa1111bbbbbbbbbbbb
	uint32_t inst = 0xf8b0f000 | ((rn & 0xf) << 16) | ((imm12 & 0xfff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_pldwim32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int imm8
){
	// 111110000011aaaa11111100bbbbbbbb
	uint32_t inst = 0xf830fc00 | ((rn & 0xf) << 16) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_pli32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rm,
	unsigned int shift
){
	// 111110010001aaaa1111000000bbcccc
	uint32_t inst = 0xf910f000 | ((rn & 0xf) << 16) | ((rm & 0xf) << 0) | ((shift & 0x3) << 4);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_plii32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int imm12
){
	// 111110011001aaaa1111bbbbbbbbbbbb
	uint32_t inst = 0xf990f000 | ((rn & 0xf) << 16) | ((imm12 & 0xfff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_pliim32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int imm8
){
	// 111110010001aaaa11111100bbbbbbbb
	uint32_t inst = 0xf910fc00 | ((rn & 0xf) << 16) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_pli_lit32 (
	uint16_t **address,
	unsigned int upwards,
	unsigned int imm12
){
	// 11111001u00111111111aaaaaaaaaaaa
	uint32_t inst = 0xf91ff000 | ((upwards & 0x1) << 23) | ((imm12 & 0xfff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_qadd32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
){
	// 111110101000aaaa1111bbbb1000cccc
	uint32_t inst = 0xfa80f080 | ((rn & 0xf) << 16) | ((rd & 0xf) << 8) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_qadd1632 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// 111110101001aaaa1111bbbb0001cccc
	uint32_t inst = 0xfa90f010 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_qadd832 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// 111110101000aaaa1111bbbb0001cccc
	uint32_t inst = 0xfa80f010 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_qasx32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// 111110101010aaaa1111bbbb0001cccc
	uint32_t inst = 0xfaa0f010 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_qdadd32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
){
	// 111110101000aaaa1111bbbb1001cccc
	uint32_t inst = 0xfa80f090 | ((rn & 0xf) << 16) | ((rd & 0xf) << 8) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_qdsub32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
){
	// 111110101000aaaa1111bbbb1011cccc
	uint32_t inst = 0xfa80f0b0 | ((rn & 0xf) << 16) | ((rd & 0xf) << 8) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_qsax32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// 111110101110aaaa1111bbbb0001cccc
	uint32_t inst = 0xfae0f010 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_qsub32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
){
	// 111110101000aaaa1111bbbb1010cccc
	uint32_t inst = 0xfa80f0a0 | ((rn & 0xf) << 16) | ((rd & 0xf) << 8) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_qsub1632 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// 111110101101aaaa1111bbbb0001cccc
	uint32_t inst = 0xfad0f010 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_qsub832 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// 111110101100aaaa1111bbbb0001cccc
	uint32_t inst = 0xfac0f010 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_rbit32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
){
	// 111110101001aaaa1111bbbb1010cccc
	uint32_t inst = 0xfa90f0a0 | ((rn & 0xf) << 16) | ((rd & 0xf) << 8) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_rev32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
){
	// 111110101001aaaa1111bbbb1000cccc
	uint32_t inst = 0xfa90f080 | ((rn & 0xf) << 16) | ((rd & 0xf) << 8) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_rev1632 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
){
	// 111110101001aaaa1111bbbb1001cccc
	uint32_t inst = 0xfa90f090 | ((rn & 0xf) << 16) | ((rd & 0xf) << 8) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_revsh32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
){
	// 111110101001aaaa1111bbbb1011cccc
	uint32_t inst = 0xfa90f0b0 | ((rn & 0xf) << 16) | ((rd & 0xf) << 8) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_ror32 (
	uint16_t **address,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
){
	// 11111010011abbbb1111cccc0000dddd
	uint32_t inst = 0xfa60f000 | ((set_flags & 0x1) << 20) | ((rn & 0xf) << 16) | ((rd & 0xf) << 8) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_rori32 (
	uint16_t **address,
	unsigned int set_flags,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int rm
){
	// 11101010010a11110bbbccccdd11eeee
	uint32_t inst = 0xea4f0030 | ((set_flags & 0x1) << 20) | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm2 & 0x3) << 6) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_rrx32 (
	uint16_t **address,
	unsigned int set_flags,
	unsigned int rd,
	unsigned int rm
){
	// 11101010010a11110000bbbb0011cccc
	uint32_t inst = 0xea4f0030 | ((set_flags & 0x1) << 20) | ((rd & 0xf) << 8) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_rsb32 (
	uint16_t **address,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
){
	// 11101011110abbbb0cccddddeeffgggg
	uint32_t inst = 0xebc00000 | ((set_flags & 0x1) << 20) | ((rn & 0xf) << 16) | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm2 & 0x3) << 6) | ((shift_type & 0x3) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_rsbi32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
){
	// 11110a01110bcccc0dddeeeeffffffff
	uint32_t inst = 0xf1c00000 | ((imm1 & 0x1) << 26) | ((set_condition & 0x1) << 20) | ((rn & 0xf) << 16) | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_sadd1632 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// 111110101001aaaa1111bbbb0000cccc
	uint32_t inst = 0xfa90f000 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_sadd832 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// 111110101000aaaa1111bbbb0000cccc
	uint32_t inst = 0xfa80f000 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_sasx32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// 111110101010aaaa1111bbbb0000cccc
	uint32_t inst = 0xfaa0f000 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_sbc32 (
	uint16_t **address,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
){
	// 11101011011abbbb0cccddddeeffgggg
	uint32_t inst = 0xeb600000 | ((set_flags & 0x1) << 20) | ((rn & 0xf) << 16) | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm2 & 0x3) << 6) | ((shift_type & 0x3) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_sbci32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
){
	// 11110a01011bcccc0dddeeeeffffffff
	uint32_t inst = 0xf1600000 | ((imm1 & 0x1) << 26) | ((set_condition & 0x1) << 20) | ((rn & 0xf) << 16) | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_sbfx32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int imm5
){
	// 11110011010aaaaa0bbbccccdd0eeeee
	uint32_t inst = 0xf3400000 | ((rn & 0x1f) << 16) | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm2 & 0x3) << 6) | ((imm5 & 0x1f) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_sdiv32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rdhi,
	unsigned int rm
){
	// 111110111001aaaa1111bbbb1111cccc
	uint32_t inst = 0xfb90f0f0 | ((rn & 0xf) << 16) | ((rdhi & 0xf) << 8) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_sel32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
){
	// 111110101010aaaa1111bbbb1000cccc
	uint32_t inst = 0xfaa0f080 | ((rn & 0xf) << 16) | ((rd & 0xf) << 8) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_sev32 (
	uint16_t **address
){
	// 11110011101011111000000000000100
	uint32_t inst = 0xf3af8004;
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_shadd1632 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// 111110101001aaaa1111bbbb0010cccc
	uint32_t inst = 0xfa90f020 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_shadd832 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// 111110101000aaaa1111bbbb0010cccc
	uint32_t inst = 0xfa80f020 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_shasx32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// 111110101010aaaa1111bbbb0010cccc
	uint32_t inst = 0xfaa0f020 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_shsax32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// 111110101110aaaa1111bbbb0010cccc
	uint32_t inst = 0xfae0f020 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_shsub1632 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// 111110101101aaaa1111bbbb0010cccc
	uint32_t inst = 0xfad0f020 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_shsub832 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// 111110101100aaaa1111bbbb0010cccc
	uint32_t inst = 0xfac0f020 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_simd_add_sub32 (
	uint16_t **address,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd,
	unsigned int pref,
	unsigned int rm
){
	// 111110101aaabbbb1111cccc0dddeeee
	uint32_t inst = 0xfa80f000 | ((opcode & 0x7) << 20) | ((rn & 0xf) << 16) | ((rd & 0xf) << 8) | ((pref & 0x7) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_smlabb32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
){
	// 111110110001aaaabbbbcccc0000eeee
	uint32_t inst = 0xfb100000 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0) | ((ra & 0xf) << 12);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_smlabt32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
){
	// 111110110001aaaabbbbcccc0001eeee
	uint32_t inst = 0xfb100010 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0) | ((ra & 0xf) << 12);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_smlatb32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
){
	// 111110110001aaaabbbbcccc0010eeee
	uint32_t inst = 0xfb100020 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0) | ((ra & 0xf) << 12);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_smlatt32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
){
	// 111110110001aaaabbbbcccc0011eeee
	uint32_t inst = 0xfb100030 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0) | ((ra & 0xf) << 12);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_smlad32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int racc,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
){
	// 111110110010aaaabbbbccccddddeeee
	uint32_t inst = 0xfb200000 | ((rn & 0xf) << 16) | ((racc & 0xf) << 12) | ((rd & 0xf) << 8) | ((opcode2 & 0xf) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_smlal32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rdlo,
	unsigned int rdhi,
	unsigned int rm
){
	// 111110111100aaaabbbbcccc0000dddd
	uint32_t inst = 0xfbc00000 | ((rn & 0xf) << 16) | ((rdlo & 0xf) << 12) | ((rdhi & 0xf) << 8) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_smlalbb32 (
	uint16_t **address,
	unsigned int rdlo,
	unsigned int rdhi,
	unsigned int rn,
	unsigned int rm
){
	// 111110111100aaaabbbbcccc1000ffff
	uint32_t inst = 0xfbc00080 | ((rdlo & 0xf) << 12) | ((rdhi & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_smlalbt32 (
	uint16_t **address,
	unsigned int rdlo,
	unsigned int rdhi,
	unsigned int rn,
	unsigned int rm
){
	// 111110111100aaaabbbbcccc1001ffff
	uint32_t inst = 0xfbc00090 | ((rdlo & 0xf) << 12) | ((rdhi & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_smlaltb32 (
	uint16_t **address,
	unsigned int rdlo,
	unsigned int rdhi,
	unsigned int rn,
	unsigned int rm
){
	// 111110111100aaaabbbbcccc1010ffff
	uint32_t inst = 0xfbc000a0 | ((rdlo & 0xf) << 12) | ((rdhi & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_smlaltt32 (
	uint16_t **address,
	unsigned int rdlo,
	unsigned int rdhi,
	unsigned int rn,
	unsigned int rm
){
	// 111110111100aaaabbbbcccc1011ffff
	uint32_t inst = 0xfbc000b0 | ((rdlo & 0xf) << 12) | ((rdhi & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_smlald32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rdlo,
	unsigned int rdhi,
	unsigned int m_swap,
	unsigned int rm
){
	// 111110111100aaaabbbbcccc110deeee
	uint32_t inst = 0xfbc000c0 | ((rn & 0xf) << 16) | ((rdlo & 0xf) << 12) | ((rdhi & 0xf) << 8) | ((m_swap & 0x1) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_smlawb32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
){
	// 111110110011aaaabbbbcccc0000dddd
	uint32_t inst = 0xfb300000 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0) | ((ra & 0xf) << 12);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_smlawt32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
){
	// 111110110011aaaabbbbcccc0001dddd
	uint32_t inst = 0xfb300010 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0) | ((ra & 0xf) << 12);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_smlsd32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int racc,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
){
	// 111110110100aaaabbbbccccddddeeee
	uint32_t inst = 0xfb400000 | ((rn & 0xf) << 16) | ((racc & 0xf) << 12) | ((rd & 0xf) << 8) | ((opcode2 & 0xf) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_smlsld32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rdlo,
	unsigned int rdhi,
	unsigned int m_swap,
	unsigned int rm
){
	// 111110111101aaaabbbbcccc110deeee
	uint32_t inst = 0xfbd000c0 | ((rn & 0xf) << 16) | ((rdlo & 0xf) << 12) | ((rdhi & 0xf) << 8) | ((m_swap & 0x1) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_smmla32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int racc,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
){
	// 111110110101aaaabbbbccccddddeeee
	uint32_t inst = 0xfb500000 | ((rn & 0xf) << 16) | ((racc & 0xf) << 12) | ((rd & 0xf) << 8) | ((opcode2 & 0xf) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_smmls32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int racc,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
){
	// 111110110110aaaabbbbccccddddeeee
	uint32_t inst = 0xfb600000 | ((rn & 0xf) << 16) | ((racc & 0xf) << 12) | ((rd & 0xf) << 8) | ((opcode2 & 0xf) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_smmul32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
){
	// 111110110101aaaa1111bbbbccccdddd
	uint32_t inst = 0xfb50f000 | ((rn & 0xf) << 16) | ((rd & 0xf) << 8) | ((opcode2 & 0xf) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_smuad32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
){
	// 111110110010aaaa1111bbbbccccdddd
	uint32_t inst = 0xfb20f000 | ((rn & 0xf) << 16) | ((rd & 0xf) << 8) | ((opcode2 & 0xf) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_smulbb32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// 111110110001aaaa1111bbbb0000dddd
	uint32_t inst = 0xfb10f000 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_smulbt32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// 111110110001aaaa1111bbbb0001dddd
	uint32_t inst = 0xfb10f010 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_smultb32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// 111110110001aaaa1111bbbb0010dddd
	uint32_t inst = 0xfb10f020 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_smultt32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// 111110110001aaaa1111bbbb0011dddd
	uint32_t inst = 0xfb10f030 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_smull32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rdlo,
	unsigned int rdhi,
	unsigned int rm
){
	// 111110111000aaaabbbbcccc0000dddd
	uint32_t inst = 0xfb800000 | ((rn & 0xf) << 16) | ((rdlo & 0xf) << 12) | ((rdhi & 0xf) << 8) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_smulwb32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
){
	// 111110110011aaaa1111bbbb0000dddd
	uint32_t inst = 0xfb30f000 | ((rn & 0xf) << 16) | ((rd & 0xf) << 8) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_smulwt32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd,
	unsigned int rm
){
	// 111110110011aaaa1111bbbb0001dddd
	uint32_t inst = 0xfb30f010 | ((rn & 0xf) << 16) | ((rd & 0xf) << 8) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_smusd32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
){
	// 111110110100aaaa1111bbbbccccdddd
	uint32_t inst = 0xfb40f000 | ((rn & 0xf) << 16) | ((rd & 0xf) << 8) | ((opcode2 & 0xf) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_ssat1632 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd
){
	// 11110011001aaaaa0000bbbb00000000
	uint32_t inst = 0xf3200000 | ((rn & 0x1f) << 16) | ((rd & 0xf) << 8);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_ssat_asr32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int imm5
){
	// 11110011001aaaaa0bbbccccdd0eeeee
	uint32_t inst = 0xf3200000 | ((rn & 0x1f) << 16) | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm2 & 0x3) << 6) | ((imm5 & 0x1f) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_ssat_lsl32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int imm5
){
	// 11110011000aaaaa0bbbccccdd0eeeee
	uint32_t inst = 0xf3000000 | ((rn & 0x1f) << 16) | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm2 & 0x3) << 6) | ((imm5 & 0x1f) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_ssax32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// 111110101110aaaa1111bbbb0000cccc
	uint32_t inst = 0xfae0f000 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_ssub1632 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// 111110101101aaaa1111bbbb0000cccc
	uint32_t inst = 0xfad0f000 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_ssub832 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// 111110101100aaaa1111bbbb0000cccc
	uint32_t inst = 0xfac0f000 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 1110110pudw0aaaabbbbcccceeeeeeee
	uint32_t inst = 0xec000000 | ((coproc & 0xf) << 8) | ((d & 0x1) << 22) | ((crd & 0xf) << 12) | ((rn & 0xf) << 16) | ((pre_index & 0x1) << 24) | ((upwards & 0x1) << 23) | ((writeback & 0x1) << 21) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 1111110pudw0aaaabbbbcccceeeeeeee
	uint32_t inst = 0xfc000000 | ((coproc & 0xf) << 8) | ((d & 0x1) << 22) | ((crd & 0xf) << 12) | ((rn & 0xf) << 16) | ((pre_index & 0x1) << 24) | ((upwards & 0x1) << 23) | ((writeback & 0x1) << 21) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_stmea32 (
	uint16_t **address,
	unsigned int writeback,
	unsigned int rn,
	unsigned int reglist
){
	// 1110100010a0bbbbcccccccccccccccc
	uint32_t inst = 0xe8800000 | ((writeback & 0x1) << 21) | ((rn & 0xf) << 16) | ((reglist & 0xffff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_stmfd32 (
	uint16_t **address,
	unsigned int writeback,
	unsigned int rn,
	unsigned int reglist
){
	// 1110100100a0bbbbcccccccccccccccc
	uint32_t inst = 0xe9000000 | ((writeback & 0x1) << 21) | ((rn & 0xf) << 16) | ((reglist & 0xffff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_str32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rt,
	unsigned int shift,
	unsigned int rm
){
	// 111110000100aaaabbbb000000ccdddd
	uint32_t inst = 0xf8400000 | ((rn & 0xf) << 16) | ((rt & 0xf) << 12) | ((shift & 0x3) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_strb32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rt,
	unsigned int shift,
	unsigned int rm
){
	// 111110000000aaaabbbb000000ccdddd
	uint32_t inst = 0xf8000000 | ((rn & 0xf) << 16) | ((rt & 0xf) << 12) | ((shift & 0x3) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_strbi32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback
){
	// 111110000000ccccdddd1puweeeeeeee
	uint32_t inst = 0xf8000800 | ((rt & 0xf) << 12) | ((rn & 0xf) << 16) | ((imm8 & 0xff) << 0) | ((pre_index & 0x1) << 10) | ((upwards & 0x1) << 9) | ((writeback & 0x1) << 8);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_strbwi32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm12
){
	// 111110001000ccccddddeeeeeeeeeeee
	uint32_t inst = 0xf8800000 | ((rt & 0xf) << 12) | ((rn & 0xf) << 16) | ((imm12 & 0xfff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_strbt32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8
){
	// 111110000000aaaabbbb1110cccccccc
	uint32_t inst = 0xf8000e00 | ((rt & 0xf) << 12) | ((rn & 0xf) << 16) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_strd32 (
	uint16_t **address,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback,
	unsigned int rn,
	unsigned int rt,
	unsigned int rd,
	unsigned int imm8
){
	// 1110100ab1c0ddddeeeeffffgggggggg
	uint32_t inst = 0xe8400000 | ((pre_index & 0x1) << 24) | ((upwards & 0x1) << 23) | ((writeback & 0x1) << 21) | ((rn & 0xf) << 16) | ((rt & 0xf) << 12) | ((rd & 0xf) << 8) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_strex32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rt,
	unsigned int rd,
	unsigned int imm8
){
	// 111010000100aaaabbbbccccdddddddd
	uint32_t inst = 0xe8400000 | ((rn & 0xf) << 16) | ((rt & 0xf) << 12) | ((rd & 0xf) << 8) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_strexb32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rt,
	unsigned int rd
){
	// 111010001100aaaabbbb11110100dddd
	uint32_t inst = 0xe8c00f40 | ((rn & 0xf) << 16) | ((rt & 0xf) << 12) | ((rd & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_strexd32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rt,
	unsigned int rt2,
	unsigned int rd
){
	// 111010001100aaaabbbbcccc0111dddd
	uint32_t inst = 0xe8c00070 | ((rn & 0xf) << 16) | ((rt & 0xf) << 12) | ((rt2 & 0xf) << 8) | ((rd & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_strexh32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rt,
	unsigned int rd
){
	// 111010001100aaaabbbb11110101dddd
	uint32_t inst = 0xe8c00f50 | ((rn & 0xf) << 16) | ((rt & 0xf) << 12) | ((rd & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_strh32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rt,
	unsigned int shift,
	unsigned int rm
){
	// 111110000010aaaabbbb000000ccdddd
	uint32_t inst = 0xf8200000 | ((rn & 0xf) << 16) | ((rt & 0xf) << 12) | ((shift & 0x3) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_strhi32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback
){
	// 111110000010ccccdddd1puweeeeeeee
	uint32_t inst = 0xf8200800 | ((rt & 0xf) << 12) | ((rn & 0xf) << 16) | ((imm8 & 0xff) << 0) | ((pre_index & 0x1) << 10) | ((upwards & 0x1) << 9) | ((writeback & 0x1) << 8);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_strhwi32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm12
){
	// 111110001010ccccddddeeeeeeeeeeee
	uint32_t inst = 0xf8a00000 | ((rt & 0xf) << 12) | ((rn & 0xf) << 16) | ((imm12 & 0xfff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_strht32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8
){
	// 111110000010aaaabbbb1110cccccccc
	uint32_t inst = 0xf8200e00 | ((rt & 0xf) << 12) | ((rn & 0xf) << 16) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_stri32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8,
	unsigned int pre_index,
	unsigned int upwards,
	unsigned int writeback
){
	// 111110000100ccccdddd1puweeeeeeee
	uint32_t inst = 0xf8400800 | ((rt & 0xf) << 12) | ((rn & 0xf) << 16) | ((imm8 & 0xff) << 0) | ((pre_index & 0x1) << 10) | ((upwards & 0x1) << 9) | ((writeback & 0x1) << 8);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_strt32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm8
){
	// 111110000100aaaabbbb1110cccccccc
	uint32_t inst = 0xf8400e00 | ((rt & 0xf) << 12) | ((rn & 0xf) << 16) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_strwi32 (
	uint16_t **address,
	unsigned int rt,
	unsigned int rn,
	unsigned int imm12
){
	// 111110001100ccccddddeeeeeeeeeeee
	uint32_t inst = 0xf8c00000 | ((rt & 0xf) << 12) | ((rn & 0xf) << 16) | ((imm12 & 0xfff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_sub32 (
	uint16_t **address,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
){
	// 11101011101abbbb0cccddddeeffgggg
	uint32_t inst = 0xeba00000 | ((set_flags & 0x1) << 20) | ((rn & 0xf) << 16) | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm2 & 0x3) << 6) | ((shift_type & 0x3) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_subi32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int set_condition,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
){
	// 11110a01101bcccc0dddeeeeffffffff
	uint32_t inst = 0xf1a00000 | ((imm1 & 0x1) << 26) | ((set_condition & 0x1) << 20) | ((rn & 0xf) << 16) | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_subwi32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
){
	// 11110a101010bbbb0cccddddeeeeeeee
	uint32_t inst = 0xf2a00000 | ((imm1 & 0x1) << 26) | ((rn & 0xf) << 16) | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_sxtab1632 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
){
	// 111110100010aaaa1111bbbb10ccdddd
	uint32_t inst = 0xfa20f080 | ((rn & 0xf) << 16) | ((rd & 0xf) << 8) | ((rotate & 0x3) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_sxtab32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
){
	// 111110100100aaaa1111bbbb10ccdddd
	uint32_t inst = 0xfa40f080 | ((rn & 0xf) << 16) | ((rd & 0xf) << 8) | ((rotate & 0x3) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_sxtah32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
){
	// 111110100000aaaa1111bbbb10ccdddd
	uint32_t inst = 0xfa00f080 | ((rn & 0xf) << 16) | ((rd & 0xf) << 8) | ((rotate & 0x3) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_sxtb1632 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
){
	// 11111010001011111111aaaa10bbcccc
	uint32_t inst = 0xfa2ff080 | ((rd & 0xf) << 8) | ((rotate & 0x3) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_sxtb32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
){
	// 11111010010011111111aaaa10bbcccc
	uint32_t inst = 0xfa4ff080 | ((rd & 0xf) << 8) | ((rotate & 0x3) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_sxth32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
){
	// 11111010000011111111aaaa10bbcccc
	uint32_t inst = 0xfa0ff080 | ((rd & 0xf) << 8) | ((rotate & 0x3) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_tbb32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rm
){
	// 111010001101aaaa111100000000bbbb
	uint32_t inst = 0xe8d0f000 | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_tbh32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rm
){
	// 111010001101aaaa111100000001bbbb
	uint32_t inst = 0xe8d0f010 | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_teq32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int imm3,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
){
	// 111010101001aaaa0bbb1111ccddeeee
	uint32_t inst = 0xea900f00 | ((rn & 0xf) << 16) | ((imm3 & 0x7) << 12) | ((imm2 & 0x3) << 6) | ((shift_type & 0x3) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_teqi32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int rn,
	unsigned int imm3,
	unsigned int imm8
){
	// 11110a001001bbbb0ccc1111dddddddd
	uint32_t inst = 0xf0900f00 | ((imm1 & 0x1) << 26) | ((rn & 0xf) << 16) | ((imm3 & 0x7) << 12) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_tst32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int imm3,
	unsigned int imm2,
	unsigned int shift_type,
	unsigned int rm
){
	// 111010100001aaaa0bbb1111ccddeeee
	uint32_t inst = 0xea100f00 | ((rn & 0xf) << 16) | ((imm3 & 0x7) << 12) | ((imm2 & 0x3) << 6) | ((shift_type & 0x3) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_tsti32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int rn,
	unsigned int imm3,
	unsigned int imm8
){
	// 11110a000001bbbb0ccc1111dddddddd
	uint32_t inst = 0xf0100f00 | ((imm1 & 0x1) << 26) | ((rn & 0xf) << 16) | ((imm3 & 0x7) << 12) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_uadd1632 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// 111110101001aaaa1111bbbb0100cccc
	uint32_t inst = 0xfa90f040 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_uadd832 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// 111110101000aaaa1111bbbb0100cccc
	uint32_t inst = 0xfa80f040 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_uasx32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// 111110101010aaaa1111bbbb0100cccc
	uint32_t inst = 0xfaa0f040 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_ubfx32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int imm5
){
	// 11110011110aaaaa0bbbccccdd0eeeee
	uint32_t inst = 0xf3c00000 | ((rn & 0x1f) << 16) | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm2 & 0x3) << 6) | ((imm5 & 0x1f) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_udf32 (
	uint16_t **address,
	unsigned int imm4,
	unsigned int imm12
){
	// 111101111111aaaa1010bbbbbbbbbbbb
	uint32_t inst = 0xf7f0a000 | ((imm4 & 0xf) << 16) | ((imm12 & 0xfff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_udiv32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rdhi,
	unsigned int rm
){
	// 111110111011aaaa1111bbbb1111cccc
	uint32_t inst = 0xfbb0f0f0 | ((rn & 0xf) << 16) | ((rdhi & 0xf) << 8) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_uhadd1632 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// 111110101001aaaa1111bbbb0110cccc
	uint32_t inst = 0xfa90f060 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_uhadd832 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// 111110101000aaaa1111bbbb0110cccc
	uint32_t inst = 0xfa80f060 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_uhasx32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// 111110101010aaaa1111bbbb0110cccc
	uint32_t inst = 0xfaa0f060 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_uhsax32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// 111110101110aaaa1111bbbb0110cccc
	uint32_t inst = 0xfae0f060 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_uhsub1632 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// 111110101101aaaa1111bbbb0110cccc
	uint32_t inst = 0xfad0f060 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_uhsub832 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// 111110101100aaaa1111bbbb0110cccc
	uint32_t inst = 0xfac0f060 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_umaal32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rdlo,
	unsigned int rdhi,
	unsigned int rm
){
	// 111110111110aaaabbbbcccc0110dddd
	uint32_t inst = 0xfbe00060 | ((rn & 0xf) << 16) | ((rdlo & 0xf) << 12) | ((rdhi & 0xf) << 8) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_umlal32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rdlo,
	unsigned int rdhi,
	unsigned int rm
){
	// 111110111110aaaabbbbcccc0000dddd
	uint32_t inst = 0xfbe00000 | ((rn & 0xf) << 16) | ((rdlo & 0xf) << 12) | ((rdhi & 0xf) << 8) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_umull32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rdlo,
	unsigned int rdhi,
	unsigned int rm
){
	// 111110111010aaaabbbbcccc0000dddd
	uint32_t inst = 0xfba00000 | ((rn & 0xf) << 16) | ((rdlo & 0xf) << 12) | ((rdhi & 0xf) << 8) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_uqadd1632 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// 111110101001aaaa1111bbbb0101cccc
	uint32_t inst = 0xfa90f050 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_uqadd832 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// 111110101000aaaa1111bbbb0101cccc
	uint32_t inst = 0xfa80f050 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_uqasx32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// 111110101010aaaa1111bbbb0101cccc
	uint32_t inst = 0xfaa0f050 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_uqsax32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// 111110101110aaaa1111bbbb0101cccc
	uint32_t inst = 0xfae0f050 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_uqsub1632 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// 111110101101aaaa1111bbbb0101cccc
	uint32_t inst = 0xfad0f050 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_uqsub832 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// 111110101100aaaa1111bbbb0101cccc
	uint32_t inst = 0xfac0f050 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_usad832 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
){
	// 111110110111aaaa1111bbbbccccdddd
	uint32_t inst = 0xfb70f000 | ((rn & 0xf) << 16) | ((rd & 0xf) << 8) | ((opcode2 & 0xf) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_usada832 (
	uint16_t **address,
	unsigned int rn,
	unsigned int racc,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
){
	// 111110110111aaaabbbbccccddddeeee
	uint32_t inst = 0xfb700000 | ((rn & 0xf) << 16) | ((racc & 0xf) << 12) | ((rd & 0xf) << 8) | ((opcode2 & 0xf) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_usat1632 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd
){
	// 11110011101aaaaa0000bbbb00000000
	uint32_t inst = 0xf3a00000 | ((rn & 0x1f) << 16) | ((rd & 0xf) << 8);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_usat_asr32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int imm5
){
	// 11110011101aaaaa0bbbccccdd0eeeee
	uint32_t inst = 0xf3a00000 | ((rn & 0x1f) << 16) | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm2 & 0x3) << 6) | ((imm5 & 0x1f) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_usat_lsl32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int imm5
){
	// 11110011100aaaaa0bbbccccdd0eeeee
	uint32_t inst = 0xf3800000 | ((rn & 0x1f) << 16) | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm2 & 0x3) << 6) | ((imm5 & 0x1f) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_usax32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// 111110101110aaaa1111bbbb0100cccc
	uint32_t inst = 0xfae0f040 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_usub1632 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// 111110101101aaaa1111bbbb0100cccc
	uint32_t inst = 0xfad0f040 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_usub832 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// 111110101100aaaa1111bbbb0100cccc
	uint32_t inst = 0xfac0f040 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_uxtab1632 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
){
	// 111110100011aaaa1111bbbb10ccdddd
	uint32_t inst = 0xfa30f080 | ((rn & 0xf) << 16) | ((rd & 0xf) << 8) | ((rotate & 0x3) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_uxtab32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
){
	// 111110100101aaaa1111bbbb10ccdddd
	uint32_t inst = 0xfa50f080 | ((rn & 0xf) << 16) | ((rd & 0xf) << 8) | ((rotate & 0x3) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_uxtah32 (
	uint16_t **address,
	unsigned int rn,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
){
	// 111110100001aaaa1111bbbb10ccdddd
	uint32_t inst = 0xfa10f080 | ((rn & 0xf) << 16) | ((rd & 0xf) << 8) | ((rotate & 0x3) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_uxtb1632 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
){
	// 11111010001111111111aaaa10bbcccc
	uint32_t inst = 0xfa3ff080 | ((rd & 0xf) << 8) | ((rotate & 0x3) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_uxtb32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
){
	// 11111010010111111111aaaa10bbcccc
	uint32_t inst = 0xfa5ff080 | ((rd & 0xf) << 8) | ((rotate & 0x3) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_uxth32 (
	uint16_t **address,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
){
	// 11111010000111111111aaaa10bbcccc
	uint32_t inst = 0xfa1ff080 | ((rd & 0xf) << 8) | ((rotate & 0x3) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_wfe32 (
	uint16_t **address
){
	// 11110011101011111000000000000010
	uint32_t inst = 0xf3af8002;
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_wfi32 (
	uint16_t **address
){
	// 11110011101011111000000000000011
	uint32_t inst = 0xf3af8003;
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_yield32 (
	uint16_t **address
){
	// 11110011101011111000000000000001
	uint32_t inst = 0xf3af8001;
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111u11110dssaaaabbbb0111nqm1cccc
	uint32_t inst = 0xef000710 | ((unsign & 0x1) << 28) | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111u11111dssaaaabbbb0101n0m0cccc
	uint32_t inst = 0xef800500 | ((unsign & 0x1) << 28) | ((size & 0x3) << 20) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111a11110bccddddeeee0111fgh0iiii
	uint32_t inst = 0xef000700 | ((unsign & 0x1) << 28) | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111111110d1saaaabbbb1101nqm0cccc
	uint32_t inst = 0xff200d00 | ((size & 0x1) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111a11111bccddddeeee0111f0g0hhhh
	uint32_t inst = 0xef800700 | ((unsign & 0x1) << 28) | ((size & 0x3) << 20) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vabs (
	uint16_t **address,
	unsigned int is_float,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111111111d11ss01aaaa0f110qm0bbbb
	uint32_t inst = 0xffb10300 | ((is_float & 0x1) << 10) | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vfp_vabs (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111011101a110000cccc101s11d0eeee
	uint32_t inst = 0xeeb00ac0 | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111111110d0saaaabbbb1110nqm1cccc
	uint32_t inst = 0xff000e10 | ((size & 0x1) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111111110d1saaaabbbb1110nqm1cccc
	uint32_t inst = 0xff200e10 | ((size & 0x1) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111011110dssaaaabbbb1000nqm0cccc
	uint32_t inst = 0xef000800 | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111011110d0saaaabbbb1101nqm0cccc
	uint32_t inst = 0xef000d00 | ((size & 0x1) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vfp_vadd (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111011100a11bbbbcccc101sd0e0ffff
	uint32_t inst = 0xee300a00 | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vaddhn (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int n,
	unsigned int vd,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111011111abbccccdddd0100e0f0gggg
	uint32_t inst = 0xef800400 | ((size & 0x3) << 20) | ((d & 0x1) << 22) | ((n & 0x1) << 7) | ((vd & 0xf) << 12) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111a11111bccddddeeee0000f0g0hhhh
	uint32_t inst = 0xef800000 | ((unsign & 0x1) << 28) | ((size & 0x3) << 20) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111a11111bccddddeeee0001f0g0hhhh
	uint32_t inst = 0xef800100 | ((unsign & 0x1) << 28) | ((size & 0x3) << 20) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vand (
	uint16_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111011110a00bbbbcccc0001def1gggg
	uint32_t inst = 0xef000110 | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vbic (
	uint16_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111011110a01bbbbcccc0001def1gggg
	uint32_t inst = 0xef100110 | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vbici (
	uint16_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int cmode,
	unsigned int i,
	unsigned int imm3,
	unsigned int imm4
){
	// 111i11111d000aaabbbbcccc0q11eeee
	uint32_t inst = 0xef800030 | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((cmode & 0xf) << 8) | ((i & 0x1) << 28) | ((imm3 & 0x7) << 16) | ((imm4 & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vbif (
	uint16_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111111110a11bbbbcccc0001def1gggg
	uint32_t inst = 0xff300110 | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vbit (
	uint16_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111111110a10bbbbcccc0001def1gggg
	uint32_t inst = 0xff200110 | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vbsl (
	uint16_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111111110a01bbbbcccc0001def1gggg
	uint32_t inst = 0xff100110 | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111111110dssaaaabbbb1000nqm1cccc
	uint32_t inst = 0xff000810 | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111011110d0saaaabbbb1110nqm0cccc
	uint32_t inst = 0xef000e00 | ((size & 0x1) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vceqz (
	uint16_t **address,
	unsigned int is_float,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111111111d11ss01aaaa0f010qm0bbbb
	uint32_t inst = 0xffb10100 | ((is_float & 0x1) << 10) | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111u11110dssaaaabbbb0011nqm1cccc
	uint32_t inst = 0xef000310 | ((unsign & 0x1) << 28) | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111111110d0saaaabbbb1110nqm0cccc
	uint32_t inst = 0xff000e00 | ((size & 0x1) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vcgez (
	uint16_t **address,
	unsigned int is_float,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111111111d11ss01aaaa0f001qm0bbbb
	uint32_t inst = 0xffb10080 | ((is_float & 0x1) << 10) | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111u11110dssaaaabbbb0011nqm0cccc
	uint32_t inst = 0xef000300 | ((unsign & 0x1) << 28) | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111111110d1saaaabbbb1110nqm0cccc
	uint32_t inst = 0xff200e00 | ((size & 0x1) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vcgtz (
	uint16_t **address,
	unsigned int is_float,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111111111d11ss01aaaa0f000qm0bbbb
	uint32_t inst = 0xffb10000 | ((is_float & 0x1) << 10) | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vclez (
	uint16_t **address,
	unsigned int is_float,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111111111d11ss01aaaa0f011qm0bbbb
	uint32_t inst = 0xffb10180 | ((is_float & 0x1) << 10) | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vcls (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111111111d11ss00aaaa01000qm0bbbb
	uint32_t inst = 0xffb00400 | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vcltz (
	uint16_t **address,
	unsigned int is_float,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111111111d11ss01aaaa0f100qm0bbbb
	uint32_t inst = 0xffb10200 | ((is_float & 0x1) << 10) | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vclz (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111111111d11ss00aaaa01001qm0bbbb
	uint32_t inst = 0xffb00480 | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vfp_vcmp (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111011101a110100bbbb101c01e0ffff
	uint32_t inst = 0xeeb40a40 | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vfp_vcmpz (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd
){
	// 111011101a110101bbbb101c01000000
	uint32_t inst = 0xeeb50a40 | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vfp_vcmpe (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111011101a110100bbbb101c11e0ffff
	uint32_t inst = 0xeeb40ac0 | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vfp_vcmpez (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd
){
	// 111011101a110101bbbb101c11000000
	uint32_t inst = 0xeeb50ac0 | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vcnt (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111111111d11ss00aaaa01010qm0bbbb
	uint32_t inst = 0xffb00500 | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vcvt_f_i (
	uint16_t **address,
	unsigned int op,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111111111d11ss11aaaa011ooqm0bbbb
	uint32_t inst = 0xffb30600 | ((op & 0x3) << 7) | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vcvt_f_fp (
	uint16_t **address,
	unsigned int op,
	unsigned int unsign,
	unsigned int q,
	unsigned int d,
	unsigned int vm,
	unsigned int m,
	unsigned int imm6
){
	// 111u11111daaaaaabbbb111o0qm1bbbb
	uint32_t inst = 0xef800e10 | ((op & 0x1) << 8) | ((unsign & 0x1) << 28) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vm & 0xffff) << 0) | ((m & 0x1) << 5) | ((imm6 & 0x3f) << 16);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vcvt_hp_sp (
	uint16_t **address,
	unsigned int op,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111111111d11ss10aaaa011o00m0bbbb
	uint32_t inst = 0xffb20600 | ((op & 0x1) << 8) | ((size & 0x3) << 18) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vfp_vcvt_f_i (
	uint16_t **address,
	unsigned int op,
	unsigned int op2,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111011101d111aaabbbb101so1m0cccc
	uint32_t inst = 0xeeb80a40 | ((op & 0x1) << 7) | ((op2 & 0x7) << 16) | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111011101d111o1uaaaa101bc1i0eeee
	uint32_t inst = 0xeeba0a40 | ((op & 0x1) << 18) | ((unsign & 0x1) << 16) | ((sf & 0x1) << 8) | ((sx & 0x1) << 7) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((imm4 & 0xf) << 0) | ((i & 0x1) << 5);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vfp_vcvt_dp_sp (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111011101d110111aaaa101s11m0bbbb
	uint32_t inst = 0xeeb70ac0 | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vfp_vcvtb (
	uint16_t **address,
	unsigned int op,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111011101d11001oaaaa101001m0bbbb
	uint32_t inst = 0xeeb20a40 | ((op & 0x1) << 16) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vfp_vcvtt (
	uint16_t **address,
	unsigned int op,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111011101d11001oaaaa101011m0bbbb
	uint32_t inst = 0xeeb20ac0 | ((op & 0x1) << 16) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vfp_vdiv (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111011101a00bbbbcccc101sd0e0ffff
	uint32_t inst = 0xee800a00 | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vdup_scal (
	uint16_t **address,
	unsigned int q,
	unsigned int imm4,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111111111a11bbbbcccc11000de0ffff
	uint32_t inst = 0xffb00c00 | ((q & 0x1) << 6) | ((imm4 & 0xf) << 16) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vdup_core (
	uint16_t **address,
	unsigned int b,
	unsigned int e,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int rt
){
	// 111011101bq0aaaacccc1011d0e10000
	uint32_t inst = 0xee800b10 | ((b & 0x1) << 22) | ((e & 0x1) << 5) | ((q & 0x1) << 21) | ((d & 0x1) << 7) | ((vd & 0xf) << 16) | ((rt & 0xf) << 12);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_veor (
	uint16_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111111110a00bbbbcccc0001def1gggg
	uint32_t inst = 0xff000110 | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111011111a11bbbbccccddddefg0hhhh
	uint32_t inst = 0xefb00000 | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0) | ((imm4 & 0xf) << 8);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111011110a0sbbbbcccc1100nqm1dddd
	uint32_t inst = 0xef000c10 | ((size & 0x1) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111011110a1sbbbbcccc1100nqm1dddd
	uint32_t inst = 0xef200c10 | ((size & 0x1) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vfp_vfma (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111011101d10aaaabbbb101sn0m0cccc
	uint32_t inst = 0xeea00a00 | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vfp_vfms (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111011101d10aaaabbbb101sn1m0cccc
	uint32_t inst = 0xeea00a40 | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vfp_vfnma (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111011101d01aaaabbbb101sn0m0cccc
	uint32_t inst = 0xee900a00 | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vfp_vfnms (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111011101d01aaaabbbb101sn1m0cccc
	uint32_t inst = 0xee900a40 | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111a11110bccddddeeee0000fgh0iiii
	uint32_t inst = 0xef000000 | ((unsign & 0x1) << 28) | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111a11110bccddddeeee0010fgh0iiii
	uint32_t inst = 0xef000200 | ((unsign & 0x1) << 28) | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vldx_m (
	uint16_t **address,
	unsigned int opcode,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int rn,
	unsigned int align,
	unsigned int rm
){
	// 111110010a10bbbbccccddddeeffgggg
	uint32_t inst = 0xf9200000 | ((opcode & 0xf) << 8) | ((size & 0x3) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((rn & 0xf) << 16) | ((align & 0x3) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vldx_s_o (
	uint16_t **address,
	unsigned int opcode,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int rn,
	unsigned int index_align,
	unsigned int rm
){
	// 111110011a10bbbbccccddeeffffgggg
	uint32_t inst = 0xf9a00000 | ((opcode & 0x3) << 8) | ((size & 0x3) << 10) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((rn & 0xf) << 16) | ((index_align & 0xf) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111110011a10bbbbcccc11ddeetgffff
	uint32_t inst = 0xf9a00c00 | ((opcode & 0x3) << 8) | ((size & 0x3) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((inc & 0x1) << 5) | ((rn & 0xf) << 16) | ((align & 0x1) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vfp_vldm_dp (
	uint16_t **address,
	unsigned int p,
	unsigned int upwards,
	unsigned int writeback,
	unsigned int rn,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
){
	// 1110110pudw1aaaabbbb1011cccccccc
	uint32_t inst = 0xec100b00 | ((p & 0x1) << 24) | ((upwards & 0x1) << 23) | ((writeback & 0x1) << 21) | ((rn & 0xf) << 16) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vfp_vldm_sp (
	uint16_t **address,
	unsigned int p,
	unsigned int upwards,
	unsigned int writeback,
	unsigned int rn,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
){
	// 1110110pudw1aaaabbbb1010cccccccc
	uint32_t inst = 0xec100a00 | ((p & 0x1) << 24) | ((upwards & 0x1) << 23) | ((writeback & 0x1) << 21) | ((rn & 0xf) << 16) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vfp_vldr_dp (
	uint16_t **address,
	unsigned int upwards,
	unsigned int rn,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
){
	// 11101101ud01aaaabbbb1011cccccccc
	uint32_t inst = 0xed100b00 | ((upwards & 0x1) << 23) | ((rn & 0xf) << 16) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vfp_vldr_sp (
	uint16_t **address,
	unsigned int upwards,
	unsigned int rn,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
){
	// 11101101ud01aaaabbbb1010cccccccc
	uint32_t inst = 0xed100a00 | ((upwards & 0x1) << 23) | ((rn & 0xf) << 16) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111a11110bccddddeeee0110fgh0iiii
	uint32_t inst = 0xef000600 | ((unsign & 0x1) << 28) | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111a11110bccddddeeee0110fgh1iiii
	uint32_t inst = 0xef000610 | ((unsign & 0x1) << 28) | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111011110d0saaaabbbb1111nqm0cccc
	uint32_t inst = 0xef000f00 | ((size & 0x1) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111011110d1saaaabbbb1111nqm0cccc
	uint32_t inst = 0xef200f00 | ((size & 0x1) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111011110abbccccdddd1001efg0hhhh
	uint32_t inst = 0xef000900 | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111111110abbccccdddd1001efg0hhhh
	uint32_t inst = 0xff000900 | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111a11111bccddddeeee1000f0g0hhhh
	uint32_t inst = 0xef800800 | ((unsign & 0x1) << 28) | ((size & 0x3) << 20) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111a11111bccddddeeee1010f0g0hhhh
	uint32_t inst = 0xef800a00 | ((unsign & 0x1) << 28) | ((size & 0x3) << 20) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111011110a0sbbbbcccc1101def1gggg
	uint32_t inst = 0xef000d10 | ((size & 0x1) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111011110a1sbbbbcccc1101def1gggg
	uint32_t inst = 0xef200d10 | ((size & 0x1) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vfp_vmla_f (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111011100a00bbbbcccc101sd0e0ffff
	uint32_t inst = 0xee000a00 | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vfp_vmls_f (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111011100a00bbbbcccc101sd1e0ffff
	uint32_t inst = 0xee000a40 | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111a11111bccddddeeee000fg1h0iiii
	uint32_t inst = 0xef800040 | ((is_float & 0x1) << 8) | ((size & 0x3) << 20) | ((q & 0x1) << 28) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111a11111bccddddeeee010fg1h0iiii
	uint32_t inst = 0xef800440 | ((is_float & 0x1) << 8) | ((size & 0x3) << 20) | ((q & 0x1) << 28) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111a11111bccddddeeee0010f1g0hhhh
	uint32_t inst = 0xef800240 | ((unsign & 0x1) << 28) | ((size & 0x3) << 20) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111a11111bccddddeeee0110f1g0hhhh
	uint32_t inst = 0xef800640 | ((unsign & 0x1) << 28) | ((size & 0x3) << 20) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111a11111b000cccddddeeee0fg1hhhh
	uint32_t inst = 0xef800010 | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((op & 0x1) << 5) | ((cmode & 0xf) << 8) | ((i & 0x1) << 28) | ((imm3 & 0x7) << 16) | ((imm4 & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vfp_vmovi (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int imm4h,
	unsigned int imm4l
){
	// 111011101d11aaaabbbb101s0000cccc
	uint32_t inst = 0xeeb00a00 | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((imm4h & 0xf) << 16) | ((imm4l & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vfp_vmov (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111011101a110000bbbb101s01c0dddd
	uint32_t inst = 0xeeb00a40 | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vfp_vmov_core_scal (
	uint16_t **address,
	unsigned int d,
	unsigned int vd,
	unsigned int opc1,
	unsigned int opc2,
	unsigned int rt
){
	// 111011100ooaaaaabbbb1011dcc10000
	uint32_t inst = 0xee000b10 | ((d & 0x1) << 7) | ((vd & 0x1f) << 16) | ((opc1 & 0x3) << 21) | ((opc2 & 0x3) << 5) | ((rt & 0xf) << 12);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vfp_vmov_scal_core (
	uint16_t **address,
	unsigned int unsign,
	unsigned int rt,
	unsigned int n,
	unsigned int vn,
	unsigned int opc1,
	unsigned int opc2
){
	// 11101110uaa1bbbbcccc1011ndd10000
	uint32_t inst = 0xee100b10 | ((unsign & 0x1) << 23) | ((rt & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((opc1 & 0x3) << 21) | ((opc2 & 0x3) << 5);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vfp_vmov_core_sp (
	uint16_t **address,
	unsigned int op,
	unsigned int rt,
	unsigned int n,
	unsigned int vn
){
	// 11101110000oaaaabbbb1010n0010000
	uint32_t inst = 0xee000a10 | ((op & 0x1) << 20) | ((rt & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vfp_vmov_2core_2sp (
	uint16_t **address,
	unsigned int to_arm,
	unsigned int rt,
	unsigned int rt2,
	unsigned int m,
	unsigned int vm
){
	// 11101100010abbbbcccc101000d1eeee
	uint32_t inst = 0xec400a10 | ((to_arm & 0x1) << 20) | ((rt & 0xf) << 12) | ((rt2 & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vfp_vmov_2core_dp (
	uint16_t **address,
	unsigned int to_arm,
	unsigned int rt,
	unsigned int rt2,
	unsigned int m,
	unsigned int vm
){
	// 11101100010abbbbcccc101100d1eeee
	uint32_t inst = 0xec400b10 | ((to_arm & 0x1) << 20) | ((rt & 0xf) << 12) | ((rt2 & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vmovl (
	uint16_t **address,
	unsigned int op,
	unsigned int unsign,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111u11111daaa000bbbb101000m1cccc
	uint32_t inst = 0xef800a10 | ((op & 0x7) << 19) | ((unsign & 0x1) << 28) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vmovn (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111111111d11ss10aaaa001000m0bbbb
	uint32_t inst = 0xffb20200 | ((size & 0x3) << 18) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vfp_vmrs (
	uint16_t **address,
	unsigned int rt
){
	// 1110111011110001aaaa101000010000
	uint32_t inst = 0xeef10a10 | ((rt & 0xf) << 12);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vfp_vmsr (
	uint16_t **address,
	unsigned int rt
){
	// 1110111011100001aaaa101000010000
	uint32_t inst = 0xeee10a10 | ((rt & 0xf) << 12);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111o11110dssaaaabbbb1001nqm1cccc
	uint32_t inst = 0xef000910 | ((op & 0x1) << 28) | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111a11111bccddddeeee11f0g0h0iiii
	uint32_t inst = 0xef800c00 | ((op & 0x1) << 9) | ((unsign & 0x1) << 28) | ((size & 0x3) << 20) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111111110d0saaaabbbb1101nqm1cccc
	uint32_t inst = 0xff000d10 | ((size & 0x1) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vfp_vmul (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111011100d10aaaabbbb101sn0m0cccc
	uint32_t inst = 0xee200a00 | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111q11111dssaaaabbbb100fn1m0cccc
	uint32_t inst = 0xef800840 | ((is_float & 0x1) << 8) | ((size & 0x3) << 20) | ((q & 0x1) << 28) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111u11111dssaaaabbbb1010n1m0cccc
	uint32_t inst = 0xef800a40 | ((unsign & 0x1) << 28) | ((size & 0x3) << 20) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vmvni (
	uint16_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int cmode,
	unsigned int i,
	unsigned int imm3,
	unsigned int imm4
){
	// 111i11111d000aaabbbbcccc0q11eeee
	uint32_t inst = 0xef800030 | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((cmode & 0xf) << 8) | ((i & 0x1) << 28) | ((imm3 & 0x7) << 16) | ((imm4 & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vmvn (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111111111d11ss00aaaa01011qm0bbbb
	uint32_t inst = 0xffb00580 | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vneg (
	uint16_t **address,
	unsigned int is_float,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111111111d11ss01aaaa0f111qm0bbbb
	uint32_t inst = 0xffb10380 | ((is_float & 0x1) << 10) | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vfp_vneg (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111011101d110001aaaa101s01m0bbbb
	uint32_t inst = 0xeeb10a40 | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vfp_vnmla (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111011100a01bbbbcccc101sd1e0ffff
	uint32_t inst = 0xee100a40 | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vfp_vnmls (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111011100a01bbbbcccc101sd0e0ffff
	uint32_t inst = 0xee100a00 | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vfp_vnmul (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111011100a10bbbbcccc101sd1e0ffff
	uint32_t inst = 0xee200a40 | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vorn (
	uint16_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111011110a11bbbbcccc0001def1gggg
	uint32_t inst = 0xef300110 | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vorri (
	uint16_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int cmode,
	unsigned int i,
	unsigned int imm3,
	unsigned int imm4
){
	// 111i11111d000aaabbbbcccc0q01eeee
	uint32_t inst = 0xef800010 | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((cmode & 0xf) << 8) | ((i & 0x1) << 28) | ((imm3 & 0x7) << 16) | ((imm4 & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vorr (
	uint16_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111011110a10bbbbcccc0001def1gggg
	uint32_t inst = 0xef200110 | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vpadal (
	uint16_t **address,
	unsigned int unsign,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111111111d11ss00aaaa0110oqm0bbbb
	uint32_t inst = 0xffb00600 | ((unsign & 0x1) << 7) | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111011110dssaaaabbbb1011nqm1cccc
	uint32_t inst = 0xef000b10 | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111111110d0saaaabbbb1101nqm0cccc
	uint32_t inst = 0xff000d00 | ((size & 0x1) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vpaddl (
	uint16_t **address,
	unsigned int unsign,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111111111d11ss00aaaa0010oqm0bbbb
	uint32_t inst = 0xffb00200 | ((unsign & 0x1) << 7) | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111u11110dssaaaabbbb1010nqm0cccc
	uint32_t inst = 0xef000a00 | ((unsign & 0x1) << 28) | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111u11110dssaaaabbbb1010nqm1cccc
	uint32_t inst = 0xef000a10 | ((unsign & 0x1) << 28) | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111111110d0saaaabbbb1111nqm0cccc
	uint32_t inst = 0xff000f00 | ((size & 0x1) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111111110d1saaaabbbb1111nqm0cccc
	uint32_t inst = 0xff200f00 | ((size & 0x1) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vfp_vpop (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int regs
){
	// 111011001d111101aaaa101sbbbbbbbb
	uint32_t inst = 0xecbd0a00 | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((regs & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vfp_vpush (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int regs
){
	// 111011010d101101aaaa101sbbbbbbbb
	uint32_t inst = 0xed2d0a00 | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((regs & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vqabs (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111111111d11ss00aaaa01110qm0bbbb
	uint32_t inst = 0xffb00700 | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111a11110bccddddeeee0000fgh1iiii
	uint32_t inst = 0xef000010 | ((unsign & 0x1) << 28) | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vqdmlal_i (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111011111dssaaaabbbb1001n0m0cccc
	uint32_t inst = 0xef800900 | ((size & 0x3) << 20) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vqdmlsl_i (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111011111dssaaaabbbb1011n0m0cccc
	uint32_t inst = 0xef800b00 | ((size & 0x3) << 20) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vqdmlal_scal (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111011111dssaaaabbbb0011n1m0cccc
	uint32_t inst = 0xef800340 | ((size & 0x3) << 20) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vqdmlsl_scal (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111011111dssaaaabbbb0111n1m0cccc
	uint32_t inst = 0xef800740 | ((size & 0x3) << 20) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111011110dssaaaabbbb1011nqm0cccc
	uint32_t inst = 0xef000b00 | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111q11111dssaaaabbbb1100n1m0cccc
	uint32_t inst = 0xef800c40 | ((size & 0x3) << 20) | ((q & 0x1) << 28) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vqdmull_i (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111011111dssaaaabbbb1101n0m0cccc
	uint32_t inst = 0xef800d00 | ((size & 0x3) << 20) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vqdmull_scal (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111011111dssaaaabbbb1011n1m0cccc
	uint32_t inst = 0xef800b40 | ((size & 0x3) << 20) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vqmovn (
	uint16_t **address,
	unsigned int unsign,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111111111a11bb10cccc00101de0ffff
	uint32_t inst = 0xffb20280 | ((unsign & 0x1) << 6) | ((size & 0x3) << 18) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vqmovun (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111111111a11bb10cccc001001d0ffff
	uint32_t inst = 0xffb20240 | ((size & 0x3) << 18) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vqneg (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111111111d11ss00aaaa01111qm0bbbb
	uint32_t inst = 0xffb00780 | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111111110dssaaaabbbb1011nqm0cccc
	uint32_t inst = 0xff000b00 | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111q11111dssaaaabbbb1101n1m0cccc
	uint32_t inst = 0xef800d40 | ((size & 0x3) << 20) | ((q & 0x1) << 28) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111u11110dssaaaabbbb0101nqm1cccc
	uint32_t inst = 0xef000510 | ((unsign & 0x1) << 28) | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vqrshrn (
	uint16_t **address,
	unsigned int unsign,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
){
	// 111a11111bccccccdddd100101e1ffff
	uint32_t inst = 0xef800950 | ((unsign & 0x1) << 28) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0) | ((imm6 & 0x3f) << 16);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vqrshrun (
	uint16_t **address,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
){
	// 111111111abbbbbbcccc100001d1eeee
	uint32_t inst = 0xff800850 | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0) | ((imm6 & 0x3f) << 16);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111u11110dssaaaabbbb0100nqm1cccc
	uint32_t inst = 0xef000410 | ((unsign & 0x1) << 28) | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0) | ((n & 0x1) << 7) | ((vn & 0xf) << 16);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111u11111daaaaaabbbb0111lqm1cccc
	uint32_t inst = 0xef800710 | ((unsign & 0x1) << 28) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0) | ((l & 0x1) << 7) | ((imm6 & 0x3f) << 16);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vqshlui (
	uint16_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int l,
	unsigned int imm6
){
	// 111111111daaaaaabbbb0110lqm1cccc
	uint32_t inst = 0xff800610 | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0) | ((l & 0x1) << 7) | ((imm6 & 0x3f) << 16);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vqshrn (
	uint16_t **address,
	unsigned int unsign,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
){
	// 111u11111daaaaaabbbb100100m1cccc
	uint32_t inst = 0xef800910 | ((unsign & 0x1) << 28) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0) | ((imm6 & 0x3f) << 16);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vqshrun (
	uint16_t **address,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
){
	// 111111111daaaaaabbbb100000m1cccc
	uint32_t inst = 0xff800810 | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0) | ((imm6 & 0x3f) << 16);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111a11110bccddddeeee0010fgh1iiii
	uint32_t inst = 0xef000210 | ((unsign & 0x1) << 28) | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vraddhn (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111111111dssaaaabbbb0100n0m0cccc
	uint32_t inst = 0xff800400 | ((size & 0x3) << 20) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vrecpe (
	uint16_t **address,
	unsigned int is_float,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111111111d11ss11aaaa010f0qm0bbbb
	uint32_t inst = 0xffb30400 | ((is_float & 0x1) << 8) | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111011110d0saaaabbbb1111nqm1cccc
	uint32_t inst = 0xef000f10 | ((size & 0x1) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vrev16 (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111111111d11ss00aaaa00010qm0bbbb
	uint32_t inst = 0xffb00100 | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vrev32 (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111111111d11ss00aaaa00001qm0bbbb
	uint32_t inst = 0xffb00080 | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vrev64 (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111111111d11ss00aaaa00000qm0bbbb
	uint32_t inst = 0xffb00000 | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111u11110bccddddeeee0001fgh0iiii
	uint32_t inst = 0xef000100 | ((unsign & 0x1) << 28) | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111u11110dssaaaabbbb0101nqm0cccc
	uint32_t inst = 0xef000500 | ((unsign & 0x1) << 28) | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111a11111bccccccdddd0010efg1hhhh
	uint32_t inst = 0xef800210 | ((unsign & 0x1) << 28) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0) | ((l & 0x1) << 7) | ((imm6 & 0x3f) << 16);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vrshrn (
	uint16_t **address,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
){
	// 111011111abbbbbbcccc100001d1eeee
	uint32_t inst = 0xef800850 | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0) | ((imm6 & 0x3f) << 16);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vrsqrte (
	uint16_t **address,
	unsigned int is_float,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111111111d11ss11aaaa010f1qm0bbbb
	uint32_t inst = 0xffb30480 | ((is_float & 0x1) << 8) | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111011110d1saaaabbbb1111nqm1cccc
	uint32_t inst = 0xef200f10 | ((size & 0x1) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111u11111daaaaaabbbb0011lqm1cccc
	uint32_t inst = 0xef800310 | ((unsign & 0x1) << 28) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0) | ((l & 0x1) << 7) | ((imm6 & 0x3f) << 16);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vrsubhn (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111111111dssaaaabbbb0110n0m0cccc
	uint32_t inst = 0xff800600 | ((size & 0x3) << 20) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111a11110bccddddeeee0100fgh0iiii
	uint32_t inst = 0xef000400 | ((unsign & 0x1) << 28) | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vshli (
	uint16_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int l,
	unsigned int imm6
){
	// 111011111abbbbbbcccc0101def1gggg
	uint32_t inst = 0xef800510 | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0) | ((l & 0x1) << 7) | ((imm6 & 0x3f) << 16);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vshll (
	uint16_t **address,
	unsigned int unsign,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
){
	// 111a11111bccccccdddd101000e1ffff
	uint32_t inst = 0xef800a10 | ((unsign & 0x1) << 28) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0) | ((imm6 & 0x3f) << 16);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vshll2 (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111111111d11ss10aaaa001100m0bbbb
	uint32_t inst = 0xffb20300 | ((size & 0x3) << 18) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111a11111bccccccdddd0000efg1hhhh
	uint32_t inst = 0xef800010 | ((unsign & 0x1) << 28) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0) | ((l & 0x1) << 7) | ((imm6 & 0x3f) << 16);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vshrn (
	uint16_t **address,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int imm6
){
	// 111011111daaaaaabbbb100000m1cccc
	uint32_t inst = 0xef800810 | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0) | ((imm6 & 0x3f) << 16);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vsli (
	uint16_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int l,
	unsigned int imm6
){
	// 111111111abbbbbbcccc0101def1gggg
	uint32_t inst = 0xff800510 | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0) | ((l & 0x1) << 7) | ((imm6 & 0x3f) << 16);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vfp_vsqrt (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111011101d110001aaaa101s11m0bbbb
	uint32_t inst = 0xeeb10ac0 | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111u11111daaaaaabbbb0001lqm1cccc
	uint32_t inst = 0xef800110 | ((unsign & 0x1) << 28) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0) | ((l & 0x1) << 7) | ((imm6 & 0x3f) << 16);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vsri (
	uint16_t **address,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm,
	unsigned int l,
	unsigned int imm6
){
	// 111111111daaaaaabbbb0100lqm1cccc
	uint32_t inst = 0xff800410 | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0) | ((l & 0x1) << 7) | ((imm6 & 0x3f) << 16);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vstx_m (
	uint16_t **address,
	unsigned int opcode,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int rn,
	unsigned int align,
	unsigned int rm
){
	// 111110010a00bbbbccccddddeeffgggg
	uint32_t inst = 0xf9000000 | ((opcode & 0xf) << 8) | ((size & 0x3) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((rn & 0xf) << 16) | ((align & 0x3) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vstx_s_o (
	uint16_t **address,
	unsigned int opcode,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int rn,
	unsigned int index_align,
	unsigned int rm
){
	// 111110011a00bbbbccccddeeffffgggg
	uint32_t inst = 0xf9800000 | ((opcode & 0x3) << 8) | ((size & 0x3) << 10) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((rn & 0xf) << 16) | ((index_align & 0xf) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vfp_vstm_dp (
	uint16_t **address,
	unsigned int p,
	unsigned int upwards,
	unsigned int writeback,
	unsigned int rn,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
){
	// 1110110pudw0aaaabbbb1011cccccccc
	uint32_t inst = 0xec000b00 | ((p & 0x1) << 24) | ((upwards & 0x1) << 23) | ((writeback & 0x1) << 21) | ((rn & 0xf) << 16) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vfp_vstm_sp (
	uint16_t **address,
	unsigned int p,
	unsigned int upwards,
	unsigned int writeback,
	unsigned int rn,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
){
	// 1110110pudw0aaaabbbb1010cccccccc
	uint32_t inst = 0xec000a00 | ((p & 0x1) << 24) | ((upwards & 0x1) << 23) | ((writeback & 0x1) << 21) | ((rn & 0xf) << 16) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vfp_vstr_dp (
	uint16_t **address,
	unsigned int upwards,
	unsigned int rn,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
){
	// 11101101ud00aaaabbbb1011cccccccc
	uint32_t inst = 0xed000b00 | ((upwards & 0x1) << 23) | ((rn & 0xf) << 16) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vfp_vstr_sp (
	uint16_t **address,
	unsigned int upwards,
	unsigned int rn,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
){
	// 11101101ud00aaaabbbb1010cccccccc
	uint32_t inst = 0xed000a00 | ((upwards & 0x1) << 23) | ((rn & 0xf) << 16) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111111110dssaaaabbbb1000nqm0cccc
	uint32_t inst = 0xff000800 | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111011110d1saaaabbbb1101nqm0cccc
	uint32_t inst = 0xef200d00 | ((size & 0x1) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vfp_vsub (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111011100d11aaaabbbb101sn1m0cccc
	uint32_t inst = 0xee300a40 | ((size & 0x1) << 8) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vsubhn (
	uint16_t **address,
	unsigned int size,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int m,
	unsigned int vm
){
	// 111011111abbccccdddd0110e0f0gggg
	uint32_t inst = 0xef800600 | ((size & 0x3) << 20) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111a11111bccddddeeee0010f0g0hhhh
	uint32_t inst = 0xef800200 | ((unsign & 0x1) << 28) | ((size & 0x3) << 20) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111a11111bccddddeeee0011f0g0hhhh
	uint32_t inst = 0xef800300 | ((unsign & 0x1) << 28) | ((size & 0x3) << 20) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vswp (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111111111d11ss10aaaa00000qm0bbbb
	uint32_t inst = 0xffb20000 | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vtbl (
	uint16_t **address,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int len,
	unsigned int m,
	unsigned int vm
){
	// 111111111d11aaaabbbb10ccn0m0eeee
	uint32_t inst = 0xffb00800 | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((len & 0x3) << 8) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vtbx (
	uint16_t **address,
	unsigned int d,
	unsigned int vd,
	unsigned int n,
	unsigned int vn,
	unsigned int len,
	unsigned int m,
	unsigned int vm
){
	// 111111111d11aaaabbbb10ccn1m0eeee
	uint32_t inst = 0xffb00840 | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((len & 0x3) << 8) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vtrn (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111111111a11bb10cccc00001de0ffff
	uint32_t inst = 0xffb20080 | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111011110dssaaaabbbb1000nqm1cccc
	uint32_t inst = 0xef000810 | ((size & 0x3) << 20) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vuzp (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111111111d11ss10aaaa00010qm0bbbb
	uint32_t inst = 0xffb20100 | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_neon_vzip (
	uint16_t **address,
	unsigned int size,
	unsigned int q,
	unsigned int d,
	unsigned int vd,
	unsigned int m,
	unsigned int vm
){
	// 111111111d11ss10aaaa00011qm0bbbb
	uint32_t inst = 0xffb20180 | ((size & 0x3) << 18) | ((q & 0x1) << 6) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111111100abbccccdddd101sn0m0eeee
	uint32_t inst = 0xfe000a00 | ((size & 0x1) << 8) | ((cond & 0x3) << 20) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((n & 0x1) << 7) | ((vn & 0xf) << 16) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_shift_i_mov_16 (
	uint16_t **address,
	unsigned int opcode,
	unsigned int imm5,
	unsigned int rm,
	unsigned int rd
){
	// 000aabbbbbcccddd
	uint16_t inst = 0x0 | ((opcode & 0x3) << 11) | ((imm5 & 0x1f) << 6) | ((rm & 0x7) << 3) | ((rd & 0x7) << 0);
	**address = inst;
}
void thumb_add_sub_16 (
	uint16_t **address,
	unsigned int opcode,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
){
	// 000110abbbcccddd
	uint16_t inst = 0x1800 | ((opcode & 0x1) << 9) | ((rm & 0x7) << 6) | ((rn & 0x7) << 3) | ((rd & 0x7) << 0);
	**address = inst;
}
void thumb_add_sub_i_16 (
	uint16_t **address,
	unsigned int opcode,
	unsigned int imm3,
	unsigned int rn,
	unsigned int rd
){
	// 000111abbbcccddd
	uint16_t inst = 0x1c00 | ((opcode & 0x1) << 9) | ((imm3 & 0x7) << 6) | ((rn & 0x7) << 3) | ((rd & 0x7) << 0);
	**address = inst;
}
void thumb_add_sub_comp_mov_i_16 (
	uint16_t **address,
	unsigned int opcode,
	unsigned int rdn,
	unsigned int imm8
){
	// 001aabbbcccccccc
	uint16_t inst = 0x2000 | ((opcode & 0x3) << 11) | ((rdn & 0x7) << 8) | ((imm8 & 0xff) << 0);
	**address = inst;
}
void thumb_data_proc_16 (
	uint16_t **address,
	unsigned int opcode,
	unsigned int rm,
	unsigned int rdn
){
	// 010000aaaabbbccc
	uint16_t inst = 0x4000 | ((opcode & 0xf) << 6) | ((rm & 0x7) << 3) | ((rdn & 0x7) << 0);
	**address = inst;
}
void thumb_special_data_proc_16 (
	uint16_t **address,
	unsigned int opcode,
	unsigned int dn,
	unsigned int rm,
	unsigned int rdn
){
	// 010001aabccccddd
	uint16_t inst = 0x4400 | ((opcode & 0x3) << 8) | ((dn & 0x1) << 7) | ((rm & 0xf) << 3) | ((rdn & 0x7) << 0);
	**address = inst;
}
void thumb_bx_16 (
	uint16_t **address,
	unsigned int link,
	unsigned int rm
){
	// 01000111abbbb000
	uint16_t inst = 0x4700 | ((link & 0x1) << 7) | ((rm & 0xf) << 3);
	**address = inst;
}
void thumb_load_lit_16 (
	uint16_t **address,
	unsigned int rd,
	unsigned int imm8
){
	// 01001aaabbbbbbbb
	uint16_t inst = 0x4800 | ((rd & 0x7) << 8) | ((imm8 & 0xff) << 0);
	**address = inst;
}
void thumb_load_store_reg_offset_16 (
	uint16_t **address,
	unsigned int opcode,
	unsigned int rm,
	unsigned int rn,
	unsigned int rd
){
	// 0101aaabbbcccddd
	uint16_t inst = 0x5000 | ((opcode & 0x7) << 9) | ((rm & 0x7) << 6) | ((rn & 0x7) << 3) | ((rd & 0x7) << 0);
	**address = inst;
}
void thumb_load_store_byte_word_i_16 (
	uint16_t **address,
	unsigned int byte,
	unsigned int load,
	unsigned int imm5,
	unsigned int rn,
	unsigned int rd
){
	// 011abcccccdddeee
	uint16_t inst = 0x6000 | ((byte & 0x1) << 12) | ((load & 0x1) << 11) | ((imm5 & 0x1f) << 6) | ((rn & 0x7) << 3) | ((rd & 0x7) << 0);
	**address = inst;
}
void thumb_load_store_halfword_i_16 (
	uint16_t **address,
	unsigned int load,
	unsigned int imm5,
	unsigned int rn,
	unsigned int rd
){
	// 1000abbbbbcccddd
	uint16_t inst = 0x8000 | ((load & 0x1) << 11) | ((imm5 & 0x1f) << 6) | ((rn & 0x7) << 3) | ((rd & 0x7) << 0);
	**address = inst;
}
void thumb_load_store_stack_16 (
	uint16_t **address,
	unsigned int load,
	unsigned int rd,
	unsigned int imm8
){
	// 1001abbbcccccccc
	uint16_t inst = 0x9000 | ((load & 0x1) << 11) | ((rd & 0x7) << 8) | ((imm8 & 0xff) << 0);
	**address = inst;
}
void thumb_add_sp_pc_16 (
	uint16_t **address,
	unsigned int sp,
	unsigned int rd,
	unsigned int imm8
){
	// 1010abbbcccccccc
	uint16_t inst = 0xa000 | ((sp & 0x1) << 11) | ((rd & 0x7) << 8) | ((imm8 & 0xff) << 0);
	**address = inst;
}
void thumb_misc_add_sub_sp_i_16 (
	uint16_t **address,
	unsigned int opcode,
	unsigned int imm7
){
	// 10110000abbbbbbb
	uint16_t inst = 0xb000 | ((opcode & 0x1) << 7) | ((imm7 & 0x7f) << 0);
	**address = inst;
}
void thumb_misc_sign_zero_extend_16 (
	uint16_t **address,
	unsigned int opcode,
	unsigned int rm,
	unsigned int rd
){
	// 10110010aabbbccc
	uint16_t inst = 0xb200 | ((opcode & 0x3) << 6) | ((rm & 0x7) << 3) | ((rd & 0x7) << 0);
	**address = inst;
}
void thumb_misc_cbz_16 (
	uint16_t **address,
	unsigned int n,
	unsigned int imm1,
	unsigned int imm5,
	unsigned int rn
){
	// 1011a0b1cccccddd
	uint16_t inst = 0xb100 | ((n & 0x1) << 11) | ((imm1 & 0x1) << 9) | ((imm5 & 0x1f) << 3) | ((rn & 0x7) << 0);
	**address = inst;
}
void thumb_misc_push_pop_16 (
	uint16_t **address,
	unsigned int opcode,
	unsigned int reg
){
	// 1011aaabbbbbbbbb
	uint16_t inst = 0xb000 | ((opcode & 0x7) << 9) | ((reg & 0x1ff) << 0);
	**address = inst;
}
void thumb_misc_rev_16 (
	uint16_t **address,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd
){
	// 10111010aabbbccc
	uint16_t inst = 0xba00 | ((opcode & 0x3) << 6) | ((rn & 0x7) << 3) | ((rd & 0x7) << 0);
	**address = inst;
}
void thumb_misc_if_then_16 (
	uint16_t **address,
	unsigned int cond,
	unsigned int mask
){
	// 10111111aaaabbbb
	uint16_t inst = 0xbf00 | ((cond & 0xf) << 4) | ((mask & 0xf) << 0);
	**address = inst;
}
void thumb_misc_nop_16 (
	uint16_t **address,
	unsigned int hint
){
	// 10111111aaaa0000
	uint16_t inst = 0xbf00 | ((hint & 0xf) << 4);
	**address = inst;
}
void thumb_load_store_multiple_16 (
	uint16_t **address,
	unsigned int load,
	unsigned int rn,
	unsigned int reglist
){
	// 1100abbbcccccccc
	uint16_t inst = 0xc000 | ((load & 0x1) << 11) | ((rn & 0x7) << 8) | ((reglist & 0xff) << 0);
	**address = inst;
}
void thumb_cond_branch_16 (
	uint16_t **address,
	unsigned int condition,
	unsigned int imm8
){
	// 1101aaaabbbbbbbb
	uint16_t inst = 0xd000 | ((condition & 0xf) << 8) | ((imm8 & 0xff) << 0);
	**address = inst;
}
void thumb_svc_16 (
	uint16_t **address,
	unsigned int imm8
){
	// 11011111aaaaaaaa
	uint16_t inst = 0xdf00 | ((imm8 & 0xff) << 0);
	**address = inst;
}
void thumb_uncond_branch_16 (
	uint16_t **address,
	unsigned int imm11
){
	// 11100aaaaaaaaaaa
	uint16_t inst = 0xe000 | ((imm11 & 0x7ff) << 0);
	**address = inst;
}
void thumb_data_proc_12bit_i_32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int opcode,
	unsigned int set_condition,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
){
	// 11110abbbbbcdddd0eeeffffgggggggg
	uint32_t inst = 0xf0000000 | ((imm1 & 0x1) << 26) | ((opcode & 0x1f) << 21) | ((set_condition & 0x1) << 20) | ((rn & 0xf) << 16) | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_data_proc_12bit_i_plain_32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int opcode,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
){
	// 11110a10bbbbcccc0dddeeeeffffffff
	uint32_t inst = 0xf2000000 | ((imm1 & 0x1) << 26) | ((opcode & 0xf) << 20) | ((rn & 0xf) << 16) | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_data_proc_16bit_i_32 (
	uint16_t **address,
	unsigned int imm1,
	unsigned int opcode,
	unsigned int imm4,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm8
){
	// 11110abbbbbbcccc0dddeeeeffffffff
	uint32_t inst = 0xf0000000 | ((imm1 & 0x1) << 26) | ((opcode & 0x3f) << 20) | ((imm4 & 0xf) << 16) | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_data_proc_bit_field (
	uint16_t **address,
	unsigned int opcode,
	unsigned int rn,
	unsigned int imm3,
	unsigned int rd,
	unsigned int imm2,
	unsigned int imm5
){
	// 11110011aaabbbbb0cccddddee0fffff
	uint32_t inst = 0xf3000000 | ((opcode & 0x7) << 21) | ((rn & 0x1f) << 16) | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm2 & 0x3) << 6) | ((imm5 & 0x1f) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 1110101aaaabcccc0dddeeeeffgghhhh
	uint32_t inst = 0xea000000 | ((opcode & 0xf) << 21) | ((set_flags & 0x1) << 20) | ((rn & 0xf) << 16) | ((imm3 & 0x7) << 12) | ((rd & 0xf) << 8) | ((imm2 & 0x3) << 6) | ((shift_type & 0x3) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_data_proc_reg_shift (
	uint16_t **address,
	unsigned int opcode,
	unsigned int set_flags,
	unsigned int rn,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
){
	// 111110100aabcccc1111dddd0eeeffff
	uint32_t inst = 0xfa00f000 | ((opcode & 0x3) << 21) | ((set_flags & 0x1) << 20) | ((rn & 0xf) << 16) | ((rd & 0xf) << 8) | ((opcode2 & 0x7) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_data_proc_sign_zero_ext (
	uint16_t **address,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd,
	unsigned int rotate,
	unsigned int rm
){
	// 111110100aaabbbb1111cccc10ddeeee
	uint32_t inst = 0xfa00f080 | ((opcode & 0x7) << 20) | ((rn & 0xf) << 16) | ((rd & 0xf) << 8) | ((rotate & 0x3) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_data_proc_simd_add_sub (
	uint16_t **address,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd,
	unsigned int pref,
	unsigned int rm
){
	// 111110101aaabbbb1111cccc0dddeeee
	uint32_t inst = 0xfa80f000 | ((opcode & 0x7) << 20) | ((rn & 0xf) << 16) | ((rd & 0xf) << 8) | ((pref & 0x7) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_data_proc_other_3reg (
	uint16_t **address,
	unsigned int opcode,
	unsigned int rn,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
){
	// 111110101aaabbbb1111cccc1dddeeee
	uint32_t inst = 0xfa80f080 | ((opcode & 0x7) << 20) | ((rn & 0xf) << 16) | ((rd & 0xf) << 8) | ((opcode2 & 0x7) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_data_proc_32_mult (
	uint16_t **address,
	unsigned int opcode,
	unsigned int rn,
	unsigned int racc,
	unsigned int rd,
	unsigned int opcode2,
	unsigned int rm
){
	// 111110110aaabbbbccccddddeeeeffff
	uint32_t inst = 0xfb000000 | ((opcode & 0x7) << 20) | ((rn & 0xf) << 16) | ((racc & 0xf) << 12) | ((rd & 0xf) << 8) | ((opcode2 & 0xf) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111110111aaabbbbccccddddeefghhhh
	uint32_t inst = 0xfb800000 | ((opcode & 0x7) << 20) | ((rn & 0xf) << 16) | ((rdlo & 0xf) << 12) | ((rdhi & 0xf) << 8) | ((opcode2 & 0x3) << 6) | ((n_high & 0x1) << 5) | ((m_swap & 0x1) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_load_store_single_reg_imm12_32 (
	uint16_t **address,
	unsigned int sign_ext,
	unsigned int upwards,
	unsigned int size,
	unsigned int load_store,
	unsigned int rn,
	unsigned int rt,
	unsigned int imm12
){
	// 1111100abccdeeeeffffgggggggggggg
	uint32_t inst = 0xf8000000 | ((sign_ext & 0x1) << 24) | ((upwards & 0x1) << 23) | ((size & 0x3) << 21) | ((load_store & 0x1) << 20) | ((rn & 0xf) << 16) | ((rt & 0xf) << 12) | ((imm12 & 0xfff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_load_store_single_reg_off_32 (
	uint16_t **address,
	unsigned int sign_ext,
	unsigned int size,
	unsigned int load_store,
	unsigned int rn,
	unsigned int rt,
	unsigned int shift,
	unsigned int rm
){
	// 1111100a0bbcddddeeee000000ffgggg
	uint32_t inst = 0xf8000000 | ((sign_ext & 0x1) << 24) | ((size & 0x3) << 21) | ((load_store & 0x1) << 20) | ((rn & 0xf) << 16) | ((rt & 0xf) << 12) | ((shift & 0x3) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_pld_t2_32 (
	uint16_t **address,
	unsigned int sign_ext,
	unsigned int size,
	unsigned int load_store,
	unsigned int rn,
	unsigned int rt,
	unsigned int opcode,
	unsigned int imm8
){
	// 1111100a0bbcddddeeeeffffgggggggg
	uint32_t inst = 0xf8000000 | ((sign_ext & 0x1) << 24) | ((size & 0x3) << 21) | ((load_store & 0x1) << 20) | ((rn & 0xf) << 16) | ((rt & 0xf) << 12) | ((opcode & 0xf) << 8) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 1110100ab1cdeeeeffffgggghhhhhhhh
	uint32_t inst = 0xe8400000 | ((pre_index & 0x1) << 24) | ((upwards & 0x1) << 23) | ((writeback & 0x1) << 21) | ((load_store & 0x1) << 20) | ((rn & 0xf) << 16) | ((rt & 0xf) << 12) | ((rd & 0xf) << 8) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 1110100ab1cdeeeeffffgggghhhhiiii
	uint32_t inst = 0xe8400000 | ((pre_index & 0x1) << 24) | ((upwards & 0x1) << 23) | ((writeback & 0x1) << 21) | ((load_store & 0x1) << 20) | ((rn & 0xf) << 16) | ((rt & 0xf) << 12) | ((rd & 0xf) << 8) | ((opcode & 0xf) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_load_store_multiple32 (
	uint16_t **address,
	unsigned int opcode,
	unsigned int writeback,
	unsigned int load,
	unsigned int rn,
	unsigned int reglist
){
	// 1110100aaabcddddeeeeeeeeeeeeeeee
	uint32_t inst = 0xe8000000 | ((opcode & 0x7) << 22) | ((writeback & 0x1) << 21) | ((load & 0x1) << 20) | ((rn & 0xf) << 16) | ((reglist & 0xffff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_branch32 (
	uint16_t **address,
	unsigned int sign_bit,
	unsigned int offset_high,
	unsigned int link,
	unsigned int j1,
	unsigned int thumb_mode,
	unsigned int j2,
	unsigned int offset_low
){
	// 11110abbbbbbbbbb1cdefggggggggggg
	uint32_t inst = 0xf0008000 | ((sign_bit & 0x1) << 26) | ((offset_high & 0x3ff) << 16) | ((link & 0x1) << 14) | ((j1 & 0x1) << 13) | ((thumb_mode & 0x1) << 12) | ((j2 & 0x1) << 11) | ((offset_low & 0x7ff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_branch_cond32 (
	uint16_t **address,
	unsigned int sign_bit,
	unsigned int condition,
	unsigned int offset_high,
	unsigned int j1,
	unsigned int j2,
	unsigned int offset_low
){
	// 11110abbbbcccccc10d0efffffffffff
	uint32_t inst = 0xf0008000 | ((sign_bit & 0x1) << 26) | ((condition & 0xf) << 22) | ((offset_high & 0x3f) << 16) | ((j1 & 0x1) << 13) | ((j2 & 0x1) << 11) | ((offset_low & 0x7ff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_special_control (
	uint16_t **address,
	unsigned int opcode,
	unsigned int option
){
	// 111100111011111110001111aaaabbbb
	uint32_t inst = 0xf3bf8f00 | ((opcode & 0xf) << 4) | ((option & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_status_reg_access (
	uint16_t **address,
	unsigned int opcode,
	unsigned int s_or_c,
	unsigned int rn,
	unsigned int rd
){
	// 111100111aabcccc1000dddd00000000
	uint32_t inst = 0xf3808000 | ((opcode & 0x3) << 21) | ((s_or_c & 0x1) << 20) | ((rn & 0xf) << 16) | ((rd & 0xf) << 8);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_coproc_proc (
	uint16_t **address,
	unsigned int opc1,
	unsigned int crn,
	unsigned int crd,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
){
	// 11101110aaaabbbbccccddddeee0ffff
	uint32_t inst = 0xee000000 | ((opc1 & 0xf) << 20) | ((crn & 0xf) << 16) | ((crd & 0xf) << 12) | ((coproc & 0xf) << 8) | ((opc2 & 0x7) << 5) | ((crm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_coproc_trans (
	uint16_t **address,
	unsigned int opc1,
	unsigned int load,
	unsigned int crn,
	unsigned int rt,
	unsigned int coproc,
	unsigned int opc2,
	unsigned int crm
){
	// 11101110aaabccccddddeeeefff1gggg
	uint32_t inst = 0xee000010 | ((opc1 & 0x7) << 21) | ((load & 0x1) << 20) | ((crn & 0xf) << 16) | ((rt & 0xf) << 12) | ((coproc & 0xf) << 8) | ((opc2 & 0x7) << 5) | ((crm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111011aaaaabccccdddd101efgh1iiii
	uint32_t inst = 0xec000a10 | ((opcode & 0x1f) << 21) | ((to_arm & 0x1) << 20) | ((rt2 & 0xf) << 16) | ((rt & 0xf) << 12) | ((double_single & 0x1) << 8) | ((n & 0x1) << 7) | ((f2 & 0x1) << 6) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 1110111aabccddddeeeeffffghijkkkk
	uint32_t inst = 0xee000000 | ((type & 0x3) << 23) | ((d & 0x1) << 22) | ((opcode & 0x3) << 20) | ((vm2 & 0xf) << 16) | ((vd & 0xf) << 12) | ((opcode2 & 0xf) << 8) | ((m2 & 0x1) << 7) | ((q & 0x1) << 6) | ((m & 0x1) << 5) | ((opcode3 & 0x1) << 4) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111a11111b000cccddddeeee0fg1hhhh
	uint32_t inst = 0xef800010 | ((i & 0x1) << 28) | ((d & 0x1) << 22) | ((imm3 & 0x7) << 16) | ((vd & 0xf) << 12) | ((cmode & 0xf) << 8) | ((q & 0x1) << 6) | ((op & 0x1) << 5) | ((imm4 & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vmovi (
	uint16_t **address,
	unsigned int d,
	unsigned int immh,
	unsigned int vd,
	unsigned int sz,
	unsigned int imml
){
	// 111011101a11bbbbcccc101d0000eeee
	uint32_t inst = 0xeeb00a00 | ((d & 0x1) << 22) | ((immh & 0xf) << 16) | ((vd & 0xf) << 12) | ((sz & 0x1) << 8) | ((imml & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vfp_ldr_str (
	uint16_t **address,
	unsigned int upwards,
	unsigned int d,
	unsigned int load_store,
	unsigned int rn,
	unsigned int vd,
	unsigned int double_reg,
	unsigned int imm8
){
	// 11101101ab0cddddeeee101fgggggggg
	uint32_t inst = 0xed000a00 | ((upwards & 0x1) << 23) | ((d & 0x1) << 22) | ((load_store & 0x1) << 20) | ((rn & 0xf) << 16) | ((vd & 0xf) << 12) | ((double_reg & 0x1) << 8) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vcmp (
	uint16_t **address,
	unsigned int d,
	unsigned int empty,
	unsigned int vd,
	unsigned int sz,
	unsigned int e,
	unsigned int m,
	unsigned int vm
){
	// 111011101a11010bcccc101de1f0gggg
	uint32_t inst = 0xeeb40a40 | ((d & 0x1) << 22) | ((empty & 0x1) << 16) | ((vd & 0xf) << 12) | ((sz & 0x1) << 8) | ((e & 0x1) << 7) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 1110110abcdeffffgggg101hiiiiiiii
	uint32_t inst = 0xec000a00 | ((p & 0x1) << 24) | ((upwards & 0x1) << 23) | ((d & 0x1) << 22) | ((writeback & 0x1) << 21) | ((load_store & 0x1) << 20) | ((rn & 0xf) << 16) | ((vd & 0xf) << 12) | ((double_prec & 0x1) << 8) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111a111b0cddeeeeffffgggghij0kkkk
	uint32_t inst = 0xee000000 | ((sub_add & 0x1) << 28) | ((single_prec & 0x1) << 24) | ((d & 0x1) << 22) | ((sz & 0x3) << 20) | ((vn & 0xf) << 16) | ((vd & 0xf) << 12) | ((opcode & 0xf) << 8) | ((n & 0x1) << 7) | ((q & 0x1) << 6) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 1110111a1b11cc01ddddef1ghij0kkkk
	uint32_t inst = 0xeeb10200 | ((single_prec & 0x1) << 24) | ((d & 0x1) << 22) | ((size & 0x3) << 18) | ((vd & 0xf) << 12) | ((double_prec & 0x1) << 11) | ((f & 0x1) << 10) | ((f5 & 0x1) << 8) | ((sz & 0x1) << 7) | ((q & 0x1) << 6) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111a111bcdeeffffgggghijklmnopppp
	uint32_t inst = 0xee000000 | ((op & 0x1) << 28) | ((opcode2 & 0x1) << 24) | ((scalar & 0x1) << 23) | ((d & 0x1) << 22) | ((size & 0x3) << 20) | ((vn & 0xf) << 16) | ((vd & 0xf) << 12) | ((f2 & 0x1) << 11) | ((opcode3 & 0x1) << 10) | ((f3 & 0x1) << 9) | ((f & 0x1) << 8) | ((n & 0x1) << 7) | ((q & 0x1) << 6) | ((m & 0x1) << 5) | ((f4 & 0x1) << 4) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111a111b1c11ddddeeeeffffghi0jjjj
	uint32_t inst = 0xeeb00000 | ((u & 0x1) << 28) | ((opcode2 & 0x1) << 24) | ((d & 0x1) << 22) | ((opcode3 & 0xf) << 16) | ((vd & 0xf) << 12) | ((opcode4 & 0xf) << 8) | ((op & 0x1) << 7) | ((q & 0x1) << 6) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vdiv (
	uint16_t **address,
	unsigned int d,
	unsigned int vn,
	unsigned int vd,
	unsigned int sz,
	unsigned int n,
	unsigned int m,
	unsigned int vm
){
	// 111011101a00bbbbcccc101de0f0gggg
	uint32_t inst = 0xee800a00 | ((d & 0x1) << 22) | ((vn & 0xf) << 16) | ((vd & 0xf) << 12) | ((sz & 0x1) << 8) | ((n & 0x1) << 7) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111011101abbccccddddeeefghijkkkk
	uint32_t inst = 0xee800000 | ((d & 0x1) << 22) | ((opcode & 0x3) << 20) | ((vn & 0xf) << 16) | ((vd & 0xf) << 12) | ((opcode2 & 0x7) << 9) | ((sz & 0x1) << 8) | ((n & 0x1) << 7) | ((q & 0x1) << 6) | ((m & 0x1) << 5) | ((z & 0x1) << 4) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111011110abbccccddddeeeefghijjjj
	uint32_t inst = 0xef000000 | ((d & 0x1) << 22) | ((sz & 0x3) << 20) | ((vn & 0xf) << 16) | ((vd & 0xf) << 12) | ((opcode & 0xf) << 8) | ((n & 0x1) << 7) | ((q & 0x1) << 6) | ((m & 0x1) << 5) | ((z & 0x1) << 4) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111a11111bccccccddddeeefghi1jjjj
	uint32_t inst = 0xef800010 | ((u & 0x1) << 28) | ((d & 0x1) << 22) | ((imm6 & 0x3f) << 16) | ((vd & 0xf) << 12) | ((opcode3 & 0x7) << 9) | ((opcode4 & 0x1) << 8) | ((l & 0x1) << 7) | ((q & 0x1) << 6) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 11111001abccddddeeeeffgghhiijjjj
	uint32_t inst = 0xf9000000 | ((opcode & 0x1) << 23) | ((d & 0x1) << 22) | ((opcode2 & 0x3) << 20) | ((rn & 0xf) << 16) | ((vd & 0xf) << 12) | ((size & 0x3) << 10) | ((element_size & 0x3) << 8) | ((sz & 0x3) << 6) | ((align & 0x3) << 4) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111111111a11bbbbccccddddefg0hhhh
	uint32_t inst = 0xffb00000 | ((d & 0x1) << 22) | ((imm4 & 0xf) << 16) | ((vd & 0xf) << 12) | ((opcode & 0xf) << 8) | ((opcode2 & 0x1) << 7) | ((q & 0x1) << 6) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
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
){
	// 111011111a11bbbbccccddddefg0hhhh
	uint32_t inst = 0xefb00000 | ((d & 0x1) << 22) | ((vn & 0xf) << 16) | ((vd & 0xf) << 12) | ((imm4 & 0xf) << 8) | ((n & 0x1) << 7) | ((q & 0x1) << 6) | ((m & 0x1) << 5) | ((vm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_data_proc_rd_rn_rm (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm
){
	// 000000000000aaaa0000bbbb0000cccc
	uint32_t inst = 0x0 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_data_proc_rd_rn_rm_ra (
	uint16_t **address,
	unsigned int rd,
	unsigned int rn,
	unsigned int rm,
	unsigned int ra
){
	// 000000000000aaaabbbbcccc0000dddd
	uint32_t inst = 0x0 | ((rd & 0xf) << 8) | ((rn & 0xf) << 16) | ((rm & 0xf) << 0) | ((ra & 0xf) << 12);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vfp_ld_st_m (
	uint16_t **address,
	unsigned int p,
	unsigned int upwards,
	unsigned int writeback,
	unsigned int rn,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
){
	// 0000000pudw0aaaabbbb0000cccccccc
	uint32_t inst = 0x0 | ((p & 0x1) << 24) | ((upwards & 0x1) << 23) | ((writeback & 0x1) << 21) | ((rn & 0xf) << 16) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
void thumb_vfp_vldr_vstr (
	uint16_t **address,
	unsigned int upwards,
	unsigned int rn,
	unsigned int d,
	unsigned int vd,
	unsigned int imm8
){
	// 00000000ud00aaaabbbb0000cccccccc
	uint32_t inst = 0x0 | ((upwards & 0x1) << 23) | ((rn & 0xf) << 16) | ((d & 0x1) << 22) | ((vd & 0xf) << 12) | ((imm8 & 0xff) << 0);
	**address = (uint16_t)(inst >> 16);
	*(*address + 1) = (uint16_t)(inst & 0xffff);
}
