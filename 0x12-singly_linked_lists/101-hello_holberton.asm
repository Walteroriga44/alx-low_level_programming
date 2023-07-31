section .data
hello_msg db "Hello, Holberton", 0

section .text
extern printf

global main
main:
; Prepare the arguments for the printf function
lea rdi, [hello_msg]    ; Load the address of the hello_msg string into rdi (1st argument - format string)
xor rax, rax            ; Clear rax (no floating-point arguments, so using al=0 is enough)
call printf             ; Call the printf function

; Exit the program
xor rdi, rdi            ; Return 0 from the main function
mov rax, 60             ; syscall number for exit
syscall

section .bss
; Reserve space for any uninitialized data, if needed.
