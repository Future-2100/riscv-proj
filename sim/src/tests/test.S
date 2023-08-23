.global main
.type main, @function

main:
  addi t0, x0,10
  addi a0, t0,1
  addi a1, a0,2
  addi s1, ra,3
  addi a0, x0,0
  ret

