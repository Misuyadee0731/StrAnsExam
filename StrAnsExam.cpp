//雑いし無駄が多いですご了承ください。
//雑いし無駄が多いですご了承ください。
//雑いし無駄が多いですご了承ください。
//大事なことなので３回言いました。
//あと必ずあっているとは限りません。^^/

#include <iostream>
using namespace std;

//文字列 str の文字数 (ヌル文字は除く) を返却する関数．
unsigned strlength(char* str) {
    int count = 0;
    while(*str != '\0'){
        count++;
        str++;
    }
    return count;
}

//文字列 str に含まれる文字 c の数を数え，返却する関数．
unsigned strcharcount(char* str, char c) {
    char* ptr = str;
    int count = 0;

    while(*ptr != '\0') {
        if(*ptr == c) {
            count++;
        }
        ptr++;
    }
    return count;
}

//文字列 src 全体を文字列 dest にコピーし，コピー先の文字列の先頭アドレス (dest) を返却する関数．ただし，dest は src よりも以
//上の領域を確保されていることが保証されているとする．
char* strcopy(char *dest, char *src) {
      char *ptr = dest, *p = src;

      while(*p != '\0') {
          *ptr = *p;
          ptr++;
          p++;
      }
      *ptr = '\0';

      return dest;
}

//文字列 src から先頭 n 文字を文字列 dest にコピーし，コピー先の文字列の先頭アドレス (dest) を返却する関数．ただし，dest は
//n+1 文字以上の領域を確保されていることが保証されているとする．
char* strncopy(char* dest, char* src, unsigned count) {
    char *ptr = dest, *str = src;

    while(src+count != str) {
        *ptr = *str;
        ptr++;
        str++;
    }

    *ptr = '\0';
    return dest;
}

//文字列 s1 の後ろに文字列 s2 を連結し，連結後の文字列の先頭アドレスを返却する関数．ただし，s1 は，s1 の文字数，s2 の文字
//数，ヌル文字分以上の領域が確保されていることが保証されているとする．
char* strconcat(char *s1, char *s2) {
    int count=0;
    char *p=s1, *s = s2;

    while(*p != '\0') {
        p++;
        count++;
    }
    while(*s != '\0') {
        s1[count] = *s;
        count++;
        s++;
    }

    s1[count] = '\0';
    return s1;
}

//文字列 str の文字の順序を逆順にし，できた文字列の先頭アドレスを返却する関数．
char* strreverse(char* str) {
    char* ptr = str;
    char* ptr2 = str;
    int count = 0;

    while(*ptr != '\0') {
        ptr++;
        count++;
    }

    ptr--;
    count = count/2;

    while(count) {
        swap(*ptr, *ptr2);
        ptr2++;
        ptr--;
        count--;
    }

    return str;
}

//文字列 str から文字 c を削除し，できた文字列の先頭アドレスを返却する関数．削除することによって文字列が縮まることに注意
//する．
char* strremove(char* str, char c) {
    char* ptr = str;
    while(*ptr != '\0'){

        if(*ptr == c) {
            char* p1 = ptr+1;
            char* p2 = ptr;

            while(*p1 != '\0') {
                *p2 = *p1;
                p1++;
                p2++;
            }

            *p2 = '\0';

        }
        else
            ptr++;
    }
    return str;
}

//文字列 str に文字 c が含まれていれば true，そうでないなら false を返却する関数．
bool strfind(char* str, char c) {
    char* ptr = str;
    bool A = false;

    while(*ptr != '\0') {

        if(*ptr == c) {
            A = true;
            break;
        }

        else{
            ptr++;
        }

    }
    return A;
}

int main() {
//main文は省きまーす
}
