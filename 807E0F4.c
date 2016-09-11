int __fastcall sub_807E0F4(int a1)
{
  int v1; // r2@1
  int v2; // r0@1
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = (*(_WORD *)(a1 + 46) + 1) & 1;
  *(_WORD *)(v1 + 46) = v2;
  if ( v2 )
    --*(_WORD *)(v1 + 32);
  return v4;
}
