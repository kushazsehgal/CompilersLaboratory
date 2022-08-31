# CS39003 Compiler Laboratory - Assignment 1
# Name : Kushaz Sehgal	Roll Number : 20CS30030

	.file	"asgn1.c"											# name of source file
	.text														# instructions start from here
	.section	.rodata											# read only data section
	.align 8													# align with 8 byte boundary																
.LC0:															# label of f-string for first printf (prompt)
	.string	"Enter the string (all lowrer case): "
.LC1:															# label of f-string for scanf (reading str)
	.string	"%s"
.LC2:															# label of f-string for second printf (length of string)
	.string	"Length of the string: %d\n"							
	.align 8													# align with 8 byte boundary
.LC3:															# label of f-string for third printf (output string)
	.string	"The string in descending order: %s\n"							
	.text
	.globl	main												# main is a global name
	.type	main, @function										# declaring that main is a function
# functions start here
	# int main()
main:															# main function
.LFB0:
	.cfi_startproc												# initializes some internal data structures and emits architecture dependent initial CFI instructions. 
	endbr64
	pushq	%rbp												# save base pointer (rbp) in stack
	.cfi_def_cfa_offset 16										# set CFA at an offset of 16 bytes from the current stack pointer
	.cfi_offset 6, -16											# set value of register 6 at offset 16 from CFA
	movq	%rsp, %rbp											# rbp <-- rsp, set new stack base pointer
	.cfi_def_cfa_register 6										# use register 6 for computing CFA

	# char str[20], dest[20];int len;
	subq	$80, %rsp											# rsp <-- rsp - 80, allocating memory for str,dest and len
	movq	%fs:40, %rax										# get canary
	movq	%rax, -8(%rbp)										# M[rbp - 8] <-- rax
	xorl	%eax, %eax											# erase canary
	
	# printf("Enter the string (all lowrer case): ");
	leaq	.LC0(%rip), %rax									# loading string in .LCO(%rip) into rax
	movq	%rax, %rdi											# moving string into rdi (first argument to function)
	movl	$0, %eax											# eax <-- 0
	call	printf@PLT											# calling prinf with prompt as argument , rdi as argument

	# scanf("%s", str);
	leaq	-64(%rbp), %rax										# rax <-- M[rbp - 64] load str into rax
	movq	%rax, %rsi											# 2nd argument set as value in rax
	leaq	.LC1(%rip), %rax									# loading string in .LC1(%rip) into rax
	movq	%rax, %rdi											# 1st argument set as value in rax
	movl	$0, %eax											# eax <-- 0
	call	__isoc99_scanf@PLT									# call scanf with str and value in .LC1

	# len = length(str);
	leaq	-64(%rbp), %rax										# rax <-- M[rbp - 64] load str into rax
	movq	%rax, %rdi											# set 1st argument as str
	call	length												# call length function with 1st argument as str
	movl	%eax, -68(%rbp)										# M[rbp - 68] <-- eax move return value of length(str) into len

	# printf("Length of the string: %d\n", len);
	movl	-68(%rbp), %eax										# eax <-- M[rbp - 68] move value of len into eax
	movl	%eax, %esi											# set value of len as 2nd argument
	leaq	.LC2(%rip), %rax									# load string at .LC2(%rip) into rax
	movq	%rax, %rdi											# passed loaded string into first argument
	movl	$0, %eax											# eax <-- 0
	call	printf@PLT											# call printf with the corresponding arguments

	# sort(str, len, dest);
	leaq	-32(%rbp), %rdx										# rdx <--M[rbp - 32]  set dest as 3rd argument
	movl	-68(%rbp), %ecx										# rcx <-- M[rbp - 68] set len as 4nd argument
	leaq	-64(%rbp), %rax										# rax <-- M[rbp - 64] load str into rax
	movl	%ecx, %esi											# set len as 2nd argument
	movq	%rax, %rdi											# value in rax (str) set as first argument
	call	sort												# call sort function (str,len,dest) as corresponding arguments

	# printf("The string in descending order: %s\n", dest);
	leaq	-32(%rbp), %rax										# load dest into rax
	movq	%rax, %rsi											# set dest as 2nd argument 
	leaq	.LC3(%rip), %rax									# load string at .LC3(%rip) into rax
	movq	%rax, %rdi											# set string in rax as 1st argument
	movl	$0, %eax											# eax <-- 0
	call	printf@PLT											# call printf with corresponding arguments

	#return  0
	movl	$0, %eax											# eax <-- 0
	movq	-8(%rbp), %rdx										# rdx <-- M[rbp - 8]
	subq	%fs:40, %rdx										# if canary is valid, (jump on equal) will terminate successfully
	je	.L3														# jump on equal to .L3 label
	call	__stack_chk_fail@PLT								# If je failed, stackoverflow has occured
.L3:
	leave														
	.cfi_def_cfa 7, 8											# for computing CFA, take address from register 7 and add an offset of 8 to it
	ret
	.cfi_endproc												# close the unwind entry previously opened by .cfi_startproc. and emit it to .eh_frame
.LFE0:
	.size	main, .-main
	.globl	length												# length is a global name
	.type	length, @function									# defining type of length as function
	
	# int length(char str[20])
length:
.LFB1:
	.cfi_startproc												# initializes some internal data structures and emits architecture dependent initial CFI instructions. 
	endbr64
	pushq	%rbp												# save base pointer (rbp) in stack
	.cfi_def_cfa_offset 16										# set CFA at an offset of 16 bytes from the current stack pointer
	.cfi_offset 6, -16											# set value of register 6 at offset 16 from CFA
	movq	%rsp, %rbp											# rbp <-- rsp, set new stack base pointer
	.cfi_def_cfa_register 6										# use register 6 for computing CFA
	#int i
	# for (i = 0; str[i] != '\0'; i++) 
	movq	%rdi, -24(%rbp)										# M[rbp - 24] <-- rdi , storing str						
	# i = 0
	movl	$0, -4(%rbp)										# initialising i = 0 M[rbp - 4] is i
	
	jmp	.L5														# jump to .L5
.L6:
	# i++
	addl	$1, -4(%rbp)										# add 1 to i
.L5:
	# str[i] != '\0'
	movl	-4(%rbp), %eax										# eax <-- M[rbp - 4] set value of %eax as i
	movslq	%eax, %rdx											# rdx <-- eax signed extension from 32-bit to 64-bit (rdx = i) 
	movq	-24(%rbp), %rax										# rax <-- M[rbp - 24] set str as first argument
	# str[i]
	addq	%rdx, %rax											# rax <-- rax + rdx (str + i = str[i])
	movzbl	(%rax), %eax										# eax <-- rax extend to 32 bit register
	# comparison of str[i] and \0
	testb	%al, %al											# al <-- least significant byte of eax, testb calculates and of operands	
	jne	.L6														# performs jump to .L6 if al & al == 0	
	# return i
	movl	-4(%rbp), %eax										# eax <-- M[rbp - 4] set value of %eax as i
	popq	%rbp												# pop top of stack into rbp
	.cfi_def_cfa 7, 8											# for computing CFA, take address from register 7 and add an offset of 8 to it
	ret															# transfer control back to return address
	.cfi_endproc
.LFE1:
	.size	length, .-length
	.globl	sort											# sort is a global name
	.type	sort, @function									# defining type of sort as function

	# void sort(char str[20], int len, char dest[20])
sort:
.LFB2:
	.cfi_startproc											# initializes some internal data structures and emits architecture dependent initial CFI instructions. 
	endbr64
	pushq	%rbp											# save base pointer (rbp) in stack
	.cfi_def_cfa_offset 16									# set CFA at an offset of 16 bytes from the current stack pointer
	.cfi_offset 6, -16										# set value of register 6 at offset 16 from CFA
	movq	%rsp, %rbp										# rbp <-- rsp, set new stack base pointer
	.cfi_def_cfa_register 6									# use register 6 for computing CFA
	# int i, j;char temp;
	subq	$48, %rsp										# rsp <-- rsp - 48, allocating memory for i,j and temp

	movq	%rdi, -24(%rbp)									# M[rbp - 24] <-- rdi , storing str  (first argument)
	movl	%esi, -28(%rbp)									# M[rbp - 28] <-- esi , storing len  (second argument)
	movq	%rdx, -40(%rbp)									# M[rbp - 40] <-- rdx , storing dest (third argument)
	# for (i = 0; i < len; i++)
	# i = 0
	movl	$0, -8(%rbp)									# M[rbp - 8] <-- 0 , initialising i = 0
	jmp	.L9													# jump to .L9
.L13:
	# for (j = 0; j < len; j++)
	# j = 0
	movl	$0, -4(%rbp)									# M[rbp - 4] <-- 0  , initialising j = 0
	jmp	.L10												# jump to .L10
.L12:
	# if (str[i] < str[j])
	movl	-8(%rbp), %eax									# eax <-- M[rbp - 8]  rdx <-- eax signed extension from 32-bit to 64-bit (eax set as i)
	movslq	%eax, %rdx										# rdx <-- eax signed extension from 32-bit to 64-bit (rdx = i)
	movq	-24(%rbp), %rax									# rax <-- M[rbp - 24] rax set as str
	# getting str[i]
	addq	%rdx, %rax										# rax <-- rax + rdx (str + i = str[i])
	movzbl	(%rax), %edx									# edx <-- rax extend to 32 bit register
	movl	-4(%rbp), %eax									# eax <-- M[rbp - 4] , eax set as j
	movslq	%eax, %rcx										# rdx <-- eax signed extension from 32-bit to 64-bit (rdx = j)
	movq	-24(%rbp), %rax									# rax <-- -M[rbp - 24] rax set as str
	# getting str[j]
	addq	%rcx, %rax										# rax <-- rax + rcx (str + j = str[j])
	movzbl	(%rax), %eax									# eax <-- rax extend to 32 bit register
	cmpb	%al, %dl										# comparing str[i] with str[j] (compare first byte of edx (str[i]) with eax (str[j]))
	jge	.L11												# if str[i] >= str[j] jump to .L11 (if first byte of edx >= eax )
	# inside if
	# temp = str[i]
	movl	-8(%rbp), %eax									# eax <-- M[rbp - 8] eax set as i
	movslq	%eax, %rdx										# rdx <-- eax signed extension from 32-bit to 64-bit (rdx = j)
	movq	-24(%rbp), %rax									# rax <-- M[rbp - 24] rax set as str
	addq	%rdx, %rax										# rax <-- rax + rdx (str + i = str[i])
	movzbl	(%rax), %eax									# edx <-- rax extend to 32 bit register
	movb	%al, -9(%rbp)									# al <-- M[rbp - 9] 1st byte of eax <-- rbp - 9, (str[i] = rbp - 9)
	# str[i] = str[j]
	movl	-4(%rbp), %eax									# eax <-- M[rbp - 4] , eax set as j
	movslq	%eax, %rdx										# rdx <-- eax signed extension from 32-bit to 64-bit (rdx = j)
	movq	-24(%rbp), %rax									# rax <-- M[rbp - 24] rax set as str	
	# getting str[j]
	addq	%rdx, %rax										# rax <-- rax + rdx (str + j = str[j])
	movl	-8(%rbp), %edx									# eax <-- M[rbp - 8] , eax set as j
	movslq	%edx, %rcx										# rcx <-- edx signed extension from 32-bit to 64-bit (rdx = i)								
	movq	-24(%rbp), %rdx									# rax <-- -M[rbp - 24] rax set as str
	# getting str[i]
	addq	%rcx, %rdx										# rax <-- rax + rdx (str + i = str[i])
	movzbl	(%rax), %eax									# eax <-- rax  extend to into 32 bit eax register (eax = str[j])	
	# assigning str[i] = str[j]
	movb	%al, (%rdx)										# move 1 byte from al(str[j]) to last byte of rdx(str[i])
	# str[j] = temp
	movl	-4(%rbp), %eax									# eax <-- M[rbp - 4] , eax set as j
	movslq	%eax, %rdx										# rdx <-- eax signed extension from 32-bit to 64-bit (rdx = j)
	movq	-24(%rbp), %rax									# rax <-- M[rbp - 24] rax set as str	
	addq	%rax, %rdx										# rax <-- rax + rdx (str + j = str[j])
	movzbl	-9(%rbp), %eax									# eax <-- M[rbp - 9] extend to 32 bit eax register (eax = temp)
	# assigning str[j] = temp
	movb	%al, (%rdx)										# rdx <-- al rdx set as temp
.L11:
	# j++
	addl	$1, -4(%rbp)									# M[rbp - 4] <-- M[rbp - 4] + 1, j = j + 1		
.L10:
	movl	-4(%rbp), %eax									# eax <-- M[rbp - 4] eax set as j
	cmpl	-28(%rbp), %eax									# comparing eax (j) with M[rbp - 28] (len)
	jl	.L12												# if j < len jump to .L12
	# i++
	addl	$1, -8(%rbp)									# M[rbp - 9] <-- M[rbp - 8] + 1, i = i + 1
.L9:
	movl	-8(%rbp), %eax									# eax <-- M[rbp - 8] that is, eax = i
	# i < len check
	cmpl	-28(%rbp), %eax									# compare M[rbp - 28] and eax,that is true if destination < source, that is i < len
	jl	.L13												# if destination < source jump to .L13
	# reverse(str, len, dest);
	movq	-40(%rbp), %rdx									# rdx <-- M[rbp - 40] that is, rdx = dest
	movl	-28(%rbp), %ecx									# ecx <-- M[rbp - 28] set ecx as len			
	movq	-24(%rbp), %rax									# rax <-- M[rbp - 24] rax = str
	movl	%ecx, %esi										# esi <-- ecx , 2nd argument set as len
	movq	%rax, %rdi										# rdi <-- rax , first argument set as str
	call	reverse											# call reverse with 1st, 2nd and 3rd args as str, len and dest
	nop
	leave
	.cfi_def_cfa 7, 8										# for computing CFA, take address from register 7 and add an offset of 8 to it
	ret
	.cfi_endproc											# transfer control back to return address
.LFE2:
	.size	sort, .-sort
	.globl	reverse											# reverse is a global name
	.type	reverse, @function								# declaring that reverse is a function
	
	# void reverse(char str[20], int len, char dest[20])
reverse:
.LFB3:
	.cfi_startproc											# initializes some internal data structures and emits architecture dependent initial CFI instructions. 
	endbr64
	pushq	%rbp											# save base pointer (rbp) in stack
	.cfi_def_cfa_offset 16									# set CFA at an offset of 16 bytes from the current stack pointer
	.cfi_offset 6, -16										# set value of register 6 at offset 16 from CFA
	movq	%rsp, %rbp										# rbp <-- rsp, set new stack base pointer
	.cfi_def_cfa_register 6									# use register 6 for computing CFA
	movq	%rdi, -24(%rbp)									# M[rbp - 24] <-- rdi , storing str  (first argument)
	movl	%esi, -28(%rbp)									# M[rbp - 28] <-- esi , storing len  (second argument)
	movq	%rdx, -40(%rbp)									# M[rbp - 40] <-- esi , storing dest (third argument)
	# for (i = 0; i < len / 2; i++)
	# i = 0;
	movl	$0, -8(%rbp)									# M[rbp - 8] <-- 0, i = 0
	jmp	.L15												# jump to .L15
.L20:
	# for (j = len - i - 1; j >= len / 2; j--)
	# j = len - i - 1;
	movl	-28(%rbp), %eax									# eax <-- M[rbp - 28], set eax as len
	subl	-8(%rbp), %eax									# eax <-- eax - M[rbp - 8] eax <-- eax  - i			
	subl	$1, %eax										# eax <-- eax - 1
	movl	%eax, -4(%rbp)									# M[rbp - 4] <-- eax set M[rbp - 4] as j		
	nop
	# j >= len / 2;
	movl	-28(%rbp), %eax									# eax <-- M[rbp - 28] set eax as len
	movl	%eax, %edx										# edx <-- eax set edx as len
	shrl	$31, %edx										# edx >> 31, right shift edx by 31 bits, edx is a 32-bit register and 
															# right shifting by 31 bits --> the MSB is 1 or 0 (sign of len)
	addl	%edx, %eax										# eax <-- eax + edx, add 1 to len if len is negative or add 0
	sarl	%eax											# eax >> 1, (equivalent to len = len / 2)
	cmpl	%eax, -4(%rbp)									# comparing eax and M[rbp - 4],that is, comparing j and len
	jl	.L18												# jump on less than. that is if j < len / 2
	# if (i == j)
	# break;
	movl	-8(%rbp), %eax									# eax <-- M[rbp - 8] set eax as i
	cmpl	-4(%rbp), %eax									# compare eax with M[rbp - 4] that is compare i and j
	je	.L23												# jump on equal that is jump to .L23 if i == j
	# else
	# temp = str[i]
	movl	-8(%rbp), %eax									# eax <-- M[rbp - 8] set eax as i
	movslq	%eax, %rdx										# rdx <-- eax signed extension from 32-bit to 64-bit (rdx = i)
	movq	-24(%rbp), %rax									# rax <-- M[rbp - 24] rax set as str
	# temp = str[i]
	addq	%rdx, %rax										# rax <-- rax + rdx (str + i = str[i])
	movzbl	(%rax), %eax									# eax <-- rax  extend to into 32 bit eax register (eax = str[i])	
	# assign temp = str[i]
	movb	%al, -9(%rbp)									# eax <-- M[rbp - 9] extend to 32 bit eax register (eax = temp)
	# str[i] = str[j]
	movl	-4(%rbp), %eax									# eax <-- M[rbp - 4] , eax set as j
	movslq	%eax, %rdx										# rdx <-- eax signed extension from 32-bit to 64-bit (rdx = j)
	movq	-24(%rbp), %rax									# rax <-- M[rbp - 24] rax set as str
	# get str[j]
	addq	%rdx, %rax										# rax <-- rax + rdx (str + j = str[j])
	movl	-8(%rbp), %edx									# edx <-- M[rbp - 8] , eax set as i
	movslq	%edx, %rcx										# rcx <-- edx signed extension from 32-bit to 64-bit (rdx = i)
	movq	-24(%rbp), %rdx									# rdx <-- M[rbp - 24] rax set as str
	# get str[i]
	addq	%rcx, %rdx										# rdx <-- rdx + rxx (str + i = str[i])
	movzbl	(%rax), %eax									# eax <-- rax  extend to into 32 bit eax register (eax = str[j])	
	# assign str[i] = str[j]
	movb	%al, (%rdx)										# move 1 byte from al(str[j]) to last byte of rdx(str[i])
	# str[j] = temp
	movl	-4(%rbp), %eax									# eax <-- M[rbp - 4] , eax set as j
	movslq	%eax, %rdx										# rdx <-- eax signed extension from 32-bit to 64-bit (rdx = j)
	movq	-24(%rbp), %rax									# rax <-- M[rbp - 24] rax set as str
	# get str[j]
	addq	%rax, %rdx										# rax <-- rax + rdx (str + j = str[j])
	movzbl	-9(%rbp), %eax									# eax <-- M[rbp - 9] extend to 32 bit eax register (eax = temp)
	# assign str[j] = temp
	movb	%al, (%rdx)										# rdx <-- al rdx set as temp
	jmp	.L18												# jump to .L18
.L23:
	nop
.L18:
	# i = i + 1
	addl	$1, -8(%rbp)									# M[rbp - 8] <-- M[rbp - 8] + 1 , i = i + 1						
.L15:
	movl	-28(%rbp), %eax									# eax <-- M[rbp - 28] , eax = len
	movl	%eax, %edx										# edx <-- eax , edx = len
	shrl	$31, %edx										# edx >> 31, right shift edx by 31 bits, edx is a 32-bit register and 
															# right shifting by 31 bits --> the MSB is 1 or 0 (sign of len)
	addl	%edx, %eax										# eax <-- eax + edx, add 1 to len if len is negative or add 0
	# check i < len / 2 
	sarl	%eax											# eax >> 1, len = len / 2
	cmpl	%eax, -8(%rbp)									# comparing eax(len/2) and M[rbp - 8](i)
	jl	.L20												# jump if lesser than --> if i < len / 2 jump to .L20
	# for (i = 0; i < len; i++)
	# i = 0
	movl	$0, -8(%rbp)									# M[rbp - 8] <-- 0initialising i = 0
	jmp	.L21												# jump to .L21
.L22:
	# dest[i] = str[i]
	# get str[i]
	movl	-8(%rbp), %eax 									# eax <-- M[rbp - 8] , eax = i
	movslq	%eax, %rdx										# rdx <-- eax signed extension from 32-bit to 64-bit (rdx = i)
	movq	-24(%rbp), %rax									# rax <-- M[rbp - 24] rax set as str
	addq	%rdx, %rax										# rax <-- rax + rdx (str + i = str[i])
	# get dest[i]	
	movl	-8(%rbp), %edx									# eax <-- M[rbp - 8] , eax = i
	movslq	%edx, %rcx										# rcx <-- edx signed extension from 32-bit to 64-bit (rcx = i)
	movq	-40(%rbp), %rdx									# rdx <-- M[rbp - 40] rdx set as dest
	addq	%rcx, %rdx										# rdx <-- rdx + rcx (dest + i = dest[i])		
	# assign dest[i] = str[i]
	movzbl	(%rax), %eax									# eax <-- rax  extend to into 32 bit eax register (eax = str[i])	
	movb	%al, (%rdx)										# move 1 byte from al(str[i]) to last byte of rdx(dest[i])
	# i = i + 1
	addl	$1, -8(%rbp)
.L21:
	movl	-8(%rbp), %eax									# eax <-- M[rbp - 8], that is, eax <-- i
	# check if i < len
	cmpl	-28(%rbp), %eax									# comparing M[rbp - 28] and eax,that is comparing len and i
	jl	.L22												# jump if lesser than --> lif i < len jump to .L22
	nop
	nop
	popq	%rbp											# pop top of stack into rbp
	.cfi_def_cfa 7, 8										# for computing CFA, take address from register 7 and add an offset of 8 to it
	ret														# transfer control back to return address
	.cfi_endproc											
.LFE3:
	.size	reverse, .-reverse
	.ident	"GCC: (Ubuntu 11.2.0-19ubuntu1) 11.2.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
