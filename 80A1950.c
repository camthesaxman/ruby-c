int sub_80A1950()
{
  unsigned int v0; // r5@1
  int v2; // [sp+8h] [bp-4h]@0

  v0 = 0;
  do
  {
    if ( *(_BYTE *)(v0 + 33660928) == 255 )
      *(_BYTE *)(v0 + 33660928) = CreateSprite((int)&gSpriteTemplate_83C11C0, 0, 0);
    sub_80A1918(v0, 1);
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 4 );
  return v2;
}
