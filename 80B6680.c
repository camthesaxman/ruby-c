int __fastcall sub_80B6680(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@1
  __int16 v3; // r0@1
  __int16 v4; // r1@2
  int v6; // [sp+0h] [bp-14h]@1
  int v7; // [sp+4h] [bp-10h]@1

  v1 = a1;
  v6 = 33554438;
  v7 = 33554436;
  *(_WORD *)(a1 + 10) += 4;
  v2 = sine(*(_WORD *)(a1 + 10), 40);
  *(_WORD *)*(&v6 + v200000C) = v2;
  v3 = sine((*(_WORD *)(v1 + 10) + 128) & 0xFF, 40);
  *(_WORD *)*(&v6 + v200000D) = v3;
  if ( (signed int)*(_WORD *)(v1 + 10) > 63 )
  {
    v4 = v2000008;
    v2000008 = v200000A;
    v200000A = v4;
    ++*(_WORD *)(v1 + 8);
  }
  return 0;
}
