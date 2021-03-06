.ifndef SPRITES_INC
SPRITES_INC = 1

.macro SIDE_SPRITES
; Standing Frame
.byte $66,0
.byte $66,0
.byte 0,0
.byte 0,0
.byte 0,0
.byte 0,0
.byte $1C, $0C
.byte $1C, $1E
.byte $1C, $1C
.byte $1C, $1C
.byte $1C, $14
.byte $0E, $0C
.byte $0E, $0C
.byte $0E, $0C
.byte $0E, $0C
.byte $96, $1E
.byte $96, $1E
.byte $96, $1E
.byte $96, $3F
.byte $96, $3F
.byte $96, $3F
.byte $0E, $08
.byte $0E, $08
.byte $12, $0C
; Running Frame
.byte $66,0
.byte $66,0
.byte 0,0
.byte 0,0
.byte 0,0
.byte 0,0
.byte $1C, $0C
.byte $1C, $1E
.byte $1C, $1C
.byte $1C, $1C
.byte $1C, $14
.byte $0E, $0C
.byte $0E, $0C
.byte $0E, $0C
.byte $0E, $0C
.byte $96, $1E
.byte $96, $1E
.byte $96, $1E
.byte $96, $3F
.byte $96, $3F
.byte $96, $3F
.byte $0E, $0C
.byte $0E, $12
.byte $12, $13
; Jumping Frame
.byte $1C, $0C
.byte $1C, $1E
.byte $1C, $1C
.byte $1C, $1C
.byte $1C, $14
.byte $0E, $2C
.byte $0E, $1C
.byte $0E, $0C
.byte $0E, $0C
.byte $96, $1E
.byte $96, $1E
.byte $96, $1E
.byte $96, $3F
.byte $96, $3F
.byte $96, $3F
.byte $0E, $18
.byte $12, $10
.byte 0,0
.byte 0,0
.byte 0,0
.byte 0,0
.byte 0,0
.byte 0,0
.byte 0,0
.endmacro

.macro FALLING_SPRITES
; arms up
.byte $1C,$2D
.byte $1C,$1E
.byte $3E,$0C
.byte $3E,$0C
.byte $0E,$2D
.byte $0E,$1E
.byte $0E,$0C
.byte $96,$0C
.byte $96,$1E
.byte $96,$1E
.byte $96,$1E
.byte $96,$3F
.byte $96,$3F
.byte $96,$3F
.byte $0E,$0C
.byte $12,$12
; arms down
.byte $1C,$2D
.byte $1C,$1E
.byte $3E,$0C
.byte $3E,$0C
.byte $0E,$0C
.byte $0E,$1E
.byte $0E,$2D
.byte $96,$0C
.byte $96,$1E
.byte $96,$1E
.byte $96,$1E
.byte $96,$3F
.byte $96,$3F
.byte $96,$3F
.byte $0E,$0C
.byte $12,$12
; Umbrella
.byte $1C,$70
.byte $1C,$A8
.byte $1C,$2D
.byte $1C,$3E
.byte $3E,$2C
.byte $3E,$2C
.byte $0E,$2C
.byte $0E,$1F
.byte $96,$0C
.byte $96,$1E
.byte $96,$1E
.byte $96,$1E
.byte $96,$3F
.byte $96,$3F
.byte $96,$3F
.byte $12,$12
.endmacro

.macro WHITE_RABBIT_SPRITES
; On ground
.byte $66,0
.byte $66,0
.byte 0,0
.byte 0,0
.byte 0,0
.byte 0,0
.byte 0,0
.byte $0E,$08
.byte $0E,$08
.byte $0E,$08
.byte $0E,$08
.byte $0E,$0C
.byte $0E,$0C
.byte $0E,$0C
.byte $0E,$0C
.byte $36,$0C
.byte $36,$0E
.byte $28,$1D
.byte $28,$1D
.byte $0E,$3C
.byte $0E,$1C
.byte $0E,$1C
.byte $0E,$0E
.byte $0E,$07
; In Air
.byte $66,0
.byte $66,0
.byte 0,0
.byte $0E,$08
.byte $0E,$08
.byte $0E,$08
.byte $0E,$08
.byte $0E,$0C
.byte $0E,$0C
.byte $0E,$0C
.byte $0E,$0C
.byte $36,$0C
.byte $36,$0E
.byte $28,$1D
.byte $28,$1D
.byte $0E,$3C
.byte $0E,$1C
.byte $0E,$18
.byte $0E,$30
.byte $0E,$20
.byte 0,0
.byte 0,0
.byte 0,0
.byte 0,0
; Gone
.byte $66,0
.byte $66,0
.repeat 22
.byte $18,$01
.endrepeat
.endmacro

.endif
