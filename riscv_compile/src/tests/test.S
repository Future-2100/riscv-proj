.global main
.type main, @function

main:
  addi t0, x0,10
  addi a0, t0,1
  addi ra, a0,2
  addi sp, ra,3

