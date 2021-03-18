hello:	 .string "Hello, Holberton!\n"
	.balign 4
	.global main
main:	 stp  x29, x30, [sp, -16]!
	mov x29,sp
	adrp x0, hello
	add  x0, x0, :lo12:hello
	bl   printf
	mov  w0, 0
	ldp  x29, x30, [sp], 16
	ret
