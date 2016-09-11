int sub_80F3C94()
{
  unsigned int v0; // r1@1
  int v2; // [sp+0h] [bp-14h]@1
  int v3; // [sp+4h] [bp-10h]@1
  int v4; // [sp+8h] [bp-Ch]@1
  int v5; // [sp+Ch] [bp-8h]@1
  int v6; // [sp+10h] [bp-4h]@3

  v2 = 138295232;
  v3 = 1508224;
  v4 = 138295200;
  v5 = 15;
  LoadSpriteSheet((int)&v2);
  LoadSpritePalette((int)&v4);
  v0 = 0;
  do
  {
    *(_DWORD *)(4 * v0 + 0x2008800) = 0;
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 9 );
  return v6;
}
