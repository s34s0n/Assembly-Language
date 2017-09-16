extern scanf
extern printf

section .data
	abc: db "Enter  the number",10,0
	strg: db "%s",0
	decim: db "%d",0
	outp: db "The sum of numbers from 1 to %d is: %d",10,0
	inp: dd 0

section .text

	global main
	main:

	push ebp
	mov ebp, esp

	push abc
	push strg
	call printf

	push inp
	push decim
	call scanf

	mov ebx, DWORD[inp]

	mov eax,0x0

	mov ecx, 0x1
	l1:
	cmp ecx,ebx
	je l2
	add eax,ecx
	add ecx,0x1
	jmp l1
	l2:

	add eax,ecx
	push eax
	push ebx
	push outp
	call printf

	mov esp, ebp
	pop ebp
	ret
