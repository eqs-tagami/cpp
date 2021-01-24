#include <iostream>

int main() {
  int n;

  std::cout << "n:";
  std::cin >> n;

  if (n == 0) {
    std::cout << "n は 0 です" << std::endl;
  } else if (n > 0) {
    std::cout << "n (" << n << ") は正です" << std::endl;
  } else {
    std::cout << "n (" << n << ") は負です" << std::endl;
  }
}

//.LC0:
//        .string "n:"
//.LC1:
//        .string "n \343\201\257 0 \343\201\247\343\201\231"
//.LC2:
//        .string "n ("
//.LC3:
//        .string ") \343\201\257\346\255\243\343\201\247\343\201\231"
//.LC4:
//        .string ") \343\201\257\350\262\240\343\201\247\343\201\231"
//main:
//        push    rbp
//        mov     rbp, rsp
//        sub     rsp, 16
//        mov     esi, OFFSET FLAT:.LC0
//        mov     edi, OFFSET FLAT:_ZSt4cout
//        call    std::basic_ostream<char, std::char_traits<char> >& std::operator<< <std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char const*)
//        lea     rax, [rbp-4]
//        mov     rsi, rax
//        mov     edi, OFFSET FLAT:_ZSt3cin
//        call    std::basic_istream<char, std::char_traits<char> >::operator>>(int&)
//        mov     eax, DWORD PTR [rbp-4]
//        test    eax, eax
//        jne     .L2
//        mov     esi, OFFSET FLAT:.LC1
//        mov     edi, OFFSET FLAT:_ZSt4cout
//        call    std::basic_ostream<char, std::char_traits<char> >& std::operator<< <std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char const*)
//        mov     esi, OFFSET FLAT:_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
//        mov     rdi, rax
//        call    std::basic_ostream<char, std::char_traits<char> >::operator<<(std::basic_ostream<char, std::char_traits<char> >& (*)(std::basic_ostream<char, std::char_traits<char> >&))
//        jmp     .L3
//.L2:
//        mov     eax, DWORD PTR [rbp-4]
//        test    eax, eax
//        jle     .L4
//        mov     esi, OFFSET FLAT:.LC2
//        mov     edi, OFFSET FLAT:_ZSt4cout
//        call    std::basic_ostream<char, std::char_traits<char> >& std::operator<< <std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char const*)
//        mov     rdx, rax
//        mov     eax, DWORD PTR [rbp-4]
//        mov     esi, eax
//        mov     rdi, rdx
//        call    std::basic_ostream<char, std::char_traits<char> >::operator<<(int)
//        mov     esi, OFFSET FLAT:.LC3
//        mov     rdi, rax
//        call    std::basic_ostream<char, std::char_traits<char> >& std::operator<< <std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char const*)
//        mov     esi, OFFSET FLAT:_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
//        mov     rdi, rax
//        call    std::basic_ostream<char, std::char_traits<char> >::operator<<(std::basic_ostream<char, std::char_traits<char> >& (*)(std::basic_ostream<char, std::char_traits<char> >&))
//        jmp     .L3
//.L4:
//        mov     esi, OFFSET FLAT:.LC2
//        mov     edi, OFFSET FLAT:_ZSt4cout
//        call    std::basic_ostream<char, std::char_traits<char> >& std::operator<< <std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char const*)
//        mov     rdx, rax
//        mov     eax, DWORD PTR [rbp-4]
//        mov     esi, eax
//        mov     rdi, rdx
//        call    std::basic_ostream<char, std::char_traits<char> >::operator<<(int)
//        mov     esi, OFFSET FLAT:.LC4
//        mov     rdi, rax
//        call    std::basic_ostream<char, std::char_traits<char> >& std::operator<< <std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char const*)
//        mov     esi, OFFSET FLAT:_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
//        mov     rdi, rax
//        call    std::basic_ostream<char, std::char_traits<char> >::operator<<(std::basic_ostream<char, std::char_traits<char> >& (*)(std::basic_ostream<char, std::char_traits<char> >&))
//.L3:
//        mov     eax, 0
//        leave
//        ret
//__static_initialization_and_destruction_0(int, int):
//        push    rbp
//        mov     rbp, rsp
//        sub     rsp, 16
//        mov     DWORD PTR [rbp-4], edi
//        mov     DWORD PTR [rbp-8], esi
//        cmp     DWORD PTR [rbp-4], 1
//        jne     .L8
//        cmp     DWORD PTR [rbp-8], 65535
//        jne     .L8
//        mov     edi, OFFSET FLAT:_ZStL8__ioinit
//        call    std::ios_base::Init::Init() [complete object constructor]
//        mov     edx, OFFSET FLAT:__dso_handle
//        mov     esi, OFFSET FLAT:_ZStL8__ioinit
//        mov     edi, OFFSET FLAT:_ZNSt8ios_base4InitD1Ev
//        call    __cxa_atexit
//.L8:
//        nop
//        leave
//        ret
//_GLOBAL__sub_I_main:
//        push    rbp
//        mov     rbp, rsp
//        mov     esi, 65535
//        mov     edi, 1
//        call    __static_initialization_and_destruction_0(int, int)
//        pop     rbp
//        ret
