int __fastcall sub_8043EB4(char a1)
{
  signed int v1; // r6@1
  char v2; // r5@2
  char *v3; // r1@3
  int v4; // r4@3
  int v5; // r3@3
  int v7; // [sp+18h] [bp-4h]@0

  v1 = 0;
  if ( (signed int)v2024A68 > 0 )
  {
    v2 = 4 * (a1 & 3);
    do
    {
      v3 = &gSprites[68 * (unsigned __int8)byte_3004340[v1]];
      v4 = (unsigned __int8)v3[6];
      v5 = *((_WORD *)v3 + 28) & 0xFF;
      v3[5] = v3[5] & 0xF3 | v2;
      gSprites[68 * v4 + 5] = gSprites[68 * v4 + 5] & 0xF3 | v2;
      gSprites[68 * v5 + 5] = gSprites[68 * v5 + 5] & 0xF3 | v2;
      ++v1;
    }
    while ( v1 < v2024A68 );
  }
  return v7;
}
