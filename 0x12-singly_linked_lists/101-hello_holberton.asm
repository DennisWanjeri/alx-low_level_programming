	global	main
		extern	printf
		section	.text
main:	push		rbx
		lea
	rdi, [rel message]
		call	printf
		xor			eax,eax
		pop		rbx
		ret
		section	.data
message:	db
"Hello, Holberton", 10, 0
