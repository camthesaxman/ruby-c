int __fastcall sub_8092FD8(int a1)
{
  int v1; // r4@1
  _BYTE *v2; // r2@4
  char v3; // r0@4
  int v4; // r2@8
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( (int (__fastcall *)(unsigned __int8))dword_3004B20[10 * *(_WORD *)(a1 + 46)] != sub_8092644 )
  {
    *(_BYTE *)(a1 + 62) |= 4u;
    return v6;
  }
  if ( !*(_WORD *)(a1 + 48) )
  {
    if ( sub_8092F44(*(_BYTE *)(a1 + 46)) << 24 )
    {
      v2 = (_BYTE *)(v1 + 62);
      v3 = *(_BYTE *)(v1 + 62) | 4;
      goto _08093048;
    }
_0809303C:
    v2 = (_BYTE *)(v1 + 62);
    v3 = *(_BYTE *)(v1 + 62) & 0xFB;
    goto _08093048;
  }
  if ( !(sub_8092F8C(*(_BYTE *)(a1 + 46)) << 24) )
    goto _0809303C;
  v2 = (_BYTE *)(v1 + 62);
  v3 = *(_BYTE *)(v1 + 62) | 4;
_08093048:
  *v2 = v3;
  v4 = *(_WORD *)(v1 + 50);
  *(_WORD *)(v1 + 38) = *(_WORD *)((char *)gSineTable + (2 * (v4 + (*(_WORD *)(v1 + 48) << 7)) & 0x1FF)) / 128;
  *(_WORD *)(v1 + 50) = v4 + 8;
  return v6;
}
