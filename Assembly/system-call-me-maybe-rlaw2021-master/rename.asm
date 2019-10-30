		global main
		extern puts

		section .text
main:
		cmp rdi, 3	      ;checks if there are two arguments
		jne invalidArg	      ;if arguments =/=2 jump to invalidArg
		mov rax, 82	      ;write syscall number for rename into rax
		mov rdi, [rsi+8]      ;write argv[1] (oldpath) to rdi
		mov rsi, [rsi+16]     ;write argv[2] (newpath) to rsi
		syscall		      ;system call rename
		jmp exit	      ;jump to exit
invalidArg: 
		mov edi, argError     ;prints arugument number error
		call puts             ;print error message
		jmp exit	      ;jump to exit
		
exit:
		mov	rax, 60       ;write syscall number for exit into rax
          	xor     rdi, rdi      ;exit code 0
         	syscall               ;invoke operating system to exit

		section .data
argError: db "This program requires exactly 2 command line arguments, arg1 being the oldpath and arg2 being the newpath", 0
