int __fastcall sub_80783D0(int a1)
{
  int v1; // r4@1
  int v2; // r0@2
  int v3; // r1@2
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( (signed int)*(_WORD *)(a1 + 46) <= 0 )
  {
    sub_8078104(a1);
  }
  else
  {
    --*(_WORD *)(a1 + 46);
    v2 = *(_WORD *)(a1 + 48) + *(_WORD *)(a1 + 52);
    *(_WORD *)(v1 + 52) = v2;
    v3 = *(_WORD *)(v1 + 50) + *(_WORD *)(v1 + 54);
    *(_WORD *)(v1 + 54) = v3;
    *(_WORD *)(v1 + 36) = v2 << 16 >> 24;
    *(_WORD *)(v1 + 38) = v3 << 16 >> 24;
  }
  sub_809D638(v1);
  return v5;
}
