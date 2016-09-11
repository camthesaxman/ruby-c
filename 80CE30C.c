int __fastcall sub_80CE30C(int a1)
{
  int v1; // r4@1
  signed __int16 v2; // r0@2
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( sub_8076BE0() << 24 )
  {
    *(_WORD *)(v1 + 32) = 48;
    v2 = 40;
  }
  else
  {
    *(_WORD *)(v1 + 32) = word_3004B00[0];
    v2 = word_3004B02;
  }
  *(_WORD *)(v1 + 34) = v2;
  *(_BYTE *)(v1 + 1) &= 0x3Fu;
  *(_BYTE *)(v1 + 3) |= 0xC0u;
  *(_WORD *)(v1 + 46) = 0;
  *(_DWORD *)(v1 + 28) = sub_80CE354;
  return v4;
}
