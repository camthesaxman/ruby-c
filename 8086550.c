int __fastcall sub_8086550(int a1)
{
  int v1; // r1@2
  int v3; // [sp+0h] [bp-4h]@0

  if ( HIWORD(dword_3004B20[10 * *(_WORD *)(a1 + 46) + 9]) )
  {
    v1 = *(_WORD *)(a1 + 48);
    if ( !*(_WORD *)(a1 + 48) || (*(_WORD *)(a1 + 48) = v1 - 1, !((v1 - 1) << 16)) )
    {
      *(_WORD *)(a1 + 48) = 16;
      *(_BYTE *)(a1 + 62) = *(_BYTE *)(a1 + 62) & 0xFB | 4 * (((unsigned int)*(_BYTE *)(a1 + 62) << 29 >> 31) ^ 1);
    }
    ++*(_WORD *)(a1 + 50);
  }
  if ( (signed int)*(_WORD *)(a1 + 50) > 127 )
    FieldEffectFreeGraphicsResources(a1);
  return v3;
}
