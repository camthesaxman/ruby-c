int __fastcall sub_80CE3B0(int a1)
{
  int v1; // r1@1
  __int16 v2; // r0@1
  __int16 v3; // r2@2
  int v5; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 48) + 1;
  *(_WORD *)(v1 + 48) = v2;
  if ( v2 > 1 )
  {
    *(_WORD *)(v1 + 48) = 0;
    v3 = *(_WORD *)(v1 + 50);
    if ( (signed int)*(_WORD *)(v1 + 50) <= 119 )
    {
      ++*(_WORD *)(v1 + 34);
      *(_WORD *)(v1 + 50) = v3 + 1;
    }
  }
  if ( *(_WORD *)(v1 + 46) )
    move_anim_8072740(v1);
  return v5;
}
