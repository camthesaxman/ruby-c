unsigned int __fastcall unref_sub_805C43C(int a1, __int16 a2, __int16 a3, char a4)
{
  __int16 v4; // r8@1
  __int16 v5; // r6@1
  char v6; // r7@1
  unsigned int v7; // r5@1
  char *v8; // r4@2

  v4 = a2;
  v5 = a3;
  v6 = a4;
  v7 = 0;
  while ( 1 )
  {
    v8 = &gSprites[68 * v7];
    if ( !((unsigned __int8)v8[62] << 31) )
      break;
    v7 = (v7 + 1) & 0xFF;
    if ( v7 > 0x3F )
      return v7;
  }
  memcpy(&gSprites[68 * v7], a1, 68);
  *((_WORD *)v8 + 16) = v4;
  *((_WORD *)v8 + 17) = v5;
  v8[67] = v6;
  return v7;
}
