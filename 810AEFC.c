int __fastcall sub_810AEFC(unsigned __int8 a1, char a2)
{
  int v2; // r3@1
  int *v3; // r1@4
  signed __int16 v4; // r0@7
  int *v5; // r1@10

  v2 = a1;
  if ( a2 == 1 )
  {
    v3 = &dword_3004B20[10 * a1];
    if ( (signed int)*((_WORD *)v3 + 7) <= 0 )
    {
      *((_WORD *)v3 + 7) = 59;
      if ( (signed int)*((_WORD *)v3 + 6) <= 0 )
        v4 = 23;
      else
        v4 = *((_WORD *)v3 + 6) - 1;
      *((_WORD *)v3 + 6) = v4;
      sub_810AF98(v2, 1);
    }
    else
    {
      --*((_WORD *)v3 + 7);
    }
  }
  else if ( a2 == 2 )
  {
    v5 = &dword_3004B20[10 * a1];
    if ( (signed int)*((_WORD *)v5 + 7) > 58 )
    {
      *((_WORD *)v5 + 7) = 0;
      if ( (signed int)*((_WORD *)v5 + 6) > 22 )
        *((_WORD *)v5 + 6) = 0;
      else
        ++*((_WORD *)v5 + 6);
      sub_810AF98(a1, 2);
    }
    else
    {
      ++*((_WORD *)v5 + 7);
    }
  }
  return 0;
}
