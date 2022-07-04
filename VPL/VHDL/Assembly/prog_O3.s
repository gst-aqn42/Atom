	.text
	.abicalls
	.option	pic0
	.section	.mdebug.abi32,"",@progbits
	.nan	legacy
	.module	fp=xx
	.module	nooddspreg
	.text
	.file	"prog.c"
	.globl	multiplo                # -- Begin function multiplo
	.p2align	2
	.type	multiplo,@function
	.set	nomicromips
	.set	nomips16
	.ent	multiplo
multiplo:                               # @multiplo
	.frame	$fp,8,$ra
	.mask 	0xc0000000,-4
	.fmask	0x00000000,0
	.set	noreorder
	.set	nomacro
	.set	noat
# %bb.0:
	addiu	$sp, $sp, -8
	sw	$ra, 4($sp)             # 4-byte Folded Spill
	sw	$fp, 0($sp)             # 4-byte Folded Spill
	move	$fp, $sp
	sra	$1, $4, 31
	addu	$3, $4, $1
	xor	$3, $3, $1
	beqz	$3, $BB0_5
	addiu	$2, $zero, 1
$BB0_1:                                 # =>This Loop Header: Depth=1
                                        #     Child Loop BB0_3 Depth 2
	beq	$3, $2, $BB0_6
	nop
$BB0_2:                                 #   in Loop: Header=BB0_1 Depth=1
	addiu	$4, $zero, 0
	addiu	$5, $zero, 0
$BB0_3:                                 #   Parent Loop BB0_1 Depth=1
                                        # =>  This Inner Loop Header: Depth=2
	andi	$1, $3, 1
	addu	$5, $5, $1
	srl	$1, $3, 1
	sra	$3, $3, 2
	andi	$1, $1, 1
	bnez	$3, $BB0_3
	addu	$4, $4, $1
# %bb.4:                                #   in Loop: Header=BB0_1 Depth=1
	subu	$1, $5, $4
	sra	$3, $1, 31
	addu	$1, $1, $3
	xor	$4, $1, $3
	sra	$1, $4, 31
	addu	$3, $4, $1
	xor	$3, $3, $1
	bnez	$3, $BB0_1
	nop
$BB0_5:
	j	$BB0_7
	addiu	$2, $zero, 1
$BB0_6:
	addiu	$2, $zero, 0
$BB0_7:
	move	$sp, $fp
	lw	$fp, 0($sp)             # 4-byte Folded Reload
	lw	$ra, 4($sp)             # 4-byte Folded Reload
	jr	$ra
	addiu	$sp, $sp, 8
	.set	at
	.set	macro
	.set	reorder
	.end	multiplo
$func_end0:
	.size	multiplo, ($func_end0)-multiplo
                                        # -- End function
	.globl	main                    # -- Begin function main
	.p2align	2
	.type	main,@function
	.set	nomicromips
	.set	nomips16
	.ent	main
main:                                   # @main
	.frame	$fp,32,$ra
	.mask 	0xc0000000,-4
	.fmask	0x00000000,0
	.set	noreorder
	.set	nomacro
	.set	noat
# %bb.0:
	addiu	$sp, $sp, -32
	sw	$ra, 28($sp)            # 4-byte Folded Spill
	sw	$fp, 24($sp)            # 4-byte Folded Spill
	move	$fp, $sp
	lui	$1, %hi($.str)
	jal	printf
	addiu	$4, $1, %lo($.str)
	lui	$1, %hi($.str.1)
	addiu	$5, $fp, 20
	jal	__isoc99_scanf
	addiu	$4, $1, %lo($.str.1)
	lw	$5, 20($fp)
	move	$3, $5
	sra	$1, $3, 31
	addu	$3, $3, $1
	xor	$3, $3, $1
	beqz	$3, $BB1_5
	addiu	$2, $zero, 1
$BB1_1:                                 # =>This Loop Header: Depth=1
                                        #     Child Loop BB1_3 Depth 2
	beq	$3, $2, $BB1_6
	nop
$BB1_2:                                 #   in Loop: Header=BB1_1 Depth=1
	addiu	$4, $zero, 0
	addiu	$6, $zero, 0
$BB1_3:                                 #   Parent Loop BB1_1 Depth=1
                                        # =>  This Inner Loop Header: Depth=2
	andi	$1, $3, 1
	addu	$6, $1, $6
	srl	$1, $3, 1
	sra	$3, $3, 2
	andi	$1, $1, 1
	bnez	$3, $BB1_3
	addu	$4, $1, $4
# %bb.4:                                #   in Loop: Header=BB1_1 Depth=1
	subu	$1, $6, $4
	sra	$3, $1, 31
	addu	$1, $1, $3
	xor	$3, $1, $3
	sra	$1, $3, 31
	addu	$3, $3, $1
	xor	$3, $3, $1
	bnez	$3, $BB1_1
	nop
$BB1_5:
	lui	$1, %hi($.str.2)
	j	$BB1_7
	addiu	$4, $1, %lo($.str.2)
$BB1_6:
	lui	$1, %hi($.str.3)
	addiu	$4, $1, %lo($.str.3)
$BB1_7:
	jal	printf
	nop
	addiu	$2, $zero, 0
	move	$sp, $fp
	lw	$fp, 24($sp)            # 4-byte Folded Reload
	lw	$ra, 28($sp)            # 4-byte Folded Reload
	jr	$ra
	addiu	$sp, $sp, 32
	.set	at
	.set	macro
	.set	reorder
	.end	main
$func_end1:
	.size	main, ($func_end1)-main
                                        # -- End function
	.type	$.str,@object           # @.str
	.section	.rodata.str1.1,"aMS",@progbits,1
$.str:
	.asciz	"Digite um numero inteiro: "
	.size	$.str, 27

	.type	$.str.1,@object         # @.str.1
$.str.1:
	.asciz	"%d"
	.size	$.str.1, 3

	.type	$.str.2,@object         # @.str.2
$.str.2:
	.asciz	"%d e multiplo de 3"
	.size	$.str.2, 19

	.type	$.str.3,@object         # @.str.3
$.str.3:
	.asciz	"%d nao e multiplo de 3"
	.size	$.str.3, 23

	.ident	"clang version 10.0.0-4ubuntu1 "
	.section	".note.GNU-stack","",@progbits
	.addrsig
	.text
