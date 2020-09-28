void g(int a);

void f_void(int a, int b) {
  g(a);
  g(b);
}

int f_int(int a, int b, int c) {
  // ABI: Application Binary Interface
  // x86-64 System V ABI
  // RDI, RSI, RDX, RCX, R8, R7
  return a + b +c;
}

/*
$ clang++-10 -Wall -Wextra -std=c++20 -c func.cpp
$ objdump -d -M intel func.o

func.o:     file format elf64-x86-64


Disassembly of section .text:

0000000000000000 <_Z6f_voidii>: // 返り値は無し(void)で引数はint型(ii)
   0:   55                      push   rbp
   1:   48 89 e5                mov    rbp,rsp
   4:   48 83 ec 10             sub    rsp,0x10
   8:   89 7d fc                mov    DWORD PTR [rbp-0x4],edi
   b:   89 75 f8                mov    DWORD PTR [rbp-0x8],esi
   e:   8b 7d fc                mov    edi,DWORD PTR [rbp-0x4]
  11:   e8 00 00 00 00          call   16 <_Z6f_voidii+0x16>
  16:   8b 7d f8                mov    edi,DWORD PTR [rbp-0x8]
  19:   e8 00 00 00 00          call   1e <_Z6f_voidii+0x1e>
  1e:   48 83 c4 10             add    rsp,0x10
  22:   5d                      pop    rbp
  23:   c3                      ret
  24:   66 2e 0f 1f 84 00 00    nop    WORD PTR cs:[rax+rax*1+0x0]
  2b:   00 00 00
  2e:   66 90                   xchg   ax,ax

0000000000000030 <_Z5f_intiii>:
  30:   55                      push   rbp
  31:   48 89 e5                mov    rbp,rsp
  34:   89 7d fc                mov    DWORD PTR [rbp-0x4],edi
  37:   89 75 f8                mov    DWORD PTR [rbp-0x8],esi
  3a:   89 55 f4                mov    DWORD PTR [rbp-0xc],edx
  3d:   8b 45 fc                mov    eax,DWORD PTR [rbp-0x4]
  40:   03 45 f8                add    eax,DWORD PTR [rbp-0x8]
  43:   03 45 f4                add    eax,DWORD PTR [rbp-0xc]
  46:   5d                      pop    rbp
  47:   c3                      ret
*/