int __fastcall sub_8051B40(_WORD *a1, unsigned __int16 a2)
{
  _WORD *v2; // r4@1
  signed int v3; // r5@1
  __int16 v4; // r0@3
  int v5; // r0@4
  int v7; // [sp+8h] [bp-4h]@0

  v2 = a1;
  v3 = 8;
  if ( a2 <= 9u )
    v3 = 16;
  v4 = *a1;
  if ( !*v2 )
  {
    v5 = (unsigned __int16)Random() % v3 - ((unsigned int)v3 >> 1);
_08051B82:
    *v2 = v5;
    return v7;
  }
  if ( (signed int)*v2 < 0 )
    *v2 = v4 + 1;
  if ( (signed int)*v2 > 0 )
  {
    LOWORD(v5) = *v2 - 1;
    goto _08051B82;
  }
  return v7;
}
