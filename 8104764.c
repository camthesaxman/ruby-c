int __fastcall sub_8104764(int a1)
{
  int v1; // r4@1
  int v2; // r1@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 16);
  if ( !*(_WORD *)(a1 + 16) || (*(_WORD *)(a1 + 16) = v2 - 1, !((v2 - 1) << 16)) )
  {
    if ( !(sub_81040C8() << 24) )
      ++*(_WORD *)(v1 + 8);
  }
  return v4;
}
