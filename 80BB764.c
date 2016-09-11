int __fastcall sub_80BB764(_WORD *a1, _WORD *a2, unsigned __int16 a3)
{
  int v3; // r8@1
  unsigned int v4; // r12@1
  int v5; // r2@2
  unsigned int v6; // r7@2
  __int16 v7; // r3@3
  int v9; // [sp+24h] [bp-4h]@0

  v3 = a3;
  v4 = 0;
  if ( *(_DWORD *)(v202E828 + 4) > 0 )
  {
    while ( 1 )
    {
      LOWORD(v5) = 0;
      v6 = v4 << 16;
      if ( *v202E828 > 0 )
        break;
_080BB7DC:
      v4 = ((v4 << 16) + 0x10000) >> 16;
      if ( (signed int)(v6 + 0x10000) >> 16 >= *(_DWORD *)(v202E828 + 4) )
        return v9;
    }
    while ( 1 )
    {
      v7 = v5;
      if ( (*(_WORD *)(2 * ((signed __int16)v4 * *v202E828 + (signed __int16)v5) + *(_DWORD *)(v202E828 + 12)) & 0x3FF) == v3 )
        break;
      v5 = ((signed __int16)v5 + 1) & 0xFFFF;
      if ( (signed int)(signed __int16)(v7 + 1) >= *v202E828 )
        goto _080BB7DC;
    }
    *a1 = v5;
    *a2 = v4;
  }
  return v9;
}
