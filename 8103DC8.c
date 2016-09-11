int sub_8103DC8()
{
  unsigned int v0; // r4@1
  int v1; // r0@2
  int v3; // [sp+Ch] [bp-4h]@0

  v0 = 0;
  do
  {
    v1 = (unsigned __int8)CreateInvisibleSprite((int)sub_8103EE4);
    *(_WORD *)&gSprites[68 * v1 + 46] = v0;
    *(_BYTE *)(v0 + 33554500) = v1;
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 4 );
  return v3;
}
