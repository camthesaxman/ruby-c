int __fastcall sub_80D3190(int a1)
{
  int v1; // r2@1
  __int16 v2; // r0@1
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46) + 1;
  *(_WORD *)(v1 + 46) = v2;
  if ( v2 <= 13 )
  {
    ++*(_WORD *)(v1 + 36);
    *(_WORD *)(v1 + 38) += 4;
  }
  if ( *(_BYTE *)(v1 + 63) & 0x10 )
    DestroySprite(v1);
  return v4;
}
