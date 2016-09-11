int __fastcall sub_8104860(int a1)
{
  int v1; // r4@1
  signed int v2; // r6@1
  __int16 v3; // r0@4
  int v5; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = v200001A << 16;
  if ( v200001A == *(_WORD *)(a1 + 10) )
  {
    ++*(_WORD *)(a1 + 8);
  }
  else if ( !(v200001C % 24 << 16) )
  {
    v3 = *(_WORD *)(a1 + 12) + 1;
    *(_WORD *)(v1 + 12) = v3;
    if ( !(v3 & 7) )
      v200001A = v2 >> 17;
  }
  return v5;
}
