int __fastcall sub_8133300(int a1)
{
  int v1; // r4@1
  int v2; // r1@1
  signed int v3; // r0@1
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = 10 * *(_WORD *)(a1 + 48) & 0xFF;
  v3 = *(_WORD *)(a1 + 46);
  if ( v3 == 1 )
  {
    *(_WORD *)(v1 + 36) = sine(v2, 3) * *(_WORD *)(v1 + 50);
  }
  else if ( v3 > 1 && v3 == 2 )
  {
    *(_WORD *)(v1 + 38) = sine(v2, 1) * *(_WORD *)(v1 + 50);
  }
  ++*(_WORD *)(v1 + 48);
  return v5;
}
