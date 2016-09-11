int __fastcall sub_8064AA0(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r4@1
  signed int v3; // r0@1
  int v4; // r0@13
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( v3 != 1 )
  {
    if ( v3 <= 1 )
    {
      if ( *((_WORD *)v2 + 4) )
        return v6;
      LoadMessageBoxTiles(33745020);
      goto _08064AE2;
    }
    if ( v3 != 2 )
      return v6;
    if ( byte_30005A8 == 2 )
    {
      v4 = sub_80035AC();
    }
    else
    {
      if ( byte_30005A8 != 3 )
        goto _08064B1C;
      v4 = sub_8003778(33745020);
    }
    if ( !(v4 << 24) )
      return v6;
_08064B1C:
    byte_30005A8 = 0;
    DestroyTask(v1);
    return v6;
  }
  DrawStandardMessageBox(33745020);
_08064AE2:
  ++*((_WORD *)v2 + 4);
  return v6;
}
