int sub_80BECE8()
{
  int v0; // r1@1
  signed __int16 v1; // r0@2
  int v2; // r4@3
  _WORD *v3; // r1@3
  _DWORD *v4; // r1@5
  int v6; // [sp+4h] [bp-4h]@0

  v0 = (unsigned __int8)sub_80BECA0();
  if ( v0 == 255 )
  {
    v1 = 0;
  }
  else
  {
    v2 = 4 * v0 + 33707828;
    v3 = (_WORD *)(4 * v0 + 33718770);
    if ( *v3 )
    {
      ConvertIntToDecimalStringN(&gStringVar1, *v3, 0, 1);
      *(_BYTE *)(v2 + 10941) = 0;
      box_related_two__2(gUnknown_083D1434[*(_BYTE *)(v2 + 10940)]);
    }
    else
    {
      *(_BYTE *)(v2 + 10941) = 2;
      if ( byte_300403A > 19 )
        v4 = &gUnknown_083D1454;
      else
        v4 = &gUnknown_083D1444;
      box_related_two__2(v4[*(_BYTE *)(v2 + 10940)]);
    }
    v1 = 1;
  }
  v202E8DC = v1;
  return v6;
}
