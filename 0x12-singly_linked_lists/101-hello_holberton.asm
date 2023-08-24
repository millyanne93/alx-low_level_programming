global main
extern printf

section .data
    message db "Hello, Holberton", 0
    format db "%s", 10, 0

section .text
main:
    mov rdi, format
    mov rsi, message
    xor rax, rax
    call printf
    xor rax, rax
    ret
