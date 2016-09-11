int sub_8031F24()
{
  signed int v0; // r4@1
  _BYTE *v1; // r3@2
  int v3; // [sp+14h] [bp-4h]@0

  v0 = 0;
  if ( (signed int)v2024A68 > 0 )
  {
    v1 = (_BYTE *)33650688;
    do
    {
      *v1 = *v1 & 0xFE | ((unsigned int)(unsigned __int8)gSprites[68 * *(_BYTE *)(v0 + 33704928) + 62] << 29 >> 31) & 1;
      v1 += 4;
      ++v0;
    }
    while ( v0 < v2024A68 );
  }
  return v3;
}
