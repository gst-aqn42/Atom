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
	.frame	$fp,40,$ra
	.mask 	0xc0000000,-4
	.fmask	0x00000000,0
	.set	noreorder
	.set	nomacro
	.set	noat
# %bb.0:
	addiu	$sp, $sp, -40
	sw	$ra, 36($sp)            # 4-byte Folded Spill
	sw	$fp, 32($sp)            # 4-byte Folded Spill
	move	$fp, $sp
	sw	$4, 24($fp)
	sw	$zero, 20($fp)
	sw	$zero, 16($fp)
	lw	$1, 24($fp)
	bgez	$1, $BB0_3
	nop
# %bb.1:
	j	$BB0_2
	nop
$BB0_2:
	lw	$1, 24($fp)
	addiu	$2, $zero, 0
	negu	$1, $1
	sw	$1, 24($fp)
	j	$BB0_3
	nop
$BB0_3:
	lw	$1, 24($fp)
	bnez	$1, $BB0_6
	nop
# %bb.4:
	j	$BB0_5
	nop
$BB0_5:
	addiu	$1, $zero, 1
	sw	$1, 28($fp)
	j	$BB0_20
	nop
$BB0_6:
	lw	$1, 24($fp)
	addiu	$2, $zero, 1
	bne	$1, $2, $BB0_9
	nop
# %bb.7:
	j	$BB0_8
	nop
$BB0_8:
	sw	$zero, 28($fp)
	j	$BB0_20
	nop
$BB0_9:
	j	$BB0_10
	nop
$BB0_10:                                # =>This Inner Loop Header: Depth=1
	lw	$1, 24($fp)
	beqz	$1, $BB0_19
	nop
# %bb.11:                               #   in Loop: Header=BB0_10 Depth=1
	j	$BB0_12
	nop
$BB0_12:                                #   in Loop: Header=BB0_10 Depth=1
	lbu	$1, 27($fp)
	andi	$1, $1, 1
	beqz	$1, $BB0_15
	nop
# %bb.13:                               #   in Loop: Header=BB0_10 Depth=1
	j	$BB0_14
	nop
$BB0_14:                                #   in Loop: Header=BB0_10 Depth=1
	lw	$1, 20($fp)
	addiu	$1, $1, 1
	sw	$1, 20($fp)
	j	$BB0_15
	nop
$BB0_15:                                #   in Loop: Header=BB0_10 Depth=1
	lbu	$1, 27($fp)
	andi	$1, $1, 2
	beqz	$1, $BB0_18
	nop
# %bb.16:                               #   in Loop: Header=BB0_10 Depth=1
	j	$BB0_17
	nop
$BB0_17:                                #   in Loop: Header=BB0_10 Depth=1
	lw	$1, 16($fp)
	addiu	$1, $1, 1
	sw	$1, 16($fp)
	j	$BB0_18
	nop
$BB0_18:                                #   in Loop: Header=BB0_10 Depth=1
	lw	$1, 24($fp)
	sra	$1, $1, 2
	sw	$1, 24($fp)
	j	$BB0_10
	nop
$BB0_19:
	lw	$1, 20($fp)
	lw	$2, 16($fp)
	subu	$4, $1, $2
	jal	abs
	nop
	move	$4, $2
	jal	multiplo
	nop
	sw	$2, 28($fp)
	j	$BB0_20
	nop
$BB0_20:
	lw	$2, 28($fp)
	move	$sp, $fp
	lw	$fp, 32($sp)            # 4-byte Folded Reload
	lw	$ra, 36($sp)            # 4-byte Folded Reload
	addiu	$sp, $sp, 40
	jr	$ra
	nop
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
	.frame	$fp,40,$ra
	.mask 	0xc0000000,-4
	.fmask	0x00000000,0
	.set	noreorder
	.set	nomacro
	.set	noat
# %bb.0:
	addiu	$sp, $sp, -40
	sw	$ra, 36($sp)            # 4-byte Folded Spill
	sw	$fp, 32($sp)            # 4-byte Folded Spill
	move	$fp, $sp
	sw	$zero, 28($fp)
	lui	$1, %hi($.str)
	addiu	$4, $1, %lo($.str)
	jal	printf
	nop
	lui	$1, %hi($.str.1)
	addiu	$4, $1, %lo($.str.1)
	addiu	$5, $fp, 24
	sw	$2, 20($fp)             # 4-byte Folded Spill
	jal	__isoc99_scanf
	nop
	lw	$4, 24($fp)
	sw	$2, 16($fp)             # 4-byte Folded Spill
	jal	multiplo
	nop
	beqz	$2, $BB1_3
	nop
# %bb.1:
	j	$BB1_2
	nop
$BB1_2:
	lw	$5, 24($fp)
	lui	$1, %hi($.str.2)
	addiu	$4, $1, %lo($.str.2)
	jal	printf
	nop
	j	$BB1_4
	nop
$BB1_3:
	lw	$5, 24($fp)
	lui	$1, %hi($.str.3)
	addiu	$4, $1, %lo($.str.3)
	jal	printf
	nop
	j	$BB1_4
	nop
$BB1_4:
	addiu	$2, $zero, 0
	move	$sp, $fp
	lw	$fp, 32($sp)            # 4-byte Folded Reload
	lw	$ra, 36($sp)            # 4-byte Folded Reload
	addiu	$sp, $sp, 40
	jr	$ra
	nop
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
	.addrsig_sym multiplo
	.addrsig_sym abs
	.addrsig_sym printf
	.addrsig_sym __isoc99_scanf
	.text
