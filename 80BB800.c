int sub_80BB800()
{
  unsigned int v0; // r5@1
  signed int v1; // r0@1
  signed __int16 *v2; // r4@1
  char *v3; // r6@1
  __int16 *v4; // r2@2
  int v5; // r0@3
  int v6; // r1@3
  __int16 v7; // r3@3
  unsigned int v8; // r5@5
  __int16 *v9; // r3@6
  signed __int16 v11; // [sp+0h] [bp-1Ch]@1
  int v12; // [sp+18h] [bp-4h]@10

  GetXYCoordsOneStepInFrontOfPlayer(&v11, &v11 + 1);
  v0 = 0;
  v1 = MapGridGetMetatileIdAt(v11, *(&v11 + 1)) << 16;
  v2 = &v11;
  v3 = (char *)(&v11 + 1);
  do
  {
    v4 = &gUnknown_083D1358[2 * v0];
    if ( (unsigned __int16)*v4 == v1 >> 16 )
    {
      v5 = v11;
      v6 = *(&v11 + 1);
      v7 = v4[1];
      goto _080BB878;
    }
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 6 );
  v8 = 0;
  v2 = &v11;
  v3 = (char *)(&v11 + 1);
  while ( 1 )
  {
    v9 = &gUnknown_083D1358[2 * v8];
    if ( (unsigned __int16)v9[1] == v1 >> 16 )
      break;
    v8 = (v8 + 1) & 0xFFFF;
    if ( v8 > 6 )
      return v12;
  }
  v5 = v11;
  v6 = *(&v11 + 1);
  v7 = *v9;
_080BB878:
  MapGridSetMetatileIdAt(v5, v6, v7 | 0xC00);
  CurrentMapDrawMetatileAt(*v2, *(_WORD *)v3);
  return v12;
}
