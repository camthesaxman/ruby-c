int sub_8020E30()
{
  _BYTE *v0; // r5@1
  _BYTE *v1; // r4@1
  unsigned int v2; // r6@1
  int v3; // r12@1
  unsigned int v4; // r1@1
  int v5; // r0@3
  int v7; // [sp+10h] [bp-4h]@0

  v0 = (_BYTE *)(*(_BYTE *)(v2024C10 + 1)
               + (*(_BYTE *)(v2024C10 + 2) << 8)
               + (*(_BYTE *)(v2024C10 + 3) << 16)
               + (*(_BYTE *)(v2024C10 + 4) << 24));
  v1 = (_BYTE *)(*(_BYTE *)(v2024C10 + 5)
               + (*(_BYTE *)(v2024C10 + 6) << 8)
               + (*(_BYTE *)(v2024C10 + 7) << 16)
               + (*(_BYTE *)(v2024C10 + 8) << 24));
  v2 = *(_BYTE *)(v2024C10 + 9);
  v3 = *(_BYTE *)(v2024C10 + 10)
     + (*(_BYTE *)(v2024C10 + 11) << 8)
     + (*(_BYTE *)(v2024C10 + 12) << 16)
     + (*(_BYTE *)(v2024C10 + 13) << 24);
  v4 = 0;
  if ( v2 > 0 )
  {
    if ( *v0 == *v1 )
    {
      while ( 1 )
      {
        ++v0;
        ++v1;
        v4 = (v4 + 1) & 0xFF;
        if ( v4 >= v2 )
          break;
        if ( *v0 != *v1 )
        {
          v5 = v2024C10;
          goto _08020EA4;
        }
      }
    }
    else
    {
      v5 = v2024C10;
_08020EA4:
      v2024C10 = v5 + 14;
    }
  }
  if ( v4 == v2 )
    v2024C10 = v3;
  return v7;
}
