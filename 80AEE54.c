signed int __fastcall sub_80AEE54(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // r7@1
  int v3; // r5@1
  int v5; // r9@3
  int v6; // r8@4
  int v7; // r4@4
  int v8; // r6@4
  int v9; // r5@6
  unsigned __int16 v10; // r0@8
  int i; // r4@9
  int v12; // [sp+0h] [bp-24h]@1

  v2 = a1;
  v12 = a2;
  v3 = 8 * a1;
  if ( !(*(_BYTE *)(28 * a1 + 0x2019270) & 0x30) )
    return 0;
  v5 = (5 * *(_BYTE *)(a1 + 0x2038696) + 2) & 0xFF;
  if ( (*(_BYTE *)(28 * a1 + 0x2019270) & 0x30) == 16 )
  {
    v6 = sub_80AEE4C() & 0xFFFF;
    v7 = 0;
    v8 = v3;
    while ( 1 )
    {
      v9 = 4 * (v8 - v2) + 33657440;
      if ( *(_BYTE *)(4 * (v8 - v2) + 0x201926D) / 10 <= v7 )
        break;
      *(_WORD *)(((v5 + v7++) << 6) + 0x600C026) = v6;
    }
    if ( !v12 )
      return 1;
    v10 = 91;
  }
  else
  {
    for ( i = 3; ; --i )
    {
      v9 = 28 * a1 + 33657440;
      if ( *(_BYTE *)(28 * a1 + 0x201926D) / 10 >= i )
        break;
      *(_WORD *)(((v5 + i) << 6) + 0x600BFE6) = 0;
    }
    if ( !a2 )
      return 1;
    v10 = 38;
  }
  audio_play(v10);
  *(_BYTE *)(v9 + 16) &= 0xCFu;
  return 1;
}
