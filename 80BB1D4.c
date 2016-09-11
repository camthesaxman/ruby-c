int sub_80BB1D4()
{
  int v0; // r1@1
  char *v1; // r0@3
  unsigned __int8 v2; // r0@7
  int v4; // [sp+0h] [bp-1Ch]@1
  char v5; // [sp+8h] [bp-14h]@1
  int v6; // [sp+18h] [bp-4h]@7

  memcpy(&v4, (const char *)&gUnknown_083D0404, 5);
  memcpy(&v5, (const char *)&gUnknown_083D0409, 5);
  sub_80BAE78(v20387B4, 7u, 2, 3u);
  v0 = gUnknown_083D03F8[v20387BC];
  if ( v0 == -128 )
  {
    v1 = &v5;
  }
  else
  {
    if ( v0 != 127 )
    {
      sub_80BAE78(gUnknown_083D03F8[v20387BC], 7u, 4, 3u);
      goto _080BB240;
    }
    v1 = (char *)&v4;
  }
  MenuPrint((int)v1, 7, 4u);
_080BB240:
  v2 = mplay_has_finished_maybe();
  sub_80BAE78(v2, 0xCu, 8, 1u);
  return v6;
}
