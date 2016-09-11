int __fastcall sub_811637C(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r6@5
  unsigned __int8 v3; // r0@6
  int v4; // r0@6
  int *v5; // r4@8
  int v7; // [sp+10h] [bp-4h]@0

  v1 = a1;
  if ( v201907D )
  {
    if ( v2019003 & 0x20 )
    {
      if ( v2019003 & 0x40 )
        v2019003 &= 0x9Fu;
    }
    else
    {
      v2 = &dword_3004B20[10 * a1];
      if ( !*((_WORD *)v2 + 5) )
      {
        v3 = sub_8116D54(a1, v201907E);
        v4 = (unsigned __int8)sub_8116E5C(v3, *(_BYTE *)((v201901A & 0xF) + 0x201901B));
        *((_WORD *)v2 + 9) = v4;
        if ( v4 == 1 )
          sub_8124CE8(33657016, 4096);
      }
      v5 = &dword_3004B20[10 * v1];
      if ( (signed int)*((_WORD *)v5 + 5) > 60 )
      {
        sub_8117158(*(_BYTE *)((v201901A & 0xF) + 0x201901B));
        sub_8117AA8(0, *((_WORD *)v5 + 16) & 0xFF);
        sub_8117C60(0, (*((_BYTE *)v5 + 20) - 1) & 0xFF);
        *((_WORD *)v5 + 5) = 32;
        *v5 = (int)sub_8116474;
      }
      else
      {
        if ( word_300179E & 1 )
          *((_WORD *)v5 + 5) = 60;
        ++*((_WORD *)v5 + 5);
      }
    }
  }
  return v7;
}
