	.file	"asgn6_20CS30030_20CS30024_test2.c"

#	Allocation of function variables and temporaries on the stack:

#	fillFib
#	fib: -8
#	i: -16
#	n: -12
#	t0: -20
#	t1: -24
#	t10: -28
#	t11: -32
#	t12: -36
#	t13: -40
#	t14: -44
#	t15: -48
#	t16: -52
#	t17: -56
#	t18: -60
#	t19: -64
#	t2: -68
#	t20: -72
#	t21: -76
#	t22: -80
#	t23: -84
#	t24: -92
#	t25: -96
#	t3: -100
#	t4: -104
#	t5: -108
#	t6: -112
#	t7: -116
#	t8: -120
#	t9: -124
#	main
#	fib: -60
#	t72: -68
#	t73: -72
#	t74: -80
#	t75: -84
#	t77: -92
#	t78: -96
#	t79: -100
#	t80: -104
#	t82: -112
#	t83: -116
#	t85: -120
#	printASCII_vowels
#	i: -4
#	t46: -8
#	t47: -12
#	t48: -16
#	t49: -17
#	t50: -21
#	t51: -25
#	t52: -26
#	t53: -30
#	t54: -34
#	t55: -35
#	t56: -39
#	t57: -43
#	t58: -44
#	t59: -48
#	t60: -52
#	t61: -53
#	t62: -61
#	t63: -65
#	t64: -69
#	t65: -73
#	t66: -77
#	t67: -81
#	t68: -82
#	t69: -86
#	t70: -94
#	t71: -98
#	vowels: -103
#	printInt
#	n: -4
#	printOdd
#	i: -4
#	isprime: -128
#	j: -132
#	t26: -136
#	t27: -140
#	t28: -144
#	t29: -148
#	t30: -152
#	t31: -156
#	t32: -160
#	t33: -164
#	t34: -168
#	t35: -172
#	t36: -176
#	t37: -180
#	t38: -188
#	t39: -192
#	t40: -196
#	t41: -200
#	t42: -204
#	t43: -208
#	t44: -212
#	t45: -216
#	printStr
#	s: -8
#	readInt
#	int_ptr: -8

	.section	.rodata
.LC0:
	.string	" "
.LC1:
	.string	" "
.LC2:
	.string	"\nAscii values of vowels :\n"
.LC3:
	.string	" "
.LC4:
	.string	"\n#### TEST 2 (1-D Arrays) ####"
.LC5:
	.string	"\nPrinting Odd Numbers\n"
.LC6:
	.string	"\nPrinting Fibonacci Numbers\n"
.LC7:
	.string	"\n"
	.text
	.globl  fillFib
	.type   fillFib, @function
fillFib:
.LFB0:
	.cfi_startproc
	pushq   %rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq    %rsp, %rbp
	.cfi_def_cfa_register 6
	subq    $124, %rsp
	movq    %rdi, -8(%rbp)
	movl    %esi, -12(%rbp)
	movl    $0, -20(%rbp)
	movl    -20(%rbp), %eax
	movl    %eax, -16(%rbp)
.L6:
	movl    -12(%rbp), %eax
	cmpl    %eax, -16(%rbp)
	jl      .L4
	jmp     .L5
.L9:
	movl    -16(%rbp), %eax
	movl    %eax, -24(%rbp)
	incl    -16(%rbp)
	jmp     .L6
.L4:
	movl    $0, -68(%rbp)
	movl    -68(%rbp), %eax
	cmpl    %eax, -16(%rbp)
	je      .L7
	jmp     .L8
.L7:
	movl    -16(%rbp), %eax
	imull   $4, %eax
	movl    %eax, -100(%rbp)
	movl    $0, -104(%rbp)
	movl    -100(%rbp), %eax
	cltq    
	addq    -8(%rbp), %rax
	movl    -104(%rbp), %ebx
	movl    %ebx, (%rax)
	jmp     .L9
.L8:
	movl    $1, -108(%rbp)
	movl    -108(%rbp), %eax
	cmpl    %eax, -16(%rbp)
	je      .L10
	jmp     .L11
.L10:
	movl    -16(%rbp), %eax
	imull   $4, %eax
	movl    %eax, -112(%rbp)
	movl    $1, -116(%rbp)
	movl    -112(%rbp), %eax
	cltq    
	addq    -8(%rbp), %rax
	movl    -116(%rbp), %ebx
	movl    %ebx, (%rax)
	jmp     .L9
.L11:
	movl    -16(%rbp), %eax
	imull   $4, %eax
	movl    %eax, -120(%rbp)
	movl    $1, -124(%rbp)
	movl    -16(%rbp), %eax
	subl    -124(%rbp), %eax
	movl    %eax, -28(%rbp)
	movl    -28(%rbp), %eax
	imull   $4, %eax
	movl    %eax, -32(%rbp)
	movl    -32(%rbp), %eax
	cltq    
	addq    -8(%rbp), %rax
	movl    (%rax), %eax
	movl    %eax, -36(%rbp)
	movl    $2, -40(%rbp)
	movl    -16(%rbp), %eax
	subl    -40(%rbp), %eax
	movl    %eax, -44(%rbp)
	movl    -44(%rbp), %eax
	imull   $4, %eax
	movl    %eax, -48(%rbp)
	movl    -48(%rbp), %eax
	cltq    
	addq    -8(%rbp), %rax
	movl    (%rax), %eax
	movl    %eax, -52(%rbp)
	movl    -36(%rbp), %eax
	addl    -52(%rbp), %eax
	movl    %eax, -56(%rbp)
	movl    -120(%rbp), %eax
	cltq    
	addq    -8(%rbp), %rax
	movl    -56(%rbp), %ebx
	movl    %ebx, (%rax)
	jmp     .L9
.L5:
	movl    $1, -60(%rbp)
	movl    -60(%rbp), %eax
	movl    %eax, -16(%rbp)
.L13:
	movl    $15, -64(%rbp)
	movl    -64(%rbp), %eax
	cmpl    %eax, -16(%rbp)
	jl      .L12
	jmp     .LFE0
.L14:
	movl    -16(%rbp), %eax
	movl    %eax, -72(%rbp)
	incl    -16(%rbp)
	jmp     .L13
.L12:
	movl    -16(%rbp), %eax
	imull   $4, %eax
	movl    %eax, -76(%rbp)
	movl    -76(%rbp), %eax
	cltq    
	addq    -8(%rbp), %rax
	movl    (%rax), %eax
	movl    %eax, -80(%rbp)
	movl    -80(%rbp), %edi
	call    printInt
	movl    %eax, -84(%rbp)
	movq    $.LC0, -92(%rbp)
	movq    -92(%rbp), %rdi
	call    printStr
	movl    %eax, -96(%rbp)
	jmp     .L14
.LFE0:
	movq    %rbp, %rsp
	popq    %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size   fillFib, .-fillFib
	.text
	.globl  printOdd
	.type   printOdd, @function
printOdd:
.LFB1:
	.cfi_startproc
	pushq   %rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq    %rsp, %rbp
	.cfi_def_cfa_register 6
	subq    $216, %rsp
	movl    $31, -136(%rbp)
	movl    $0, -140(%rbp)
	movl    -140(%rbp), %eax
	movl    %eax, -4(%rbp)
.L17:
	movl    $30, -144(%rbp)
	movl    -144(%rbp), %eax
	cmpl    %eax, -4(%rbp)
	jle     .L15
	jmp     .L16
.L18:
	movl    -4(%rbp), %eax
	movl    %eax, -148(%rbp)
	incl    -4(%rbp)
	jmp     .L17
.L15:
	movl    -4(%rbp), %eax
	imull   $4, %eax
	movl    %eax, -152(%rbp)
	movl    $1, -156(%rbp)
	movl    -152(%rbp), %eax
	cltq    
	movl    -156(%rbp), %ebx
	movl    %ebx, -128(%rbp, %rax, 1)
	jmp     .L18
.L16:
	movl    $2, -160(%rbp)
	movl    -160(%rbp), %eax
	movl    %eax, -4(%rbp)
.L24:
	movl    $30, -164(%rbp)
	movl    -164(%rbp), %eax
	cmpl    %eax, -4(%rbp)
	jle     .L19
	jmp     .LFE1
.L19:
	movl    -4(%rbp), %eax
	imull   $4, %eax
	movl    %eax, -168(%rbp)
	movl    -168(%rbp), %eax
	cltq    
	movl    -128(%rbp, %rax, 1), %eax
	movl    %eax, -172(%rbp)
	movl    $1, -176(%rbp)
	movl    -176(%rbp), %eax
	cmpl    %eax, -172(%rbp)
	je      .L20
	jmp     .L21
.L20:
	movl    -4(%rbp), %edi
	call    printInt
	movl    %eax, -180(%rbp)
	movq    $.LC1, -188(%rbp)
	movq    -188(%rbp), %rdi
	call    printStr
	movl    %eax, -192(%rbp)
.L23:
	movl    $30, -196(%rbp)
	movl    -196(%rbp), %eax
	cmpl    %eax, -132(%rbp)
	jle     .L22
	jmp     .L21
.L22:
	movl    -132(%rbp), %eax
	imull   $4, %eax
	movl    %eax, -200(%rbp)
	movl    $0, -204(%rbp)
	movl    -200(%rbp), %eax
	cltq    
	movl    -204(%rbp), %ebx
	movl    %ebx, -128(%rbp, %rax, 1)
	movl    -132(%rbp), %eax
	addl    -4(%rbp), %eax
	movl    %eax, -208(%rbp)
	movl    -208(%rbp), %eax
	movl    %eax, -132(%rbp)
	jmp     .L23
	jmp     .L21
.L21:
	movl    $1, -212(%rbp)
	movl    -4(%rbp), %eax
	addl    -212(%rbp), %eax
	movl    %eax, -216(%rbp)
	movl    -216(%rbp), %eax
	movl    %eax, -4(%rbp)
	jmp     .L24
.LFE1:
	movq    %rbp, %rsp
	popq    %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size   printOdd, .-printOdd
	.text
	.globl  printASCII_vowels
	.type   printASCII_vowels, @function
printASCII_vowels:
.LFB2:
	.cfi_startproc
	pushq   %rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq    %rsp, %rbp
	.cfi_def_cfa_register 6
	subq    $103, %rsp
	movl    $5, -8(%rbp)
	movl    $0, -12(%rbp)
	movl    -12(%rbp), %eax
	imull   $1, %eax
	movl    %eax, -16(%rbp)
	movb    $97, -17(%rbp)
	movl    -16(%rbp), %eax
	cltq    
	movl    -17(%rbp), %ebx
	movl    %ebx, -103(%rbp, %rax, 1)
	movl    $1, -21(%rbp)
	movl    -21(%rbp), %eax
	imull   $1, %eax
	movl    %eax, -25(%rbp)
	movb    $101, -26(%rbp)
	movl    -25(%rbp), %eax
	cltq    
	movl    -26(%rbp), %ebx
	movl    %ebx, -103(%rbp, %rax, 1)
	movl    $2, -30(%rbp)
	movl    -30(%rbp), %eax
	imull   $1, %eax
	movl    %eax, -34(%rbp)
	movb    $105, -35(%rbp)
	movl    -34(%rbp), %eax
	cltq    
	movl    -35(%rbp), %ebx
	movl    %ebx, -103(%rbp, %rax, 1)
	movl    $3, -39(%rbp)
	movl    -39(%rbp), %eax
	imull   $1, %eax
	movl    %eax, -43(%rbp)
	movb    $111, -44(%rbp)
	movl    -43(%rbp), %eax
	cltq    
	movl    -44(%rbp), %ebx
	movl    %ebx, -103(%rbp, %rax, 1)
	movl    $4, -48(%rbp)
	movl    -48(%rbp), %eax
	imull   $1, %eax
	movl    %eax, -52(%rbp)
	movb    $117, -53(%rbp)
	movl    -52(%rbp), %eax
	cltq    
	movl    -53(%rbp), %ebx
	movl    %ebx, -103(%rbp, %rax, 1)
	movq    $.LC2, -61(%rbp)
	movq    -61(%rbp), %rdi
	call    printStr
	movl    %eax, -65(%rbp)
	movl    $0, -69(%rbp)
	movl    -69(%rbp), %eax
	movl    %eax, -4(%rbp)
.L26:
	movl    $5, -73(%rbp)
	movl    -73(%rbp), %eax
	cmpl    %eax, -4(%rbp)
	jl      .L25
	jmp     .LFE2
.L27:
	movl    -4(%rbp), %eax
	movl    %eax, -77(%rbp)
	incl    -4(%rbp)
	jmp     .L26
.L25:
	movl    -4(%rbp), %eax
	imull   $1, %eax
	movl    %eax, -81(%rbp)
	movl    -81(%rbp), %eax
	cltq    
	movl    -103(%rbp, %rax, 1), %eax
	movl    %eax, -82(%rbp)
	movb    -82(%rbp), %dil
	call    printInt
	movl    %eax, -86(%rbp)
	movq    $.LC3, -94(%rbp)
	movq    -94(%rbp), %rdi
	call    printStr
	movl    %eax, -98(%rbp)
	jmp     .L27
.LFE2:
	movq    %rbp, %rsp
	popq    %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size   printASCII_vowels, .-printASCII_vowels
	.text
	.globl  main
	.type   main, @function
main:
.LFB3:
	.cfi_startproc
	pushq   %rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq    %rsp, %rbp
	.cfi_def_cfa_register 6
	subq    $120, %rsp
	movq    $.LC4, -68(%rbp)
	movq    -68(%rbp), %rdi
	call    printStr
	movl    %eax, -72(%rbp)
	movq    $.LC5, -80(%rbp)
	movq    -80(%rbp), %rdi
	call    printStr
	movl    %eax, -84(%rbp)
	call    printOdd
	movq    $.LC6, -92(%rbp)
	movq    -92(%rbp), %rdi
	call    printStr
	movl    %eax, -96(%rbp)
	movl    $15, -100(%rbp)
	movl    $15, -104(%rbp)
	movl    -104(%rbp), %esi
	leaq    -60(%rbp), %rdi
	call    fillFib
	movq    $.LC7, -112(%rbp)
	movq    -112(%rbp), %rdi
	call    printStr
	movl    %eax, -116(%rbp)
	call    printASCII_vowels
	movl    $0, -120(%rbp)
	movl    -120(%rbp), %eax
.LFE3:
	movq    %rbp, %rsp
	popq    %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size   main, .-main
