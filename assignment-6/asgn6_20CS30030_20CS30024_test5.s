	.file	"asgn6_20CS30030_20CS30024_test5.c"

#	Allocation of function variables and temporaries on the stack:

#	main
#	i: -4
#	int_ptr: -8
#	iters: -12
#	j: -16
#	pow2: -20
#	t0: -28
#	t1: -32
#	t10: -36
#	t11: -44
#	t12: -48
#	t13: -52
#	t14: -60
#	t15: -64
#	t16: -68
#	t17: -72
#	t18: -76
#	t19: -80
#	t2: -84
#	t20: -88
#	t21: -96
#	t22: -100
#	t23: -108
#	t24: -112
#	t25: -120
#	t26: -124
#	t27: -132
#	t28: -136
#	t29: -140
#	t3: -148
#	t30: -156
#	t31: -160
#	t32: -168
#	t33: -172
#	t34: -176
#	t35: -184
#	t36: -188
#	t37: -192
#	t38: -200
#	t39: -204
#	t4: -208
#	t40: -212
#	t41: -220
#	t42: -224
#	t43: -228
#	t44: -236
#	t45: -240
#	t46: -244
#	t5: -248
#	t6: -252
#	t7: -260
#	t8: -264
#	t9: -268
#	printInt
#	n: -4
#	printStr
#	s: -8
#	readInt
#	int_ptr: -8

	.section	.rodata
.LC0:
	.string	"\n#### TEST 5 (Loops) ####\n"
.LC1:
	.string	"\nPowers of 2 using WHILE loop: "
.LC2:
	.string	" "
.LC3:
	.string	"\n\n"
.LC4:
	.string	"\nStar Patten using FOR loop: \n"
.LC5:
	.string	"*"
.LC6:
	.string	"\n"
.LC7:
	.string	"\n"
.LC8:
	.string	"\nTesting DO-WHILE loop:"
.LC9:
	.string	"\nEntered do-while loop. Enter number of times you wish to run the loop after this: "
.LC10:
	.string	"\nInvalid input. Exiting...\n\n"
.LC11:
	.string	"\nIteration "
.LC12:
	.string	"\n"
.LC13:
	.string	"\n\n"
	.text
	.globl  main
	.type   main, @function
main:
.LFB0:
	.cfi_startproc
	pushq   %rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq    %rsp, %rbp
	.cfi_def_cfa_register 6
	subq    $268, %rsp
	movq    $.LC0, -28(%rbp)
	movq    -28(%rbp), %rdi
	call    printStr
	movl    %eax, -32(%rbp)
	movl    $1, -84(%rbp)
	movl    -84(%rbp), %eax
	movl    %eax, -20(%rbp)
	movq    $.LC1, -148(%rbp)
	movq    -148(%rbp), %rdi
	call    printStr
	movl    %eax, -208(%rbp)
.L3:
	movl    $1024, -248(%rbp)
	movl    -248(%rbp), %eax
	cmpl    %eax, -20(%rbp)
	jle     .L1
	jmp     .L2
.L1:
	movl    -20(%rbp), %edi
	call    printInt
	movl    %eax, -252(%rbp)
	movq    $.LC2, -260(%rbp)
	movq    -260(%rbp), %rdi
	call    printStr
	movl    %eax, -264(%rbp)
	movl    $2, -268(%rbp)
	movl    -20(%rbp), %eax
	imull   -268(%rbp), %eax
	movl    %eax, -36(%rbp)
	movl    -36(%rbp), %eax
	movl    %eax, -20(%rbp)
	jmp     .L3
.L2:
	movq    $.LC3, -44(%rbp)
	movq    -44(%rbp), %rdi
	call    printStr
	movl    %eax, -48(%rbp)
	movl    $0, -52(%rbp)
	movl    -52(%rbp), %eax
	movl    %eax, -4(%rbp)
	movq    $.LC4, -60(%rbp)
	movq    -60(%rbp), %rdi
	call    printStr
	movl    %eax, -64(%rbp)
	movl    $0, -68(%rbp)
	movl    -68(%rbp), %eax
	movl    %eax, -4(%rbp)
.L6:
	movl    $10, -72(%rbp)
	movl    -72(%rbp), %eax
	cmpl    %eax, -4(%rbp)
	jle     .L4
	jmp     .L5
.L11:
	movl    -4(%rbp), %eax
	movl    %eax, -76(%rbp)
	incl    -4(%rbp)
	jmp     .L6
.L4:
	movl    -4(%rbp), %eax
	movl    %eax, -16(%rbp)
.L9:
	movl    $10, -80(%rbp)
	movl    -80(%rbp), %eax
	cmpl    %eax, -16(%rbp)
	jle     .L7
	jmp     .L8
.L10:
	movl    -16(%rbp), %eax
	movl    %eax, -88(%rbp)
	incl    -16(%rbp)
	jmp     .L9
.L7:
	movq    $.LC5, -96(%rbp)
	movq    -96(%rbp), %rdi
	call    printStr
	movl    %eax, -100(%rbp)
	jmp     .L10
.L8:
	movq    $.LC6, -108(%rbp)
	movq    -108(%rbp), %rdi
	call    printStr
	movl    %eax, -112(%rbp)
	jmp     .L11
.L5:
	movq    $.LC7, -120(%rbp)
	movq    -120(%rbp), %rdi
	call    printStr
	movl    %eax, -124(%rbp)
	movq    $.LC8, -132(%rbp)
	movq    -132(%rbp), %rdi
	call    printStr
	movl    %eax, -136(%rbp)
.L16:
	movl    $0, -140(%rbp)
	movl    -140(%rbp), %eax
	cmpl    %eax, -4(%rbp)
	je      .L12
	jmp     .L13
.L12:
	movq    $.LC9, -156(%rbp)
	movq    -156(%rbp), %rdi
	call    printStr
	movl    %eax, -160(%rbp)
	leaq    -12(%rbp), %rax
	movq    %rax, -168(%rbp)
	movq    -168(%rbp), %rdi
	call    readInt
	movl    %eax, -172(%rbp)
	movl    -172(%rbp), %eax
	movl    %eax, -8(%rbp)
	movl    $1, -176(%rbp)
	movl    -176(%rbp), %eax
	cmpl    %eax, -8(%rbp)
	jne     .L14
	jmp     .L15
.L14:
	movq    $.LC10, -184(%rbp)
	movq    -184(%rbp), %rdi
	call    printStr
	movl    %eax, -188(%rbp)
	movl    $0, -192(%rbp)
	movl    -192(%rbp), %eax
	jmp     .LFE0
	jmp     .L15
	jmp     .L15
.L13:
	movq    $.LC11, -200(%rbp)
	movq    -200(%rbp), %rdi
	call    printStr
	movl    %eax, -204(%rbp)
	movl    -4(%rbp), %edi
	call    printInt
	movl    %eax, -212(%rbp)
	movq    $.LC12, -220(%rbp)
	movq    -220(%rbp), %rdi
	call    printStr
	movl    %eax, -224(%rbp)
.L15:
	movl    -4(%rbp), %eax
	movl    %eax, -228(%rbp)
	incl    -4(%rbp)
	movl    -12(%rbp), %eax
	cmpl    %eax, -228(%rbp)
	jl      .L16
	jmp     .L17
.L17:
	movq    $.LC13, -236(%rbp)
	movq    -236(%rbp), %rdi
	call    printStr
	movl    %eax, -240(%rbp)
	movl    $0, -244(%rbp)
	movl    -244(%rbp), %eax
.LFE0:
	movq    %rbp, %rsp
	popq    %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size   main, .-main
