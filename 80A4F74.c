signed int __fastcall sub_80A4F74(unsigned __int8 a1)
{
  signed int v1; // r5@1
  int v2; // r1@1
  char *v3; // r1@2
  char *v4; // r2@11
  char *v5; // r2@14
  int v6; // r3@14
  int *v7; // r4@21
  int v8; // r0@21

  v1 = 0;
  v2 = word_30017A0 & 0xF0;
  if ( v2 == 64 )
  {
    v3 = &byte_3005D10[4 * v2038559];
    if ( *v3 )
    {
      sub_80A4B58(-1, a1);
    }
    else if ( v3[1] )
    {
      sub_80A4B14(-1, a1);
    }
    if ( gLinkOpen == 1 && word_30017A2 == 5 )
      word_30017A2 = 11;
    return 1;
  }
  if ( v2 != 128 )
  {
    v7 = &dword_3004B20[10 * a1];
    v8 = *((_WORD *)v7 + 14);
    if ( *((_WORD *)v7 + 14) || (v8 = (unsigned __int8)sub_80A4F0C(), v8 != 1) )
    {
      sub_80A73C0(v8);
      return v1;
    }
    sub_80A73F0();
    *v7 = (int)sub_80A4F68;
    return 1;
  }
  if ( byte_3000701 != 5 )
  {
    v4 = &byte_3005D10[4 * v2038559];
    if ( (unsigned __int8)*v4 == (unsigned __int8)v4[3] )
    {
      if ( (unsigned __int8)v4[1] + (unsigned __int8)*v4 != (unsigned __int8)v4[2] )
        sub_80A4B14(1, a1);
      goto _080A5068;
    }
_080A504E:
    sub_80A4B58(1, a1);
    goto _080A5068;
  }
  v5 = &byte_3005D10[4 * v2038559];
  v6 = (unsigned __int8)*v5;
  if ( (unsigned __int8)v5[1] + v6 != (unsigned __int8)v5[2] - 1 )
  {
    if ( v6 == (unsigned __int8)v5[3] )
    {
      sub_80A4B14(1, a1);
      goto _080A5068;
    }
    goto _080A504E;
  }
_080A5068:
  v1 = 1;
  if ( gLinkOpen == 1 && word_30017A2 == 5 )
    word_30017A2 = 11;
  return v1;
}
