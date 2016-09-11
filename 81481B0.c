int __fastcall sub_81481B0(int a1)
{
  int v1; // r2@1
  __int16 v2; // r0@1
  __int16 v3; // r0@1
  int v5; // [sp+0h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 32) -= 4;
  v2 = *(_WORD *)(a1 + 46);
  *(_WORD *)(v1 + 34) += v2;
  v3 = v2 + *(_WORD *)(v1 + 48);
  *(_WORD *)(v1 + 46) = v3;
  if ( v3 == 10 )
    DestroySprite(v1);
  return v5;
}
