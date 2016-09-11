int sub_8106404()
{
  _BYTE *v0; // r3@1
  unsigned __int8 v1; // r2@1
  unsigned int v2; // r1@2
  int v4; // [sp+8h] [bp-4h]@0

  v0 = (_BYTE *)33619968;
  v1 = 0;
  do
  {
    v2 = 0;
    ++v1;
    do
    {
      *v0 = *(_BYTE *)(v2 + 149526504);
      v2 = (v2 + 1) & 0xFF;
      ++v0;
    }
    while ( v2 <= 0x1F );
  }
  while ( v1 <= 0x3Fu );
  LoadSpriteSheet((int)&gUnknown_083EDCDC);
  return v4;
}
