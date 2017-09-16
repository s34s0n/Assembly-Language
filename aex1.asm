extern scanf
extern printf


section .data
        promt: db "What is your name ?", 10,0
        output: db "Hello , %s" ,0
        string: db '%s' ,0
        name: db 0


section .text
  
        global main

main:

    push ebp 
    mov ebp,esp

    push promt
    call printf

    push name
    push string
    call scanf

    push name
    push output
    call printf

    leave
    ret

