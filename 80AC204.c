int __fastcall sub_80AC204(unsigned __int8 a1)
{
  int *v1; // r4@1
  __int16 v2; // r0@1
  __int16 v3; // r0@2
  int v5; // [sp+4h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = *((_WORD *)v1 + 4) + 1;
  *((_WORD *)v1 + 4) = v2;
  if ( v2 > 2 )
  {
    *((_WORD *)v1 + 4) = 0;
    v3 = *((_WORD *)v1 + 5) + 1;
    *((_WORD *)v1 + 5) = v3;
    if ( v3 == 2 )
    {
      sub_80B1BDC();
      sub_80B25E4(1);
      *v1 = (int)sub_80AC250;
    }
  }
  return v5;
}
