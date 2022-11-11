	.file	"asgn6_20CS30030_20CS30024_test1.c"

#	Allocation of function variables and temporaries on the stack:

#	main
#	a: -4
#	a0: -8
#	a1: -12
#	a2: -16
#	a3: -20
#	b: -24
#	c: -28
#	d: -32
#	e: -36
#	f: -40
#	g: -44
#	h: -48
#	i: -52
#	t10: -60
#	t100: -68
#	t101: -72
#	t102: -76
#	t103: -84
#	t104: -88
#	t105: -92
#	t107: -100
#	t108: -104
#	t109: -108
#	t11: -112
#	t110: -120
#	t111: -124
#	t112: -128
#	t113: -132
#	t114: -140
#	t115: -144
#	t116: -152
#	t117: -156
#	t118: -160
#	t12: -164
#	t13: -172
#	t14: -176
#	t15: -180
#	t16: -188
#	t17: -192
#	t18: -196
#	t19: -204
#	t20: -208
#	t21: -212
#	t22: -216
#	t23: -220
#	t24: -224
#	t25: -228
#	t26: -232
#	t27: -240
#	t28: -244
#	t29: -248
#	t3: -256
#	t30: -264
#	t31: -268
#	t32: -272
#	t33: -280
#	t34: -284
#	t35: -288
#	t36: -296
#	t37: -300
#	t38: -304
#	t39: -312
#	t4: -316
#	t40: -320
#	t41: -324
#	t42: -328
#	t43: -332
#	t44: -336
#	t45: -340
#	t46: -344
#	t47: -348
#	t48: -352
#	t49: -356
#	t5: -360
#	t50: -364
#	t51: -368
#	t52: -372
#	t53: -376
#	t54: -380
#	t55: -384
#	t56: -388
#	t57: -392
#	t58: -396
#	t59: -400
#	t6: -404
#	t60: -408
#	t61: -412
#	t62: -416
#	t63: -420
#	t64: -428
#	t65: -432
#	t66: -436
#	t67: -444
#	t68: -448
#	t69: -452
#	t7: -456
#	t70: -464
#	t71: -468
#	t72: -472
#	t73: -480
#	t74: -484
#	t75: -488
#	t76: -496
#	t77: -500
#	t78: -504
#	t79: -508
#	t8: -512
#	t80: -520
#	t81: -524
#	t82: -528
#	t83: -532
#	t84: -540
#	t85: -544
#	t87: -552
#	t88: -556
#	t89: -560
#	t9: -564
#	t90: -572
#	t91: -576
#	t92: -580
#	t94: -588
#	t95: -592
#	t96: -596
#	t97: -604
#	t98: -608
#	min
#	num1: -4
#	num2: -8
#	printInt
#	n: -4
#	printStr
#	s: -8
#	readInt
#	int_ptr: -8
#	testIncDec
#	n: -4
#	t0: -12
#	t1: -16
#	t2: -20

	.section	.rodata
.LC0:
	.string	"Given Value --> "
.LC1:
	.string	"\n#### TEST 1 (Arithmetic operators) ####"
.LC2:
	.string	"\na = "
.LC3:
	.string	"\nb = "
.LC4:
	.string	"\nc = "
.LC5:
	.string	"\nd = "
.LC6:
	.string	"\n a + b = "
.LC7:
	.string	"\na - b = "
.LC8:
	.string	"\na * b = "
.LC9:
	.string	"\na / b = "
.LC10:
	.string	"\na % b = "
.LC11:
	.string	"\n-a + b - c + d + 10 = "
.LC12:
	.string	"\na * b / c + d - 10 = "
.LC13:
	.string	"\na + b * c / d - 0 = "
.LC14:
	.string	"\n(a + b) * (c / d) - 15 = "
.LC15:
	.string	"\n-c = "
.LC16:
	.string	"\n-d = "
.LC17:
	.string	"\nTest pre increment: "
.LC18:
	.string	", Value after call = "
.LC19:
	.string	"\nTest post increment: "
.LC20:
	.string	", Value after call = "
.LC21:
	.string	"\nTest pre decrement: "
.LC22:
	.string	", Value after call = "
.LC23:
	.string	"\nTest post decrement: "
.LC24:
	.string	", Value after call = "
.LC25:
	.string	"\nTesting Function :\nMinimum out of a and b : "
.LC26:
	.string	"\n"
.LC27:
	.string	"\n\n"
	.text
	.globl  testIncDec
	.type   testIncDec, @function
testIncDec:
.LFB0:
	.cfi_startproc
	pushq   %rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq    %rsp, %rbp
	.cfi_def_cfa_register 6
	subq    $20, %rsp
	movl    %edi, -4(%rbp)
	movq    $.LC0, -12(%rbp)
	movq    -12(%rbp), %rdi
	call    printStr
	movl    %eax, -16(%rbp)
	movl    -4(%rbp), %edi
	call    printInt
	movl    %eax, -20(%rbp)
.LFE0:
	movq    %rbp, %rsp
	popq    %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size   testIncDec, .-testIncDec
	.text
	.globl  min
	.type   min, @function
min:
.LFB1:
	.cfi_startproc
	pushq   %rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq    %rsp, %rbp
	.cfi_def_cfa_register 6
	subq    $8, %rsp
	movl    %edi, -4(%rbp)
	movl    %esi, -8(%rbp)
	movl    -8(%rbp), %eax
	cmpl    %eax, -4(%rbp)
	jl      .L3
	jmp     .L4
.L3:
	movl    -4(%rbp), %eax
	jmp     .LFE1
	jmp     .LFE1
.L4:
	movl    -8(%rbp), %eax
.LFE1:
	movq    %rbp, %rsp
	popq    %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size   min, .-min
	.text
	.globl  main
	.type   main, @function
main:
.LFB2:
	.cfi_startproc
	pushq   %rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq    %rsp, %rbp
	.cfi_def_cfa_register 6
	subq    $608, %rsp
	movq    $.LC1, -256(%rbp)
	movq    -256(%rbp), %rdi
	call    printStr
	movl    %eax, -316(%rbp)
	movl    $11, -360(%rbp)
	movl    -360(%rbp), %eax
	movl    %eax, -4(%rbp)
	movl    $7, -404(%rbp)
	movl    -404(%rbp), %eax
	movl    %eax, -24(%rbp)
	movl    $24, -456(%rbp)
	movl    -456(%rbp), %eax
	negl    %eax
	movl    %eax, -512(%rbp)
	movl    -512(%rbp), %eax
	movl    %eax, -28(%rbp)
	movl    $100, -564(%rbp)
	movl    -564(%rbp), %eax
	movl    %eax, -32(%rbp)
	movq    $.LC2, -60(%rbp)
	movq    -60(%rbp), %rdi
	call    printStr
	movl    %eax, -112(%rbp)
	movl    -4(%rbp), %edi
	call    printInt
	movl    %eax, -164(%rbp)
	movq    $.LC3, -172(%rbp)
	movq    -172(%rbp), %rdi
	call    printStr
	movl    %eax, -176(%rbp)
	movl    -24(%rbp), %edi
	call    printInt
	movl    %eax, -180(%rbp)
	movq    $.LC4, -188(%rbp)
	movq    -188(%rbp), %rdi
	call    printStr
	movl    %eax, -192(%rbp)
	movl    -28(%rbp), %edi
	call    printInt
	movl    %eax, -196(%rbp)
	movq    $.LC5, -204(%rbp)
	movq    -204(%rbp), %rdi
	call    printStr
	movl    %eax, -208(%rbp)
	movl    -32(%rbp), %edi
	call    printInt
	movl    %eax, -212(%rbp)
	movl    -4(%rbp), %eax
	addl    -24(%rbp), %eax
	movl    %eax, -216(%rbp)
	movl    -216(%rbp), %eax
	movl    %eax, -36(%rbp)
	movl    -4(%rbp), %eax
	subl    -24(%rbp), %eax
	movl    %eax, -220(%rbp)
	movl    -220(%rbp), %eax
	movl    %eax, -40(%rbp)
	movl    -4(%rbp), %eax
	imull   -24(%rbp), %eax
	movl    %eax, -224(%rbp)
	movl    -224(%rbp), %eax
	movl    %eax, -44(%rbp)
	movl    -4(%rbp), %eax
	cdq     
	idivl   -24(%rbp)
	movl    %eax, -228(%rbp)
	movl    -228(%rbp), %eax
	movl    %eax, -48(%rbp)
	movl    -4(%rbp), %eax
	cdq     
	idivl   -24(%rbp)
	movl    %edx, -232(%rbp)
	movl    -232(%rbp), %eax
	movl    %eax, -52(%rbp)
	movq    $.LC6, -240(%rbp)
	movq    -240(%rbp), %rdi
	call    printStr
	movl    %eax, -244(%rbp)
	movl    -36(%rbp), %edi
	call    printInt
	movl    %eax, -248(%rbp)
	movq    $.LC7, -264(%rbp)
	movq    -264(%rbp), %rdi
	call    printStr
	movl    %eax, -268(%rbp)
	movl    -40(%rbp), %edi
	call    printInt
	movl    %eax, -272(%rbp)
	movq    $.LC8, -280(%rbp)
	movq    -280(%rbp), %rdi
	call    printStr
	movl    %eax, -284(%rbp)
	movl    -44(%rbp), %edi
	call    printInt
	movl    %eax, -288(%rbp)
	movq    $.LC9, -296(%rbp)
	movq    -296(%rbp), %rdi
	call    printStr
	movl    %eax, -300(%rbp)
	movl    -48(%rbp), %edi
	call    printInt
	movl    %eax, -304(%rbp)
	movq    $.LC10, -312(%rbp)
	movq    -312(%rbp), %rdi
	call    printStr
	movl    %eax, -320(%rbp)
	movl    -52(%rbp), %edi
	call    printInt
	movl    %eax, -324(%rbp)
	movl    -4(%rbp), %eax
	negl    %eax
	movl    %eax, -328(%rbp)
	movl    -328(%rbp), %eax
	addl    -24(%rbp), %eax
	movl    %eax, -332(%rbp)
	movl    -332(%rbp), %eax
	subl    -28(%rbp), %eax
	movl    %eax, -336(%rbp)
	movl    -336(%rbp), %eax
	addl    -32(%rbp), %eax
	movl    %eax, -340(%rbp)
	movl    $10, -344(%rbp)
	movl    -340(%rbp), %eax
	addl    -344(%rbp), %eax
	movl    %eax, -348(%rbp)
	movl    -348(%rbp), %eax
	movl    %eax, -8(%rbp)
	movl    -4(%rbp), %eax
	imull   -24(%rbp), %eax
	movl    %eax, -352(%rbp)
	movl    -352(%rbp), %eax
	cdq     
	idivl   -28(%rbp)
	movl    %eax, -356(%rbp)
	movl    -356(%rbp), %eax
	addl    -32(%rbp), %eax
	movl    %eax, -364(%rbp)
	movl    $10, -368(%rbp)
	movl    -364(%rbp), %eax
	subl    -368(%rbp), %eax
	movl    %eax, -372(%rbp)
	movl    -372(%rbp), %eax
	movl    %eax, -12(%rbp)
	movl    -24(%rbp), %eax
	imull   -28(%rbp), %eax
	movl    %eax, -376(%rbp)
	movl    -376(%rbp), %eax
	cdq     
	idivl   -32(%rbp)
	movl    %eax, -380(%rbp)
	movl    -4(%rbp), %eax
	addl    -380(%rbp), %eax
	movl    %eax, -384(%rbp)
	movl    $0, -388(%rbp)
	movl    -384(%rbp), %eax
	subl    -388(%rbp), %eax
	movl    %eax, -392(%rbp)
	movl    -392(%rbp), %eax
	movl    %eax, -16(%rbp)
	movl    -4(%rbp), %eax
	addl    -24(%rbp), %eax
	movl    %eax, -396(%rbp)
	movl    -28(%rbp), %eax
	negl    %eax
	movl    %eax, -400(%rbp)
	movl    -400(%rbp), %eax
	cdq     
	idivl   -32(%rbp)
	movl    %eax, -408(%rbp)
	movl    -396(%rbp), %eax
	imull   -408(%rbp), %eax
	movl    %eax, -412(%rbp)
	movl    $15, -416(%rbp)
	movl    -412(%rbp), %eax
	subl    -416(%rbp), %eax
	movl    %eax, -420(%rbp)
	movl    -420(%rbp), %eax
	movl    %eax, -20(%rbp)
	movq    $.LC11, -428(%rbp)
	movq    -428(%rbp), %rdi
	call    printStr
	movl    %eax, -432(%rbp)
	movl    -8(%rbp), %edi
	call    printInt
	movl    %eax, -436(%rbp)
	movq    $.LC12, -444(%rbp)
	movq    -444(%rbp), %rdi
	call    printStr
	movl    %eax, -448(%rbp)
	movl    -12(%rbp), %edi
	call    printInt
	movl    %eax, -452(%rbp)
	movq    $.LC13, -464(%rbp)
	movq    -464(%rbp), %rdi
	call    printStr
	movl    %eax, -468(%rbp)
	movl    -16(%rbp), %edi
	call    printInt
	movl    %eax, -472(%rbp)
	movq    $.LC14, -480(%rbp)
	movq    -480(%rbp), %rdi
	call    printStr
	movl    %eax, -484(%rbp)
	movl    -20(%rbp), %edi
	call    printInt
	movl    %eax, -488(%rbp)
	movq    $.LC15, -496(%rbp)
	movq    -496(%rbp), %rdi
	call    printStr
	movl    %eax, -500(%rbp)
	movl    -28(%rbp), %eax
	negl    %eax
	movl    %eax, -504(%rbp)
	movl    -504(%rbp), %edi
	call    printInt
	movl    %eax, -508(%rbp)
	movq    $.LC16, -520(%rbp)
	movq    -520(%rbp), %rdi
	call    printStr
	movl    %eax, -524(%rbp)
	movl    -32(%rbp), %eax
	negl    %eax
	movl    %eax, -528(%rbp)
	movl    -528(%rbp), %edi
	call    printInt
	movl    %eax, -532(%rbp)
	movq    $.LC17, -540(%rbp)
	movq    -540(%rbp), %rdi
	call    printStr
	movl    %eax, -544(%rbp)
	incl    -4(%rbp)
	movl    -4(%rbp), %edi
	call    testIncDec
	movq    $.LC18, -552(%rbp)
	movq    -552(%rbp), %rdi
	call    printStr
	movl    %eax, -556(%rbp)
	movl    -4(%rbp), %edi
	call    printInt
	movl    %eax, -560(%rbp)
	movq    $.LC19, -572(%rbp)
	movq    -572(%rbp), %rdi
	call    printStr
	movl    %eax, -576(%rbp)
	movl    -4(%rbp), %eax
	movl    %eax, -580(%rbp)
	incl    -4(%rbp)
	movl    -580(%rbp), %edi
	call    testIncDec
	movq    $.LC20, -588(%rbp)
	movq    -588(%rbp), %rdi
	call    printStr
	movl    %eax, -592(%rbp)
	movl    -4(%rbp), %edi
	call    printInt
	movl    %eax, -596(%rbp)
	movq    $.LC21, -604(%rbp)
	movq    -604(%rbp), %rdi
	call    printStr
	movl    %eax, -608(%rbp)
	decl    -4(%rbp)
	movl    -4(%rbp), %edi
	call    testIncDec
	movq    $.LC22, -68(%rbp)
	movq    -68(%rbp), %rdi
	call    printStr
	movl    %eax, -72(%rbp)
	movl    -4(%rbp), %edi
	call    printInt
	movl    %eax, -76(%rbp)
	movq    $.LC23, -84(%rbp)
	movq    -84(%rbp), %rdi
	call    printStr
	movl    %eax, -88(%rbp)
	movl    -4(%rbp), %eax
	movl    %eax, -92(%rbp)
	decl    -4(%rbp)
	movl    -92(%rbp), %edi
	call    testIncDec
	movq    $.LC24, -100(%rbp)
	movq    -100(%rbp), %rdi
	call    printStr
	movl    %eax, -104(%rbp)
	movl    -4(%rbp), %edi
	call    printInt
	movl    %eax, -108(%rbp)
	movq    $.LC25, -120(%rbp)
	movq    -120(%rbp), %rdi
	call    printStr
	movl    %eax, -124(%rbp)
	movl    -24(%rbp), %esi
	movl    -4(%rbp), %edi
	call    min
	movl    %eax, -128(%rbp)
	movl    -128(%rbp), %edi
	call    printInt
	movl    %eax, -132(%rbp)
	movq    $.LC26, -140(%rbp)
	movq    -140(%rbp), %rdi
	call    printStr
	movl    %eax, -144(%rbp)
	movq    $.LC27, -152(%rbp)
	movq    -152(%rbp), %rdi
	call    printStr
	movl    %eax, -156(%rbp)
	movl    $0, -160(%rbp)
	movl    -160(%rbp), %eax
.LFE2:
	movq    %rbp, %rsp
	popq    %rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
	.size   main, .-main
