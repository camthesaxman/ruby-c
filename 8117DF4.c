int sub_8117DF4()
{
  int v0; // r0@1
  unsigned int v1; // r4@2
  unsigned __int8 v2; // r6@2
  int v3; // r5@2
  unsigned __int8 v4; // r0@3
  __int16 v6; // [sp+0h] [bp-24h]@1
  int v7; // [sp+4h] [bp-20h]@1
  signed int v8; // [sp+8h] [bp-1Ch]@1
  int v9; // [sp+20h] [bp-4h]@5

  LZ77UnCompWram(138385468, 0x2000000);
  v7 = 0x2000000;
  v8 = 3072;
  LoadSpriteSheet((int)&v7);
  v6 = 15;
  v0 = 0;
  do
  {
    v1 = 0;
    v2 = v0 + 1;
    v3 = 4 * v0;
    do
    {
      v4 = sub_8117890((int)&gSpriteTemplate_83FA0DC + 24 * (v3 + v1), 0x28u, &v6);
      *(_BYTE *)(v3 + v1 + 7 + 33656892) = v4;
      gSprites[68 * v4 + 44] |= 0xC0u;
      v1 = (v1 + 1) & 0xFF;
    }
    while ( v1 <= 3 );
    v0 = v2;
  }
  while ( v2 <= 2u );
  return v9;
}
