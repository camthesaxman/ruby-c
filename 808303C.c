int __fastcall sub_808303C(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v2; // r8@1
  signed int v3; // r5@1
  int v5; // [sp+18h] [bp-4h]@0

  v1 = a1;
  v2 = 10 * a1;
  v3 = (unsigned __int8)GetLinkPlayerCount_2();
  if ( sub_8082E28(v1) != 1 && sub_8082EB8(v1) != 1 && sub_8082DF4(v1) != 1 )
  {
    sub_8082D60(v1, v3);
    if ( word_300179E & 1 )
    {
      if ( v3 >= *(_WORD *)&byte_3004B28[v2 * 4 + 2] )
      {
        sub_80081C8(v3);
        sub_8082D4C();
        ConvertIntToDecimalStringN(&gStringVar1, v3, 0, 1);
        box_related_two__3((int)gUnknown_081A4975);
        dword_3004B20[v2] = (int)sub_80830E4;
      }
    }
  }
  return v5;
}
