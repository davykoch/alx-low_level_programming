section .data
    hello db "Hello, Holberton", 0  ; Null-terminated string
    newline db 10           ; Newline character ('\n')
    
section .text
    global main

extern printf

main:
    push rbp                ; Preserve the base pointer
    mov rdi, hello          ; Format string for printf
    call printf             ; Call printf with the format string
    
    mov rdi, newline        ; Format string for printf (newline)
    call printf             ; Call printf with the newline format
    
    pop rbp                 ; Restore the base pointer
    ret                     ; Return from main
