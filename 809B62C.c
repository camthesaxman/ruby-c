signed int __fastcall sub_809B62C(int a1, int a2, _BYTE *a3)
{
  unsigned int v3; // r0@1
  unsigned int v4; // r6@1
  signed int v5; // r0@1
  unsigned int v6; // r4@1
  signed int result; // r0@2
  unsigned int v8; // r4@4

  v3 = a1 << 24;
  v4 = v3 >> 24;
  v5 = sub_8095B24(BYTE3(v3), a2, a3) << 16;
  v6 = (unsigned int)v5 >> 16;
  if ( v5 >> 16 == -1 )
  {
    result = 0;
  }
  else
  {
    if ( v20384E6 )
    {
      v8 = v6 << 24;
      diegohint2(v4, BYTE3(v8));
      sub_8099480();
      v20384E6 = 0;
    }
    else
    {
      sub_809B44C(0xEu, v20384E5);
      v8 = v6 << 24;
      diegohint2(v4, BYTE3(v8));
      sub_8099520(v20384E5);
    }
    if ( v4 == (unsigned __int8)get_preferred_box() )
      sub_8098D20(BYTE3(v8));
    StartSpriteAnim(v20011C0, 1);
    result = 1;
  }
  return result;
}
