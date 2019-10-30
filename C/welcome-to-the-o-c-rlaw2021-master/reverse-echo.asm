		global	main
		extern	puts
		extern strlen
		extern	reverse_range_in_place  

		section	.text
main:
		push r12			;push registers
		push r13
		push r14
		mov r12, rsi			;write argv to r12
		mov r13, rdi			;write argc to r13
		mov r14, 0			;write 0 r14
		jmp loopStart			;start loop

loopStart:	
		mov rdi, [r12 + r14]		;first arg of strlen
		call strlen			;strlen of first arg
		sub rax, 1			;result strlen in rax, index-1

		mov rsi, 0			;write 0 to rsi
		mov rdx, rax			;move length-1 to rdx
		call reverse_range_in_place	;RRinP on index rsi and rdx

		mov rdi, [r12 + r14]		;move result of RRinP to rdi
		call puts			;print result of RRinP
		add r14, 8			;increment pointer index by 1
		dec r13				;decrease argc by 1
		jnz loopStart			;if arc =/= loop again
		jmp return

return:
		pop r12				;pop registers
		pop r13	
		pop r14
		ret				;return

		
