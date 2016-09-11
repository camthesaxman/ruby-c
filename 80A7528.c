int __fastcall sub_80A7528(char a1)
{
  int v1; // r0@1
  char v2; // r0@10
  int v4; // [sp+4h] [bp-4h]@0

  v203853D = 0;
  v203853E = a1;
  v1 = sub_80A78F4();
  if ( v1 == 1 )
  {
    v2 = 3;
_080A7564:
    v203853C = v2;
    return v4;
  }
  if ( v1 > 1 )
  {
    if ( v1 != 2 )
      return v4;
    v2 = 1;
    goto _080A7564;
  }
  if ( !v1 )
  {
    v203853C = 2;
    do
      sub_80A7420();
    while ( v203853C );
  }
  return v4;
}
