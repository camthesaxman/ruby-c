int __fastcall sub_8149FEC(unsigned __int8 a1)
{
  int *v1; // r2@1
  int v2; // r1@3
  int v4; // [sp+4h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v1 + 12) )
  {
    sub_814A208(a1);
  }
  else
  {
    v2 = *((_WORD *)v1 + 10);
    if ( *((_WORD *)v1 + 10) == 128 )
    {
      sub_814A158(a1, v2);
    }
    else
    {
      *((_WORD *)v1 + 10) = v2 + 2;
      *((_WORD *)v1 + 9) ^= 1u;
      *v1 = (int)sub_814A03C;
    }
  }
  return v4;
}
