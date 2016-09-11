signed int FieldObjectInteractionWaterBerryTree()
{
  unsigned __int8 v0; // r0@1
  int v1; // r0@1
  int v2; // r2@1
  int v3; // r0@1
  char v4; // r0@8
  char v5; // r1@8

  v0 = FieldObjectGetBerryTreeId(byte_3004AE0);
  v1 = GetBerryTreeInfo(v0);
  v2 = v1;
  v3 = *(_BYTE *)(v1 + 1) & 0x7F;
  if ( v3 == 2 )
  {
    v4 = *(_BYTE *)(v2 + 5);
    v5 = 32;
    goto _080B4A24;
  }
  if ( v3 > 2 )
  {
    if ( v3 == 3 )
    {
      v4 = *(_BYTE *)(v2 + 5);
      v5 = 64;
    }
    else
    {
      if ( v3 != 4 )
        return 0;
      v4 = *(_BYTE *)(v2 + 5);
      v5 = -128;
    }
_080B4A24:
    *(_BYTE *)(v2 + 5) = v4 | v5;
    return 1;
  }
  if ( v3 == 1 )
  {
    v4 = *(_BYTE *)(v2 + 5);
    v5 = 16;
    goto _080B4A24;
  }
  return 0;
}
