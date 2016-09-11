signed int sub_80E9E54()
{
  int v0; // r0@1
  signed int v1; // r3@1

  v0 = (v20011BF + v20011BA) & 0x7F;
  v20011BA = (v20011BF + v20011BA) & 0x7F;
  v1 = 0;
  if ( v0 == v20011BC )
    v1 = 1;
  return v1;
}
