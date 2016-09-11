int __fastcall sub_810AB84(unsigned __int8 a1)
{
  int v1; // r6@1
  int *v2; // r5@1
  __int16 v3; // r1@9
  int v5; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v2 + 4) % 6 << 16 )
  {
    *((_WORD *)v2 + 4) = sub_810AEAC(*((_WORD *)v2 + 4), *((_BYTE *)v2 + 16), *((_BYTE *)v2 + 20));
  }
  else
  {
    *((_WORD *)v2 + 4) = 6 * *((_WORD *)v2 + 7);
    *((_WORD *)v2 + 5) = 30 * (*((_WORD *)v2 + 6) % 12) + 5 * (*((_WORD *)v2 + 7) / 10);
    if ( word_300179E & 1 )
    {
      *v2 = (int)sub_810AC60;
    }
    else
    {
      *((_WORD *)v2 + 8) = 0;
      if ( word_300179C & 0x20 )
        *((_WORD *)v2 + 8) = 1;
      if ( word_300179C & 0x10 )
        *((_WORD *)v2 + 8) = 2;
      v3 = *((_WORD *)v2 + 8);
      if ( *((_WORD *)v2 + 8) )
      {
        if ( (signed int)*((_WORD *)v2 + 10) <= 254 )
          ++*((_WORD *)v2 + 10);
        *((_WORD *)v2 + 4) = sub_810AEAC(*((_WORD *)v2 + 4), (unsigned __int8)v3, *((_BYTE *)v2 + 20));
        sub_810AEFC(v1, *((_BYTE *)v2 + 16));
      }
      else
      {
        *((_WORD *)v2 + 10) = 0;
      }
    }
  }
  return v5;
}
