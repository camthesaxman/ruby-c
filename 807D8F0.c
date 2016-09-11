int __fastcall sub_807D8F0(_BYTE *a1, _BYTE *a2)
{
  _BYTE *v2; // r7@1
  _BYTE *v3; // r8@1
  unsigned int v4; // r4@1
  int v5; // r4@2
  unsigned int v6; // r2@3
  unsigned int v7; // r2@6
  char v8; // r0@8
  int v10; // [sp+14h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = *a1;
  if ( v4 <= 6 )
  {
    v5 = (v4 - 1) & 0xFF;
    LZ77UnCompWram(*(&gUnknown_08396FA8 + v5), (v5 << 13) + 0x2000000);
    if ( v5 )
    {
      v7 = 0;
      do
      {
        *(_WORD *)(2 * v7 + (v5 << 13) + 0x2000000) += *(_WORD *)(2 * v7 + ((v5 - 1) << 13) + 0x2000000);
        v7 = (v7 + 1) & 0xFFFF;
      }
      while ( v7 <= 0xFFF );
    }
    else
    {
      v2000000 = 1057;
      v6 = 1;
      do
      {
        *(_WORD *)(2 * v6 + 0x2000000) += *(_WORD *)(2 * (v6 - 1) + 0x2000000);
        v6 = (v6 + 1) & 0xFFFF;
      }
      while ( v6 <= 0xFFF );
    }
    v8 = *v2 + 1;
    *v2 = v8;
    if ( v8 == 7 )
    {
      *v2 = 32;
      *v3 = 32;
    }
  }
  return v10;
}
