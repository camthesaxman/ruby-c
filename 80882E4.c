int __fastcall sub_80882E4(int a1)
{
  int v1; // r2@1
  int v2; // r1@1
  int v3; // r2@1
  unsigned int v4; // r4@1
  int v6; // [sp+4h] [bp-4h]@0

  *(_WORD *)(a1 + 18) -= 16;
  v1 = *(_WORD *)(a1 + 12);
  v2 = ((v1 << 16 >> 24) + 6) << 16;
  v3 = ((unsigned __int8)v1 - 6) & 0xFFFF;
  v4 = (unsigned int)v2 >> 16;
  if ( v2 >> 16 > 80 )
    LOWORD(v4) = 80;
  if ( (signed __int16)v3 <= 80 )
    LOWORD(v3) = 81;
  v3 = (signed __int16)v3;
  *(_WORD *)(a1 + 12) = ((_WORD)v4 << 8) | v3;
  if ( (signed __int16)v4 == 80 && v3 == 81 )
    ++*(_WORD *)(a1 + 8);
  return v6;
}
