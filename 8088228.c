int __fastcall sub_8088228(int a1)
{
  unsigned int v1; // r6@1
  unsigned int v2; // r2@1
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r2@1
  int v7; // [sp+10h] [bp-4h]@0

  *(_WORD *)(a1 + 18) -= 16;
  v1 = *(_WORD *)(a1 + 10);
  v2 = *(_WORD *)(a1 + 12);
  v3 = ((v2 >> 8) - 2) & 0xFFFF;
  v4 = (unsigned __int8)v2 + 2;
  v5 = ((v1 >> 8) - 16) & 0xFFFF;
  if ( ((v1 >> 8) - 16) & 0x8000 )
    LOWORD(v5) = 0;
  if ( (signed __int16)v3 <= 39 )
    LOWORD(v3) = 40;
  if ( v4 > 120 )
    v4 = 120;
  *(_WORD *)(a1 + 10) = ((_WORD)v5 << 8) | (unsigned __int8)v1;
  v3 = (signed __int16)v3;
  *(_WORD *)(a1 + 12) = ((_WORD)v3 << 8) | v4;
  if ( !(_WORD)v5 && v3 == 40 && v4 == 120 )
  {
    dword_2020020[17 * *(_WORD *)(a1 + 38)] = (int)sub_8088890;
    ++*(_WORD *)(a1 + 8);
  }
  return v7;
}
