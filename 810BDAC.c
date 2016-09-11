int __fastcall sub_810BDAC(int a1)
{
  unsigned int v1; // r6@11
  unsigned __int8 v2; // r4@13
  int v3; // r2@18
  unsigned __int8 v4; // r0@19
  int v6; // [sp+14h] [bp-4h]@0

  if ( a1 << 24 )
    sub_810BD64(8197);
  else
    sub_810BD64(4101);
  if ( v2039249 )
    sub_80F979C(0, 0);
  else
    sub_80F979C(0, 1);
  if ( v203924A <= (unsigned int)v203924B || v2039249 + v203924B == v203924A )
    sub_80F979C(1u, 1);
  else
    sub_80F979C(1u, 0);
  v1 = 0;
  do
  {
    if ( v2039248 + v2039249 == v203924A )
    {
      gBG2TilemapBuffer[((v1 % 3 << 6) & 0x3FFF) + 417 + 6 * (v1 / 3 & 0xFF)] = 15;
      gBG2TilemapBuffer[((v1 % 3 << 6) & 0x3FFF) + 417 + 6 * (v1 / 3 & 0xFF) + 32] = 15;
      v2 = v1 + 1;
    }
    else
    {
      v2 = v1 + 1;
      if ( sub_810CA9C(8 * (v2039248 + v2039249) + 33709868, (v1 + 1) & 0xFF) << 16 <= 0 )
      {
        gBG2TilemapBuffer[((v1 % 3 << 6) & 0x3FFF) + 417 + 6 * (v1 / 3 & 0xFF)] = 15;
        gBG2TilemapBuffer[((v1 % 3 << 6) & 0x3FFF) + 417 + 6 * (v1 / 3 & 0xFF) + 32] = 15;
      }
      else
      {
        gBG2TilemapBuffer[((v1 % 3 << 6) & 0x3FFF) + 417 + 6 * (v1 / 3 & 0xFF)] = ((_WORD)v1 << 12) + 23;
        gBG2TilemapBuffer[((v1 % 3 << 6) & 0x3FFF) + 417 + 6 * (v1 / 3 & 0xFF) + 32] = ((_WORD)v1 << 12) + 24;
      }
    }
    v1 = v2;
  }
  while ( v2 <= 4u );
  BasicInitMenuWindow((int)&gWindowConfig_81E6E34);
  v3 = v2039248 + v2039249;
  if ( v3 == v203924A )
  {
    MenuZeroFillWindowRect(0xBu, 0x11u, 0xCu, 0x12u);
  }
  else
  {
    v4 = sub_810C9E8(8 * v3 + 33709868);
    sub_8072C14((int)&gStringVar1, v4, 0x10u, 1u);
    MenuPrint((int)&gStringVar1, 11, 0x11u);
  }
  return v6;
}
