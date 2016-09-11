_BOOL4 __fastcall sub_814737C(int a1)
{
  int v1; // r5@1
  unsigned int v2; // r6@1

  v1 = a1;
  v2 = 0;
  do
  {
    if ( v1 & (1 << v2) && !(sub_8147324(v2) << 24) )
      v1 &= ~(1 << v2);
    v2 = (v2 + 1) & 0xFFFF;
  }
  while ( v2 <= 0x1F );
  return v1 != 0;
}
