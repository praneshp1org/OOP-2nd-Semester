title to display programming is fun
.model small
.stack 100h
.data
str db 'Programming is Fun$'
.code
main proc far
mov ax, @data
mov ds, ax

;service number for string display
mov ah, 09h
lea dx, str
int 21h

mov ah, 4ch
int 21h
main endp
end main