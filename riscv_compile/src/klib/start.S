.section entry, "ax"
.global _start
.type _start, @function

_start:
  la s0, _stack_top
  la sp, _stack_pointer
  jal _trm_init
