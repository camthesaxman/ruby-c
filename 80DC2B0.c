int __fastcall sub_80DC2B0(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( sub_8078718(a1) << 24 )
  {
    FreeOamMatrix((unsigned int)*(_BYTE *)(v1 + 3) << 26 >> 27);
    DestroySprite(v1);
  }
  return v3;
}
