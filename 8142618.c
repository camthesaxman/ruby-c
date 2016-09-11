int __fastcall sub_8142618(unsigned __int8 a1)
{
  int v1; // r6@1
  int v2; // r5@1
  __int16 v3; // r2@2
  unsigned int v4; // r3@5
  int v5; // r9@5
  int v6; // r0@6
  int *v7; // r0@9
  int v9; // [sp+20h] [bp-4h]@0

  v1 = a1;
  v2 = 10 * a1;
  if ( HIWORD(dword_3004B20[v2 + 3]) )
  {
    v3 = HIWORD(dword_3004B20[v2 + 3]) - 1;
    HIWORD(dword_3004B20[v2 + 3]) = v3;
    if ( !(v3 & 3) && v3 > 110 )
      sub_81438C4();
  }
  else
  {
    v4 = 0;
    v5 = 4 * a1;
    do
    {
      v6 = *(_WORD *)(&byte_3004B28[2 * (v4 + 5)] + v2 * 4);
      if ( v6 != 255 )
        gSprites[68 * v6 + 5] = gSprites[68 * v6 + 5] & 0xF3 | 4;
      v4 = (v4 + 1) & 0xFFFF;
    }
    while ( v4 <= 5 );
    BeginNormalPaletteFade(v203931C, 0, 0xCu, 0xCu, 29535);
    MenuZeroFillWindowRect(0, 0xEu, 0x1Du, 0x13u);
    v7 = &dword_3004B20[2 * (v5 + v1)];
    *((_WORD *)v7 + 7) = 7;
    *v7 = (int)sub_81426F8;
  }
  return v9;
}
