int sub_8111110()
{
  _WORD *v0; // r0@4
  char v1; // r0@8
  unsigned int i; // r4@11
  int v4; // [sp+18h] [bp-4h]@0

  if ( v200061E )
  {
    ++v2000616;
    if ( v2000616 > 0xCu )
    {
      v2000616 = 0;
      ++v200061F;
      for ( i = 0; i < v2000112; i = (i + 1) & 0xFFFF )
        *(_BYTE *)(*(_DWORD *)(4 * i + 0x2000660) + 62) = *(_BYTE *)(*(_DWORD *)(4 * i + 0x2000660) + 62) & 0xFB | 4 * (v200061F & 1);
      if ( v200061F > 4u )
      {
        v200061F = 1;
        if ( v2000110 )
        {
          v1 = 0;
          goto _0811126C;
        }
      }
    }
  }
  else if ( v2000616 )
  {
    --v2000616;
  }
  else
  {
    ++v2000618;
    if ( v2000618 & 1 )
      v0 = (_WORD *)33555994;
    else
      v0 = (_WORD *)33555996;
    *v0 = (*v0 + 4) & 0x7F;
    v4000052 = (gSineTable[v200061A] << 16 >> 20) | ((unsigned __int16)(gSineTable[v200061C] << 16 >> 20) << 8);
    v2000616 = 0;
    if ( v2000618 == 64 )
    {
      v2000618 = 0;
      if ( v2000112 )
      {
        v1 = 1;
_0811126C:
        v200061E = v1;
        return v4;
      }
    }
  }
  return v4;
}
