
        		global main
        		extern atoi
        		extern printf
       			extern puts

		        section .text
main:
			push rdi		;push registers
			push rdx
			push rsi

			cmp rdi, 2
			jne invalidArg 		;if argc =/= 2 argument invalid
			mov rdi, [rsi + 8]	;write input to rdi
			call atoi		;change rdi to integer
			cmp rdi, 0
			jne nonNumericalArg	;if arg is nonnumerical jump
			mov ecx, 25		;write 25 to rcx
			div ecx			;divide rax by 25
			pop rsi
			mov rdx, [rsi + 8]
			mov rdi, result		;write result string to rdi
			movsxd rsi, eax		;write quotient to r10
			xor rax, rax
			call printf		;print
        		jmp return		;jump to return

invalidArg:
			mov edi, argError	;write error string to edi
			call puts		;print
			pop rsi
			jmp return		;jump to return

nonNumericalArg:
			mov edi, argError2	;write error string to edi
			call puts		;print
			pop rsi
			jmp return		;jump to return

return:
			pop rdx			;pop registers
			pop rdi
			ret			;return

			section .data
argError: db "This program requires exactly one integer command line argument.", 0
argError2: db "0 quarters make partial change for 0 cents.", 0
result: db "%d quarters make partial change for %s cents.", 0
