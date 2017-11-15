	.file	"tmp.c"
	.section	.rodata
.LC0:
	.string	"%s"
.LC1:
	.string	"====================="
	.text
	.globl	main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$0, -56(%rbp)
	movl	$0, -52(%rbp)
	jmp	.L2
.L3:
	movl	$1, %edi
	call	malloc
	movq	%rax, %rdx
	movl	-52(%rbp), %eax
	cltq
	movq	%rdx, -48(%rbp,%rax,8)
	addl	$1, -52(%rbp)
.L2:
	cmpl	$4, -52(%rbp)
	jle	.L3
	movl	$0, -56(%rbp)
	jmp	.L4
.L5:
	movl	-56(%rbp), %eax
	cltq
	movq	-48(%rbp,%rax,8), %rax
	movq	%rax, %rsi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	addl	$1, -56(%rbp)
.L4:
	cmpl	$4, -56(%rbp)
	jle	.L5
	movl	$.LC1, %edi
	call	puts
	movl	$0, -56(%rbp)
	jmp	.L6
.L7:
	movl	-56(%rbp), %eax
	cltq
	movq	-48(%rbp,%rax,8), %rax
	movq	%rax, %rdi
	call	puts
	addl	$1, -56(%rbp)
.L6:
	cmpl	$4, -56(%rbp)
	jle	.L7
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L9
	call	__stack_chk_fail
.L9:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.5) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
