int __fastcall sub_8147CC8(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r1@2
  signed int v3; // r3@2
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    v2 = &dword_3004B20[10 * a1];
    v3 = *((_WORD *)v2 + 4);
    if ( v3 == 269 )
    {
      v201FFFC = sub_814817C();
    }
    else if ( v3 > 269 )
    {
      if ( v3 == 281 )
      {
        sub_8148044(v201FFFE);
      }
      else if ( v3 == 297 )
      {
        *v2 = (int)sub_8147E40;
        return v5;
      }
    }
    else if ( *((_WORD *)v2 + 4) )
    {
      if ( v3 == 255 )
        sub_8148108(v201FFFD, *((_BYTE *)v2 + 10));
    }
    else
    {
      byte_3005F3C = 0;
      word_3005F94 = 0;
      sub_81481DC();
    }
    if ( (unsigned __int16)word_3005F94 >= (unsigned int)(unsigned __int16)word_3005F34 )
    {
      if ( (unsigned __int16)word_3005F94 == (unsigned __int16)word_3005F34 )
        LOWORD(dword_3004B20[10 * v1 + 2]) = 254;
    }
    else
    {
      sub_814825C();
    }
    ++word_3005F94;
    ++LOWORD(dword_3004B20[10 * v1 + 2]);
  }
  return v5;
}
