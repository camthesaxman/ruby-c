int __fastcall sub_80A3CA8(unsigned __int8 a1)
{
  char *v1; // r3@1
  unsigned int v2; // r4@1
  int v3; // r2@1
  int v5; // [sp+10h] [bp-4h]@0

  v1 = &byte_3005D10[4 * a1];
  v1[2] = 0;
  v2 = 0;
  v3 = 2 * a1;
  if ( (unsigned int)LOBYTE(gUnknown_083C1618[2 * a1 + 1]) > 0 )
  {
    do
    {
      if ( *(_WORD *)(4 * v2 + gUnknown_083C1618[v3] + 2) )
        ++v1[2];
      v2 = (v2 + 1) & 0xFFFF;
    }
    while ( v2 < LOBYTE(gUnknown_083C1618[v3 + 1]) );
  }
  sub_80A3BD0(gUnknown_083C1618[2 * a1], gUnknown_083C1618[2 * a1 + 1]);
  return v5;
}
