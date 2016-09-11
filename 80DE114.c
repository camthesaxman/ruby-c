int __fastcall sub_80DE114(int a1)
{
  int v1; // r3@1
  signed int v2; // r5@1
  signed int v3; // r6@1
  _BYTE *v4; // r4@2
  int v5; // r0@4
  __int16 v6; // r0@12
  int v8; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  v3 = 0;
  if ( !(*(_BYTE *)(a1 + 63) & 0x10) )
    return v8;
  v4 = (_BYTE *)(a1 + 62);
  if ( !(*(_BYTE *)(a1 + 62) & 4) )
    *v4 = *(_BYTE *)(a1 + 62) | 4;
  v5 = *(_WORD *)(a1 + 46);
  if ( *(_WORD *)(v1 + 46) )
  {
    if ( v5 == 1 )
    {
      if ( *(_WORD *)(v1 + 48) == 4 )
        v2 = 1;
    }
    else
    {
      v3 = 1;
    }
_080DE162:
    if ( !v2 )
    {
      if ( v3 )
        move_anim_8072740(v1);
      else
        ++*(_WORD *)(v1 + 48);
      return v8;
    }
    goto _080DE166;
  }
  if ( *(_WORD *)(v1 + 48) != 2 )
    goto _080DE162;
_080DE166:
  *v4 = *v4 & 0xFB | 4 * (((unsigned int)*v4 << 29 >> 31) ^ 1);
  v6 = *(_WORD *)(v1 + 50) + 1;
  *(_WORD *)(v1 + 50) = v6;
  *(_WORD *)(v1 + 48) = 0;
  if ( v6 == 5 )
  {
    *(_WORD *)(v1 + 50) = 0;
    ++*(_WORD *)(v1 + 46);
  }
  return v8;
}
