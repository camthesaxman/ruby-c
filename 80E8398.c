int __fastcall sub_80E8398(unsigned __int8 a1)
{
  _BYTE *v1; // r1@7
  char v2; // r0@7
  int v4; // [sp+0h] [bp-4h]@0

  if ( a1 == 1 )
  {
    *(_WORD *)(v2001098 + 48) = 1;
    *(_WORD *)(v2001098 + 36) = 0;
    v1 = (_BYTE *)(v2001098 + 62);
    v2 = *(_BYTE *)(v2001098 + 62) & 0xFB;
  }
  else if ( (signed int)a1 > 1 )
  {
    if ( a1 != 2 )
      return v4;
    *(_WORD *)(v2001098 + 48) = 1;
    *(_WORD *)(v2001098 + 36) = 0;
    v1 = (_BYTE *)(v2001098 + 62);
    v2 = *(_BYTE *)(v2001098 + 62) | 4;
  }
  else
  {
    if ( a1 )
      return v4;
    *(_WORD *)(v2001098 + 48) = 0;
    *(_WORD *)(v2001098 + 36) = 0;
    v1 = (_BYTE *)(v2001098 + 62);
    v2 = *(_BYTE *)(v2001098 + 62) & 0xFB;
  }
  *v1 = v2;
  return v4;
}
