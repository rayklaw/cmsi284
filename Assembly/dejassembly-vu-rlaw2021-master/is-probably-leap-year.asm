        	global main
        	extern atoi
        	extern printf
        	extern puts

        	section .text
main:
		push r12		;push registers
		push r13
		push r14
		push r15

		mov r12, rdi		;write rdi to r12
		cmp r12, 2		;check if correct number of args
		jne invalidArg1		;if not jump  to invalidArg1
		mov rdi, [rsi + 8]	;write input to rdi
		mov r13, rdi		;write rdi to r13, used in output
		call atoi		;change rdi to integer
		cmp rdi, 0		;check if input was not a number
		jne invalidArg2		;if yes, then jump to invalidArg2
		movsxd r14, eax		;writes value from atoi in r14
		xor rax, rax		;set rax to 0
		mov rax, r14		;write r14 to rax
		mov rcx, 4		;write 4 in rcx for division
		div rcx			;divide rax by rcx
		mov r15, rax		;write quotient to r15
		cmp rdx, 0		;check if quotient is 0
		jne probablyNot		;if not 0, jump to probablyNot
		jmp probably		;if is 0, jump to probably

probably:
		mov rdi, isLeapYear	;writes answer string to rdi
		mov rsi, r14		;writes input to rsi
		xor rax, rax		;set rax to 0
		call printf		;print
		jmp return		;jump to return

probablyNot:
		mov rdi, isNotLeapYear	;writes answer string to rdi
		mov rsi, r14		;write input to rsi
		xor rax, rax		;set rax to 0
		call printf		;print
		jmp return		;jump to return

invalidArg1:
		mov edi, argError	;prints arugument number error
		call puts
		jmp return		;jump to return

invalidArg2:
		mov edi, is0		;takes care of case when
		call puts		;input is non-numerical
		jmp return		;jump to return

return:
		pop r12			;pop registers
		pop r13
		pop r14
		pop r15
		ret			;return

		section .data
argError: db "This program requires exactly one command line argument specifying a year.", 0, 10
is0: db "0 is probably a leap year.", 0, 10
isLeapYear: db "%d is probably a leap year.", 0, 10
isNotLeapYear: db "%d is probably not a leap year.", 0, 10
