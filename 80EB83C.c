int sub_80EB83C()
{
  unsigned int v0; // r1@1
  unsigned __int16 v1; // r0@1
  unsigned __int16 v2; // r0@3
  int v4; // [sp+0h] [bp-4h]@0

  v0 = Random() & 1;
  v1 = 12;
  if ( v0 )
    v1 = 13;
  v2 = sub_80EB784(v1);
  sub_80EB3FC(&gStringVar2, v2);
  return v4;
}
