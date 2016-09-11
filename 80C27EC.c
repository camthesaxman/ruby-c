int __fastcall sub_80C27EC(unsigned __int8 a1)
{
  int *v1; // r4@1
  signed int v2; // r0@1
  __int16 v3; // r1@8
  int v5; // [sp+8h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = *((_WORD *)v1 + 4);
  if ( v2 == 1 )
  {
    if ( !v2018014 )
      *((_WORD *)v1 + 4) = v2018014;
  }
  else if ( v2 > 1 )
  {
    if ( v2 == 2 )
    {
      sub_80C3520(1088);
      *((_WORD *)v1 + 4) = 0;
      *v1 = (int)sub_80C2878;
    }
  }
  else if ( !*((_WORD *)v1 + 4) && !v201800A )
  {
    v3 = *((_WORD *)v1 + 6);
    *((_WORD *)v1 + 6) = v3 + 1;
    sub_80C40D4(1, (unsigned __int8)v3);
    if ( v2018014 )
      ++*((_WORD *)v1 + 4);
    else
      *((_WORD *)v1 + 4) = 2;
  }
  return v5;
}
