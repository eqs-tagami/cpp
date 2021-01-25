#include <iostream>

int main() {
  std::string retry;

  do {
    int month;
    std::cout << "季節を求めます。何月？";
    std::cin >> month;
 
    if (3 <= month && month <= 5) {
      std::cout << "春ですよー" << std::endl;
    } else if (6 <= month && month <= 8) {
      std::cout << "夏ですよー" << std::endl;
    } else if (9 <= month && month <= 11) {
      std::cout << "秋ですよー" << std::endl;
    } else if (12 == month || (1 <= month && month <= 2)) {
      std::cout << "冬ですよー" << std::endl;
    }
 
    std::cout << "もう一度？ Y=Yes/N=No";
    std::cin >> retry;
  } while (retry == "Y" || retry == "y");
}


// 機械語
//.LC0:
//        .string "\345\255\243\347\257\200\343\202\222\346\261\202\343\202\201\343\201\276\343\201\231\343\200\202\344\275\225\346\234\210\357\274\237"
//.LC1:
//        .string "\346\230\245\343\201\247\343\201\231\343\202\210\343\203\274"
//.LC2:
//        .string "\345\244\217\343\201\247\343\201\231\343\202\210\343\203\274"
//.LC3:
//        .string "\347\247\213\343\201\247\343\201\231\343\202\210\343\203\274"
//.LC4:
//        .string "\345\206\254\343\201\247\343\201\231\343\202\210\343\203\274"
//.LC5:
//        .string "\343\202\202\343\201\206\344\270\200\345\272\246\357\274\237 Y=Yes/N=No"
//.LC6:
//        .string "Y"
//.LC7:
//        .string "y"
//main:
//        push    rbp
//        mov     rbp, rsp
//        push    rbx
//        sub     rsp, 56
//        lea     rax, [rbp-48]
//        mov     rdi, rax
//        call    std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::basic_string() [complete object constructor]
//.L11:
//        mov     esi, OFFSET FLAT:.LC0
//        mov     edi, OFFSET FLAT:_ZSt4cout
//        call    std::basic_ostream<char, std::char_traits<char> >& std::operator<< <std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char const*)
//        lea     rax, [rbp-52]
//        mov     rsi, rax
//        mov     edi, OFFSET FLAT:_ZSt3cin
//        call    std::basic_istream<char, std::char_traits<char> >::operator>>(int&)
//        mov     eax, DWORD PTR [rbp-52]
//        cmp     eax, 2
//        jle     .L2
//        mov     eax, DWORD PTR [rbp-52]
//        cmp     eax, 5
//        jg      .L2
//        mov     esi, OFFSET FLAT:.LC1
//        mov     edi, OFFSET FLAT:_ZSt4cout
//        call    std::basic_ostream<char, std::char_traits<char> >& std::operator<< <std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char const*)
//        mov     esi, OFFSET FLAT:_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
//        mov     rdi, rax
//        call    std::basic_ostream<char, std::char_traits<char> >::operator<<(std::basic_ostream<char, std::char_traits<char> >& (*)(std::basic_ostream<char, std::char_traits<char> >&))
//        jmp     .L3
//.L2:
//        mov     eax, DWORD PTR [rbp-52]
//        cmp     eax, 5
//        jle     .L4
//        mov     eax, DWORD PTR [rbp-52]
//        cmp     eax, 8
//        jg      .L4
//        mov     esi, OFFSET FLAT:.LC2
//        mov     edi, OFFSET FLAT:_ZSt4cout
//        call    std::basic_ostream<char, std::char_traits<char> >& std::operator<< <std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char const*)
//        mov     esi, OFFSET FLAT:_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
//        mov     rdi, rax
//        call    std::basic_ostream<char, std::char_traits<char> >::operator<<(std::basic_ostream<char, std::char_traits<char> >& (*)(std::basic_ostream<char, std::char_traits<char> >&))
//        jmp     .L3
//.L4:
//        mov     eax, DWORD PTR [rbp-52]
//        cmp     eax, 8
//        jle     .L5
//        mov     eax, DWORD PTR [rbp-52]
//        cmp     eax, 11
//        jg      .L5
//        mov     esi, OFFSET FLAT:.LC3
//        mov     edi, OFFSET FLAT:_ZSt4cout
//        call    std::basic_ostream<char, std::char_traits<char> >& std::operator<< <std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char const*)
//        mov     esi, OFFSET FLAT:_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
//        mov     rdi, rax
//        call    std::basic_ostream<char, std::char_traits<char> >::operator<<(std::basic_ostream<char, std::char_traits<char> >& (*)(std::basic_ostream<char, std::char_traits<char> >&))
//        jmp     .L3
//.L5:
//        mov     eax, DWORD PTR [rbp-52]
//        cmp     eax, 12
//        je      .L6
//        mov     eax, DWORD PTR [rbp-52]
//        test    eax, eax
//        jle     .L3
//        mov     eax, DWORD PTR [rbp-52]
//        cmp     eax, 2
//        jg      .L3
//.L6:
//        mov     esi, OFFSET FLAT:.LC4
//        mov     edi, OFFSET FLAT:_ZSt4cout
//        call    std::basic_ostream<char, std::char_traits<char> >& std::operator<< <std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char const*)
//        mov     esi, OFFSET FLAT:_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
//        mov     rdi, rax
//        call    std::basic_ostream<char, std::char_traits<char> >::operator<<(std::basic_ostream<char, std::char_traits<char> >& (*)(std::basic_ostream<char, std::char_traits<char> >&))
//.L3:
//        mov     esi, OFFSET FLAT:.LC5
//        mov     edi, OFFSET FLAT:_ZSt4cout
//        call    std::basic_ostream<char, std::char_traits<char> >& std::operator<< <std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char const*)
//        lea     rax, [rbp-48]
//        mov     rsi, rax
//        mov     edi, OFFSET FLAT:_ZSt3cin
//        call    std::basic_istream<char, std::char_traits<char> >& std::operator>><char, std::char_traits<char>, std::allocator<char> >(std::basic_istream<char, std::char_traits<char> >&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
//        lea     rax, [rbp-48]
//        mov     esi, OFFSET FLAT:.LC6
//        mov     rdi, rax
//        call    bool std::operator==<char, std::char_traits<char>, std::allocator<char> >(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, char const*)
//        test    al, al
//        jne     .L7
//        lea     rax, [rbp-48]
//        mov     esi, OFFSET FLAT:.LC7
//        mov     rdi, rax
//        call    bool std::operator==<char, std::char_traits<char>, std::allocator<char> >(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, char const*)
//        test    al, al
//        je      .L8
//.L7:
//        mov     eax, 1
//        jmp     .L9
//.L8:
//        mov     eax, 0
//.L9:
//        test    al, al
//        je      .L10
//        jmp     .L11
//.L10:
//        lea     rax, [rbp-48]
//        mov     rdi, rax
//        call    std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string() [complete object destructor]
//        mov     eax, 0
//        jmp     .L15
//        mov     rbx, rax
//        lea     rax, [rbp-48]
//        mov     rdi, rax
//        call    std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >::~basic_string() [complete object destructor]
//        mov     rax, rbx
//        mov     rdi, rax
//        call    _Unwind_Resume
//.L15:
//        mov     rbx, QWORD PTR [rbp-8]
//        leave
//        ret
//__static_initialization_and_destruction_0(int, int):
//        push    rbp
//        mov     rbp, rsp
//        sub     rsp, 16
//        mov     DWORD PTR [rbp-4], edi
//        mov     DWORD PTR [rbp-8], esi
//        cmp     DWORD PTR [rbp-4], 1
//        jne     .L20
//        cmp     DWORD PTR [rbp-8], 65535
//        jne     .L20
//        mov     edi, OFFSET FLAT:_ZStL8__ioinit
//        call    std::ios_base::Init::Init() [complete object constructor]
//        mov     edx, OFFSET FLAT:__dso_handle
//        mov     esi, OFFSET FLAT:_ZStL8__ioinit
//        mov     edi, OFFSET FLAT:_ZNSt8ios_base4InitD1Ev
//        call    __cxa_atexit
//.L20:
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
