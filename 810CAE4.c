int __fastcall sub_810CAE4(unsigned __int8 a1, int a2)
{
  int v2; // r8@1
  int v3; // r6@1
  int v4; // r4@1
  int v5; // r7@1
  unsigned int v6; // r5@2
  __int16 v7; // r0@2

  v2 = a2;
  LOWORD(v3) = 0;
  v4 = 0;
  v5 = 5 * a1;
  do
  {
    v6 = (v4 + 1) & 0xFF;
    v7 = sub_810CA9C(v2, v6);
    if ( v7 > 0 )
      v3 = ((signed __int16)v3 + v7 * *(&gUnknown_083F7E28[v5] + v4)) & 0xFFFF;
    v4 = (v4 + 1) & 0xFF;
  }
  while ( v6 <= 4 );
  return (signed __int16)v3;
}
