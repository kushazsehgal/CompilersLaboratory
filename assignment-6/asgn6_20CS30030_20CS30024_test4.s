	.file	"asgn6_20CS30030_20CS30024_test4.c"

#	Allocation of function variables and temporaries on the stack:

#	main
#	i: -4
#	int_ptr: -8
#	iters: -12
#	j: -16
#	mul13: -20
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
#	t27: -128
#	t28: -136
#	t29: -140
#	t3: -148
#	t30: -152
#	t31: -160
#	t32: -164
#	t33: -172
#	t34: -176
#	t35: -180
#	t36: -188
#	t37: -192
#	t38: -196
#	t39: -204
#	t4: -208
#	t40: -212
#	t41: -216
#	t42: -224
#	t43: -228
#	t44: -232
#	t45: -240
#	t46: -244
#	t47: -248
#	t5: -252
#	t6: -256
#	t7: -264
#	t8: -268
#	t9: -272
#	printInt
#	n: -4
#	printStr
#	s: -8
#	readInt
#	int_ptr: -8

	.section	.rodata
.LC0:
	.string	"\n#### TEST 4 (Loops) ####\n"
.LC1:
	.string	"\nMultiples of 13 using WHILE loop: "
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
	subq    $272, %rsp
	movq    $.LC0, -28(%rbp)
	movq    -28(%rbp), %rdi
	call    printStr
	movl    %eax, -32(%rbp)
	movl    $13, -84(%rbp)
	movl    -84(%rbp), %eax
	movl    %eax, -20(%rbp)
	movq    $.LC1, -148(%rbp)
	movq    -148(%rbp), %rdi
	call    printStr
	movl    %eax, -208(%rbp)
.L3:
	movl    $130, -252(%rbp)
	movl    -252(%rbp), %eax
	cmpl    %eax, -20(%rbp)
	jle     .L1
	jmp     .L2
.L1:
	movl    -20(%rbp), %edi
	call    printInt
	movl    %eax, -256(%rbp)
	movq    $.LC2, -264(%rbp)
	movq    -264(%rbp), %rdi
	call    printStr
	movl    %eax, -268(%rbp)
	movl    $13, -272(%rbp)
	movl    -20(%rbp), %eax
	addl    -272(%rbp), %eax
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
	movl    $0, -128(%rbp)
	movl    -128(%rbp), %eax
	movl    %eax, -4(%rbp)
	movq    $.LC8, -136(%rbp)
	movq    -136(%rbp), %rdi
	call    printStr
	movl    %eax, -140(%rbp)
.L16:
	movl    $0, -152(%rbp)
	movl    -152(%rbp), %eax
	cmpl    %eax, -4(%rbp)
	je      .L12
	jmp     .L13
.L12:
	movq    $.LC9, -160(%rbp)
	movq    -160(%rbp), %rdi
	call    printStr
	movl    %eax, -164(%rbp)
	leaq    -12(%rbp), %rax
	movq    %rax, -172(%rbp)
	movq    -172(%rbp), %rdi
	call    readInt
	movl    %eax, -176(%rbp)
	movl    -176(%rbp), %eax
	movl    %eax, -8(%rbp)
	movl    $1, -180(%rbp)
	movl    -180(%rbp), %eax
	cmpl    %eax, -8(%rbp)
	jne     .L14
	jmp     .L15
.L14:
	movq    $.LC10, -188(%rbp)
	movq    -188(%rbp), %rdi
	call    printStr
	movl    %eax, -192(%rbp)
	movl    $0, -196(%rbp)
	movl    -196(%rbp), %eax
	jmp     .LFE0
	jmp     .L15
	jmp     .L15
.L13:
	movq    $.LC11, -204(%rbp)
	movq    -204(%rbp), %rdi
	call    printStr
	movl    %eax, -212(%rbp)
	movl    -4(%rbp), %edi
	call    printInt
	movl    %eax, -216(%rbp)
	movq    $.LC12, -224(%rbp)
	movq    -224(%rbp), %rdi
	call    printStr
	movl    %eax, -228(%rbp)
.L15:
	movl    -4(%rbp), %eax
	movl    %eax, -232(%rbp)
	incl    -4(%rbp)
	movl    -12(%rbp), %eax
	cmpl    %eax, -232(%rbp)
	jl      .L16
	jmp     .L17
.L17:
	movq    $.LC13, -240(%rbp)
	movq    -240(%rbp), %rdi
	call    printStr
	movl    %eax, -244(%rbp)
	movl    $0, -248(%rbp)
	movl    -248(%rbp), %eax
.LFE0:
	movq    %rbp, %rsp
	popq    %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size   main, .-main
