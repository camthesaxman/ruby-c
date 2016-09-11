unsigned int __fastcall sub_810C9B0(int a1)
{
  int v1; // r6@1
  unsigned int v2; // r5@1
  signed int v3; // r1@1
  unsigned int v4; // r4@2
  unsigned int v5; // r0@2

  v1 = a1;
  v2 = sub_810CA9C(a1, 1) & 0xFF;
  v3 = 1;
  do
  {
    v4 = (v3 + 1) & 0xFF;
    v5 = (unsigned __int8)sub_810CA9C(v1, v4);
    if ( v2 < v5 )
      v2 = v5;
    v3 = v4;
  }
  while ( v4 <= 4 );
  return v2;
}
