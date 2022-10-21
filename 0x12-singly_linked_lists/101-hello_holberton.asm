section .data
format db '%s', 10, 0
text db 'Hello, Holberton', 0

section .text
global main
extern printf

main:
mov rdi, format
mov rsi, text
mov rax, 0
call printf

mov rax, 0
ret
