.386 
.MODEL FLAT, STDCALL

OPTION CASEMAP:NONE

INCLUDE    \masm32\include\windows.inc 

.CODE

DllEntry PROC hInstDLL:HINSTANCE, reason:DWORD, reserved1:DWORD

    mov eax, TRUE 
    ret
	;TEST CHANGE 2

DllEntry ENDP


GaussMain proc

      xor eax,eax ;Pusty szablon asm
ret

GaussMain endp

END DllEntry 
