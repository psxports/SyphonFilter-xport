#ifndef SF_GAME_DRAFT_H
#define SF_GAME_DRAFT_H

#include "psx.h"
#include "xport.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* TODO Resolve guest memory adapters during integration */
void *sf_draft_guest_ptr(uint32 address);
uint32 sf_draft_guest_address(const void *pointer);
uint32 sf_draft_carry_add(uint64 left, uint64 right, uint32 width);
uint32 sf_draft_call(uint32 target, uint32 argc, const uint32 *args);
void sf_gte_write_data(uint32 index, uint32 value);
uint32 sf_gte_read_data(uint32 index);
sint32 sf_gte_execute(uint32 command);
__declspec(noreturn) void _break(uint32 code, uint32 subcode);
__declspec(noreturn) void sf_draft_unbound_stack_field(uint32 function, uint32 offset);

#define SF_DRAFT_GP 0x80115C68u
#define SF_DRAFT_PTR(type, address) ((type *)sf_draft_guest_ptr((uint32)(address)))
#define BOOL sint32
#define _BYTE uint8
#define _WORD uint16
#define _DWORD uint32
#define _QWORD uint64
#define _BOOL1 uint8
#define _BOOL2 uint16
#define _BOOL4 uint32
#define BYTEn(value, index) (((uint8 *)&(value))[index])
#define WORDn(value, index) (((uint16 *)&(value))[index])
#define DWORDn(value, index) (((uint32 *)&(value))[index])
#ifdef LOBYTE
#undef LOBYTE
#endif
#ifdef HIBYTE
#undef HIBYTE
#endif
#ifdef LOWORD
#undef LOWORD
#endif
#ifdef HIWORD
#undef HIWORD
#endif
#define LOBYTE(value) BYTEn(value, 0)
#define HIBYTE(value) BYTEn(value, sizeof(value) - 1)
#define LOWORD(value) WORDn(value, 0)
#define HIWORD(value) WORDn(value, sizeof(value) / 2 - 1)
#define LODWORD(value) DWORDn(value, 0)
#define HIDWORD(value) DWORDn(value, 1)
#define BYTE1(value) BYTEn(value, 1)
#define BYTE2(value) BYTEn(value, 2)
#define BYTE3(value) BYTEn(value, 3)
#define WORD1(value) WORDn(value, 1)
#define WORD2(value) WORDn(value, 2)
#define SLOBYTE(value) (*((sint8 *)&(value)))
#define SLOWORD(value) (*((sint16 *)&(value)))
#define SLODWORD(value) (*((sint32 *)&(value)))
#define SBYTE2(value) (((sint8 *)&(value))[2])
#define SHIBYTE(value) (((sint8 *)&(value))[sizeof(value) - 1])
#define SHIWORD(value) (((sint16 *)&(value))[sizeof(value) / 2 - 1])
#define SHIDWORD(value) (((sint32 *)&(value))[1])
#define __CFADD__(left, right) sf_draft_carry_add((uint64)(left), (uint64)(right), sizeof(left))
#define __PAIR64__(high, low) (((uint64)(uint32)(high) << 32) | (uint32)(low))
#define __PAIR32__(high, low) (((uint32)(uint16)(high) << 16) | (uint16)(low))

#include "game_draft_signatures.h"

#endif
