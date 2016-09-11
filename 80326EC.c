int __fastcall sub_80326EC(unsigned __int8 a1)
{
  int v1; // r8@1
  signed int v2; // r5@1
  int v3; // r6@2
  _BYTE *v4; // r3@4
  char *v5; // r0@4
  int v7; // [sp+1Ch] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  if ( (signed int)v2024A68 > 0 )
  {
    v3 = 0;
    do
    {
      if ( sub_8078874((unsigned __int8)v2) << 24 )
      {
        v4 = (_BYTE *)(v2 + 33704928);
        v5 = &gSprites[68 * *(_BYTE *)(v2 + 33704928)];
        v5[1] = v5[1] & 0xFC | v1 & 3;
        if ( v1 )
        {
          gSprites[68 * *v4 + 3] = gSprites[68 * *v4 + 3] & 0xC1 | 2 * (*(_BYTE *)(v3 + 33650710) & 0x1F);
        }
        else
        {
          *(_BYTE *)(v3 + 33650710) = (unsigned int)(unsigned __int8)gSprites[68 * *(_BYTE *)(v2 + 33704928) + 3] << 26 >> 27;
          gSprites[68 * *v4 + 3] &= 0xC1u;
        }
      }
      v3 += 12;
      ++v2;
    }
    while ( v2 < v2024A68 );
  }
  return v7;
}
