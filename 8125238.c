int __fastcall save_write_to_flash(unsigned __int16 a1, int a2)
{
  int v2; // r7@1
  int v3; // r5@2
  unsigned int v4; // r4@3

  v2 = a2;
  dword_3005EB0 = 0x2000000;
  if ( a1 == 0xFFFF )
  {
    word_3005EA4 = word_3005E9C;
    dword_3005EA0 = dword_3005EAC;
    ++word_3005E9C;
    word_3005E9C = (unsigned __int16)word_3005E9C % 0xEu;
    ++dword_3005EAC;
    v3 = 1;
    v4 = 0;
    do
    {
      sub_81252D8(v4, v2);
      v4 = (v4 + 1) & 0xFFFF;
    }
    while ( v4 <= 0xD );
    if ( dword_3005EA8 )
    {
      v3 = 255;
      word_3005E9C = word_3005EA4;
      dword_3005EAC = dword_3005EA0;
    }
  }
  else
  {
    v3 = sub_81252D8(a1, a2) & 0xFF;
  }
  return v3;
}
