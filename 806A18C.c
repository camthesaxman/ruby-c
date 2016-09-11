int __fastcall sub_806A18C(signed __int16 *a1, __int16 a2, __int16 a3)
{
  signed __int16 *v3; // r3@1
  __int16 v4; // r5@1
  __int16 v5; // r4@1
  int v6; // r0@1
  __int16 v7; // r2@2
  int v9; // [sp+8h] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = (unsigned __int16)*a1 - 1;
  *v3 = v6;
  if ( v6 << 16 )
    v7 = gUnknown_08376418[*v3 / 8];
  else
    v7 = 232;
  MapGridSetMetatileIdAt(a2, v5, v7);
  CurrentMapDrawMetatileAt(v4, v5);
  MapGridSetMetatileIdAt(v4, v5, 232);
  return v9;
}
