int __fastcall sub_8103D50(unsigned __int8 a1)
{
  int v1; // r1@1
  unsigned int v2; // r4@1
  unsigned int v3; // r0@1
  unsigned int v4; // r6@2
  int v5; // r5@2
  int v7; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  v3 = gUnknown_083EDD3B[a1];
  if ( v3 > 0 )
  {
    v4 = v3;
    v5 = 2 * v1;
    do
    {
      sub_8103D00(*(&gUnknown_083EDD35[v2] + v5));
      v2 = (v2 + 1) & 0xFF;
    }
    while ( v2 < v4 );
  }
  return v7;
}
