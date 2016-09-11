int __fastcall sub_809EB40(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r4@1
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( !*((_WORD *)v2 + 4) )
  {
    v2018079 = *((_WORD *)v2 + 4);
    if ( v201807C )
    {
      sub_80A1488(10, 0);
      sub_80A1654(10, v2018079);
    }
    sub_80A16CC(0);
    sub_80A029C(33652752);
    goto _0809EBA4;
  }
  if ( *((_WORD *)v2 + 4) != 5 )
  {
_0809EBA4:
    ++LOWORD(dword_3004B20[10 * v1 + 2]);
    return v4;
  }
  sub_80A1A30(9);
  *((_WORD *)v2 + 4) = 0;
  *v2 = (int)sub_809E260;
  return v4;
}
