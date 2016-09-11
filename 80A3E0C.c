int sub_80A3E0C()
{
  int v0; // r1@1
  char *v1; // r2@2
  int v2; // r1@2
  int v4; // [sp+0h] [bp-4h]@0

  v0 = 4 * ((unsigned __int8)byte_3005D10[4 * v2038559 + 1] + (unsigned __int8)byte_3005D10[4 * v2038559])
     + dword_3005D24;
  if ( !*(_WORD *)(v0 + 2) )
  {
    *(_WORD *)v0 = 0;
    v1 = &byte_3005D10[4 * v2038559];
    v2 = (unsigned __int8)v1[1];
    if ( v2 + 7 == (unsigned __int8)v1[2] && v1[1] )
      v1[1] = v2 - 1;
    sub_80A3CA8(v2038559);
  }
  sub_80A3D24(v2038559);
  return v4;
}
