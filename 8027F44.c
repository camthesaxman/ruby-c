int sub_8027F44()
{
  int v0; // r0@3
  char v1; // r2@23
  signed int v2; // r8@9
  int v3; // r4@11
  char v4; // r5@13
  int v5; // r1@13
  unsigned int v6; // r8@16
  char *v7; // r5@16
  signed int v8; // r1@17
  int v9; // r1@21
  int v11; // [sp+1Ch] [bp-4h]@0

  if ( *(_WORD *)(2 * v2024C07 + 0x2024C3C)
    && *(_WORD *)(2 * v2024C07 + 0x2024C3C) != 0xFFFF
    && ((v0 = sub_8028350(*(_WORD *)(2 * v2024C07 + 0x2024C3C)) << 24) == 0
     || (v0 = *(_DWORD *)(16 * v2024C07 + 0x2024D2C)) != 0
     || (v0 = *(_DWORD *)(16 * v2024C07 + 0x2024D30)) != 0) )
  {
    v2 = 0;
    do
    {
      do
        v0 = Random(v0);
      while ( (v0 & 0x7Fu) > 0x70 );
      v3 = 3 * (v0 & 0x7F);
      if ( (unsigned __int8)gTypeEffectiveness[v3] == *(_WORD *)(2 * v2024C07 + 0x2024C44)
        && (unsigned __int8)gTypeEffectiveness[v3 + 2] <= 5u )
      {
        v4 = gTypeEffectiveness[v3 + 1];
        v5 = (unsigned __int8)gTypeEffectiveness[v3 + 1];
        if ( *(_BYTE *)(88 * v2024C07 + 0x2024AA1) != v5 && *(_BYTE *)(88 * v2024C07 + 0x2024AA2) != v5 )
        {
          *(_BYTE *)(88 * v2024C07 + 0x2024AA1) = v4;
          *(_BYTE *)(88 * v2024C07 + 0x2024AA2) = v4;
          byte_30041C0[0] = -3;
          byte_30041C1 = 3;
          LOBYTE(word_30041C2) = v4;
          HIBYTE(word_30041C2) = -1;
_08028012:
          v2024C10 += 5;
          return v11;
        }
      }
      ++v2;
      v0 = 999;
    }
    while ( v2 <= 999 );
    v6 = 0;
    v7 = gTypeEffectiveness;
    do
    {
      v8 = (unsigned __int8)*v7;
      if ( (v8 > 255 || v8 < 254) && v8 == *(_WORD *)(2 * v2024C07 + 0x2024C44) && (unsigned __int8)v7[2] <= 5u )
      {
        v9 = (unsigned __int8)gTypeEffectiveness[v3 + 1];
        if ( *(_BYTE *)(88 * v2024C07 + 0x2024AA1) != v9 && *(_BYTE *)(88 * v2024C07 + 0x2024AA2) != v9 )
        {
          v1 = gTypeEffectiveness[v6 + 1];
          *(_BYTE *)(88 * v2024C07 + 0x2024AA1) = v1;
          *(_BYTE *)(88 * v2024C07 + 0x2024AA2) = v1;
          byte_30041C0[0] = -3;
          byte_30041C1 = 3;
          LOBYTE(word_30041C2) = v1;
          HIBYTE(word_30041C2) = -1;
          goto _08028012;
        }
      }
      v7 += 3;
      v6 += 3;
    }
    while ( v6 <= 0x14F );
    v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  }
  else
  {
    v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  }
  return v11;
}
