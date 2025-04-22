#ifndef _MY_STRING_H
#define _MY_STRING_H
#include <stddef.h>
static void *memset(void *s, int c, size_t n) {
  for (size_t i = 0; i < n; i++)
    ((char *)s)[i] = c;
  return s;
}
static void *memcpy(void *dest, const void *src, size_t n) {
  for (size_t i = 0; i < n; i++)
    ((char *)dest)[i] = ((char *)src)[i];
  return dest;
}

#if defined(__wasm__) || defined(__wasm32__) || defined(__EMSCRIPTEN__)
#else
#include <string.h>
#endif
#endif
