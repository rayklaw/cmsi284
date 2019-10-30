	        global gcd		;uint64_t gcd(uint64_t x, uint64_t y)
		extern atoi
		extern puts

	        section .text
gcd:		
		cmp rsi, 0		;check if y == 0
		je yZero		;return x	
		jmp euclids		;jump to euclids
		

euclids:
		xor rdx, rdx		;set rdx to 0 because it is read rdx:rax
		mov rax, rdi		;write x to rax (dividend)
		mov rcx, rsi		;write y to rcx for division (divisor)
		div rcx			;div x by y
		cmp rdx, 0		;check if remainder is 0
		je return		;if so return y
		mov rdi, rsi		;write y to x
		mov rsi, rdx		;write remainder to y
		jmp euclids		;jump to start of loop

yZero:
		mov rax, rdi 		;return x
		ret
return: 
		mov rax, rcx		;return y
		ret


		
		section .data
result: db "The gcd of %d and %d is %d.", 0
argError: db "This program requires exactly two non-negative integer command line arguments.", 0
argError2: db "yeet", 0
	
