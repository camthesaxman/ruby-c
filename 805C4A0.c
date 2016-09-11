signed int __fastcall obj_unfreeze(int a1, __int16 a2, __int16 a3, char a4)
{
  __int16 v4; // r8@1
  __int16 v5; // r6@1
  char v6; // r7@1
  int v7; // r5@1
  __int16 v8; // r1@2
  char *v9; // r4@2

  v4 = a2;
  v5 = a3;
  v6 = a4;
  LOWORD(v7) = 63;
  do
  {
    v8 = v7;
    v9 = &gSprites[68 * (signed __int16)v7];
    if ( !((unsigned __int8)v9[62] << 31) )
    {
      memcpy(&gSprites[68 * (signed __int16)v7], a1, 68);
      *((_WORD *)v9 + 16) = v4;
      *((_WORD *)v9 + 17) = v5;
      v9[67] = v6;
      return (unsigned __int8)v7;
    }
    v7 = ((signed __int16)v7 - 1) & 0xFFFF;
  }
  while ( (signed __int16)(v8 - 1) > -1 );
  return 64;
}
