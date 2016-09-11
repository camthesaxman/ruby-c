int __fastcall sub_804B0E0(int a1)
{
  __int16 v1; // r1@1
  int v3; // [sp+0h] [bp-4h]@0

  v1 = *(_WORD *)(a1 + 46) + 1;
  *(_WORD *)(a1 + 46) = v1;
  --*(_WORD *)(a1 + 38);
  if ( v1 == 10 )
    DestroySprite(a1);
  return v3;
}
