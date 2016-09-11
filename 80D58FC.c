int __fastcall sub_80D58FC(int a1)
{
  int v1; // r4@1
  _WORD *v2; // r1@2
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  sub_80D59B0();
  if ( *(_BYTE *)(v1 + 62) & 4 )
  {
    v2 = &byte_3004B28[40 * *(_WORD *)(v1 + 58)] + 2 * *(_WORD *)(v1 + 60);
    --*v2;
    DestroySprite(v1);
  }
  return v4;
}
