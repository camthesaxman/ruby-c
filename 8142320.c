int __fastcall sub_8142320(unsigned __int8 a1)
{
  int v1; // r7@1
  int *v2; // r1@1
  int v3; // r6@1
  _WORD *v4; // r1@2
  __int16 v5; // r9@4
  __int16 v6; // r8@4
  int v7; // ST00_4@4
  int v8; // ST04_4@4
  int v9; // r0@4
  char *v10; // r2@4
  int v12; // [sp+20h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 5);
  if ( (signed int)*((_WORD *)v2 + 6) <= 3 )
    v4 = &gUnknown_0840B564;
  else
    v4 = &gUnknown_0840B534;
  v5 = v4[4 * v3 + 2];
  v6 = v4[4 * v3 + 3];
  v7 = *(_DWORD *)(20 * v3 + 0x201C000);
  v8 = *(_DWORD *)(20 * v3 + 0x201C004);
  v9 = (unsigned __int8)sub_81436BC(*(_WORD *)(20 * v3 + 0x201C008) & 0x1FF, v4[4 * v3], v4[4 * v3 + 1], v3);
  v10 = &gSprites[68 * v9];
  *((_WORD *)v10 + 24) = v5;
  *((_WORD *)v10 + 25) = v6;
  *((_WORD *)v10 + 23) = 0;
  dword_2020020[17 * v9] = (int)sub_81435DC;
  *((_WORD *)&byte_3004B28[40 * v1] + v3 + 5) = v9;
  MenuZeroFillWindowRect(0, 0xEu, 0x1Du, 0x13u);
  dword_3004B20[10 * v1] = (int)sub_8142404;
  return v12;
}
