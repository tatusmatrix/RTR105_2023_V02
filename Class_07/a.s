
a.out:     file format elf64-x86-64


Disassembly of section .init:

0000000000401000 <_init>:
  401000:	f3 0f 1e fa          	endbr64 
  401004:	48 83 ec 08          	sub    $0x8,%rsp
  401008:	48 8b 05 e9 2f 00 00 	mov    0x2fe9(%rip),%rax        # 403ff8 <__gmon_start__>
  40100f:	48 85 c0             	test   %rax,%rax
  401012:	74 02                	je     401016 <_init+0x16>
  401014:	ff d0                	callq  *%rax
  401016:	48 83 c4 08          	add    $0x8,%rsp
  40101a:	c3                   	retq   

Disassembly of section .plt:

0000000000401020 <.plt>:
  401020:	ff 35 e2 2f 00 00    	pushq  0x2fe2(%rip)        # 404008 <_GLOBAL_OFFSET_TABLE_+0x8>
  401026:	f2 ff 25 e3 2f 00 00 	bnd jmpq *0x2fe3(%rip)        # 404010 <_GLOBAL_OFFSET_TABLE_+0x10>
  40102d:	0f 1f 00             	nopl   (%rax)
  401030:	f3 0f 1e fa          	endbr64 
  401034:	68 00 00 00 00       	pushq  $0x0
  401039:	f2 e9 e1 ff ff ff    	bnd jmpq 401020 <.plt>
  40103f:	90                   	nop

Disassembly of section .plt.sec:

0000000000401040 <puts@plt>:
  401040:	f3 0f 1e fa          	endbr64 
  401044:	f2 ff 25 cd 2f 00 00 	bnd jmpq *0x2fcd(%rip)        # 404018 <puts@GLIBC_2.2.5>
  40104b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

Disassembly of section .text:

0000000000401050 <_start>:
  401050:	f3 0f 1e fa          	endbr64 
  401054:	31 ed                	xor    %ebp,%ebp
  401056:	49 89 d1             	mov    %rdx,%r9
  401059:	5e                   	pop    %rsi
  40105a:	48 89 e2             	mov    %rsp,%rdx
  40105d:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
  401061:	50                   	push   %rax
  401062:	54                   	push   %rsp
  401063:	49 c7 c0 00 11 40 00 	mov    $0x401100,%r8
  40106a:	48 c7 c1 90 10 40 00 	mov    $0x401090,%rcx
  401071:	48 c7 c7 05 11 40 00 	mov    $0x401105,%rdi
  401078:	ff 15 72 2f 00 00    	callq  *0x2f72(%rip)        # 403ff0 <__libc_start_main@GLIBC_2.2.5>
  40107e:	f4                   	hlt    
  40107f:	90                   	nop

0000000000401080 <_dl_relocate_static_pie>:
  401080:	f3 0f 1e fa          	endbr64 
  401084:	c3                   	retq   
  401085:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
  40108c:	00 00 00 
  40108f:	90                   	nop

0000000000401090 <__libc_csu_init>:
  401090:	f3 0f 1e fa          	endbr64 
  401094:	41 57                	push   %r15
  401096:	4c 8d 3d b3 2d 00 00 	lea    0x2db3(%rip),%r15        # 403e50 <_DYNAMIC>
  40109d:	41 56                	push   %r14
  40109f:	49 89 d6             	mov    %rdx,%r14
  4010a2:	41 55                	push   %r13
  4010a4:	49 89 f5             	mov    %rsi,%r13
  4010a7:	41 54                	push   %r12
  4010a9:	41 89 fc             	mov    %edi,%r12d
  4010ac:	55                   	push   %rbp
  4010ad:	48 8d 2d 9c 2d 00 00 	lea    0x2d9c(%rip),%rbp        # 403e50 <_DYNAMIC>
  4010b4:	53                   	push   %rbx
  4010b5:	4c 29 fd             	sub    %r15,%rbp
  4010b8:	48 83 ec 08          	sub    $0x8,%rsp
  4010bc:	e8 3f ff ff ff       	callq  401000 <_init>
  4010c1:	48 c1 fd 03          	sar    $0x3,%rbp
  4010c5:	74 1f                	je     4010e6 <__libc_csu_init+0x56>
  4010c7:	31 db                	xor    %ebx,%ebx
  4010c9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
  4010d0:	4c 89 f2             	mov    %r14,%rdx
  4010d3:	4c 89 ee             	mov    %r13,%rsi
  4010d6:	44 89 e7             	mov    %r12d,%edi
  4010d9:	41 ff 14 df          	callq  *(%r15,%rbx,8)
  4010dd:	48 83 c3 01          	add    $0x1,%rbx
  4010e1:	48 39 dd             	cmp    %rbx,%rbp
  4010e4:	75 ea                	jne    4010d0 <__libc_csu_init+0x40>
  4010e6:	48 83 c4 08          	add    $0x8,%rsp
  4010ea:	5b                   	pop    %rbx
  4010eb:	5d                   	pop    %rbp
  4010ec:	41 5c                	pop    %r12
  4010ee:	41 5d                	pop    %r13
  4010f0:	41 5e                	pop    %r14
  4010f2:	41 5f                	pop    %r15
  4010f4:	c3                   	retq   
  4010f5:	66 66 2e 0f 1f 84 00 	data16 nopw %cs:0x0(%rax,%rax,1)
  4010fc:	00 00 00 00 

0000000000401100 <__libc_csu_fini>:
  401100:	f3 0f 1e fa          	endbr64 
  401104:	c3                   	retq   

0000000000401105 <main>:
  401105:	f3 0f 1e fa          	endbr64 
  401109:	55                   	push   %rbp
  40110a:	48 89 e5             	mov    %rsp,%rbp
  40110d:	48 8d 3d f0 0e 00 00 	lea    0xef0(%rip),%rdi        # 402004 <_IO_stdin_used+0x4>
  401114:	e8 27 ff ff ff       	callq  401040 <puts@plt>
  401119:	b8 00 00 00 00       	mov    $0x0,%eax
  40111e:	5d                   	pop    %rbp
  40111f:	c3                   	retq   

Disassembly of section .fini:

0000000000401120 <_fini>:
  401120:	f3 0f 1e fa          	endbr64 
  401124:	48 83 ec 08          	sub    $0x8,%rsp
  401128:	48 83 c4 08          	add    $0x8,%rsp
  40112c:	c3                   	retq   
