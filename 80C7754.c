signed int sub_80C7754()
{
  signed int result; // r0@2
  char v1; // [sp+4h] [bp-18h]@1
  _BYTE v2[3]; // [sp+5h] [bp-17h]@1
  char v3; // [sp+8h] [bp-14h]@1

  if ( sub_810D9EC(&v1, v2, &v2[1], &v3) << 24 )
  {
    result = 0;
  }
  else
  {
    warp1_set(v1, v2[0], -1, v2[1], v3);
    result = 1;
  }
  return result;
}
