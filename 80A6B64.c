int __fastcall sub_80A6B64(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v2; // r5@1
  int v4; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = 10 * a1;
  if ( (unsigned __int8)itemid_is_unique(v203855E) == 2 )
  {
    dword_3004B20[v2] = (int)sub_80A6B00;
    sub_80A7528(9);
  }
  else if ( (unsigned __int8)sub_80A9760(v203855E, *(_WORD *)&byte_3004B28[v2 * 4 + 2]) == 1 )
  {
    sub_80A6A84(v1);
  }
  else
  {
    dword_3004B20[v2] = (int)sub_80A6B00;
    sub_80A7528(8);
  }
  return v4;
}
